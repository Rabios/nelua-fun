# FWK API

### FILE

```nelua
global FILE: type = @record {}
```



### wchar_t

```nelua
global wchar_t: type = @cint
```



### wchar_t

```nelua
global wchar_t: type = @culong
```



### sort_64

```nelua
global function sort_64(a: pointer <const>, b: pointer <const>): cint
```

sort

### less_64

```nelua
global function less_64(a: uint64, b: uint64): cint
```

less

### less_int

```nelua
global function less_int(a: cint, b: cint): cint
```



### less_ptr

```nelua
global function less_ptr(a: pointer, b: pointer): cint
```



### less_str

```nelua
global function less_str(a: cstring, b: cstring): cint
```



### unhash_32

```nelua
global function unhash_32(x: uint32): uint32
```

un/hash

### hash_32

```nelua
global function hash_32(x: uint32): uint32
```



### hash_64

```nelua
global function hash_64(x: uint64): uint64
```



### hash_flt

```nelua
global function hash_flt(x: float64): uint64
```



### hash_str

```nelua
global function hash_str(str: cstring <const>): uint64
```



### hash_int

```nelua
global function hash_int(key: cint): uint64
```



### hash_ptr

```nelua
global function hash_ptr(key: pointer <const>): uint64
```



### popcnt64

```nelua
global function popcnt64(x: uint64): uint64
```

bits

### vrealloc

```nelua
global function vrealloc(p: pointer, sz: csize): pointer
```

vector based allocator (x1.75 enlarge factor)

### vlen

```nelua
global function vlen(p: pointer): csize
```



### set_item

```nelua
global set_item: type = @record {
  next: *set_item,
  keyhash: uint64,
  key: pointer,
  super: pointer
}
```

ds

### set

```nelua
global set: type = @record {
  array: **[0]set_item,
  cmp: function(pointer, pointer): cint,
  hash: function(pointer): uint64,
  count: cint
}
```



### set_init

```nelua
global function set_init(m: *set): void
```



### set_free

```nelua
global function set_free(m: *set): void
```



### set_insert

```nelua
global function set_insert(m: *set, p: *set_item, key: pointer, keyhash: uint64, super: pointer): void
```



### set_erase

```nelua
global function set_erase(m: *set, key: pointer, keyhash: uint64): void
```



### set_find

```nelua
global function set_find(m: *set <const>, key: pointer, keyhash: uint64): pointer
```



### set_count

```nelua
global function set_count(m: *set <const>): cint
```



### set_gc

```nelua
global function set_gc(m: *set): void
```



### pair

```nelua
global pair: type = @record {
  next: *pair,
  keyhash: uint64,
  key: pointer,
  value: pointer,
  super: pointer
}
```



### map

```nelua
global map: type = @record {
  array: **[0]pair,
  cmp: function(pointer, pointer): cint,
  hash: function(pointer): uint64,
  count: cint
}
```



### map_init

```nelua
global function map_init(m: *map): void
```



### map_free

```nelua
global function map_free(m: *map): void
```



### map_insert

```nelua
global function map_insert(m: *map, p: *pair, key: pointer, value: pointer, keyhash: uint64, super: pointer): void
```



### map_erase

```nelua
global function map_erase(m: *map, key: pointer, keyhash: uint64): void
```



### map_find

```nelua
global function map_find(m: *map, key: pointer, keyhash: uint64): pointer
```



### map_count

```nelua
global function map_count(m: *map): cint
```



### map_gc

```nelua
global function map_gc(m: *map): void
```



### C_EPSILON

```nelua
global C_EPSILON: float64
```



### C_PI

```nelua
global C_PI: float32
```



### TO_RAD

```nelua
global TO_RAD: float32
```



### TO_DEG

```nelua
global TO_DEG: float32
```



### vec2i

```nelua
global vec2i: type = @union {
  s1: record { X: cint, Y: cint },
  s2: record { x: cint, y: cint },
  s3: record { r: cint, g: cint },
  s4: record { w: cint, h: cint },
  s5: record { min: cint, max: cint },
  s6: record { from: cint, to: cint },
  s7: record { src: cint, dst: cint },
  v2: [2]cint,
  array: [1]cint
}
```



### vec2

```nelua
global vec2: type = @union {
  s1: record { X: float32, Y: float32 },
  s2: record { x: float32, y: float32 },
  s3: record { r: float32, g: float32 },
  s4: record { w: float32, h: float32 },
  s5: record { min: float32, max: float32 },
  s6: record { from: float32, to: float32 },
  s7: record { src: float32, dst: float32 },
  v2: [2]float32,
  array: [1]float32
}
```



### vec3

```nelua
global vec3: type = @union {
  s1: record { X: float32, Y: float32, Z: float32 },
  s2: record { x: float32, y: float32, z: float32 },
  s3: record { r: float32, g: float32, b: float32 },
  s4: record { w: float32, h: float32, d: float32 },
  xy: vec2,
  rg: vec2,
  wh: vec2,
  v3: [3]float32,
  array: [1]float32
}
```



### vec4

```nelua
global vec4: type = @union {
  s1: record { X: float32, Y: float32, Z: float32, W: float32 },
  s2: record { x: float32, y: float32, z: float32, w: float32 },
  s3: record { r: float32, g: float32, b: float32, a: float32 },
  xy: vec2,
  xyz: vec3,
  rg: vec2,
  rgb: vec3,
  wh: vec2,
  whd: vec3,
  v4: [4]float32,
  array: [1]float32
}
```



### quat

```nelua
global quat: type = @union {
  s1: record { X: float32, Y: float32, Z: float32, W: float32 },
  s2: record { x: float32, y: float32, z: float32, w: float32 },
  xyz: vec3,
  xyzw: vec4,
  v4: [4]float32,
  array: [1]float32
}
```



### mat33

```nelua
global mat33: type = @array(float32, 9)
```



### mat34

```nelua
global mat34: type = @array(float32, 12)
```



### mat44

```nelua
global mat44: type = @array(float32, 16)
```



### new_vec2i

```nelua
global function new_vec2i(x: cint, y: cint): vec2
```



### new_vec2

```nelua
global function new_vec2(x: float32, y: float32): vec2
```



### new_vec3

```nelua
global function new_vec3(x: float32, y: float32, z: float32): vec3
```



### new_vec4

```nelua
global function new_vec4(x: float32, y: float32, z: float32, w: float32): vec4
```



### new_quat

```nelua
global function new_quat(x: float32, y: float32, z: float32, w: float32): quat
```



### new_mat33

```nelua
global function new_mat33(...: cvarargs): mat33
```

global function new_axis(x: float32, y: float32, z: float32): axis <cimport  "axis", nodecl> end

### new_mat34

```nelua
global function new_mat34(...: cvarargs): mat34
```



### new_mat44

```nelua
global function new_mat44(...: cvarargs): mat44
```



### randset

```nelua
global function randset(state: uint64): void
```



### rand64

```nelua
global function rand64(): uint64
```



### randf

```nelua
global function randf(): float64
```



### randi

```nelua
global function randi(mini: cint, maxi: cint): cint
```

[0, 1) interval

### rng

```nelua
global function rng(): float64
```

[mini, maxi) interval

### simplex1

```nelua
global function simplex1(x: float32): float32
```



### simplex2

```nelua
global function simplex2(xy: vec2): float32
```



### simplex3

```nelua
global function simplex3(xyz: vec3): float32
```



### simplex4

```nelua
global function simplex4(xyzw: vec4): float32
```



### ease_linear

```nelua
global function ease_linear(t: float32): float32
```



### ease_out_sine

```nelua
global function ease_out_sine(t: float32): float32
```



### ease_out_quad

```nelua
global function ease_out_quad(t: float32): float32
```



### ease_out_cubic

```nelua
global function ease_out_cubic(t: float32): float32
```



### ease_out_quart

```nelua
global function ease_out_quart(t: float32): float32
```



### ease_out_quint

```nelua
global function ease_out_quint(t: float32): float32
```



### ease_out_expo

```nelua
global function ease_out_expo(t: float32): float32
```



### ease_out_circ

```nelua
global function ease_out_circ(t: float32): float32
```



### ease_out_back

```nelua
global function ease_out_back(t: float32): float32
```



### ease_out_elastic

```nelua
global function ease_out_elastic(t: float32): float32
```



### ease_out_bounce

```nelua
global function ease_out_bounce(t: float32): float32
```



### ease_in_sine

```nelua
global function ease_in_sine(t: float32): float32
```



### ease_in_quad

```nelua
global function ease_in_quad(t: float32): float32
```



### ease_in_cubic

```nelua
global function ease_in_cubic(t: float32): float32
```



### ease_in_quart

```nelua
global function ease_in_quart(t: float32): float32
```



### ease_in_quint

```nelua
global function ease_in_quint(t: float32): float32
```



### ease_in_expo

```nelua
global function ease_in_expo(t: float32): float32
```



### ease_in_circ

```nelua
global function ease_in_circ(t: float32): float32
```



### ease_in_back

```nelua
global function ease_in_back(t: float32): float32
```



### ease_in_elastic

```nelua
global function ease_in_elastic(t: float32): float32
```



### ease_in_bounce

```nelua
global function ease_in_bounce(t: float32): float32
```



### ease_inout_sine

```nelua
global function ease_inout_sine(t: float32): float32
```



### ease_inout_quad

```nelua
global function ease_inout_quad(t: float32): float32
```



### ease_inout_cubic

```nelua
global function ease_inout_cubic(t: float32): float32
```



### ease_inout_quart

```nelua
global function ease_inout_quart(t: float32): float32
```



### ease_inout_quint

```nelua
global function ease_inout_quint(t: float32): float32
```



### ease_inout_expo

```nelua
global function ease_inout_expo(t: float32): float32
```



### ease_inout_circ

```nelua
global function ease_inout_circ(t: float32): float32
```



### ease_inout_back

```nelua
global function ease_inout_back(t: float32): float32
```



### ease_inout_elastic

```nelua
global function ease_inout_elastic(t: float32): float32
```



### ease_inout_bounce

```nelua
global function ease_inout_bounce(t: float32): float32
```



### ease_inout_perlin

```nelua
global function ease_inout_perlin(t: float32): float32
```



### ease_ping_pong

```nelua
global function ease_ping_pong(t: float32, fn1: function(float32): float32, fn2: function(float32): float32): float32
```



### ease_pong_ping

```nelua
global function ease_pong_ping(t: float32, fn1: function(float32): float32, fn2: function(float32): float32): float32
```



### deg

```nelua
global function deg(radians: float32): float32
```



### rad

```nelua
global function rad(degrees: float32): float32
```



### mini

```nelua
global function mini(a: cint, b: cint): cint
```



### maxi

```nelua
global function maxi(a: cint, b: cint): cint
```



### absi

```nelua
global function absi(a: cint): cint
```



### clampi

```nelua
global function clampi(v: cint, a: cint, b: cint): cint
```



### minf

```nelua
global function minf(a: float32, b: float32): float32
```



### maxf

```nelua
global function maxf(a: float32, b: float32): float32
```



### absf

```nelua
global function absf(a: float32): float32
```



### pmodf

```nelua
global function pmodf(a: float32, b: float32): float32
```



### signf

```nelua
global function signf(a: float32): float32
```



### clampf

```nelua
global function clampf(v: float32, a: float32, b: float32): float32
```



### mixf

```nelua
global function mixf(a: float32, b: float32, t: float32): float32
```



### ptr2

```nelua
global function ptr2(a: *float32 <const>): vec2
```



### neg2

```nelua
global function neg2(a: vec2): vec2
```



### add2

```nelua
global function add2(a: vec2, b: vec2): vec2
```



### sub2

```nelua
global function sub2(a: vec2, b: vec2): vec2
```



### mul2

```nelua
global function mul2(a: vec2, b: vec2): vec2
```



### inc2

```nelua
global function inc2(a: vec2, b: float32): vec2
```



### dec2

```nelua
global function dec2(a: vec2, b: float32): vec2
```



### scale2

```nelua
global function scale2(a: vec2, b: float32): vec2
```



### div2

```nelua
global function div2(a: vec2, b: float32): vec2
```



### pmod2

```nelua
global function pmod2(a: vec2, b: float32): vec2
```



### min2

```nelua
global function min2(a: vec2, b: vec2): vec2
```



### max2

```nelua
global function max2(a: vec2, b: vec2): vec2
```



### abs2

```nelua
global function abs2(a: vec2): vec2
```



### floor2

```nelua
global function floor2(a: vec2): vec2
```



### fract2

```nelua
global function fract2(a: vec2): vec2
```



### ceil2

```nelua
global function ceil2(a: vec2): vec2
```



### dot2

```nelua
global function dot2(a: vec2, b: vec2): float32
```



### refl2

```nelua
global function refl2(a: vec2, b: vec2): vec2
```



### cross2

```nelua
global function cross2(a: vec2, b: vec2): float32
```



### len2sq

```nelua
global function len2sq(a: vec2): float32
```



### len2

```nelua
global function len2(a: vec2): float32
```



### norm2

```nelua
global function norm2(a: vec2): vec2
```



### finite2

```nelua
global function finite2(a: vec2): cint
```



### mix2

```nelua
global function mix2(a: vec2, b: vec2, t: float32): vec2
```



### clamp2

```nelua
global function clamp2(v: vec2, a: float32, b: float32): vec2
```



### ptr3

```nelua
global function ptr3(a: *float32 <const>): vec3
```



### vec23

```nelua
global function vec23(a: vec2, z: float32): vec3
```



### neg3

```nelua
global function neg3(a: vec3): vec3
```



### add3

```nelua
global function add3(a: vec3, b: vec3): vec3
```



### sub3

```nelua
global function sub3(a: vec3, b: vec3): vec3
```



### mul3

```nelua
global function mul3(a: vec3, b: vec3): vec3
```



### inc3

