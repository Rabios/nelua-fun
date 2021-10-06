# API

## ini

https://github.com/mattiasgustavsson/libs/raw/main/ini.h

### INI_GLOBAL_SECTION

```nelua
global INI_GLOBAL_SECTION: cint
```



### INI_NOT_FOUND

```nelua
global INI_NOT_FOUND: cint
```



### ini_t

```nelua
global ini_t: type = @record {}
```



### ini_create

```nelua
global function ini_create(memctx: pointer): *ini_t
```

Instantiates a new, empty ini structure, which can be manipulated with other API calls, to fill it with data. To save it
out to an ini-file string, use `ini_save`. When no longer needed, it can be destroyed by calling `ini_destroy`.
`memctx` is a pointer to user defined data which will be passed through to the custom INI_MALLOC/INI_FREE calls. It can
be `nilptr` if no user defined data is needed.

### ini_load

```nelua
global function ini_load(data: cstring <const>, memctx: pointer): *ini_t
```

Parse the zero-terminated string `data` containing an ini-file, and create a new ini_t instance containing the data.
The instance can be manipulated with other API calls to enumerate sections/properties and retrieve values. When no
longer needed, it can be destroyed by calling `ini_destroy`. `memctx` is a pointer to user defined data which will be
passed through to the custom INI_MALLOC/INI_FREE calls. It can be `nilptr` if no user defined data is needed.

### ini_save

```nelua
global function ini_save(ini: *ini_t <const>, data: cstring, size: cint): cint
```

Saves an ini structure as a zero-terminated ini-file string, into the specified buffer. Returns the number of bytes
written, including the zero terminator. If `data` is `nilptr`, nothing is written, but `ini_save` still returns the number
of bytes it would have written. If the size of `data`, as specified in the `size` parameter, is smaller than that
required, only part of the ini-file string will be written. `ini_save` still returns the number of bytes it would have
written had the buffer been large enough.

### ini_destroy

```nelua
global function ini_destroy(ini: *ini_t): void
```

Destroy an `ini_t` instance created by calling `ini_load` or `ini_create`, releasing the memory allocated by it. No
further API calls are valid on an `ini_t` instance after calling `ini_destroy` on it.

### ini_section_count

```nelua
global function ini_section_count(ini: *ini_t <const>): cint
```

Returns the number of sections in an ini file. There's at least one section in an ini file (the global section), but there can be many more, each specified in the file by the section name wrapped in square brackets [ ].

### ini_section_name

```nelua
global function ini_section_name(ini: *ini_t <const>, section: cint): cstring
```

Returns the name of the section with the specified index. `section` must be non-negative and less than the value
returned by `ini_section_count`, or `ini_section_name` will return `nilptr`. The defined constant `INI_GLOBAL_SECTION` can
be used to indicate the global section.

### ini_property_count

```nelua
global function ini_property_count(ini: *ini_t <const>, section: cint): cint
```

Returns the number of properties belonging to the section with the specified index. `section` must be non-negative and
less than the value returned by `ini_section_count`, or `ini_section_name` will return 0. The defined constant
`INI_GLOBAL_SECTION` can be used to indicate the global section. Properties are declared in the ini-file on he format
`name=value`.

### ini_property_name

```nelua
global function ini_property_name(ini: *ini_t <const>, section: cint, property: cint): cstring
```

Returns the name of the property with the specified index `property` in the section with the specified index `section`.
`section` must be non-negative and less than the value returned by `ini_section_count`, and `property` must be
non-negative and less than the value returned by `ini_property_count`, or `ini_property_name` will return `nilptr`. The
defined constant `INI_GLOBAL_SECTION` can be used to indicate the global section.

### ini_property_value

```nelua
global function ini_property_value(ini: *ini_t <const>, section: cint, property: cint): cstring
```

Returns the value of the property with the specified index `property` in the section with the specified index `section`.
`section` must be non-negative and less than the value returned by `ini_section_count`, and `property` must be
non-negative and less than the value returned by `ini_property_count`, or `ini_property_value` will return `nilptr`. The
defined constant `INI_GLOBAL_SECTION` can be used to indicate the global section.

### ini_find_section

```nelua
global function ini_find_section(ini: *ini_t <const>, name: cstring <const>, name_length: cint): cint
```

Finds the section with the specified name, and returns its index. `name_length` specifies the number of characters in
`name`, which does not have to be zero-terminated. If `name_length` is zero, the length is determined automatically, but
in this case `name` has to be zero-terminated. If no section with the specified name could be found, the value
`INI_NOT_FOUND` is returned.

