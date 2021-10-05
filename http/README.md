# API

## http

https://github.com/mattiasgustavsson/libs/raw/main/http.h

### http_status_t

```nelua
global http_status_t: type = @enum(cint) {
  HTTP_STATUS_PENDING = 0,
  HTTP_STATUS_COMPLETED,
  HTTP_STATUS_FAILED
}
```



### http_t

```nelua
global http_t: type = @record {
  status: http_status_t,
  status_code: cint,
  reason_phrase: cstring,
  content_type: cstring,
  response_size: csize,
  response_data: pointer
}
```



### http_get

```nelua
global function http_get(url: cstring <const>, memctx: pointer): *http_t
```

Initiates a http GET request with the specified url. `url` is a zero terminated string containing the request location,
just like you would type it in a browser, for example `http://www.mattiasgustavsson.com:80/http_test.txt`. `memctx` is a
pointer to user defined data which will be passed through to the custom HTTP_MALLOC/HTTP_FREE calls. It can be `nil` if
no user defined data is needed. Returns a `http_t` instance, which needs to be passed to `http_process` to process the
request. When the request is finished (or have failed), the returned `http_t` instance needs to be released by calling
`http_release`. If the request was invalid, `http_get` returns `nil`.

### http_post

```nelua
global function http_post(url: cstring <const>, data: pointer <const>, size: csize, memctx: pointer): *http_t
```

Initiates a http POST request with the specified url. `url` is a zero terminated string containing the request location,
just like you would type it in a browser, for example `http://www.mattiasgustavsson.com:80/http_test.txt`. `data` is a
pointer to the data to be sent along as part of the request, and `size` is the number of bytes to send. `memctx` is a
pointer to user defined data which will be passed through to the custom HTTP_MALLOC/HTTP_FREE calls. It can be `nil` if
no user defined data is needed. Returns a `http_t` instance, which needs to be passed to `http_process` to process the
request. When the request is finished (or have failed), the returned `http_t` instance needs to be released by calling
`http_release`. If the request was invalid, `http_post` returns `nil`.

### http_process

```nelua
global function http_process(http: *http_t): http_status_t
```

`http.h` uses non-blocking sockets, so after a request have been made by calling either `http_get` or `http_post`, you
have to keep calling `http_process` for as long as it returns `HTTP_STATUS_PENDING`. You can call it from a loop which
does other work too, for example from inside a game loop or from a loop which calls `http_process` on multiple requests.
If the request fails, `http_process` returns `HTTP_STATUS_FAILED`, and the fields `status_code` and `reason_phrase` may
contain more details (for example, status code can be 404 if the requested resource was not found on the server). If the
request completes successfully, it returns `HTTP_STATUS_COMPLETED`. In this case, the `http_t` instance will contain
details about the result. `status_code` and `reason_phrase` contains the details about the result, as specified in the
HTTP protocol. `content_type` contains the MIME type for the returns resource, for example `text/html` for a normal web
page. `response_data` is the pointer to the received data, and `resonse_size` is the number of bytes it contains. In the
case when the response data is in text format, http.h ensures there is a zero terminator placed immediately after the
response data block, so it is safe to interpret the resonse data as a `char*`. Note that the data size in this case will
be the length of the data without the additional zero terminator.

### http_release

```nelua
global function http_release(http: *http_t): void
```

Releases the resources acquired by `http_get` or `http_post`. Should be call when you are finished with the request.

---