```nelua
global function inc3(a: vec3, b: float32): vec3
```



### dec3

```nelua
global function dec3(a: vec3, b: float32): vec3
```



### scale3

```nelua
global function scale3(a: vec3, b: float32): vec3
```



### div3

```nelua
global function div3(a: vec3, b: float32): vec3
```



### pmod3

```nelua
global function pmod3(a: vec3, b: float32): vec3
```



### min3

```nelua
global function min3(a: vec3, b: vec3): vec3
```



### max3

```nelua
global function max3(a: vec3, b: vec3): vec3
```



### abs3

```nelua
global function abs3(a: vec3): vec3
```



### floor3

```nelua
global function floor3(a: vec3): vec3
```



### fract3

```nelua
global function fract3(a: vec3): vec3
```



### ceil3

```nelua
global function ceil3(a: vec3): vec3
```



### cross3

```nelua
global function cross3(a: vec3, b: vec3): vec3
```



### dot3

```nelua
global function dot3(a: vec3, b: vec3): float32
```



### refl3

```nelua
global function refl3(a: vec3, b: vec3): vec3
```



### len3sq

```nelua
global function len3sq(a: vec3): float32
```



### len3

```nelua
global function len3(a: vec3): float32
```



### norm3

```nelua
global function norm3(a: vec3): vec3
```



### norm3sq

```nelua
global function norm3sq(a: vec3): vec3
```



### finite3

```nelua
global function finite3(a: vec3): cint
```



### mix3

```nelua
global function mix3(a: vec3, b: vec3, t: float32): vec3
```



### clamp3

```nelua
global function clamp3(v: vec3, a: float32, b: float32): vec3
```



### ortho3

```nelua
global function ortho3(left: *vec3, up: *vec3, v: vec3): void
```

global function tricross3(a: vec3, b: vec3, c: vec3): vec3 <cimport, nodecl> end

### ptr4

```nelua
global function ptr4(a: *float32 <const>): vec4
```



### vec34

```nelua
global function vec34(a: vec3, w: float32): vec4
```



### neg4

```nelua
global function neg4(a: vec4): vec4
```



### add4

```nelua
global function add4(a: vec4, b: vec4): vec4
```



### sub4

```nelua
global function sub4(a: vec4, b: vec4): vec4
```



### mul4

```nelua
global function mul4(a: vec4, b: vec4): vec4
```



### inc4

```nelua
global function inc4(a: vec4, b: float32): vec4
```



### dec4

```nelua
global function dec4(a: vec4, b: float32): vec4
```



### scale4

```nelua
global function scale4(a: vec4, b: float32): vec4
```



### div4

```nelua
global function div4(a: vec4, b: float32): vec4
```



### pmod4

```nelua
global function pmod4(a: vec4, b: float32): vec4
```



### min4

```nelua
global function min4(a: vec4, b: vec4): vec4
```



### max4

```nelua
global function max4(a: vec4, b: vec4): vec4
```



### abs4

```nelua
global function abs4(a: vec4): vec4
```



### floor4

```nelua
global function floor4(a: vec4): vec4
```



### fract4

```nelua
global function fract4(a: vec4): vec4
```



### ceil4

```nelua
global function ceil4(a: vec4): vec4
```



### cross4

```nelua
global function cross4(a: vec4, b: vec4): vec4
```



### dot4

```nelua
global function dot4(a: vec4, b: vec4): float32
```



### refl4

```nelua
global function refl4(a: vec4, b: vec4): vec4
```



### len4sq

```nelua
global function len4sq(a: vec4): float32
```



### len4

```nelua
global function len4(a: vec4): float32
```



### norm4

```nelua
global function norm4(a: vec4): vec4
```



### norm4sq

```nelua
global function norm4sq(a: vec4): vec4
```



### finite4

```nelua
global function finite4(a: vec4): cint
```



### mix4

```nelua
global function mix4(a: vec4, b: vec4, t: float32): vec4
```



### clamp4

```nelua
global function clamp4(v: vec4, a: float32, b: float32): vec4
```



### idq

```nelua
global function idq(): quat
```



### ptrq

```nelua
global function ptrq(a: *float32): quat
```



### vec3q

```nelua
global function vec3q(a: vec3, w: float32): quat
```



### vec4q

```nelua
global function vec4q(a: vec4): quat
```



### negq

```nelua
global function negq(a: quat): quat
```



### conjq

```nelua
global function conjq(a: quat): quat
```



### addq

```nelua
global function addq(a: quat, b: quat): quat
```



### subq

```nelua
global function subq(a: quat, b: quat): quat
```



### mulq

```nelua
global function mulq(p: quat, q: quat): quat
```



### scaleq

```nelua
global function scaleq(a: quat, s: float32): quat
```



### normq

```nelua
global function normq(a: quat): quat
```



### dotq

```nelua
global function dotq(a: quat, b: quat): float32
```



### mixq

```nelua
global function mixq(a: quat, b: quat, t: float32): quat
```



### slerpq

```nelua
global function slerpq(a: quat, b: quat, s: float32): quat
```

global function lerpq(a: quat, b: quat, s: float32): quat <cimport, nodecl> end

### rotationq

```nelua
global function rotationq(deg: float32, x: float32, y: float32, z: float32): quat
```



### mat44q

```nelua
global function mat44q(M: mat44): quat
```



### rotate3q_2

```nelua
global function rotate3q_2(v: vec3, q: quat): vec3
```



### rotate3q

```nelua
global function rotate3q(v: vec3, r: quat): vec3
```



### euler

```nelua
global function euler(q: quat): vec3
```

euler <-> quat

### eulerq

```nelua
global function eulerq(pyr_degrees: vec3): quat
```



### scaling33

```nelua
global function scaling33(m: mat33, x: float32, y: float32, z: float32): void
```



### scale33

```nelua
global function scale33(m: mat33, x: float32, y: float32, z: float32): void
```



### id33

```nelua
global function id33(m: mat33): void
```



### extract33

```nelua
global function extract33(m: mat33, m4: mat44 <const>): void
```



### copy33

```nelua
global function copy33(m: mat33, a: mat33 <const>): void
```



### mulv33

```nelua
global function mulv33(m: mat33, v: vec3): vec3
```



### multiply33x2

```nelua
global function multiply33x2(m: mat33, a: mat33 <const>, b: mat33 <const>): void
```



### rotation33

```nelua
global function rotation33(m: mat33, degrees: float32, x: float32, y: float32, z: float32): void
```



### rotationq33

```nelua
global function rotationq33(m: mat33, q: quat): void
```



### rotate33

```nelua
global function rotate33(r: mat33, degrees: float32, x: float32, y: float32, z: float32): void
```



### compose33

```nelua
global function compose33(m: mat33, r: quat, s: vec3): void
```



### id34

```nelua
global function id34(m: mat34): void
```



### copy34

```nelua
global function copy34(m: mat34, a: mat34 <const>): void
```



### scale34

```nelua
global function scale34(m: mat34, s: float32): void
```



### add34

```nelua
global function add34(m: mat34, n: mat34): void
```



### muladd34

```nelua
global function muladd34(m: mat34, n: mat34, s: float32): void
```



### add34x2

```nelua
global function add34x2(m: mat34, n: mat34, o: mat34): void
```



### lerp34

```nelua
global function lerp34(m: mat34, n: mat34, o: mat34, alpha: float32): void
```



### multiply34x2

```nelua
global function multiply34x2(m: mat34, m0: mat34 <const>, m1: mat34 <const>): void
```



### multiply34

```nelua
global function multiply34(m: mat34, a: mat34 <const>): void
```



### multiply34x3

```nelua
global function multiply34x3(m: mat34, a: mat34 <const>, b: mat34 <const>, c: mat34 <const>): void
```



### compose34

```nelua
global function compose34(m: mat34, t: vec3, q: quat, s: vec3): void
```



### invert34

```nelua
global function invert34(m: mat34, o: mat34 <const>): void
```



### scaling44

```nelua
global function scaling44(m: mat44, x: float32, y: float32, z: float32): void
```



### id

```nelua
global function id(m: mat44): void
```



### identity44

```nelua
global function identity44(m: mat44): void
```



### copy44

```nelua
global function copy44(m: mat44, a: mat44 <const>): void
```



### multiply44x2

```nelua
global function multiply44x2(m: mat44, a: mat44 <const>, b: mat44 <const>): void
```



### multiply44x3

```nelua
global function multiply44x3(m: mat44, a: mat44 <const>, b: mat44 <const>, c: mat44 <const>): void
```



### multiply44

```nelua
global function multiply44(m: mat44, a: mat44 <const>): void
```



### ortho44

```nelua
global function ortho44(m: mat44, l: float32, r: float32, b: float32, t: float32, n: float32, f: float32): void
```



### frustum44

```nelua
global function frustum44(m: mat44, l: float32, r: float32, b: float32, t: float32, n: float32, f: float32): void
```



### perspective44

```nelua
global function perspective44(m: mat44, fovy_degrees: float32, aspect: float32, nearp: float32, farp: float32): void
```



### lookat44

```nelua
global function lookat44(m: mat44, eye: vec3, center: vec3, up: vec3): void
```



### translation44

```nelua
global function translation44(m: mat44, x: float32, y: float32, z: float32): void
```



### translate44

```nelua
global function translate44(m: mat44, x: float32, y: float32, z: float32): void
```



### relocate44

```nelua
global function relocate44(m: mat44, x: float32, y: float32, z: float32): void
```



### rotationq44

```nelua
global function rotationq44(m: mat44, q: quat): void
```



### rotation44

```nelua
global function rotation44(m: mat44, degrees: float32, x: float32, y: float32, z: float32): void
```



### rotate44

```nelua
global function rotate44(m: mat44, degrees: float32, x: float32, y: float32, z: float32): void
```



### scaling44

```nelua
global function scaling44(m: mat44, x: float32, y: float32, z: float32): void
```



### scale44

```nelua
global function scale44(m: mat44, x: float32, y: float32, z: float32): void
```



### transpose44

```nelua
global function transpose44(m: mat44, a: mat44 <const>): void
```



### det44

```nelua
global function det44(M: mat44 <const>): float32
```



### invert44

```nelua
global function invert44(T: mat44, M: mat44 <const>): boolean
```



### transform444

```nelua
global function transform444(m: mat44 <const>, v: vec4 <const>): vec4
```



### unproject44

```nelua
global function unproject44(out: *vec3, xyd: vec3, viewport: vec4, mvp: mat44): boolean
```



### compose44

```nelua
global function compose44(m: mat44, t: vec3, q: quat, s: vec3): void
```



### transform33

```nelua
global function transform33(m: mat33, p: vec3): vec3
```



### transform444

```nelua
global function transform444(m: mat44 <const>, p: vec4 <const>): vec4
```



### transform344

```nelua
global function transform344(m: mat44 <const>, p: vec3 <const>): vec3
```



### transformq

```nelua
global function transformq(q: quat <const>, v: vec3 <const>): vec3
```



### print2

```nelua
global function print2(v: vec2): void
```



### print3

```nelua
global function print3(v: vec3): void
```



### print4

```nelua
global function print4(v: vec4): void
```



### printq

```nelua
global function printq(q: quat): void
```



### print33

```nelua
global function print33(m: *[0]float32): void
```



### print34

```nelua
global function print34(m: *[0]float32): void
```



### print44

```nelua
global function print44(m: *[0]float32): void
```



### audio_t

```nelua
global audio_t: type = @pointer
```

audio

### audio_clip

```nelua
global function audio_clip(pathfile: cstring <const>): audio_t
```



### audio_stream

```nelua
global function audio_stream(pathfile: cstring <const>): audio_t
```



### audio_play

```nelua
global function audio_play(s: audio_t, flags: cint): cint
```



### audio_play_gain

```nelua
global function audio_play_gain(s: audio_t, flags: cint, gain: float32): cint
```



### audio_play_gain_pitch

```nelua
global function audio_play_gain_pitch(s: audio_t, flags: cint, gain: float32, pitch: float32): cint
```



### audio_play_gain_pitch_pan

```nelua
global function audio_play_gain_pitch_pan(s: audio_t, flags: cint, gain: float32, pitch: float32, pan: float32): cint
```



### audio_volume_clip

```nelua
global function audio_volume_clip(gain: float32): float32
```



### audio_volume_stream

```nelua
global function audio_volume_stream(gain: float32): float32
```



### audio_volume_master

```nelua
global function audio_volume_master(gain: float32): float32
```



### AUDIO_FLAGS

```nelua
global AUDIO_FLAGS: type = @enum(cint) {
  AUDIO_1CH = 0, -- default
  AUDIO_2CH = 1,

  AUDIO_8 = 2,
  AUDIO_16 = 0,  -- default
  AUDIO_32 = 4,
  AUDIO_FLOAT = 8,

  AUDIO_22KHZ = 0, -- default
  AUDIO_44KHZ = 16,
  
  AUDIO_MIXER_GAIN = 0, -- default
  AUDIO_IGNORE_MIXER_GAIN = 32,
}
```



### audio_queue

```nelua
global function audio_queue(samples: pointer <const>, num_samples: cint, flags: cint): cint
```



### GJK_MAX_ITERATIONS

```nelua
global GJK_MAX_ITERATIONS: cint
```

collide

### gjk_support

```nelua
global gjk_support: type = @record {
  aid: cint,
  bid: cint,
  a: vec3,
  b: vec3
}
```



### gjk_vertex

```nelua
global gjk_vertex: type = @record {
  a: vec3,
  b: vec3,
  p: vec3,
  aid: cint,
  bid: cint
}
```



### gjk_simplex

```nelua
global gjk_simplex: type = @record {
  max_iter: cint,
  iter: cint,
  hit: cint,
  cnt: cint,
  v: [4]gjk_vertex,
  bc: [4]float32,
  D: float32
}
```



### gjk_result