### ini_find_property

```nelua
global function ini_find_property(ini: *ini_t <const>, section: cint, name: cstring <const>, name_length: cint): cint
```

Finds the property with the specified name, within the section with the specified index, and returns the index of the
property. `name_length` specifies the number of characters in `name`, which does not have to be zero-terminated. If
`name_length` is zero, the length is determined automatically, but in this case `name` has to be zero-terminated. If no
property with the specified name could be found within the specified section, the value `INI_NOT_FOUND` is  returned.
`section` must be non-negative and less than the value returned by `ini_section_count`, or `ini_find_property` will
return `INI_NOT_FOUND`. The defined constant `INI_GLOBAL_SECTION` can be used to indicate the global section.

### ini_section_add

```nelua
global function ini_section_add(ini: *ini_t, name: cstring <const>, length: cint): cint
```

Adds a section with the specified name, and returns the index it was added at. There is no check done to see if a
section with the specified name already exists - multiple sections of the same name are allowed. `length` specifies the
number of characters in `name`, which does not have to be zero-terminated. If `length` is zero, the length is determined
automatically, but in this case `name` has to be zero-terminated.

### ini_property_add

```nelua
global function ini_property_add(ini: *ini_t, section: cint, name: cstring <const>, name_length: cint, value: cstring <const>, value_length: cint): void
```

Adds a property with the specified name and value to the specified section, and returns the index it was added at. There
is no check done to see if a property with the specified name already exists - multiple properties of the same name are
allowed. `name_length` and `value_length` specifies the number of characters in `name` and `value`, which does not have
to be zero-terminated. If `name_length` or `value_length` is zero, the length is determined automatically, but in this
case `name`/`value` has to be zero-terminated. `section` must be non-negative and less than the value returned by
`ini_section_count`, or the property will not be added. The defined constant `INI_GLOBAL_SECTION` can be used to
indicate the global section.

### ini_section_remove

```nelua
global function ini_section_remove(ini: *ini_t, section: cint): void
```

Removes the section with the specified index, and all properties within it. `section` must be non-negative and less than
the value returned by `ini_section_count`. The defined constant `INI_GLOBAL_SECTION` can be used to indicate the global
section. Note that removing a section will shuffle section indices, so that section indices you may have stored will no
longer indicate the same section as it did before the remove. Use the find functions to update your indices.

### ini_property_remove

```nelua
global function ini_property_remove(ini: *ini_t, section: cint, property: cint): void
```

Removes the property with the specified index from the specified section. `section` must be non-negative and less than
the value returned by `ini_section_count`, and `property` must be non-negative and less than the value returned by
`ini_property_count`. The defined constant `INI_GLOBAL_SECTION` can be used to indicate the global section. Note that
removing a property will shuffle property indices within the specified section, so that property indices you may have
stored will no longer indicate the same property as it did before the remove. Use the find functions to update your
indices.

### ini_section_name_set

```nelua
global function ini_section_name_set(ini: *ini_t, section: cint, name: cstring <const>, length: cint): void
```

Change the name of the section with the specified index. `section` must be non-negative and less than the value returned
by `ini_section_count`. The defined constant `INI_GLOBAL_SECTION` can be used to indicate the global section. `length`
specifies the number of characters in `name`, which does not have to be zero-terminated. If `length` is zero, the length
is determined automatically, but in this case `name` has to be zero-terminated.

### ini_property_name_set

```nelua
global function ini_property_name_set(ini: *ini_t, section: cint, property: cint, name: cstring <const>, length: cint): void
```

Change the name of the property with the specified index in the specified section. `section` must be non-negative and
less than the value returned by `ini_section_count`, and `property` must be non-negative and less than the value
returned by `ini_property_count`. The defined constant `INI_GLOBAL_SECTION` can be used to indicate the global section.
`length` specifies the number of characters in `name`, which does not have to be zero-terminated. If `length` is zero,
the length is determined automatically, but in this case `name` has to be zero-terminated.

### ini_property_value_set

```nelua
global function ini_property_value_set(ini: *ini_t, section: cint, property: cint, value: cstring <const>, length: cint): void
```

Change the value of the property with the specified index in the specified section. `section` must be non-negative and
less than the value returned by `ini_section_count`, and `property` must be non-negative and less than the value
returned by `ini_property_count`. The defined constant `INI_GLOBAL_SECTION` can be used to indicate the global section.
`length` specifies the number of characters in `value`, which does not have to be zero-terminated. If `length` is zero,
the length is determined automatically, but in this case `value` has to be zero-terminated.

---