```nelua
global gjk_result: type = @record {
  hit: cint,
  p0: vec3,
  p1: vec3,
  distance_squared: float32,
  iterations: cint
}
```



### gjk

```nelua
global function gjk(s: *gjk_simplex, sup: *gjk_support <const>, dv: *vec3): cint
```



### gjk_analyze

```nelua
global function gjk_analyze(s: *gjk_simplex <const>): gjk_result
```



### gjk_quad

```nelua
global function gjk_quad(a_radius: float32, b_radius: float32): gjk_result
```



### line

```nelua
global line: type = @record {
  a: vec3,
  b: vec3
}
```



### sphere

```nelua
global sphere: type = @record {
  c: vec3,
  r: float32
}
```



### aabb

```nelua
global aabb: type = @record {
  min: vec3,
  max: vec3
}
```



### plane

```nelua
global plane: type = @record {
  p: vec3,
  n: vec3
}
```



### capsule

```nelua
global capsule: type = @record {
  a: vec3,
  b: vec3,
  r: float32
}
```



### ray

```nelua
global ray: type = @record {
  p: vec3,
  d: vec3
}
```



### triangle

```nelua
global triangle: type = @record {
  p0: vec3,
  p1: vec3,
  p1: vec3
}
```



### poly

```nelua
global poly: type = @record {
  verts: *[0]vec3,
  cnt: cint
}
```



### frustum

```nelua
global frustum: type = @union {
  s: record {
    l: vec4,
    r: vec4,
    t: vec4,
    b: vec4,
    n: vec4,
    f: vec4
  },
  pl: [6]vec4,
  v: [24]float32
}
```



### new_line

```nelua
global function new_line(...: cvarargs): line
```



### new_sphere

```nelua
global function new_sphere(...: cvarargs): sphere
```



### new_aabb

```nelua
global function new_aabb(...: cvarargs): aabb
```



### new_plane

```nelua
global function new_plane(...: cvarargs): plane
```



### new_capsule

```nelua
global function new_capsule(...: cvarargs): capsule
```



### new_ray

```nelua
global function new_ray(p: vec3, normdir: vec3): ray
```



### new_triangle

```nelua
global function new_triangle(...: cvarargs): triangle
```



### new_poly

```nelua
global function new_poly(...: cvarargs): poly
```



### new_frustum

```nelua
global function new_frustum(...: cvarargs): frustum
```



### hit

```nelua
global hit: type = @record {
  u1: union {
    -- general case
    depth: float32,
    
    -- rays only: penetration (t0) and extraction (t1) points along ray line
    s1: record { t0: float32, t1: float32 },
    
    -- gjk only
    s2: record {
      hits: cint,
      p0: vec3,
      p1: vec3,
      distance2: float32,
      iterations: cint
    }
  },
  u2: union { p: vec3, contact_point: vec3 },
  u3: union { n: vec3, normal: vec3 }
}
```



### new_hit

```nelua
global function new_hit(...: cvarargs): hit
```



### line_distance2_point

```nelua
global function line_distance2_point(l: line, p: vec3): float32
```

line/segment

### line_closest_point

```nelua
global function line_closest_point(l: line, p: vec3): vec3
```



### ray_test_plane

```nelua
global function ray_test_plane(r: ray, p4: vec3): float32
```

ray

### ray_test_triangle

```nelua
global function ray_test_triangle(r: ray, t: triangle): float32
```



### ray_test_sphere

```nelua
global function ray_test_sphere(t0: *float32, t1: *float32, r: ray, s: sphere): cint
```



### ray_test_aabb

```nelua
global function ray_test_aabb(t0: *float32, t1: *float32, r: ray, a: aabb): cint
```



### ray_hit_plane

```nelua
global function ray_hit_plane(r: ray, p: plane): *hit
```



### ray_hit_triangle

```nelua
global function ray_hit_triangle(r: ray, t: triangle): *hit
```



### ray_hit_sphere

```nelua
global function ray_hit_sphere(r: ray, s: sphere): *hit
```



### ray_hit_aabb

```nelua
global function ray_hit_aabb(r: ray, a: aabb): *hit
```



### sphere_closest_point

```nelua
global function sphere_closest_point(s: sphere, p: vec3): vec3
```

sphere

### sphere_hit_aabb

```nelua
global function sphere_hit_aabb(s: sphere, a: aabb): *hit
```



### sphere_hit_capsule

```nelua
global function sphere_hit_capsule(s: sphere, c: capsule): *hit
```



### sphere_hit_sphere

```nelua
global function sphere_hit_sphere(a: sphere, b: sphere): *hit
```



### sphere_test_aabb

```nelua
global function sphere_test_aabb(s: sphere, a: aabb): cint
```



### sphere_test_capsule

```nelua
global function sphere_test_capsule(s: sphere, c: capsule): cint
```



### sphere_test_poly

```nelua
global function sphere_test_poly(s: sphere, p: poly): cint
```



### sphere_test_sphere

```nelua
global function sphere_test_sphere(a: sphere, b: sphere): cint
```



### aabb_closest_point

```nelua
global function aabb_closest_point(a: aabb, p: vec3): vec3
```

aabb

### aabb_distance2_point

```nelua
global function aabb_distance2_point(a: aabb, p: vec3): float32
```



### aabb_contains_point

```nelua
global function aabb_contains_point(a: aabb, p: vec3): cint
```



### aabb_hit_aabb

```nelua
global function aabb_hit_aabb(a: aabb, b: aabb): *hit
```



### aabb_hit_capsule

```nelua
global function aabb_hit_capsule(a: aabb, c: capsule): *hit
```



### aabb_hit_sphere

```nelua
global function aabb_hit_sphere(a: aabb, s: sphere): *hit
```



### aabb_test_aabb

```nelua
global function aabb_test_aabb(a: aabb, b: aabb): cint
```



### aabb_test_capsule

```nelua
global function aabb_test_capsule(a: aabb, c: capsule): cint
```



### aabb_test_poly

```nelua
global function aabb_test_poly(a: aabb, p: poly): cint
```



### aabb_test_sphere

```nelua
global function aabb_test_sphere(a: aabb, s: sphere): cint
```



### capsule_distance2_point

```nelua
global function capsule_distance2_point(c: capsule, p: vec3): float32
```

capsule

### capsule_closest_point

```nelua
global function capsule_closest_point(c: capsule, p: vec3): vec3
```



### capsule_hit_aabb

```nelua
global function capsule_hit_aabb(c: capsule, a: aabb): *hit
```



### capsule_hit_capsule

```nelua
global function capsule_hit_capsule(a: capsule, b: capsule): *hit
```



### capsule_hit_sphere

```nelua
global function capsule_hit_sphere(c: capsule, s: sphere): *hit
```



### capsule_test_aabb

```nelua
global function capsule_test_aabb(c: capsule, a: aabb): cint
```



### capsule_test_capsule

```nelua
global function capsule_test_capsule(a: capsule, b: capsule): cint
```



### capsule_test_poly

```nelua
global function capsule_test_poly(c: capsule, p: poly): cint
```



### capsule_test_sphere

```nelua
global function capsule_test_sphere(c: capsule, s: sphere): cint
```



### poly_test_sphere

```nelua
global function poly_test_sphere(p: poly, s: sphere): cint
```

poly: query

### poly_test_aabb

```nelua
global function poly_test_aabb(p: poly, a: aabb): cint
```



### poly_test_capsule

```nelua
global function poly_test_capsule(p: poly, c: capsule): cint
```



### poly_test_poly

```nelua
global function poly_test_poly(a: poly, b: poly): cint
```



### poly_test_sphere_transform

```nelua
global function poly_test_sphere_transform(p: poly, pos3: vec3, rot33: mat33, s: sphere): cint
```

poly: query transformed

### poly_test_aabb_transform

```nelua
global function poly_test_aabb_transform(p: poly, pos3: vec3, rot33: mat33, a: aabb): cint
```



### poly_test_capsule_transform

```nelua
global function poly_test_capsule_transform(p: poly, pos3: vec3, rot33: mat33, c: capsule): cint
```



### poly_test_poly_transform

```nelua
global function poly_test_poly_transform(a: poly, apos3: vec3, arot33: mat33, b: poly, bpos3: vec3, brot33: mat33): cint
```



### poly_hit_sphere

```nelua
global function poly_hit_sphere(res: *gjk_result, p: poly, s: sphere): cint
```

poly: gjk result

### poly_hit_aabb

```nelua
global function poly_hit_aabb(res: *gjk_result, p: poly, a: aabb): cint
```



### poly_hit_capsule

```nelua
global function poly_hit_capsule(res: *gjk_result, p: poly, c: capsule): cint
```



### poly_hit_poly

```nelua
global function poly_hit_poly(res: *gjk_result, a: poly, b: poly): cint
```



### poly_hit_sphere_transform

```nelua
global function poly_hit_sphere_transform(res: *gjk_result, p: poly, pos3: vec3, rot33: mat33, s: sphere): cint
```

poly: gjk result transformed

### poly_hit_aabb_transform

```nelua
global function poly_hit_aabb_transform(res: *gjk_result, p: poly, pos3: vec3, rot33: mat33, a: aabb): cint
```



### poly_hit_capsule_transform

```nelua
global function poly_hit_capsule_transform(res: *gjk_result, p: poly, pos3: vec3, rot33: mat33, c: capsule): cint
```



### poly_hit_poly_transform

```nelua
global function poly_hit_poly_transform(res: *gjk_result, p: poly, at3: vec3, ar33: mat33, c: capsule, bt3: vec3, br33: mat33): cint
```



### plane4

```nelua
global function plane4(p: vec3, n: vec3): vec4
```



### frustum_build

```nelua
global function frustum_build(projview: mat44): frustum
```



### frustum_test_sphere

```nelua
global function frustum_test_sphere(f: frustum, s: sphere): cint
```



### frustum_test_aabb

```nelua
global function frustum_test_aabb(f: frustum, a: aabb): cint
```



### poly_alloc

```nelua
global function poly_alloc(cnt: cint): poly
```



### poly_free

```nelua
global function poly_free(p: *poly): void
```



### pyramid

```nelua
global function pyramid(from: vec3, to: vec3, size: float32): poly
```



### diamond

```nelua
global function diamond(from: vec3, to: vec3, size: float32): poly
```

poly_free() required

### COOKER_FLAGS

```nelua
global COOKER_FLAGS: type = @enum(cint) {
  COOKER_SYNC = 0,
  COOKER_ASYNC = 1,
  COOKER_CANCELABLE = 2
}
```

cooker

### cooker_config

```nelua
global function cooker_config(art_path: cstring <const>, tools_path: cstring <const>, fwk_ini: cstring <const>): void
```



### cooker_start

```nelua
global function cooker_start(masks: cstring <const>, flags: cint): boolean
```

"art/", "art/tools/", "fwk.ini"

### cooker_stop

```nelua
global function cooker_stop(): void
```

"**"

### cooker_cancel

```nelua
global function cooker_cancel(): void
```



### cooker_progress

```nelua
global function cooker_progress(): cint
```



### cooker_jobs

```nelua
global function cooker_jobs(): cint
```

[0..100]

### data_t

```nelua
global data_t: type = @union {
  s: cstring,
  f: float64,
  i: int64,
  p: usize,
  arr: *[0]pointer
}
```

data

### data_push

```nelua
global function data_push(source: cstring <const>): boolean
```

data api

### data_find

```nelua
global function data_find(type_keypath: cstring <const>): *data_t
```



### data_get

```nelua
global function data_get(type_keypath: cstring <const>): data_t
```



### data_count

```nelua
global function data_count(...: cvarargs): cint
```

global function data_count(keypath: cstring <const>): cint <cimport, nodecl> end

### data_int

```nelua
global function data_int(...: cvarargs): cint
```



### data_float

```nelua
global function data_float(...: cvarargs): float64
```



### data_string

```nelua
global function data_string(...: cvarargs): cstring
```



### data_pop

```nelua
global function data_pop(): boolean
```



### dll

```nelua
global function dll(filename: cstring <const>, symbol: cstring <const>): pointer
```



### editor_pick

```nelua
global function editor_pick(mouse_x: float32, mouse_y: float32): vec3
```

editor

### editor_path

```nelua
global function editor_path(path: cstring <const>): cstring
```



### dialog_load

```nelua
global function dialog_load(): cstring
```

open file dialog

### dialog_save

```nelua
global function dialog_save(): cstring
```



### gizmo

```nelua
global function gizmo(pos: *vec3, rot: *vec3, sca: *vec3): cint
```

transform gizmos

### gizmo_active

```nelua
global function gizmo_active(): boolean
```



### gizmo_hover

```nelua
global function gizmo_hover(): boolean
```



### kit_locale

```nelua
global function kit_locale(langcode_iso639_1: cstring <const>): void
```

set context language: enUS, ptBR, esES, ...

### kit_set

```nelua
global function kit_set(variable: cstring <const>, value: cstring <const>): void
```

set context variable

### kit_reset

```nelua
global function kit_reset(): void
```

reset all variables in context

### kit_insert

```nelua
global function kit_insert(id: cstring <const>, translation: cstring <const>): void
```

insert single translation

### kit_load

```nelua
global function kit_load(filename: cstring <const>): boolean
```

load translations file (xlsx)

### kit_merge

```nelua
global function kit_merge(filename: cstring <const>): boolean
```

merge translations file into existing context

### kit_clear

```nelua
global function kit_clear(): void
```

delete all translations

### kit_translate

```nelua
global function kit_translate(id: cstring <const>): cstring
```

perform a translation, given current locale

### kit_translate2

```nelua
global function kit_translate2(id: cstring <const>, langcode_iso639_1: cstring <const>): cstring
```

perform a translation given explicit locale

### kit_dump_state

```nelua
global function kit_dump_state(fp: *FILE): void
```



### file_list

```nelua
global function file_list(path: cstring <const>, masks: cstring <const>): *[0]cstring
```

file
physical filesystem. files

### file_write

```nelua
global function file_write(file: cstring <const>, ptr: pointer <const>, len: cint): boolean
```

**.png;*.c

### file_append

```nelua
global function file_append(file: cstring <const>, ptr: pointer <const>, len: cint): boolean
```



### file_read

```nelua
global function file_read(filename: cstring <const>): cstring
```



### file_load

```nelua
global function file_load(filename: cstring <const>, len: *cint): cstring
```



### file_size

```nelua
global function file_size(pathfile: cstring <const>): uint64
```



### file_directory

```nelua
global function file_directory(pathfile: cstring <const>): boolean
```



### file_pathabs

```nelua
global function file_pathabs(pathfile: cstring <const>): cstring
```



### file_path

```nelua
global function file_path(pathfile: cstring <const>): cstring
```

../dir/./file.ext -> c:/prj/dir/file.ext

### file_name

```nelua
global function file_name(pathfile: cstring <const>): cstring
```

c:/prj/dir/file.ext -> c:/prj/dir/

### file_ext

```nelua
global function file_ext(pathfile: cstring <const>): cstring
```

c:/prj/dir/file.ext -> file.ext

### file_id

```nelua
global function file_id(pathfile: cstring <const>): cstring
```

c:/prj/dir/file.ext -> .ext

### file_normalize

```nelua
global function file_normalize(pathfile: cstring <const>): cstring
```

c:/prj/dir/file.ext -> file/dir/prj (name then alphabetical)

### file_stamp

```nelua
global function file_stamp(pathfile: cstring <const>): uint64
```



### file_stamp_epoch

```nelua
global function file_stamp_epoch(pathfile: cstring <const>): uint64
```

20210319113316 (datetime in base10)

### file_counter

```nelua
global function file_counter(pathfile: cstring <const>): cstring
```

1616153596 (seconds since unix epoch)

### file_exist

```nelua
global function file_exist(pathfile: cstring <const>): boolean
```



### file_delete

```nelua
global function file_delete(pathfile: cstring <const>): boolean
```



### file_copy

```nelua
global function file_copy(src: cstring <const>, dst: cstring <const>): boolean
```



### file_move

```nelua
global function file_move(src: cstring <const>, dst: cstring <const>): boolean
```



### file_temp

```nelua
global function file_temp(): *FILE
```



### file_tempname

```nelua
global function file_tempname(): cstring
```



### file_zip_list

```nelua
global function file_zip_list(zipname: cstring <const>): *cstring
```

compressed zip files

### file_zip_extract

```nelua
global function file_zip_extract(zipname: cstring <const>, filename: cstring <const>): cstring
```



### file_zip_append

```nelua
global function file_zip_append(zipname: cstring <const>, filename: cstring <const>, clevel: cint): boolean
```



### file_zip_appendmem

```nelua
global function file_zip_appendmem(zipname: cstring <const>, entryname: cstring <const>, ptr: pointer <const>, len: cuint, clevel: cint): boolean
```



### storage_mount

```nelua
global function storage_mount(folder: cstring <const>): void
```

Mounts local storage folder for writing. Useful for Emscripten only. @path_folder: "/save" for example
Reads local storage to memory. Usually call it one time only, after mount. Useful for Emscripten only.
Writes memory contents to local storage. Usually call it after all fclose

### storage_read

```nelua
global function storage_read(): void
```



### storage_flush

```nelua
global function storage_flush(): void
```



### vfs_mount

```nelua
global function vfs_mount(mount_point: cstring <const>): boolean
```

virtual filesystem

### vfs_list

```nelua
global function vfs_list(masks: cstring <const>): *[0]cstring
```



### vfs_read

```nelua
global function vfs_read(pathfile: cstring <const>): cstring
```



### vfs_load

```nelua
global function vfs_load(pathfile: cstring <const>, size: *cint): cstring
```



### vfs_size

```nelua
global function vfs_size(pathfile: cstring <const>): cint
```



### vfs_resolve

```nelua
global function vfs_resolve(fuzzyname: cstring <const>): cstring
```



### vfs_find

```nelua
global function vfs_find(pathfile: cstring <const>): cstring
```

guess best match. @todo: fuzzy path

### vfs_handle

```nelua
global function vfs_handle(pathfile: cstring <const>): *FILE
```

returns filename to extracted temporary file, so it can be read by foreign/3rd party libs

### cache_insert

```nelua
global function cache_insert(key: cstring <const>, value: pointer, size: cint): pointer
```

cache

### cache_lookup

```nelua
global function cache_lookup(key: cstring <const>, size: *cint): pointer
```



### ini_t

```nelua
global ini_t: type = @record {
  base: map,
  tmp: record {
    p: pair,
    key: cstring,
    val: cstring
  },
  ptr: pointer,
  tmpval: *cstring,
  typed_cmp: function(a: cstring, b: cstring): cint,
  typed_hash: function(a: cstring): uint64
}
```



### ini

```nelua
global function ini(filename: cstring <const>): ini_t
```



### ini_from_mem

```nelua
global function ini_from_mem(data: cstring <const>): ini_t
```



### ini_write

```nelua
global function ini_write(filename: cstring <const>, section: cstring <const>, key: cstring <const>, value: cstring <const>): boolean
```



### FONT_H1

```nelua
global FONT_H1: cstring
```

font size tags

### FONT_H2

```nelua
global FONT_H2: cstring
```

largest

### FONT_H3

```nelua
global FONT_H3: cstring
```



### FONT_H4

```nelua
global FONT_H4: cstring
```



### FONT_H5

```nelua
global FONT_H5: cstring
```



### FONT_H6

```nelua
global FONT_H6: cstring
```



### FONT_COLOR1

```nelua
global FONT_COLOR1: cstring
```

font color tags

### FONT_COLOR2

```nelua
global FONT_COLOR2: cstring
```



### FONT_COLOR3

```nelua
global FONT_COLOR3: cstring
```



### FONT_COLOR4

```nelua
global FONT_COLOR4: cstring
```



### FONT_COLOR5

```nelua
global FONT_COLOR5: cstring
```



### FONT_COLOR6

```nelua
global FONT_COLOR6: cstring
```



### FONT_COLOR7

```nelua
global FONT_COLOR7: cstring
```



### FONT_COLOR8

```nelua
global FONT_COLOR8: cstring
```



### FONT_COLOR9

```nelua
global FONT_COLOR9: cstring
```



### FONT_COLOR10

```nelua
global FONT_COLOR10: cstring
```



### FONT_FACE1

```nelua
global FONT_FACE1: cstring
```

font face tags

### FONT_FACE2

```nelua
global FONT_FACE2: cstring
```



### FONT_FACE3

```nelua
global FONT_FACE3: cstring
```



### FONT_FACE4

```nelua
global FONT_FACE4: cstring
```



### FONT_FACE5

```nelua
global FONT_FACE5: cstring
```



### FONT_FACE6

```nelua
global FONT_FACE6: cstring
```



### FONT_LEFT

```nelua
global FONT_LEFT: cstring
```

font align tags

### FONT_CENTER

```nelua
global FONT_CENTER: cstring
```



### FONT_RIGHT

```nelua
global FONT_RIGHT: cstring
```



### FONT_TOP

```nelua
global FONT_TOP: cstring
```



### FONT_MIDDLE

```nelua
global FONT_MIDDLE: cstring
```



### FONT_BASELINE

```nelua
global FONT_BASELINE: cstring
```



### FONT_BOTTOM

```nelua
global FONT_BOTTOM: cstring
```



### FONT_FLAGS

```nelua
global FONT_FLAGS: type = @enum(cint) {
  -- font atlas size
  FONT_512 = 0x0,
  FONT_1024 = 0x1,
  FONT_2048 = 0x2,
  FONT_4096 = 0x4,

  -- font oversampling
  FONT_NO_OVERSAMPLE = 0x0,
  FONT_OVERSAMPLE_X = 0x08,
  FONT_OVERSAMPLE_Y = 0x10,

  -- unicode ranges
  FONT_ASCII = 0x800, -- Compatible charset
  FONT_AR = 0x001000, -- Arabic and Arabic-Indic digits
  FONT_ZH = 0x002000, -- Chinese Simplified (@todo: add ZH_FULL)
  FONT_EL = 0x004000, -- Greek, Coptic, modern Georgian, Svan, Mingrelian, Ancient Greek
  FONT_EM = 0x008000, -- Emoji
  FONT_EU = 0x010000, -- Eastern/western Europe, IPA, Latin ext A/B
  FONT_HE = 0x020000, -- Hebrew, Yiddish, Ladino, and other diaspora languages
  FONT_JP = 0x040000, -- Hiragana, Katakana, Punctuations, Half-width chars
  FONT_KR = 0x080000, -- Korean, Hangul
  FONT_RU = 0x100000, -- Cyrillic + ext A/B
  FONT_TH = 0x200000, -- Thai
  FONT_VI = 0x400000, -- Vietnamese
  FONT_CJK = 0x002000|0x040000|0x080000,

  -- FONT_DEFAULTS = FONT_512 | FONT_NO_OVERSAMPLE | FONT_ASCII,
}
```

font flags

### font_face

```nelua
global function font_face(face_tag: cstring <const>, filename_ttf: cstring <const>, font_size: float32, flags: cuint): void
```

configures

### font_face_from_mem

```nelua
global function font_face_from_mem(tag: cstring <const>, ttf_buffer: pointer <const>, ttf_len: cuint, font_size: float32, flags: cuint): void
```



### font_scales

```nelua
global function font_scales(face_tag: cstring <const>, h1: float32, h2: float32, h3: float32, h4: float32, h5: float32, h6: float32): void
```



### font_color

```nelua
global function font_color(color_tag: cstring <const>, color: uint32): void
```



### font_xy

```nelua
global function font_xy(): vec2
```

commands

### font_goto

```nelua
global function font_goto(x: float32, y: float32): void
```



### font_print

```nelua
global function font_print(text: cstring <const>): vec2
```



### font_rect

```nelua
global function font_rect(text: cstring <const>): vec2
```



### font_colorize

```nelua
global function font_colorize(text: cstring <const>, comma_types: cstring <const>, comma_keywords: cstring <const>): pointer
```

syntax highlighting

### font_highlight

```nelua
global function font_highlight(text: cstring <const>, colors: pointer <const>): vec2
```

comma separated tokens. expensive, please cache result.

### input_use

```nelua
global function input_use(controller_id: cint): cint
```

input

### input

```nelua
global function input(vk: cint): float32
```

basic polling api (read input at current frame)

### input2

```nelua
global function input2(vk: cint): vec2
```



### input_diff

```nelua
global function input_diff(vk: cint): float32
```



### input_diff2

```nelua
global function input_diff2(vk: cint): vec2
```



### input_frame

```nelua
global function input_frame(vk: cint, frame: cint): float32
```

extended polling api (read input at Nth frame ago)

### input_frame2

```nelua
global function input_frame2(vk: cint, frame: cint): vec2
```



### input_frames

```nelua
global function input_frames(vk: cint, frame: cint): cstring
```



### input_up

```nelua
global function input_up(vk: cint):   cint
```

events api

### input_down

```nelua
global function input_down(vk: cint): cint
```

ON -> OFF (release)

### input_held

```nelua
global function input_held(vk: cint): cint
```

OFF -> ON (trigger)

### input_idle

```nelua
global function input_idle(vk: cint): cint
```

ON -> ON (pressed)

### input_click

```nelua
global function input_click(vk: cint, ms: cint):  cint
```



### input_click2

```nelua
global function input_click2(vk: cint, ms: cint): cint
```

OFF -> ON -> OFF

### input_repeat

```nelua
global function input_repeat(vk: cint, ms: cint): cint
```

OFF -> ON -> OFF -> ON -> OFF

### input_chord2

```nelua
global function input_chord2(vk1: cint, vk2: cint): cint
```



### input_chord3

```nelua
global function input_chord3(vk1: cint, vk2: cint, vk3: cint): cint
```

all vk1 && vk2 are ON

### input_chord4

```nelua
global function input_chord4(vk1: cint, vk2: cint, vk3: cint, vk4: cint): cint
```

all vk1 && vk2 && vk3 are ON

### input_filter_positive

```nelua
global function input_filter_positive(v: float32): float32
```

1d/2d filters

### input_filter_positive2

```nelua
global function input_filter_positive2(v: vec2): vec2
```

[-1..1] -> [0..1]

### input_filter_deadzone

```nelua
global function input_filter_deadzone(v: vec2, deadzone_treshold: float32): vec2
```

[-1..1] -> [0..1]

### input_filter_deadzone_4way

```nelua
global function input_filter_deadzone_4way(v: vec2, deadzone_treshold: float32): vec2
```



### TOUCH_BUTTONS

```nelua
global TOUCH_BUTTONS: type = @enum(cint) {
  TOUCH_0 = 0, -- defaults to left screen area. input_touch_area() to override
  TOUCH_1,     -- defaults to right screen area. input_touch_area() to override
}
```

multi-touch

### input_touch_area

```nelua
global function input_touch_area(button: cuint, begin_coord_ndc: vec2, end_coord_ndc: vec2): void
```



### input_touch

```nelua
global function input_touch(button: cuint, sensitivity: float32): vec2
```



### input_touch_delta

```nelua
global function input_touch_delta(button: cuint, sensitivity: float32): vec2
```

absolute position in 2d coords

### input_touch_delta_from_origin

```nelua
global function input_touch_delta_from_origin(button: cuint, sensitivity: float32): vec2
```

delta from previous position

### input_touch_active

```nelua
global function input_touch_active(): boolean
```

relative position from initial touch

### input_demo

```nelua
global function input_demo(): void
```

utils

### input_send

```nelua
global function input_send(vk: cint): void
```



### input_save_state

```nelua
global function input_save_state(id: cint, size: *cint): pointer
```



### input_load_state

```nelua
global function input_load_state(id: cint, ptr: pointer, size: cint): boolean
```



### input_keychar

```nelua
global function input_keychar(code: cuint): cchar
```



### input_anykey

```nelua
global function input_anykey(): cint
```

Converts keyboard code to its latin char (if any)

### INPUT_ENUMS

```nelua
global INPUT_ENUMS: type = @enum(cint) {
  -- bits: x104 keyboard, x3 mouse, x15 gamepad, x7 window
  -- keyboard gaming keys (53-bit): first-class keys for gaming
  KEY_ESC = 0,
  KEY_TICK, KEY_1,KEY_2,KEY_3,KEY_4,KEY_5,KEY_6,KEY_7,KEY_8,KEY_9,KEY_0,  KEY_BS,
  KEY_TAB,   KEY_Q,KEY_W,KEY_E,KEY_R,KEY_T,KEY_Y,KEY_U,KEY_I,KEY_O,KEY_P,
  KEY_CAPS,     KEY_A,KEY_S,KEY_D,KEY_F,KEY_G,KEY_H,KEY_J,KEY_K,KEY_L, KEY_ENTER,
  KEY_LSHIFT,       KEY_Z,KEY_X,KEY_C,KEY_V,KEY_B,KEY_N,KEY_M,        KEY_RSHIFT,            KEY_UP,
  KEY_LCTRL,KEY_LALT,               KEY_SPACE,                KEY_RALT,KEY_RCTRL,  KEY_LEFT,KEY_DOWN,KEY_RIGHT,

  -- for completeness, secondary keys below (52-bit). beware!
  KEY_INS,KEY_HOME,KEY_PGUP,KEY_DEL,KEY_END,KEY_PGDN, -- beware: different behavior win/osx (also, osx: no home/end).
  KEY_LMETA,KEY_RMETA,KEY_MENU,KEY_PRINT,KEY_PAUSE,KEY_SCROLL,KEY_NUMLOCK, -- beware: may trigger unexpected OS behavior. (@todo: add RSHIFT here for win?)
  KEY_MINUS,KEY_EQUAL,KEY_LSQUARE,KEY_RSQUARE,KEY_SEMICOLON,KEY_QUOTE,KEY_HASH,KEY_BAR,KEY_COMMA,KEY_DOT,KEY_SLASH, -- beware: non-us keyboard layouts
  KEY_F1,KEY_F2,KEY_F3,KEY_F4,KEY_F5,KEY_F6,KEY_F7,KEY_F8,KEY_F9,KEY_F10,KEY_F11,KEY_F12, -- beware: complicated on laptops/osx
  KEY_PAD1,KEY_PAD2,KEY_PAD3,KEY_PAD4,KEY_PAD5,KEY_PAD6,KEY_PAD7,KEY_PAD8,KEY_PAD9,KEY_PAD0, -- beware: complicated on laptops
  KEY_PADADD,KEY_PADSUB,KEY_PADMUL,KEY_PADDIV,KEY_PADDOT,KEY_PADENTER, -- beware: complicated on laptops

  MOUSE_L, MOUSE_M, MOUSE_R,
  GAMEPAD_CONNECTED, GAMEPAD_A, GAMEPAD_B, GAMEPAD_X, GAMEPAD_Y,
  GAMEPAD_UP, GAMEPAD_DOWN, GAMEPAD_LEFT, GAMEPAD_RIGHT, GAMEPAD_MENU, GAMEPAD_START,
  GAMEPAD_LB, GAMEPAD_RB, GAMEPAD_LTHUMB, GAMEPAD_RTHUMB,
  WINDOW_BLUR, WINDOW_FOCUS, WINDOW_CLOSE, WINDOW_MINIMIZE, WINDOW_MAXIMIZE, WINDOW_FULLSCREEN, WINDOW_WINDOWED,

  -- floats: x7 gamepad, x3 mouse, x4 touch, x4 window
  GAMEPAD_LPAD, GAMEPAD_LPADY,
  GAMEPAD_RPAD, GAMEPAD_RPADY,
  GAMEPAD_LTRIGGER, GAMEPAD_RTRIGGER, GAMEPAD_BATTERY,
  MOUSE, MOUSE_Y, MOUSE_W,
  TOUCH_X1, TOUCH_Y1, TOUCH_X2, TOUCH_Y2,
  WINDOW_RESIZE, WINDOW_RESIZEY, WINDOW_ORIENTATION, WINDOW_BATTERY,

  -- strings: x2 gamepad
  GAMEPAD_GUID, GAMEPAD_NAME,
}
```



### GAMEPAD_LPADX

```nelua
global GAMEPAD_LPADX:   cint
```



### GAMEPAD_RPADX

```nelua
global GAMEPAD_RPADX:   cint
```



### GAMEPAD_LT

```nelua
global GAMEPAD_LT:      cint
```



### GAMEPAD_RT

```nelua
global GAMEPAD_RT:      cint
```



### MOUSE_X

```nelua
global MOUSE_X:         cint
```



### WINDOW_RESIZEX

```nelua
global WINDOW_RESIZEX:  cint
```



### xrealloc

```nelua
global function xrealloc(p: pointer, sz: csize): pointer
```

default allocator (aborts on out-of-mem)

### xsize

```nelua
global function xsize(p: pointer): csize
```



### xstats

```nelua
global function xstats(): cstring
```



### stack

```nelua
global function stack(bytes: cint): pointer
```

stack based allocator (negative bytes does rewind stack, like when entering new frame)

### watch

```nelua
global function watch(ptr: pointer, sz: cint): pointer
```

memory leaks

### forget

```nelua
global function forget(ptr: pointer): pointer
```



### download

```nelua
global function download(out: *FILE, url: cstring <const>): cint
```

network

### portname

```nelua
global function portname(service_name: cstring <const>, retries: cuint): cint
```



### udp_bind

```nelua
global function udp_bind(address: cstring <const>, port: cstring <const>): cint
```

server

### udp_open

```nelua
global function udp_open(address: cstring <const>, port: cstring <const>): cint
```

client

### udp_send

```nelua
global function udp_send(arg1: cint, buf: pointer <const>, len: cint): cint
```

common

### udp_sendto

```nelua
global function udp_sendto(arg1: cint, ip: cstring <const>, port: cstring <const>, buf: pointer <const>, len: cint): cint
```

<0 error, >0 bytes sent ok

### udp_recv

```nelua
global function udp_recv(arg1: cint, buf: pointer, len: cint): cint
```

<0 error, >0 bytes sent ok

### udp_peek

```nelua
global function udp_peek(arg1: cint): cint
```

<0 error, 0 orderly shutdown, >0 received bytes

### tcp_open

```nelua
global function tcp_open(address: cstring <const>, port: cstring <const>): cint
```

client

### tcp_bind

```nelua
global function tcp_bind(interface_: cstring <const>, port: cstring <const>, queue: cint): cint
```

server

### tcp_peek

```nelua
global function tcp_peek(arg1: cint, callback: function(cint): cint): cint
```



### tcp_send

```nelua
global function tcp_send(arg1: cint, buf: pointer <const>, len: cint): cint
```

common

### tcp_recv

```nelua
global function tcp_recv(arg1: cint, buf: pointer, len: cint): cint
```



### tcp_host

```nelua
global function tcp_host(arg1: cint): cstring
```



### tcp_port

```nelua
global function tcp_port(arg1: cint): cstring
```

info

### tcp_close

```nelua
global function tcp_close(arg1: cint): cint
```



### tcp_debug

```nelua
global function tcp_debug(arg1: cint): cint
```

extras

### profile_t

```nelua
global profile_t: type = @record {
  stat: float64,
  cost: int32,
  avg: int32
}
```

profile

### profiler_t

```nelua
global profiler_t: type = @record {
  base: map,
  tmp: record {
    p: pair,
    key: cstring,
    val: profile_t
  },
  ptr: pointer,
  tmpval: *profile_t,
  typed_cmp: function(a: cstring, b: cstring): cint,
  typed_hash: function(a: cstring): uint64
}
```



### profile

```nelua
global function profile(section: cstring): void
```



### profile_incstat

```nelua
global function profile_incstat(name: cstring <const>, accum: float64): void
```



### profiler

```nelua
global profiler: profiler_t
```



### profiler_enabled

```nelua
global profiler_enabled: cint
```



### handle

```nelua
global handle: type = @cuint
```

render

### rgba

```nelua
global function rgba(r: uint8, g: uint8, b: uint8, a: uint8): cuint
```



### bgra

```nelua
global function bgra(r: uint8, g: uint8, b: uint8, a: uint8): cuint
```



### rgbaf

```nelua
global function rgbaf(r: float32, g: float32, b: float32, a: float32): cuint
```



### bgraf

```nelua
global function bgraf(r: float32, g: float32, b: float32, a: float32): cuint
```



### alpha

```nelua
global function alpha(rgba: cuint): float32
```



### RGBX

```nelua
global function RGBX(rgb: uint32, x: uint8): uint32
```



### RGB3

```nelua
global function RGB3(r: uint8, g: uint8, b: uint8): uint32
```



### RGB4

```nelua
global function RGB4(r: uint8, g: uint8, b: uint8, a: uint8): uint32
```



### BLACK

```nelua
global BLACK: uint32
```



### RED

```nelua
global RED: uint32
```



### GREEN

```nelua
global GREEN: uint32
```



### BLUE

```nelua
global BLUE: uint32
```



### ORANGE

```nelua
global ORANGE: uint32
```



### CYAN

```nelua
global CYAN: uint32
```



### PURPLE

```nelua
global PURPLE: uint32
```



### YELLOW

```nelua
global YELLOW: uint32
```



### WHITE

```nelua
global WHITE: uint32
```



### GRAY

```nelua
global GRAY: uint32
```



### IMAGE_FLAGS

```nelua
global IMAGE_FLAGS: type = @enum(cint) {
  IMAGE_R     = 0x01000, -- 1-channel image (R)
  IMAGE_RG    = 0x02000, -- 2-channel image (R,G)
  IMAGE_RGB   = 0x04000, -- 3-channel image (R,G,B)
  IMAGE_RGBA  = 0x08000, -- 4-channel image (R,G,B,A)
  IMAGE_FLIP  = 0x10000, -- Flip image vertically
  IMAGE_FLOAT = 0x20000  -- Float pixel components
}
```

flags when constructing the image_t type. see: image, image_from_mem

### image_t

```nelua
global image_t: type = @record {
  u1: union { x: cuint, w: cuint },
  u2: union { y: cuint, h: cuint },
  u3: union { n: cuint, comps: cuint },
  u4: union {
    pixels: pointer,
    pixels8: *[0]uint8,
    pixels16: *[0]uint16,
    pixels32: *[0]uint32,
    pixelsf: *[0]float32
  }
}
```



### image

```nelua
global function image(pathfile: cstring <const>, flags: cint): image_t
```



### image_from_mem

```nelua
global function image_from_mem(ptr: pointer <const>, len: cint, flags: cint): image_t
```



### image_destroy

```nelua
global function image_destroy(img: *image_t): void
```



### TEXTURE_FLAGS

```nelua
global TEXTURE_FLAGS: type = @enum(cint) {
  -- UNIT[0..7]
  
  TEXTURE_BC1 = 8,  -- DXT1, RGB with 8:1 compression ratio (+ optional 1bpp for alpha)
  TEXTURE_BC2 = 16, -- DXT3, RGBA with 4:1 compression ratio (BC1 for RGB + 4bpp for alpha)
  TEXTURE_BC3 = 32, -- DXT5, RGBA with 4:1 compression ratio (BC1 for RGB + BC4 for A)
--TEXTURE_BC4,      -- Alpha
  
  TEXTURE_NEAREST = 0,
  TEXTURE_LINEAR = 64,
  TEXTURE_MIPMAPS = 128,

  TEXTURE_CLAMP = 0,
  TEXTURE_BORDER = 0x100,
  TEXTURE_REPEAT = 0x200,

  TEXTURE_BYTE = 0,
  TEXTURE_FLOAT = IMAGE_FLOAT,

  TEXTURE_COLOR = 0,
  TEXTURE_DEPTH = 0x800,

  TEXTURE_R = IMAGE_R,
  TEXTURE_RG = IMAGE_RG,
  TEXTURE_RGB = IMAGE_RGB,
  TEXTURE_RGBA = IMAGE_RGBA,
  TEXTURE_FLIP = IMAGE_FLIP,

  -- @fixme
  TEXTURE_SRGB = 1 << 24,
  TEXTURE_BGR = 1 << 25,
  TEXTURE_ARRAY = 1 << 26,
}
```



### texture_t

```nelua
global texture_t: type = @record {
  u1: union { x: cuint, w: cuint },
  u2: union { y: cuint, h: cuint },
  u3: union { z: cuint, d: cuint },
  u4: union { n: cuint, bpp: cuint },
  id: handle, unit: handle,
  flags: cuint,
  filename: cstring,
  transparent: boolean,
  fbo: cuint -- for texture recording
}
```



### texture_compressed

```nelua
global function texture_compressed(filename: cstring <const>, flags: cuint): texture_t
```



### texture_compressed_from_mem

```nelua
global function texture_compressed_from_mem(data: pointer <const>, len: cint, flags: cuint): texture_t
```



### texture

```nelua
global function texture(filename: cstring <const>, flags: cint): texture_t
```



### texture_from_mem

```nelua
global function texture_from_mem(ptr: pointer <const>, len: cint, flags: cint): texture_t
```



### texture_create

```nelua
global function texture_create(w: cuint, h: cuint, n: cuint, pixels: pointer, flags: cint): texture_t
```



### texture_checker

```nelua
global function texture_checker(): texture_t
```



### texture_destroy

```nelua
global function texture_destroy(t: *texture_t): void
```



### texture_update

```nelua
global function texture_update(t: *texture_t, w: cuint, h: cuint, n: cuint, pixels: pointer, flags: cint): cuint
```

global function texture_add_loader(loader: function(filename: cstring <const>, w: *cint, h: *cint, bpp: *cint, reqbpp: cint, flags: cint): cint): void <cimport, nodecl> end

### texture_rec_begin

```nelua
global function texture_rec_begin(t: *texture_t, w: cuint, h: cuint): boolean
```



### texture_rec_end

```nelua
global function texture_rec_end(t: *texture_t): void
```

texture_rec

### brdf_lut

```nelua
global function brdf_lut(): texture_t
```

brdf

### colormap_t

```nelua
global colormap_t: type = @record {
  color: vec4,
  texture: *texture_t
}
```



### colormap

```nelua
global function colormap(cm: *colormap_t, pbr_material_type: cstring <const>, load_as_srgb: boolean): boolean
```



### pbr_material_t

```nelua
global pbr_material_t: type = @record {
  name: cstring,
  diffuse: colormap_t,
  normals: colormap_t,
  specular: colormap_t,
  albedo: colormap_t,
  roughness: colormap_t,
  metallic: colormap_t,
  ao: colormap_t,
  ambient: colormap_t,
  emissive: colormap_t,
  
  specular_shininess: float32
}
```



### pbr_material

```nelua
global function pbr_material(pbr: *pbr_material_t, material: cstring <const>): boolean
```



### pbr_material_destroy

```nelua
global function pbr_material_destroy(m: *pbr_material_t): void
```



### fullscreen_rgb_quad

```nelua
global function fullscreen_rgb_quad(texture_rgb: texture_t, gamma: float32): void
```

fullscreen quads

### fullscreen_ycbcr_quad

```nelua
global function fullscreen_ycbcr_quad(texture_YCbCr: [3]texture_t, gamma: float32): void
```



### tile

```nelua
global function tile(texture: texture_t, position: [3]float32, rotation: float32, color: uint32): void
```

texture id, position(x,y,depth sort), tint color, rotation angle

### sprite

```nelua
global function sprite(texture: texture_t, position: [3]float32, rotation: float32, offset: [2]float32, scale: [2]float32, is_additive: cint, rgba: uint32, spritesheet: [3]float32): void
```

texture id, position(x,y,depth sort), rotation angle, offset(x,y), scale(x,y), is_additive, tint color, spritesheet(frameNumber,X,Y) (frame in a X*Y spritesheet)

### sprite_flush

```nelua
global function sprite_flush(): void
```



### cubemap_t

```nelua
global cubemap_t: type = @record {
  id: cuint,  -- texture id
  sh: [9]vec3 -- precomputed spherical harmonics coefficients
}
```



### cubemap

```nelua
global function cubemap(image: image_t <const>, flags: cint): cubemap_t
```



### cubemap6

```nelua
global function cubemap6(images: [6]image_t <const>, flags: cint): cubemap_t
```

1 equirectangular panorama

### cubemap_destroy

```nelua
global function cubemap_destroy(c: *cubemap_t): void
```

6 cubemap faces

### cubemap_get_active

```nelua
global function cubemap_get_active(): *cubemap_t
```



### fbo

```nelua
global function fbo(texture_color: cuint, texture_depth: cuint, wr_flags: cint): cuint
```

fbos

### fbo_bind

```nelua
global function fbo_bind(id: cuint): void
```



### fbo_unbind

```nelua
global function fbo_unbind(): void
```



### fbo_destroy

```nelua
global function fbo_destroy(id: cuint): void
```



### shadowmap_t

```nelua
global shadowmap_t: type = @record {
  shadowmatrix: mat44,
  mvp: mat44,
  mv: mat44,
  proj: mat44,
  light_position: vec4,
  saved_fb: cint,
  saved_viewport: [4]cint,
  fbo: handle,
  texture: handle,
  texture_width: cint
}
```

shadowmaps

### shadowmap

```nelua
global function shadowmap(texture_width: cint): shadowmap_t
```



### shadowmap_destroy

```nelua
global function shadowmap_destroy(s: *shadowmap_t): void
```

= 1024

### shadowmap_set_shadowmatrix

```nelua
global function shadowmap_set_shadowmatrix(s: *shadowmap_t, aLightPos: vec3, aLightAt: vec3, aLightUp: vec3, projection: mat44 <const>): void
```



### shadowmap_begin

```nelua
global function shadowmap_begin(s: *shadowmap_t): void
```



### shadowmap_end

```nelua
global function shadowmap_end(s: *shadowmap_t): void
```



### shadowmatrix_proj

```nelua
global function shadowmatrix_proj(shm_proj: mat44, aLightFov: float32, znear: float32, zfar: float32): void
```



### shadowmatrix_ortho

```nelua
global function shadowmatrix_ortho(shm_proj: mat44, left: float32, right: float32, bottom: float32, top: float32, znear: float32, zfar: float32): void
```



### shader

```nelua
global function shader(vs: cstring <const>, fs: cstring <const>, attribs: cstring <const>, fragcolor: cstring <const>): cuint
```

shaders

### shader_bind

```nelua
global function shader_bind(program: cuint): cuint
```



### shader_bool

```nelua
global function shader_bool(uniform: cstring <const>, b: boolean): void
```



### shader_int

```nelua
global function shader_int(uniform: cstring <const>, i: cint): void
```



### shader_uint

```nelua
global function shader_uint(uniform: cstring <const>, i: cuint): void
```



### shader_float

```nelua
global function shader_float(uniform: cstring <const>, f: float32): void
```



### shader_vec2

```nelua
global function shader_vec2(uniform: cstring <const>, v: vec2): void
```



### shader_vec3

```nelua
global function shader_vec3(uniform: cstring <const>, v: vec3): void
```



### shader_vec4

```nelua
global function shader_vec4(uniform: cstring <const>, v: vec4): void
```



### shader_mat44

```nelua
global function shader_mat44(uniform: cstring <const>, m: mat44): void
```



### shader_texture

```nelua
global function shader_texture(sampler: cstring <const>, texture: cuint, unit: cuint): void
```



### shader_colormap

```nelua
global function shader_colormap(name: cstring <const>, cm: colormap_t): void
```



### shader_get_active

```nelua
global function shader_get_active(): cuint
```



### shader_destroy

```nelua
global function shader_destroy(shader: cuint): void
```



### MESH_FLAGS

```nelua
global MESH_FLAGS: type = @enum(cint) {
  MESH_STATIC = 0,
  MESH_STREAM = 1,
  MESH_TRIANGLE_STRIP = 2
}
```

STATIC, DYNAMIC, STREAM (zero|single|many updates per frame)

### mesh_t

```nelua
global mesh_t: type = @record {
  vao: handle, vbo: handle, ibo: handle,
  vertex_count: cuint,
  index_count: cuint,
  flags: cuint
}
```



### mesh_create

```nelua
global function mesh_create(format: cstring <const>, vertex_stride: cint, vertex_count: cint, interleaved_vertex_data: pointer <const>, index_count: cint, index_data: pointer <const>, flags: cint): mesh_t
```



### mesh_upgrade

```nelua
global function mesh_upgrade(m: *mesh_t, format: cstring <const>, vertex_stride: cint, vertex_count: cint, interleaved_vertex_data: pointer <const>, index_count: cint, index_data: pointer <const>, flags: cint): void
```



### mesh_render

```nelua
global function mesh_render(m: *mesh_t): void
```



### mesh_destroy

```nelua
global function mesh_destroy(m: *mesh_t): void
```



### mesh_bounds

```nelua
global function mesh_bounds(m: *mesh_t): aabb
```



### MATERIAL_ENUMS

```nelua
global MATERIAL_ENUMS: type = @enum(cint) {
  MAX_CHANNELS_PER_MATERIAL = 8
}
```



### material_t

```nelua
global material_t: type = @record {
  name: cstring,
  count: cint,
  layer: [MAX_CHANNELS_PER_MATERIAL]material_layer_t
}
```



### MODEL_FLAGS

```nelua
global MODEL_FLAGS: type = @enum(cint) {
  MODEL_NO_ANIMATIONS = 1,
  MODEL_NO_MESHES = 2,
  MODEL_NO_TEXTURES = 4,
  MODEL_MATCAPS = 8
}
```



### model_t

```nelua
global model_t: type = @record {
  iqm: pointer, -- private
  
  num_textures: cuint,
  textures: *handle,
  texture_names: *[0]cstring,
  materials: *material_t,
  
  num_meshes: cuint,
  num_triangles: cuint,
  num_joints: cuint, -- num_poses
  num_anims: cuint,
  num_frames: cuint,
  program: handle,
  curframe: float32,
  pivot: mat44,
  
  stride: cint, -- usually 60 bytes (12*4+4*3) for a p3 u2 n3 t4 i4B w4B c4B vertex stream
  verts: pointer,
  num_verts: cint,
  vao: handle, ibo: handle, vbo: handle, vao_instanced: handle,
  
  flags: cuint,
  billboard: cuint,
  
  instanced_matrices: *[0]float32,
  num_instances: cuint
}
```



### model

```nelua
global function model(filename: cstring <const>, flags: cint): model_t
```



### model_from_mem

```nelua
global function model_from_mem(mem: pointer <const>, sz: cint, flags: cint): model_t
```



### model_animate

```nelua
global function model_animate(m: model_t, curframe: float32): float32
```



### model_animate_clip

```nelua
global function model_animate_clip(m: model_t, curframe: float32, minframe: cint, maxframe: cint, loop: boolean): float32
```



### model_aabb

```nelua
global function model_aabb(m: model_t, transform: mat44): aabb
```



### model_render

```nelua
global function model_render(m: model_t, proj: mat44, view: mat44, model: mat44, shader: cint): void
```



### model_render_skeleton

```nelua
global function model_render_skeleton(m: model_t, model: mat44): void
```



### model_render_instanced

```nelua
global function model_render_instanced(m: model_t, model: mat44, view: mat44, models: *[0]mat44, shader: cint, count: cuint): void
```



### model_set_texture

```nelua
global function model_set_texture(m: model_t, t: texture_t): void
```



### model_get_bone_pose

```nelua
global function model_get_bone_pose(m: model_t, joint: cuint, out: *mat34): boolean
```



### model_destroy

```nelua
global function model_destroy(m: model_t): void
```



### skybox_t

```nelua
global skybox_t: type = @record {
  program: handle,
  geometry: mesh_t,
  cubemap: cubemap_t,
  flags: cint
}
```



### skybox

```nelua
global function skybox(panorama_or_cubemap_folder: cstring <const>, flags: cint): skybox_t
```



### skybox_push_state

```nelua
global function skybox_push_state(sky: *skybox_t, proj: mat44, view: mat44): cint
```



### skybox_pop_state

```nelua
global function skybox_pop_state(sky: *skybox_t): cint
```



### skybox_destroy

```nelua
global function skybox_destroy(sky: *skybox_t): void
```



### viewport_color

```nelua
global function viewport_color(color: uint32): void
```



### viewport_color3

```nelua
global function viewport_color3(color: vec3): void
```



### viewport_clear

```nelua
global function viewport_clear(color: boolean, depth: boolean): void
```



### viewport_clip

```nelua
global function viewport_clip(from: vec2, to: vec2): void
```



### fx_load

```nelua
global function fx_load(file: cstring <const>): void
```



### fx_begin

```nelua
global function fx_begin(): void
```



### fx_end

```nelua
global function fx_end(): void
```



### fx_enable

```nelua
global function fx_enable(pass: cint, enabled: cint): void
```



### fx_enabled

```nelua
global function fx_enabled(pass: cint): cint
```



### fx_enable_all

```nelua
global function fx_enable_all(enabled: cint): void
```



### fx_name

```nelua
global function fx_name(pass: cint): cstring
```



### screenshot

```nelua
global function screenshot(components: cuint): pointer
```

utils

### screenshot_async

```nelua
global function screenshot_async(components: cuint): pointer
```

3 RGB, 4 RGBA, -3 BGR, -4 BGRA

### ddraw_color

```nelua
global function ddraw_color(rgb: cuint): void
```



### ddraw_color_push

```nelua
global function ddraw_color_push(rgb: cuint): void
```



### ddraw_color_pop

```nelua
global function ddraw_color_pop(): void
```



### ddraw_ontop

```nelua
global function ddraw_ontop(enabled: cint): void
```



### ddraw_ontop_push

```nelua
global function ddraw_ontop_push(enabled: cint): void
```



### ddraw_ontop_pop

```nelua
global function ddraw_ontop_pop(): void
```



### ddraw_aabb

```nelua
global function ddraw_aabb(minbb: vec3, maxbb: vec3): void
```



### ddraw_aabb_corners

```nelua
global function ddraw_aabb_corners(minbb: vec3, maxbb: vec3): void
```



### ddraw_arrow

```nelua
global function ddraw_arrow(begin: vec3, _end: vec3): void
```



### ddraw_axis

```nelua
global function ddraw_axis(units: float32): void
```



### ddraw_boid

```nelua
global function ddraw_boid(pos: vec3, dir: vec3): void
```



### ddraw_bone

```nelua
global function ddraw_bone(center: vec3, _end: vec3): void
```



### ddraw_bounds

```nelua
global function ddraw_bounds(points: [8]vec3 <const>): void
```



### ddraw_box

```nelua
global function ddraw_box(c: vec3, extents: vec3): void
```



### ddraw_capsule

```nelua
global function ddraw_capsule(from: vec3, to: vec3, radius: float32): void
```



### ddraw_circle

```nelua
global function ddraw_circle(pos: vec3, n: vec3, radius: float32): void
```



### ddraw_cone

```nelua
global function ddraw_cone(center: vec3, top: vec3, radius: float32): void
```



### ddraw_cube

```nelua
global function ddraw_cube(center: vec3, radius: float32): void
```



### ddraw_cube3

```nelua
global function ddraw_cube3(center: vec3, radius: vec3, M: mat33): void
```



### ddraw_diamond

```nelua
global function ddraw_diamond(from: vec3, to: vec3, size: float32): void
```



### ddraw_frustum

```nelua
global function ddraw_frustum(projview: [16]float32): void
```



### ddraw_ground

```nelua
global function ddraw_ground(scale: float32): void
```



### ddraw_grid

```nelua
global function ddraw_grid(scale: float32): void
```



### ddraw_hexagon

```nelua
global function ddraw_hexagon(pos: vec3, radius: float32): void
```



### ddraw_line

```nelua
global function ddraw_line(from: vec3, to: vec3): void
```



### ddraw_line_dashed

```nelua
global function ddraw_line_dashed(from: vec3, to: vec3): void
```



### ddraw_line_thin

```nelua
global function ddraw_line_thin(from: vec3, to: vec3): void
```



### ddraw_normal

```nelua
global function ddraw_normal(pos: vec3, n: vec3): void
```



### ddraw_pentagon

```nelua
global function ddraw_pentagon(pos: vec3, radius: float32): void
```



### ddraw_plane

```nelua
global function ddraw_plane(p: vec3, n: vec3, scale: float32): void
```



### ddraw_point

```nelua
global function ddraw_point(from: vec3): void
```



### ddraw_position

```nelua
global function ddraw_position(pos: vec3, radius: float32): void
```



### ddraw_position_dir

```nelua
global function ddraw_position_dir(pos: vec3, dir: vec3, radius: float32): void
```



### ddraw_pyramid

```nelua
global function ddraw_pyramid(center: vec3, height: float32, segments: cint): void
```



### ddraw_cylinder

```nelua
global function ddraw_cylinder(center: vec3, height: float32, segments: cint): void
```



### ddraw_sphere

```nelua
global function ddraw_sphere(pos: vec3, radius: float32): void
```



### ddraw_square

```nelua
global function ddraw_square(pos: vec3, radius: float32): void
```



### ddraw_text

```nelua
global function ddraw_text(pos: vec3, scale: float32, text: cstring <const>): void
```



### ddraw_text2d

```nelua
global function ddraw_text2d(pos: vec2, text: cstring <const>): void
```



### ddraw_triangle

```nelua
global function ddraw_triangle(p1: vec3, p2: vec3, p3: vec3): void
```

global function ddraw_text(pos: vec3, scale: float32, ...: cvarargs): void <cimport, nodecl> end
global function ddraw_text2d(pos: vec2, scale: float32, ...: cvarargs): void <cimport, nodecl> end

### ddraw_prism

```nelua
global function ddraw_prism(center: vec3, radius: float32, height: float32, normal: vec3, segments: cint): void
```



### ddraw_demo

```nelua
global function ddraw_demo(): void
```



### ddraw_flush

```nelua
global function ddraw_flush(): void
```



### ddraw_flush_projview

```nelua
global function ddraw_flush_projview(proj: mat44, view: mat44): void
```



### camera_t

```nelua
global camera_t: type = @record {
  view: mat44, proj: mat44,
  position: vec3, up: vec3, look: vec3,         -- position, updir, lookdir
  yaw: float32, pitch: float32, speed: float32, -- mirror_x, mirror_y;
  last_look: vec3, last_move: vec3              -- used for friction and smoothing
}
```



### camera

```nelua
global function camera(): camera_t
```



### camera_teleport

```nelua
global function camera_teleport(cam: *camera_t, px: float32, py: float32, pz: float32): void
```



### camera_move

```nelua
global function camera_move(cam: *camera_t, incx: float32, incy: float32, incz: float32): void
```



### camera_fps

```nelua
global function camera_fps(cam: *camera_t, yaw: float32, pitch: float32): void
```



### camera_orbit

```nelua
global function camera_orbit(cam: *camera_t, yaw: float32, pitch: float32, inc_distance: float32): void
```



### camera_lookat

```nelua
global function camera_lookat(cam: *camera_t, target: vec3): void
```



### camera_enable

```nelua
global function camera_enable(cam: *camera_t): void
```



### camera_get_active

```nelua
global function camera_get_active(): *camera_t
```



### object_t

```nelua
global object_t: type = @record {
  renderbucket: uint64,
  transform: mat44,
  rot: quat,
  sca: vec3, pos: vec3, euler: vec3, pivot: vec3,
  textures: *handle,
  model: model_t,
  bounds: aabb,
  billboard: cuint -- [0..7] x(4),y(2),z(1) masks
}
```



### object

```nelua
global function object(): object_t
```



### object_rotate

```nelua
global function object_rotate(obj: *object_t, euler: vec3): void
```



### object_pivot

```nelua
global function object_pivot(obj: *object_t, euler: vec3): void
```



### object_teleport

```nelua
global function object_teleport(obj: *object_t, pos: vec3): void
```



### object_move

```nelua
global function object_move(obj: *object_t, inc: vec3): void
```



### object_position

```nelua
global function object_position(obj: *object_t): vec3
```



### object_scale

```nelua
global function object_scale(obj: *object_t, sca: vec3): void
```



### object_model

```nelua
global function object_model(obj: *object_t, model: model_t): void
```



### object_diffuse

```nelua
global function object_diffuse(obj: *object_t, tex: texture_t): void
```



### object_diffuse_push

```nelua
global function object_diffuse_push(obj: *object_t, tex: texture_t): void
```



### object_diffuse_pop

```nelua
global function object_diffuse_pop(obj: *object_t): void
```



### object_billboard

```nelua
global function object_billboard(obj: *object_t, mode: cuint): void
```



### SCENE_FLAGS

```nelua
global SCENE_FLAGS: type = @enum(cint) {
  SCENE_WIREFRAME = 1,
  SCENE_CULLFACE = 2,
  SCENE_BACKGROUND = 4,
  SCENE_FOREGROUND = 8
}
```



### scene_t

```nelua
global scene_t: type = @record {
  program: handle,
  objs: *[0]object_t,
  
  -- special objects below:
  skybox: skybox_t,
  u_coefficients_sh: cint
}
```



### scene_push

```nelua
global function scene_push(): *scene_t
```



### scene_pop

```nelua
global function scene_pop(): void
```



### scene_get_active

```nelua
global function scene_get_active(): *scene_t
```



### scene_merge

```nelua
global function scene_merge(source: cstring <const>): cint
```



### scene_render

```nelua
global function scene_render(flags: cint): void
```



### scene_spawn

```nelua
global function scene_spawn(): *object_t
```



### scene_count

```nelua
global function scene_count(): cuint
```



### scene_index

```nelua
global function scene_index(index: cuint): *object_t
```



### script_init

```nelua
global function script_init(): void
```

script

### script_run

```nelua
global function script_run(script: cstring <const>): void
```



### script_runfile

```nelua
global function script_runfile(pathfile: cstring <const>): void
```



### script_bind_class

```nelua
global function script_bind_class(objname: cstring <const>, num_methods: cint, c_names: *[0]cstring <const>, c_functions: *[0]pointer): void
```



### script_bind_function

```nelua
global function script_bind_function(c_name: cstring <const>, c_function: pointer): void
```



### script_call

```nelua
global function script_call(lua_function: cstring <const>): void
```



### tempvl

```nelua
global function tempvl(fmt: cstring <const>, l: cvalist): cstring
```

string: temporary api (stack)

### tempva

```nelua
global function tempva(fmt: cstring <const>, ...: cvarargs): cstring
```



### va

```nelua
global function va(...: cvarargs): void
```



### strcatf

```nelua
global function strcatf(s: *[0]cstring, fmt: cstring <const>, ...: cvarargs): cstring
```

global function strcatf(s: *[0]cstring, buf: cstring <const>): cstring <cimport, nodecl> end

### stringf

```nelua
global function stringf(fmt: cstring <const>, ...: cvarargs): cstring
```



### strtok_s

```nelua
global function strtok_s(str: cstring, delimiters: cstring <const>, context: *[0]cstring): cstring
```



### strtok_r

```nelua
global function strtok_r(str: cstring, delimiters: cstring <const>, context: *[0]cstring): cstring
```



### strmatch

```nelua
global function strmatch(s: cstring <const>, wildcard: cstring <const>): cint
```



### strmatchi

```nelua
global function strmatchi(s: cstring <const>, wildcard: cstring <const>): cint
```



### strcmp_qsort

```nelua
global function strcmp_qsort(a: pointer <const>, b: pointer <const>): cint
```



### strcmpi_qsort

```nelua
global function strcmpi_qsort(a: pointer <const>, b: pointer <const>): cint
```



### strbeg

```nelua
global function strbeg(src: cstring <const>, sub: cstring <const>): boolean
```

returns true if both strings match at beginning. case sensitive

### strend

```nelua
global function strend(src: cstring <const>, sub: cstring <const>): boolean
```

returns true if both strings match at end. case sensitive

### strbegi

```nelua
global function strbegi(src: cstring <const>, sub: cstring <const>): boolean
```

returns true if both strings match at beginning. case insensitive

### strendi

```nelua
global function strendi(src: cstring <const>, sub: cstring <const>): boolean
```

returns true if both strings match at end. case insensitive

### strstri

```nelua
global function strstri(src: cstring <const>, sub: cstring <const>): cstring
```

returns find first substring in string. case insensitive.

### strupper

```nelua
global function strupper(str: cstring <const>): cstring
```



### strlower

```nelua
global function strlower(str: cstring <const>): cstring
```



### strrepl

```nelua
global function strrepl(copy: *[0]cstring, target: cstring <const>, replace: cstring <const>): cstring
```

replace any 'target' as 'repl' in 'copy'. 'copy' may change (heap). returns 'copy'

### strswap

```nelua
global function strswap(copy: cstring, target: cstring <const>, replace: cstring <const>): cstring
```

replaced inline only if repl is shorter than target. no allocations.

### strcut

```nelua
global function strcut(copy: cstring, target: cstring <const>): cstring
```

remove any 'target' in 'copy'. returns 'copy'

### strlerp

```nelua
global function strlerp(numpairs: cuint, pairs: *[0]cstring <const>, str: cstring <const>): cstring
```

using key-value pairs, null-terminated

### strlcat

```nelua
global function strlcat(dst: cstring, src: cstring <const>, dstcap: csize): csize
```

concat 2 strings safely. always NUL terminates. may truncate.

### strlcpy

```nelua
global function strlcpy(dst: cstring, src: cstring <const>, dstcap: csize): csize
```

copy 2 strings safely. always NUL terminates. truncates if retval>=dstcap

### strsplit

```nelua
global function strsplit(string: cstring <const>, delimiters: cstring <const>): *[0]cstring
```

split `string` after any of `delimiters` character is found.
returns temporary array of split strings. see: strjoin

> array(char*) tokens = strsplit("hello! world!", " !"); => [0]="hello",[1]="world",

### strjoin

```nelua
global function strjoin(list: *[0]cstring, separator: cstring <const>): cstring
```

concatenate all elements within `list`, with `separator` string in between.
returns: temporary joint string. see: strsplit

> array(char*) tokens = strsplit("hello! world!", " !"); => [0]="hello",[1]="world",
> char *joint = strjoin(tokens, "+");                    => joint="hello+world"

### string8

```nelua
global function string8(str: *[0]wchar_t): cstring
```

convert from wchar16(win) to utf8/ascii

### string32

```nelua
global function string32(utf8: cstring <const>): *[0]uint32
```

convert from utf8 to utf32

### argc

```nelua
global function argc(): cint
```

system

### argv

```nelua
global function argv(a: cint): cstring
```



### flag

```nelua
global function flag(commalist: cstring <const>): cint
```



### option

```nelua
global function option(commalist: cstring <const>, defaults: cstring <const>): cstring
```

arg

### optioni

```nelua
global function optioni(commalist: cstring <const>, defaults: cint): cint
```

arg=key or --arg key

### optionf

```nelua
global function optionf(commalist: cstring <const>, defaults: float32): float32
```

argvi() ?

### os_exec_output

```nelua
global function os_exec_output(): cstring
```



### os_exec

```nelua
global function os_exec(...: cvarargs): cint
```

global function os_exec(command: cstring <const>): cint <cimport, nodecl> end -- legacy

### os_exec_

```nelua
global function os_exec_(rc: *cint, ...: cvarargs): cstring
```

global function os_exec_(retvalue: *cint, command: cstring <const>): cstring <cimport, nodecl> end -- new

### tty_color

```nelua
global function tty_color(color: cuint): void
```



### tty_reset

```nelua
global function tty_reset(): void
```



### cpu_cores

```nelua
global function cpu_cores(): cint
```



### battery

```nelua
global function battery(): cint
```

return battery level [1..100]. also positive if charging (+), negative if discharging (-), and 0 if no battery is present.

### app_name

```nelua
global function app_name(): cstring
```



### app_path

```nelua
global function app_path(): cstring
```



### app_cache

```nelua
global function app_cache(): cstring
```



### app_temp

```nelua
global function app_temp(): cstring
```



### date

```nelua
global function date(): uint64
```



### date_epoch

```nelua
global function date_epoch(): uint64
```

YYYYMMDDhhmmss

### date_string

```nelua
global function date_string(): float64
```

linux epoch

### time_hh

```nelua
global function time_hh(): float64
```

"YYYY-MM-DD hh:mm:ss"

### time_mm

```nelua
global function time_mm(): float64
```



### time_ss

```nelua
global function time_ss(): float64
```



### time_ms

```nelua
global function time_ms(): uint64
```



### time_us

```nelua
global function time_us(): uint64
```



### time_ns

```nelua
global function time_ns(): uint64
```



### sleep_ss

```nelua
global function sleep_ss(ss: float64): void
```



### sleep_ms

```nelua
global function sleep_ms(ms: float64): void
```



### sleep_us

```nelua
global function sleep_us(us: float64): void
```



### sleep_ns

```nelua
global function sleep_ns(ns: float64): void
```



### callstack

```nelua
global function callstack(traces: cint): cstring
```



### callstackf

```nelua
global function callstackf(fp: *FILE, traces: cint): cint
```

write callstack into a temporary string. do not delete it.

### die

```nelua
global function die(message: cstring <const>): void
```



### alert

```nelua
global function alert(message: cstring <const>): void
```



### hexdump

```nelua
global function hexdump(ptr: pointer <const>, len: cuint): void
```



### hexdumpf

```nelua
global function hexdumpf(fp: *FILE, ptr: pointer <const>, len: cuint, width: cint): void
```



### breakpoint

```nelua
global function breakpoint(reason: cstring <const>): void
```



### has_debugger

```nelua
global function has_debugger(): boolean
```



### lil16

```nelua
global function lil16(n: uint16): uint16
```



### lil32

```nelua
global function lil32(n: uint32): uint16
```

swap16 as lil

### lil32f

```nelua
global function lil32f(n: float32): float32
```

swap32 as lil

### lil64

```nelua
global function lil64(n: uint64): uint64
```

swap32 as lil

### lil64f

```nelua
global function lil64f(n: float64): float64
```

swap64 as lil

### big16

```nelua
global function big16(n: uint16): uint16
```

swap64 as lil

### big32

```nelua
global function big32(n: uint32): uint16
```

swap16 as big

### big32f

```nelua
global function big32f(n: float32): float32
```

swap32 as big

### big64

```nelua
global function big64(n: uint64): uint64
```

swap32 as big

### big64f

```nelua
global function big64f(n: float64): float64
```

swap64 as big

### lil16p

```nelua
global function lil16p(n: pointer, sz: cint): *uint16
```



### lil32p

```nelua
global function lil32p(n: pointer, sz: cint): *uint16
```



### lil32pf

```nelua
global function lil32pf(n: pointer, sz: cint): *float32
```



### lil64p

```nelua
global function lil64p(n: pointer, sz: cint): *uint64
```



### lil64pf

```nelua
global function lil64pf(n: pointer, sz: cint): *float64
```



### big16p

```nelua
global function big16p(n: pointer, sz: cint): *uint16
```



### big32p

```nelua
global function big32p(n: pointer, sz: cint): *uint16
```



### big32pf

```nelua
global function big32pf(n: pointer, sz: cint): *float32
```



### big64p

```nelua
global function big64p(n: pointer, sz: cint): *uint64
```



### big64pf

```nelua
global function big64pf(n: pointer, sz: cint): *float64
```



### PANIC

```nelua
global function PANIC(...: cvarargs): cint
```

global function PANIC(error: cstring <const>, file: cstring <const>, line: cint): cint <cimport, nodecl> end

### PRINTF

```nelua
global function PRINTF(...: cvarargs): cint
```

global function PRINTF(text: cstring <const>, stack: cstring <const>, file: cstring <const>, line: cint, function: cstring <const>): cint <cimport, nodecl> end

### ui_notify

```nelua
global function ui_notify(title: cstring <const>, body: cstring <const>): cint
```

ui

### ui_window

```nelua
global function ui_window(title: cstring <const>, enabled: *cint): cint
```



### ui_panel

```nelua
global function ui_panel(title: cstring <const>, flags: cint): cint
```



### ui_collapse

```nelua
global function ui_collapse(label: cstring <const>, id: *cstring <const>): cint
```



### ui_context

```nelua
global function ui_context(): cint
```



### ui_section

```nelua
global function ui_section(title: cstring <const>): cint
```



### ui_int

```nelua
global function ui_int(label: cstring <const>, value: *cint): cint
```



### ui_bool

```nelua
global function ui_bool(label: cstring <const>, value: *boolean): cint
```



### ui_short

```nelua
global function ui_short(label: cstring <const>, value: *cshort): cint
```



### ui_float

```nelua
global function ui_float(label: cstring <const>, value: *float32): cint
```



### ui_float2

```nelua
global function ui_float2(label: cstring <const>, value: [2]float32): cint
```



### ui_float3

```nelua
global function ui_float3(label: cstring <const>, value: [3]float32): cint
```



### ui_float4

```nelua
global function ui_float4(label: cstring <const>, value: [4]float32): cint
```



### ui_string

```nelua
global function ui_string(label: cstring <const>, buffer: cstring, buflen: cint): cint
```



### ui_color3

```nelua
global function ui_color3(label: cstring <const>, color3: *[0]float32): cint
```



### ui_color3f

```nelua
global function ui_color3f(label: cstring <const>, color3: *[0]float32): cint
```

[0..255]

### ui_color4

```nelua
global function ui_color4(label: cstring <const>, color4: *[0]float32): cint
```

[0..1]

### ui_color4f

```nelua
global function ui_color4f(label: cstring <const>, color4: *[0]float32): cint
```

[0..255]

### ui_button

```nelua
global function ui_button(label: cstring <const>): cint
```

[0..1]

### ui_buttons

```nelua
global function ui_buttons(buttons: cint, ...: cvarargs): cint
```



### ui_button_transparent

```nelua
global function ui_button_transparent(label: cstring <const>): cint
```



### ui_toolbar

```nelua
global function ui_toolbar(icons: cstring <const>): cint
```



### ui_submenu

```nelua
global function ui_submenu(options: cstring <const>): cint
```

int clicked_icon = ui_toolbar( ICON_1 ";" ICON_2 ";" ICON_3 ";" ICON_4 );

### ui_browse

```nelua
global function ui_browse(outfile: *cstring <const>, inlined: *boolean): cint
```

int choice = ui_submenu("A;B;C;D");

### ui_toggle

```nelua
global function ui_toggle(label: cstring <const>, value: *boolean): cint
```



### ui_dialog

```nelua
global function ui_dialog(title: cstring <const>, text: cstring <const>, choices: cint, show: *boolean): cint
```



### ui_list

```nelua
global function ui_list(label: cstring <const>, items: *[0]cstring <const>, num_items: cint, selector: *cint): cint
```



### ui_radio

```nelua
global function ui_radio(label: cstring <const>, items: *[0]cstring <const>, num_items: cint, selector: *cint): cint
```



### ui_image

```nelua
global function ui_image(label: cstring <const>, id: handle, w: cuint, h: cuint): cint
```



### ui_colormap

```nelua
global function ui_colormap(map_name: cstring <const>, cm: *colormap_t): cint
```

(w,h) can be 0

### ui_separator

```nelua
global function ui_separator(): cint
```

returns num member changed: 1 for color, 2 for texture map

### ui_bits8

```nelua
global function ui_bits8(label: cstring <const>, bits: *[0]uint8): cint
```



### ui_bits16

```nelua
global function ui_bits16(label: cstring <const>, bits: *[0]uint16): cint
```



### ui_console

```nelua
global function ui_console(): cint
```



### ui_clampf

```nelua
global function ui_clampf(label: cstring <const>, value: *float32, minf: float32, maxf: float32): cint
```



### ui_label

```nelua
global function ui_label(label: cstring <const>): cint
```



### ui_label2

```nelua
global function ui_label2(label: cstring <const>, caption: cstring <const>): cint
```



### ui_slider

```nelua
global function ui_slider(label: cstring <const>, value: *float32): cint
```



### ui_slider2

```nelua
global function ui_slider2(label: cstring <const>, value: *float32, caption: cstring <const>): cint
```



### ui_const_bool

```nelua
global function ui_const_bool(label: cstring <const>, value: boolean <const>): cint
```



### ui_const_float

```nelua
global function ui_const_float(label: cstring <const>, value: float32 <const>): cint
```



### ui_const_string

```nelua
global function ui_const_string(label: cstring <const>, value: cstring <const>): cint
```



### ui_context_end

```nelua
global function ui_context_end(): cint
```

global function ui_const_stringf(label: cstring <const>, ...: cvarargs): cint <cimport, nodecl> end

### ui_collapse_clicked

```nelua
global function ui_collapse_clicked(): cint
```



### ui_collapse_end

```nelua
global function ui_collapse_end(): cint
```



### ui_panel_end

```nelua
global function ui_panel_end(): cint
```



### ui_window_end

```nelua
global function ui_window_end(): cint
```



### ui_show

```nelua
global function ui_show(panel_or_window_title: cstring <const>, enabled: cint): cint
```



### ui_visible

```nelua
global function ui_visible(panel_or_window_title: cstring <const>): cint
```



### ui_has_menubar

```nelua
global function ui_has_menubar(): cint
```



### ui_menu

```nelua
global function ui_menu(items: cstring <const>): cint
```



### ui_item

```nelua
global function ui_item(): cint
```

semicolon- or comma-separated items

### ui_popups

```nelua
global function ui_popups(): cint
```



### ui_hover

```nelua
global function ui_hover(): cint
```



### ui_active

```nelua
global function ui_active(): cint
```



### ui_demo

```nelua
global function ui_demo(): cint
```



### VIDEO_FLAGS

```nelua
global VIDEO_FLAGS: type = @enum(cint) {
  VIDEO_YCBCR = 0,
  VIDEO_RGB = 1,
  
  VIDEO_AUDIO = 0,
  VIDEO_NO_AUDIO = 2
}
```



### video_t

```nelua
global video_t: type = @record {}
```



### video

```nelua
global function video(filename: cstring <const>, flags: cint): *video_t
```



### video_decode

```nelua
global function video_decode(v: *video_t): *texture_t
```



### video_textures

```nelua
global function video_textures(v: *video_t): *[0]texture_t
```

decodes next frame, returns associated texture(s)

### video_has_finished

```nelua
global function video_has_finished(v: *video_t): cint
```

returns last video textures. does not perform any decoding.

### video_duration

```nelua
global function video_duration(v: *video_t): float64
```



### video_seek

```nelua
global function video_seek(v: *video_t, seek_to: float64): cint
```



### video_position

```nelua
global function video_position(v: *video_t): float64
```



### video_pause

```nelua
global function video_pause(v: *video_t, pause: boolean): void
```



### video_is_paused

```nelua
global function video_is_paused(v: *video_t): boolean
```



### video_destroy

```nelua
global function video_destroy(v: *video_t): void
```



### record_start

```nelua
global function record_start(outfile_mp4: cstring <const>): boolean
```

video recorder

### record_active

```nelua
global function record_active(): boolean
```



### record_stop

```nelua
global function record_stop(): void
```



### WINDOW_FLAGS

```nelua
global WINDOW_FLAGS: type = @enum(cint) {
  WINDOW_MSAA2 = 0x02,
  WINDOW_MSAA4 = 0x04,
  WINDOW_MSAA8 = 0x08,

  WINDOW_SQUARE = 0x20,
  WINDOW_PORTRAIT = 0x40,
  WINDOW_LANDSCAPE = 0x80,
  WINDOW_ASPECT = 0x100, -- keep aspect
  WINDOW_FIXED = 0x200,  -- disable resizing

  WINDOW_VSYNC = 0,
  WINDOW_VSYNC_ADAPTIVE = 0x1000,
  WINDOW_VSYNC_DISABLED = 0x2000,
}
```

window

### window_create

```nelua
global function window_create(scale: float32, flags: cuint): boolean
```



### window_create_from_handle

```nelua
global function window_create_from_handle(handle: pointer, scale: float32, flags: cuint): boolean
```



### window_reload

```nelua
global function window_reload(): void
```



### window_frame_begin

```nelua
global function window_frame_begin(): cint
```



### window_frame_end

```nelua
global function window_frame_end(): void
```



### window_frame_swap

```nelua
global function window_frame_swap(): void
```



### window_swap

```nelua
global function window_swap(): cint
```



### window_loop

```nelua
global function window_loop(func: function(loopArg: pointer): void, loopArg: pointer): void
```



### window_loop_exit

```nelua
global function window_loop_exit(): void
```

run main loop function continuously (emscripten only)

### window_title

```nelua
global function window_title(title: cstring <const>): void
```



### window_icon

```nelua
global function window_icon(file_icon: cstring <const>): void
```



### window_canvas

```nelua
global function window_canvas(): vec2
```



### window_handle

```nelua
global function window_handle(): pointer
```



### window_stats

```nelua
global function window_stats(): cstring
```



### window_frame

```nelua
global function window_frame(): uint64
```



### window_width

```nelua
global function window_width(): cint
```



### window_height

```nelua
global function window_height(): cint
```



### window_time

```nelua
global function window_time(): float64
```



### window_delta

```nelua
global function window_delta(): float64
```



### window_focus

```nelua
global function window_focus(): void
```



### window_has_focus

```nelua
global function window_has_focus(): cint
```

window attribute api using haz catz language for now

### window_fullscreen

```nelua
global function window_fullscreen(enabled: cint): void
```



### window_has_fullscreen

```nelua
global function window_has_fullscreen(): cint
```



### window_cursor

```nelua
global function window_cursor(visible: cint): void
```



### window_has_cursor

```nelua
global function window_has_cursor(): cint
```



### window_pause

```nelua
global function window_pause(): void
```



### window_has_pause

```nelua
global function window_has_pause(): cint
```



### window_visible

```nelua
global function window_visible(visible: cint): void
```



### window_has_visible

```nelua
global function window_has_visible(): cint
```



### window_aspect

```nelua
global function window_aspect(): float64
```



### window_aspect_lock

```nelua
global function window_aspect_lock(numer: cuint, denom: cuint): void
```



### window_aspect_unlock

```nelua
global function window_aspect_unlock(): void
```



### window_fps

```nelua
global function window_fps(): float64
```



### window_fps_target

```nelua
global function window_fps_target(): float64
```



### window_fps_lock

```nelua
global function window_fps_lock(fps: float32): void
```



### window_fps_unlock

```nelua
global function window_fps_unlock(): void
```



### window_screenshot

```nelua
global function window_screenshot(outfile_png: cstring <const>): void
```



### window_record

```nelua
global function window_record(outfile_mp4: cstring <const>): cint
```



---
