# API

## mathkit

Resources:
1. https://glmatrix.net
2. https://github.com/raysan5/raylib/blob/master/src/raymath.h

### vec2

```nelua
global vec2: type = @record { x: number, y: number }
```



### vec3

```nelua
global vec3: type = @record { x: number, y: number, z: number }
```



### vec4

```nelua
global vec4: type = @record { x: number, y: number, z: number, w: number }
```



### quat

```nelua
global quat: type = @record { data: [4]number }
```



### quat2

```nelua
global quat2: type = @record { data: [8]number }
```



### mat2

```nelua
global mat2: type = @record { data: [4]number }
```



### mat2d

```nelua
global mat2d: type = @record { data: [6]number }
```



### mat3

```nelua
global mat3: type = @record { data: [9]number }
```



### mat4

```nelua
global mat4: type = @record { data: [16]number }
```



### mathkit

```nelua
global mathkit = @record {}
```



### mathkit.vec2

```nelua
global mathkit.vec2 = @record {}
```



### mathkit.vec3

```nelua
global mathkit.vec3 = @record {}
```



### mathkit.vec4

```nelua
global mathkit.vec4 = @record {}
```



### mathkit.quat

```nelua
global mathkit.quat = @record {}
```



### mathkit.quat2

```nelua
global mathkit.quat2 = @record {}
```



### mathkit.mat2

```nelua
global mathkit.mat2 = @record {}
```



### mathkit.mat2d

```nelua
global mathkit.mat2d = @record {}
```



### mathkit.mat3

```nelua
global mathkit.mat3 = @record {}
```



### mathkit.mat4

```nelua
global mathkit.mat4 = @record {}
```



### mathkit.clamp

```nelua
function mathkit.clamp(value: number, min: number, max: number): number
```


module: util

### mathkit.lerp

```nelua
function mathkit.lerp(start: number, endval: number, amount: number): number
```



### mathkit.norm

```nelua
function mathkit.norm(value: number, start: number, endval: number): number
```



### mathkit.remap

```nelua
function mathkit.remap(value: number, inputStart: number, inputEnd: number, outputStart: number, outputEnd: number): number
```



### mathkit.vec2.create

```nelua
function mathkit.vec2.create(xpos: number, ypos: number): vec2
```


module: init

### mathkit.vec3.create

```nelua
function mathkit.vec3.create(xpos: number, ypos: number, zpos: number): vec3
```



### mathkit.vec4.create

```nelua
function mathkit.vec4.create(xpos: number, ypos: number, zpos: number, wpos: number): vec4
```



### mathkit.quat.create

```nelua
function mathkit.quat.create(m: [4]number): quat
```



### mathkit.quat2.create

```nelua
function mathkit.quat2.create(m: [8]number): quat2
```



### mathkit.mat2.create

```nelua
function mathkit.mat2.create(m: [4]number): mat2
```



### mathkit.mat2d.create

```nelua
function mathkit.mat2d.create(m: [6]number): mat2d
```



### mathkit.mat3.create

```nelua
function mathkit.mat3.create(m: [9]number): mat3
```



### mathkit.mat4.create

```nelua
function mathkit.mat4.create(m: [16]number): mat4
```



### vec2.__lt

```nelua
function vec2.__lt(v1: vec2, v2: vec2): boolean
```


module: meta (vec2)

### vec2.__le

```nelua
function vec2.__le(v1: vec2, v2: vec2): boolean
```



### vec2.__eq

```nelua
function vec2.__eq(v1: vec2, v2: vec2): boolean
```



### vec2.__add

```nelua
function vec2.__add(v1: vec2, v2: vec2): vec2
```



### vec2.__sub

```nelua
function vec2.__sub(v1: vec2, v2: vec2): vec2
```



### vec2.__mul

```nelua
function vec2.__mul(v1: vec2, v2: vec2): vec2
```



### vec2.__div

```nelua
function vec2.__div(v1: vec2, v2: vec2): vec2
```



### vec2.__idiv

```nelua
function vec2.__idiv(v1: vec2, v2: vec2): vec2
```



### vec2.__tdiv

```nelua
function vec2.__tdiv(v1: vec2, v2: vec2): vec2
```



### vec2.__mod

```nelua
function vec2.__mod(v1: vec2, v2: vec2): vec2
```



### vec2.__tmod

```nelua
function vec2.__tmod(v1: vec2, v2: vec2): vec2
```



### vec2.__pow

```nelua
function vec2.__pow(v: vec2, n: number): vec2
```



### vec2:__unm

```nelua
function vec2:__unm(): vec2
```



### vec2:__len

```nelua
function vec2:__len(): number
```



### vec2:__tostring

```nelua
function vec2:__tostring(): string
```



### vec3.__lt

```nelua
function vec3.__lt(v1: vec3, v2: vec3): boolean
```


module: meta (vec3)

### vec3.__le

```nelua
function vec3.__le(v1: vec3, v2: vec3): boolean
```



### vec3.__eq

```nelua
function vec3.__eq(v1: vec3, v2: vec3): boolean
```



### vec3.__add

```nelua
function vec3.__add(v1: vec3, v2: vec3): vec3
```



### vec3.__sub

```nelua
function vec3.__sub(v1: vec3, v2: vec3): vec3
```



### vec3.__mul

```nelua
function vec3.__mul(v1: vec3, v2: vec3): vec3
```



### vec3.__div

```nelua
function vec3.__div(v1: vec3, v2: vec3): vec3
```



### vec3.__idiv

```nelua
function vec3.__idiv(v1: vec3, v2: vec3): vec3
```



### vec3.__tdiv

```nelua
function vec3.__tdiv(v1: vec3, v2: vec3): vec3
```



### vec3.__mod

```nelua
function vec3.__mod(v1: vec3, v2: vec3): vec3
```



### vec3.__tmod

```nelua
function vec3.__tmod(v1: vec3, v2: vec3): vec3
```



### vec3.__pow

```nelua
function vec3.__pow(v: vec3, n: number): vec3
```



### vec3:__unm

```nelua
function vec3:__unm(): vec3
```



### vec3:__len

```nelua
function vec3:__len(): number
```



### vec3:__tostring

```nelua
function vec3:__tostring(): string
```



### vec4.__lt

```nelua
function vec4.__lt(v1: vec4, v2: vec4): boolean
```


module: meta (vec4)

### vec4.__le

```nelua
function vec4.__le(v1: vec4, v2: vec4): boolean
```



### vec4.__eq

```nelua
function vec4.__eq(v1: vec4, v2: vec4): boolean
```



### vec4.__add

```nelua
function vec4.__add(v1: vec4, v2: vec4): vec4
```



### vec4.__sub

```nelua
function vec4.__sub(v1: vec4, v2: vec4): vec4
```



### vec4.__mul

```nelua
function vec4.__mul(v1: vec4, v2: vec4): vec4
```



### vec4.__div

```nelua
function vec4.__div(v1: vec4, v2: vec4): vec4
```



### vec4.__idiv

```nelua
function vec4.__idiv(v1: vec4, v2: vec4): vec4
```



### vec4.__tdiv

```nelua
function vec4.__tdiv(v1: vec4, v2: vec4): vec4
```



### vec4.__mod

```nelua
function vec4.__mod(v1: vec4, v2: vec4): vec4
```



### vec4.__tmod

```nelua
function vec4.__tmod(v1: vec4, v2: vec4): vec4
```



### vec4.__pow

```nelua
function vec4.__pow(v: vec4, n: number): vec4
```



### vec4:__unm

```nelua
function vec4:__unm(): vec4
```



### vec4:__len

```nelua
function vec4:__len(): number
```



### vec4:__tostring

```nelua
function vec4:__tostring(): string
```



### quat.__index

```nelua
function quat.__index(q: quat, i: uinteger): number
```


module: meta (quat)

### quat.__atindex

```nelua
function quat.__atindex(q: quat, i: uinteger): number
```



### quat.__lt

```nelua
function quat.__lt(q1: quat, q2: quat): boolean
```



### quat.__le

```nelua
function quat.__le(q1: quat, q2: quat): boolean
```



### quat.__eq

```nelua
function quat.__eq(q1: quat, q2: quat): boolean
```



### quat.__add

```nelua
function quat.__add(q1: quat, q2: quat): quat
```



### quat.__sub

```nelua
function quat.__sub(q1: quat, q2: quat): quat
```



### quat.__mul

```nelua
function quat.__mul(q1: quat, q2: quat): quat
```



### quat.__div

```nelua
function quat.__div(q1: quat, q2: quat): quat
```



### quat.__idiv

```nelua
function quat.__idiv(q1: quat, q2: quat): quat
```



### quat.__tdiv

```nelua
function quat.__tdiv(q1: quat, q2: quat): quat
```



### quat.__mod

```nelua
function quat.__mod(q1: quat, q2: quat): quat
```



### quat.__tmod

```nelua
function quat.__tmod(q1: quat, q2: quat): quat
```



### quat:__unm

```nelua
function quat:__unm(): quat
```



### quat:__len

```nelua
function quat:__len(): number
```



### quat:__tostring

```nelua
function quat:__tostring(): string
```



### quat2.__index

```nelua
function quat2.__index(q: quat2, i: uinteger): number
```


module: meta (quat2)

### quat2.__atindex

```nelua
function quat2.__atindex(q: quat2, i: uinteger): number
```



### quat2.__lt

```nelua
function quat2.__lt(q1: quat2, q2: quat2): boolean
```



### quat2.__le

```nelua
function quat2.__le(q1: quat2, q2: quat2): boolean
```



### quat2.__eq

```nelua
function quat2.__eq(q1: quat2, q2: quat2): boolean
```



### quat2.__add

```nelua
function quat2.__add(q1: quat2, q2: quat2): quat2
```



### quat2.__sub

```nelua
function quat2.__sub(q1: quat2, q2: quat2): quat2
```



### quat2.__mul

```nelua
function quat2.__mul(q1: quat2, q2: quat2): quat2
```



### quat2.__div

```nelua
function quat2.__div(q1: quat2, q2: quat2): quat2
```



### quat2.__idiv

```nelua
function quat2.__idiv(q1: quat2, q2: quat2): quat2
```



### quat2.__tdiv

```nelua
function quat2.__tdiv(q1: quat2, q2: quat2): quat2
```



### quat2.__mod

```nelua
function quat2.__mod(q1: quat2, q2: quat2): quat2
```



### quat2.__tmod

```nelua
function quat2.__tmod(q1: quat2, q2: quat2): quat2
```



### quat2.__pow

```nelua
function quat2.__pow(q: quat2, n: number): quat2
```



### quat2:__unm

```nelua
function quat2:__unm(): quat2
```



### quat2:__len

```nelua
function quat2:__len(): number
```



### quat2:__tostring

```nelua
function quat2:__tostring(): string
```



### mat2.__index

```nelua
function mat2.__index(m: mat2, i: uinteger): number
```


module: meta (mat2)

### mat2.__atindex

```nelua
function mat2.__atindex(m: mat2, i: uinteger): number
```



### mat2.__lt

```nelua
function mat2.__lt(m1: mat2, m2: mat2): boolean
```



### mat2.__le

```nelua
function mat2.__le(m1: mat2, m2: mat2): boolean
```



### mat2.__eq

```nelua
function mat2.__eq(m1: mat2, m2: mat2): boolean
```



### mat2.__add

```nelua
function mat2.__add(m1: mat2, m2: mat2): mat2
```



### mat2.__sub

```nelua
function mat2.__sub(m1: mat2, m2: mat2): mat2
```



### mat2.__mul

```nelua
function mat2.__mul(m1: mat2, m2: mat2): mat2
```



### mat2:__unm

```nelua
function mat2:__unm(): mat2
```



### mat2:__tostring

```nelua
function mat2:__tostring(): string
```



### mat2d.__index

```nelua
function mat2d.__index(m: mat2d, i: uinteger): number
```


module: meta (mat2d)

### mat2d.__atindex

```nelua
function mat2d.__atindex(m: mat2d, i: uinteger): number
```



### mat2d.__lt

```nelua
function mat2d.__lt(m1: mat2d, m2: mat2d): boolean
```



### mat2d.__le

```nelua
function mat2d.__le(m1: mat2d, m2: mat2d): boolean
```



### mat2d.__eq

```nelua
function mat2d.__eq(m1: mat2d, m2: mat2d): boolean
```



### mat2d.__add

```nelua
function mat2d.__add(m1: mat2d, m2: mat2d): mat2d
```



### mat2d.__sub

```nelua
function mat2d.__sub(m1: mat2d, m2: mat2d): mat2d
```



### mat2d.__mul

```nelua
function mat2d.__mul(m1: mat2d, m2: mat2d): mat2d
```



### mat2d:__unm

```nelua
function mat2d:__unm(): mat2d
```



### mat2d:__tostring

```nelua
function mat2d:__tostring(): string
```



### mat3.__index

```nelua
function mat3.__index(m: mat3, i: uinteger): number
```


module: meta (mat3)

### mat3.__atindex

```nelua
function mat3.__atindex(m: mat3, i: uinteger): number
```



### mat3.__lt

```nelua
function mat3.__lt(m1: mat3, m2: mat3): boolean
```



### mat3.__le

```nelua
function mat3.__le(m1: mat3, m2: mat3): boolean
```



### mat3.__eq

```nelua
function mat3.__eq(m1: mat3, m2: mat3): boolean
```



### mat3.__add

```nelua
function mat3.__add(m1: mat3, m2: mat3): mat3
```



### mat3.__sub

```nelua
function mat3.__sub(m1: mat3, m2: mat3): mat3
```



### mat3.__mul

```nelua
function mat3.__mul(m1: mat3, m2: mat3): mat3
```



### mat3:__unm

```nelua
function mat3:__unm(): mat3
```



### mat4.__index

```nelua
function mat4.__index(m: mat4, i: uinteger): number
```


module: meta (mat4)

### mat4.__atindex

```nelua
function mat4.__atindex(m: mat4, i: uinteger): number
```



### mat4.__lt

```nelua
function mat4.__lt(m1: mat4, m2: mat4): boolean
```



### mat4.__le

```nelua
function mat4.__le(m1: mat4, m2: mat4): boolean
```



### mat4.__eq

```nelua
function mat4.__eq(m1: mat4, m2: mat4): boolean
```



### mat4.__add

```nelua
function mat4.__add(m1: mat4, m2: mat4): mat4
```



### mat4.__sub

```nelua
function mat4.__sub(m1: mat4, m2: mat4): mat4
```



### mat4.__mul

```nelua
function mat4.__mul(m1: mat4, m2: mat4): mat4
```



### mat4:__unm

```nelua
function mat4:__unm(): mat4
```



### mat4:__tostring

```nelua
function mat4:__tostring(): string
```



### mathkit.vec2.zero

```nelua
function mathkit.vec2.zero(): vec2
```


module: vec2

### mathkit.vec2.one

```nelua
function mathkit.vec2.one(): vec2
```



### mathkit.vec2.add

```nelua
function mathkit.vec2.add(v1: vec2, v2: vec2): vec2
```



### mathkit.vec2.addval

```nelua
function mathkit.vec2.addval(v: vec2, n: number): vec2
```



### mathkit.vec2.sub

```nelua
function mathkit.vec2.sub(v1: vec2, v2: vec2): vec2
```



### mathkit.vec2.subval

```nelua
function mathkit.vec2.subval(v: vec2, n: number): vec2
```



### mathkit.vec2.mul

```nelua
function mathkit.vec2.mul(v1: vec2, v2: vec2): vec2
```



### mathkit.vec2.div

```nelua
function mathkit.vec2.div(v1: vec2, v2: vec2): vec2
```



### mathkit.vec2.scale

```nelua
function mathkit.vec2.scale(v: vec2, scalar: number): vec2
```



### mathkit.vec2.scale_and_add

```nelua
function mathkit.vec2.scale_and_add(v1: vec2, v2: vec2, scalar: number): vec2
```



### mathkit.vec2.dot

```nelua
function mathkit.vec2.dot(v1: vec2, v2: vec2): number
```



### mathkit.vec2.cross

```nelua
function mathkit.vec2.cross(v1: vec2, v2: vec2): vec3
```



### mathkit.vec2.rand

```nelua
function mathkit.vec2.rand(scale: number): vec2
```



### mathkit.vec2.neg

```nelua
function mathkit.vec2.neg(v: vec2): vec2
```



### mathkit.vec2.inv

```nelua
function mathkit.vec2.inv(v: vec2): vec2
```



### mathkit.vec2.abs

```nelua
function mathkit.vec2.abs(v: vec2): vec2
```



### mathkit.vec2.ceil

```nelua
function mathkit.vec2.ceil(v: vec2): vec2
```



### mathkit.vec2.round

```nelua
function mathkit.vec2.round(v: vec2): vec2
```



### mathkit.vec2.floor

```nelua
function mathkit.vec2.floor(v: vec2): vec2
```



### mathkit.vec2.min

```nelua
function mathkit.vec2.min(v1: vec2, v2: vec2): vec2
```



### mathkit.vec2.max

```nelua
function mathkit.vec2.max(v1: vec2, v2: vec2): vec2
```



### mathkit.vec2.len

```nelua
function mathkit.vec2.len(v: vec2): number
```



### mathkit.vec2.sqrlen

```nelua
function mathkit.vec2.sqrlen(v: vec2): number
```



### mathkit.vec2.dist

```nelua
function mathkit.vec2.dist(v1: vec2, v2: vec2): number
```



### mathkit.vec2.sqrdist

```nelua
function mathkit.vec2.sqrdist(v1: vec2, v2: vec2): number
```



### mathkit.vec2.angle

```nelua
function mathkit.vec2.angle(v1: vec2, v2: vec2): number
```



### mathkit.vec2.norm

```nelua
function mathkit.vec2.norm(v: vec2): vec2
```



### mathkit.vec2.lerp

```nelua
function mathkit.vec2.lerp(v1: vec2, v2: vec2, amount: number): vec2
```



### mathkit.vec2.reflect

```nelua
function mathkit.vec2.reflect(v: vec2, normal: vec2): vec2
```



### mathkit.vec2.rot

```nelua
function mathkit.vec2.rot(v: vec2, degs: number): vec2
```



### mathkit.vec2.towards

```nelua
function mathkit.vec2.towards(v: vec2, target: vec2, maxdist: number): vec2
```



### mathkit.vec2.tostring

```nelua
function mathkit.vec2.tostring(v: vec2): string
```



### mathkit.vec2.equ

```nelua
function mathkit.vec2.equ(v1: vec2, v2: vec2): boolean
```



### mathkit.vec2.transform_mat2

```nelua
function mathkit.vec2.transform_mat2(v: vec2, m: mat2): vec2
```



### mathkit.vec2.transform_mat2d

```nelua
function mathkit.vec2.transform_mat2d(v: vec2, m: mat2d): vec2
```



### mathkit.vec2.transform_mat3

```nelua
function mathkit.vec2.transform_mat3(v: vec2, m: mat3): vec2
```



### mathkit.vec2.transform_mat4

```nelua
function mathkit.vec2.transform_mat4(v: vec2, m: mat4): vec2
```



### mathkit.vec3.zero

```nelua
function mathkit.vec3.zero(): vec3
```


module: vec3

### mathkit.vec3.one

```nelua
function mathkit.vec3.one(): vec3
```



### mathkit.vec3.add

```nelua
function mathkit.vec3.add(v1: vec3, v2: vec3): vec3
```



### mathkit.vec3.addval

```nelua
function mathkit.vec3.addval(v: vec3, n: number): vec3
```



### mathkit.vec3.sub

```nelua
function mathkit.vec3.sub(v1: vec3, v2: vec3): vec3
```



### mathkit.vec3.subval

```nelua
function mathkit.vec3.subval(v: vec3, n: number): vec3
```



### mathkit.vec3.mul

```nelua
function mathkit.vec3.mul(v1: vec3, v2: vec3): vec3
```



### mathkit.vec3.div

```nelua
function mathkit.vec3.div(v1: vec3, v2: vec3): vec3
```



### mathkit.vec3.scale

```nelua
function mathkit.vec3.scale(v: vec3, scalar: number): vec3
```



### mathkit.vec3.scale_and_add

```nelua
function mathkit.vec3.scale_and_add(v1: vec3, v2: vec3, scalar: number): vec3
```



### mathkit.vec3.dot

```nelua
function mathkit.vec3.dot(v1: vec3, v2: vec3): number
```



### mathkit.vec3.cross

```nelua
function mathkit.vec3.cross(v1: vec3, v2: vec3): vec3
```



### mathkit.vec3.rand

```nelua
function mathkit.vec3.rand(scale: number): vec3
```



### mathkit.vec3.neg

```nelua
function mathkit.vec3.neg(v: vec3): vec3
```



### mathkit.vec3.inv

```nelua
function mathkit.vec3.inv(v: vec3): vec3
```



### mathkit.vec3.abs

```nelua
function mathkit.vec3.abs(v: vec3): vec3
```



### mathkit.vec3.ceil

```nelua
function mathkit.vec3.ceil(v: vec3): vec3
```



### mathkit.vec3.round

```nelua
function mathkit.vec3.round(v: vec3): vec3
```



### mathkit.vec3.floor

```nelua
function mathkit.vec3.floor(v: vec3): vec3
```



### mathkit.vec3.min

```nelua
function mathkit.vec3.min(v1: vec3, v2: vec3): vec3
```



### mathkit.vec3.max

```nelua
function mathkit.vec3.max(v1: vec3, v2: vec3): vec3
```



### mathkit.vec3.len

```nelua
function mathkit.vec3.len(v: vec3): number
```



### mathkit.vec3.sqrlen

```nelua
function mathkit.vec3.sqrlen(v: vec3): number
```



### mathkit.vec3.dist

```nelua
function mathkit.vec3.dist(v1: vec3, v2: vec3): number
```



### mathkit.vec3.sqrdist

```nelua
function mathkit.vec3.sqrdist(v1: vec3, v2: vec3): number
```



### mathkit.vec3.angle

```nelua
function mathkit.vec3.angle(v1: vec3, v2: vec3): number
```



### mathkit.vec3.norm

```nelua
function mathkit.vec3.norm(v: vec3): vec3
```



### mathkit.vec3.ortho_norm

```nelua
function mathkit.vec3.ortho_norm(v1: *vec3, v2: *vec3): void
```



### mathkit.vec3.lerp

```nelua
function mathkit.vec3.lerp(v1: vec3, v2: vec3, amount: number): vec3
```



### mathkit.vec3.reflect

```nelua
function mathkit.vec3.reflect(v: vec3, normal: vec3): vec3
```



### mathkit.vec3.perpendicular

```nelua
function mathkit.vec3.perpendicular(v: vec3): vec3
```



### mathkit.vec3.hermite

```nelua
function mathkit.vec3.hermite(a: vec3, b: vec3, c: vec3, d: vec3, t: number): vec3
```



### mathkit.vec3.bezier

```nelua
function mathkit.vec3.bezier(a: vec3, b: vec3, c: vec3, d: vec3, t: number): vec3
```



### mathkit.vec3.transform

```nelua
function mathkit.vec3.transform(v: vec3, m: mat4): vec3
```



### mathkit.vec3.rotate_by_quat

```nelua
function mathkit.vec3.rotate_by_quat(v: vec3, q: quat): vec3
```



### mathkit.vec3.rotx

```nelua
function mathkit.vec3.rotx(v1: vec3, v2: vec3, rad: number): vec3
```



### mathkit.vec3.roty

```nelua
function mathkit.vec3.roty(v1: vec3, v2: vec3, rad: number): vec3
```



### mathkit.vec3.rotz

```nelua
function mathkit.vec3.rotz(v1: vec3, v2: vec3, rad: number): vec3
```



### mathkit.vec3.barycenter

```nelua
function mathkit.vec3.barycenter(p: vec3, a: vec3, b: vec3, c: vec3): vec3
```



### mathkit.vec3.tostring

```nelua
function mathkit.vec3.tostring(v: vec3): string
```



### mathkit.vec3.equ

```nelua
function mathkit.vec3.equ(v1: vec3, v2: vec3): boolean
```



### mathkit.vec3.transform_mat3

```nelua
function mathkit.vec3.transform_mat3(v: vec3, m: mat3): vec3
```



### mathkit.vec3.transform_mat4

```nelua
function mathkit.vec3.transform_mat4(v: vec3, m: mat4): vec3
```



### mathkit.vec3.transform_quat

```nelua
function mathkit.vec3.transform_quat(v: vec3, q: quat): vec3
```



### mathkit.vec4.zero

```nelua
function mathkit.vec4.zero(): vec4
```


module: vec4

### mathkit.vec4.one

```nelua
function mathkit.vec4.one(): vec4
```



### mathkit.vec4.add

```nelua
function mathkit.vec4.add(v1: vec4, v2: vec4): vec4
```



### mathkit.vec4.addval

```nelua
function mathkit.vec4.addval(v: vec4, n: number): vec4
```



### mathkit.vec4.sub

```nelua
function mathkit.vec4.sub(v1: vec4, v2: vec4): vec4
```



### mathkit.vec4.subval

```nelua
function mathkit.vec4.subval(v: vec4, n: number): vec4
```



### mathkit.vec4.mul

```nelua
function mathkit.vec4.mul(v1: vec4, v2: vec4): vec4
```



### mathkit.vec4.div

```nelua
function mathkit.vec4.div(v1: vec4, v2: vec4): vec4
```



### mathkit.vec4.scale

```nelua
function mathkit.vec4.scale(v: vec4, scalar: number): vec4
```



### mathkit.vec4.scale_and_add

```nelua
function mathkit.vec4.scale_and_add(v1: vec4, v2: vec4, scalar: number): vec4
```



### mathkit.vec4.dot

```nelua
function mathkit.vec4.dot(v1: vec4, v2: vec4): number
```



### mathkit.vec4.cross

```nelua
function mathkit.vec4.cross(a: vec4, b: vec4, c: vec4): vec4
```



### mathkit.vec4.rand

```nelua
function mathkit.vec4.rand(scale: number): vec4
```



### mathkit.vec4.neg

```nelua
function mathkit.vec4.neg(v: vec4): vec4
```



### mathkit.vec4.inv

```nelua
function mathkit.vec4.inv(v: vec4): vec4
```



### mathkit.vec4.abs

```nelua
function mathkit.vec4.abs(v: vec4): vec4
```



### mathkit.vec4.ceil

```nelua
function mathkit.vec4.ceil(v: vec4): vec4
```



### mathkit.vec4.round

```nelua
function mathkit.vec4.round(v: vec4): vec4
```



### mathkit.vec4.floor

```nelua
function mathkit.vec4.floor(v: vec4): vec4
```



### mathkit.vec4.min

```nelua
function mathkit.vec4.min(v1: vec4, v2: vec4): vec4
```



### mathkit.vec4.max

```nelua
function mathkit.vec4.max(v1: vec4, v2: vec4): vec4
```



### mathkit.vec4.len

```nelua
function mathkit.vec4.len(v: vec4): number
```



### mathkit.vec4.sqrlen

```nelua
function mathkit.vec4.sqrlen(v: vec4): number
```



### mathkit.vec4.dist

```nelua
function mathkit.vec4.dist(v1: vec4, v2: vec4): number
```



### mathkit.vec4.sqrdist

```nelua
function mathkit.vec4.sqrdist(v1: vec4, v2: vec4): number
```



### mathkit.vec4.angle

```nelua
function mathkit.vec4.angle(v1: vec4, v2: vec4): number
```



### mathkit.vec4.norm

```nelua
function mathkit.vec4.norm(v: vec4): vec4
```



### mathkit.vec4.lerp

```nelua
function mathkit.vec4.lerp(v1: vec4, v2: vec4, amount: number): vec4
```



### mathkit.vec4.reflect

```nelua
function mathkit.vec4.reflect(v: vec4, normal: vec4): vec4
```



### mathkit.vec4.tostring

```nelua
function mathkit.vec4.tostring(v: vec4): string
```



### mathkit.vec4.equ

```nelua
function mathkit.vec4.equ(v1: vec4, v2: vec4): boolean
```



### mathkit.vec4.transform_mat4

```nelua
function mathkit.vec4.transform_mat4(v: vec4, m: mat4): vec4
```



### mathkit.vec4.transform_quat

```nelua
function mathkit.vec4.transform_quat(v: vec4, q: quat): vec4
```



### mathkit.quat.add

```nelua
function mathkit.quat.add(q1: quat, q2: quat): quat
```


module: quat

### mathkit.quat.addval

```nelua
function mathkit.quat.addval(q: quat, n: number): quat
```



### mathkit.quat.sub

```nelua
function mathkit.quat.sub(q1: quat, q2: quat): quat
```



### mathkit.quat.subval

```nelua
function mathkit.quat.subval(q: quat, n: number): quat
```



### mathkit.quat.id

```nelua
function mathkit.quat.id(): quat
```



### mathkit.quat.zero

```nelua
function mathkit.quat.zero(): quat
```



### mathkit.quat.one

```nelua
function mathkit.quat.one(): quat
```



### mathkit.quat.len

```nelua
function mathkit.quat.len(q: quat): number
```



### mathkit.quat.sqrlen

```nelua
function mathkit.quat.sqrlen(q: quat): number
```



### mathkit.quat.norm

```nelua
function mathkit.quat.norm(q: quat): quat
```



### mathkit.quat.neg

```nelua
function mathkit.quat.neg(q: quat): quat
```



### mathkit.quat.conjugate

```nelua
function mathkit.quat.conjugate(q: quat): quat
```



### mathkit.quat.inv

```nelua
function mathkit.quat.inv(q: quat): quat
```



### mathkit.quat.rand

```nelua
function mathkit.quat.rand(): quat
```



### mathkit.quat.from_axis_angle

```nelua
function mathkit.quat.from_axis_angle(axis: vec3, angle: number): quat
```



### mathkit.quat.to_axis_angle

```nelua
function mathkit.quat.to_axis_angle(q: quat, axis: *vec3, angle: *number): void
```



### mathkit.quat.rot_to

```nelua
function mathkit.quat.rot_to(v1: vec3, v2: vec3): quat
```



### mathkit.quat.rotx

```nelua
function mathkit.quat.rotx(q: quat, rad: number): quat
```



### mathkit.quat.roty

```nelua
function mathkit.quat.roty(q: quat, rad: number): quat
```



### mathkit.quat.rotz

```nelua
function mathkit.quat.rotz(q: quat, rad: number): quat
```



### mathkit.quat.calc_w

```nelua
function mathkit.quat.calc_w(q: quat): quat
```



### mathkit.quat.ln

```nelua
function mathkit.quat.ln(q: quat): quat
```



### mathkit.quat.exp

```nelua
function mathkit.quat.exp(q: quat): quat
```



### mathkit.quat.mul

```nelua
function mathkit.quat.mul(q1: quat, q2: quat): quat
```



### mathkit.quat.div

```nelua
function mathkit.quat.div(q1: quat, q2: quat): quat
```



### mathkit.quat.scale

```nelua
function mathkit.quat.scale(q: quat, scalar: number): quat
```



### mathkit.quat.scale_and_add

```nelua
function mathkit.quat.scale_and_add(q: quat, scalar: number, add: number): quat
```



### mathkit.quat.pow

```nelua
function mathkit.quat.pow(q: quat, n: number): quat
```



### quat.__pow

```nelua
function quat.__pow(q: quat, n: number): quat
```



### mathkit.quat.abs

```nelua
function mathkit.quat.abs(q: quat): quat
```



### mathkit.quat.ceil

```nelua
function mathkit.quat.ceil(q: quat): quat
```



### mathkit.quat.round

```nelua
function mathkit.quat.round(q: quat): quat
```



### mathkit.quat.floor

```nelua
function mathkit.quat.floor(q: quat): quat
```



### mathkit.quat.min

```nelua
function mathkit.quat.min(q1: quat, q2: quat): quat
```



### mathkit.quat.max

```nelua
function mathkit.quat.max(q1: quat, q2: quat): quat
```



### mathkit.quat.dist

```nelua
function mathkit.quat.dist(q1: quat, q2: quat): number
```



### mathkit.quat.sqrdist

```nelua
function mathkit.quat.sqrdist(q1: quat, q2: quat): number
```



### mathkit.quat.dot

```nelua
function mathkit.quat.dot(q1: quat, q2: quat): number
```



### mathkit.quat.cross

```nelua
function mathkit.quat.cross(a: quat, b: quat, c: quat): quat
```



### mathkit.quat.angle

```nelua
function mathkit.quat.angle(q1: quat, q2: quat): number
```



### mathkit.quat.reflect

```nelua
function mathkit.quat.reflect(q: quat, normal: quat): quat
```



### mathkit.quat.lerp

```nelua
function mathkit.quat.lerp(q1: quat, q2: quat, amount: number): quat
```



### mathkit.quat.nlerp

```nelua
function mathkit.quat.nlerp(q1: quat, q2: quat, amount: number): quat
```



### mathkit.quat.slerp

```nelua
function mathkit.quat.slerp(q1: quat, q2: quat, t: number): quat
```



### mathkit.quat.sqlerp

```nelua
function mathkit.quat.sqlerp(a: quat, b: quat, c: quat, d: quat, t: number): quat
```



### mathkit.quat.vec3_to_vec3

```nelua
function mathkit.quat.vec3_to_vec3(from: vec3, to: vec3): quat
```



### mathkit.quat.from_mat3

```nelua
function mathkit.quat.from_mat3(m: mat3): quat
```



### mathkit.quat.from_mat4

```nelua
function mathkit.quat.from_mat4(m: mat4): quat
```



### mathkit.quat.from_euler

```nelua
function mathkit.quat.from_euler(pitch: number, yaw: number, roll: number): quat
```



### mathkit.quat.to_euler

```nelua
function mathkit.quat.to_euler(q: quat): vec3
```



### mathkit.quat.transform

```nelua
function mathkit.quat.transform(q: quat, m: mat4): quat
```



### mathkit.quat.equ

```nelua
function mathkit.quat.equ(q1: quat, q2: quat): boolean
```



### mathkit.quat.set_axis

```nelua
function mathkit.quat.set_axis(q: *quat, view: vec3, right: vec3, up: vec3): void
```



### mathkit.quat2.add

```nelua
function mathkit.quat2.add(q1: quat2, q2: quat2): quat2
```


module: quat2

### mathkit.quat2.addval

```nelua
function mathkit.quat2.addval(q: quat2, n: number): quat2
```



### mathkit.quat2.sub

```nelua
function mathkit.quat2.sub(q1: quat2, q2: quat2): quat2
```



### mathkit.quat2.subval

```nelua
function mathkit.quat2.subval(q: quat2, n: number): quat2
```



### mathkit.quat2.id

```nelua
function mathkit.quat2.id(): quat2
```



### mathkit.quat2.len

```nelua
function mathkit.quat2.len(q: quat2): number
```



### mathkit.quat2.sqrlen

```nelua
function mathkit.quat2.sqrlen(q: quat2): number
```



### mathkit.quat2.neg

```nelua
function mathkit.quat2.neg(q: quat2): quat2
```



### mathkit.quat2.zero

```nelua
function mathkit.quat2.zero(): quat2
```



### mathkit.quat2.one

```nelua
function mathkit.quat2.one(): quat2
```



### mathkit.quat2.conjugate

```nelua
function mathkit.quat2.conjugate(q: quat2): quat2
```



### mathkit.quat2.abs

```nelua
function mathkit.quat2.abs(q: quat2): quat2
```



### mathkit.quat2.ceil

```nelua
function mathkit.quat2.ceil(q: quat2): quat2
```



### mathkit.quat2.round

```nelua
function mathkit.quat2.round(q: quat2): quat2
```



### mathkit.quat2.floor

```nelua
function mathkit.quat2.floor(q: quat2): quat2
```



### mathkit.quat2.min

```nelua
function mathkit.quat2.min(q1: quat2, q2: quat2): quat2
```



### mathkit.quat2.max

```nelua
function mathkit.quat2.max(q1: quat2, q2: quat2): quat2
```



### mathkit.quat2.dist

```nelua
function mathkit.quat2.dist(q1: quat2, q2: quat2): number
```



### mathkit.quat2.sqrdist

```nelua
function mathkit.quat2.sqrdist(q1: quat2, q2: quat2): number
```



### mathkit.quat2.dot

```nelua
function mathkit.quat2.dot(q1: quat2, q2: quat2): number
```



### mathkit.quat2.norm

```nelua
function mathkit.quat2.norm(q: quat2): quat2
```



### mathkit.quat2.inv

```nelua
function mathkit.quat2.inv(q: quat2): quat2
```



### mathkit.quat2.equ

```nelua
function mathkit.quat2.equ(q1: quat2, q2: quat2): boolean
```



### mathkit.quat2.rotx

```nelua
function mathkit.quat2.rotx(q: quat2, rad: number): quat2
```



### mathkit.quat2.roty

```nelua
function mathkit.quat2.roty(q: quat2, rad: number): quat2
```



### mathkit.quat2.rotz

```nelua
function mathkit.quat2.rotz(q: quat2, rad: number): quat2
```



### mathkit.quat2.calc_w

```nelua
function mathkit.quat2.calc_w(q: quat2): quat2
```



### mathkit.quat2.mul

```nelua
function mathkit.quat2.mul(q1: quat2, q2: quat2): quat2
```



### mathkit.quat2.div

```nelua
function mathkit.quat2.div(q1: quat2, q2: quat2): quat2
```



### mathkit.quat2.scale

```nelua
function mathkit.quat2.scale(q: quat2, scalar: number): quat2
```



### mathkit.quat2.scale_and_add

```nelua
function mathkit.quat2.scale_and_add(q: quat2, scalar: number, add: number): quat2
```



### mathkit.quat2.angle

```nelua
function mathkit.quat2.angle(q1: quat2, q2: quat2): number
```



### mathkit.quat2.reflect

```nelua
function mathkit.quat2.reflect(q: quat2, normal: quat2): quat2
```



### mathkit.quat2.lerp

```nelua
function mathkit.quat2.lerp(q1: quat2, q2: quat2, amount: number): quat2
```



### mathkit.quat2.nlerp

```nelua
function mathkit.quat2.nlerp(q1: quat2, q2: quat2, amount: number): quat2
```



### mathkit.quat2.get_dual

```nelua
function mathkit.quat2.get_dual(q: quat2): quat
```



### mathkit.quat2.set_dual

```nelua
function mathkit.quat2.set_dual(q: *quat2, dual: quat): void
```



### mathkit.quat2.tostring

```nelua
function mathkit.quat2.tostring(q: quat2): string
```



### mathkit.quat2.from_vec3

```nelua
function mathkit.quat2.from_vec3(v: vec3): quat2
```



### mathkit.quat2.translate

```nelua
function mathkit.quat2.translate(q: quat2, v: vec3): quat2
```



### mathkit.quat2.rot_by_quat_append

```nelua
function mathkit.quat2.rot_by_quat_append(q1: quat2, q2: quat): quat2
```



### mathkit.quat2.rot_by_quat_prepend

```nelua
function mathkit.quat2.rot_by_quat_prepend(q1: quat, q2: quat2): quat2
```



### mathkit.quat2.rot_by_axis

```nelua
function mathkit.quat2.rot_by_axis(q: quat2, axis: vec3, rad: number): quat2
```



### mathkit.quat2.from_quat

```nelua
function mathkit.quat2.from_quat(q: quat): quat2
```



### mathkit.quat2.from_axis_angle

```nelua
function mathkit.quat2.from_axis_angle(q: quat, v: vec3): quat2
```



### mathkit.quat2.to_axis

```nelua
function mathkit.quat2.to_axis(q: quat2): vec3
```



### mathkit.mat2.id

```nelua
function mathkit.mat2.id(): mat2
```


module: mat2

### mathkit.mat2.inv

```nelua
function mathkit.mat2.inv(m: mat2): mat2
```



### mathkit.mat2.adjoint

```nelua
function mathkit.mat2.adjoint(m: mat2): mat2
```



### mathkit.mat2.neg

```nelua
function mathkit.mat2.neg(m: mat2): mat2
```



### mathkit.mat2.zero

```nelua
function mathkit.mat2.zero(): mat2
```



### mathkit.mat2.one

```nelua
function mathkit.mat2.one(): mat2
```



### mathkit.mat2.det

```nelua
function mathkit.mat2.det(m: mat2): number
```



### mathkit.mat2.mult

```nelua
function mathkit.mat2.mult(m1: mat2, m2: mat2): mat2
```



### mathkit.mat2.add

```nelua
function mathkit.mat2.add(m1: mat2, m2: mat2): mat2
```



### mathkit.mat2.sub

```nelua
function mathkit.mat2.sub(m1: mat2, m2: mat2): mat2
```



### mathkit.mat2.tostring

```nelua
function mathkit.mat2.tostring(m: mat2): string
```



### mathkit.mat2.equ

```nelua
function mathkit.mat2.equ(m1: mat2, m2: mat2): boolean
```



### mathkit.mat2.rotate

```nelua
function mathkit.mat2.rotate(m: mat2, rad: number): mat2
```



### mathkit.mat2.vscale

```nelua
function mathkit.mat2.vscale(m: mat2, v: vec2): mat2
```



### mathkit.mat2.scale

```nelua
function mathkit.mat2.scale(m: mat2, scalar: number): mat2
```



### mathkit.mat2.vscale_and_add

```nelua
function mathkit.mat2.vscale_and_add(m1: mat2, m2: mat2, scalar: number): mat2
```



### mathkit.mat2.from_rad

```nelua
function mathkit.mat2.from_rad(rad: number): mat2
```



### mathkit.mat2.from_scale

```nelua
function mathkit.mat2.from_scale(v: vec2): mat2
```



### mathkit.mat2.frob

```nelua
function mathkit.mat2.frob(m: mat2): number
```



### mathkit.mat2.ldu

```nelua
function mathkit.mat2.ldu(l: *mat2, d: *mat2, u: *mat2, a: mat2): [3]*mat2
```



### mathkit.mat2d.id

```nelua
function mathkit.mat2d.id(): mat2d
```


module: mat2d

### mathkit.mat2d.inv

```nelua
function mathkit.mat2d.inv(m: mat2d): mat2d
```



### mathkit.mat2d.det

```nelua
function mathkit.mat2d.det(m: mat2d): number
```



### mathkit.mat2d.neg

```nelua
function mathkit.mat2d.neg(m: mat2d): mat2d
```



### mathkit.mat2d.zero

```nelua
function mathkit.mat2d.zero(): mat2d
```



### mathkit.mat2d.one

```nelua
function mathkit.mat2d.one(): mat2d
```



### mathkit.mat2d.mul

```nelua
function mathkit.mat2d.mul(m1: mat2d, m2: mat2d): mat2d
```



### mathkit.mat2d.rotate

```nelua
function mathkit.mat2d.rotate(m: mat2d, rad: number): mat2d
```



### mathkit.mat2d.vscale

```nelua
function mathkit.mat2d.vscale(m: mat2d, v: vec2): mat2d
```



### mathkit.mat2d.scale

```nelua
function mathkit.mat2d.scale(m: mat2d, scalar: number): mat2d
```



### mathkit.mat2d.scale_and_add

```nelua
function mathkit.mat2d.scale_and_add(m1: mat2d, m2: mat2d, scalar: number): mat2d
```



### mathkit.mat2d.translate

```nelua
function mathkit.mat2d.translate(m: mat2d, v: vec2): mat2d
```



### mathkit.mat2d.from_rad

```nelua
function mathkit.mat2d.from_rad(rad: number): mat2d
```



### mathkit.mat2d.from_scale

```nelua
function mathkit.mat2d.from_scale(v: vec2): mat2d
```



### mathkit.mat2d.from_translation

```nelua
function mathkit.mat2d.from_translation(v: vec2): mat2d
```



### mathkit.mat2d.tostring

```nelua
function mathkit.mat2d.tostring(m: mat2d): string
```



### mathkit.mat2d.frob

```nelua
function mathkit.mat2d.frob(m: mat2d): number
```



### mathkit.mat2d.add

```nelua
function mathkit.mat2d.add(m1: mat2d, m2: mat2d): mat2d
```



### mathkit.mat2d.sub

```nelua
function mathkit.mat2d.sub(m1: mat2d, m2: mat2d): mat2d
```



### mathkit.mat2d.equ

```nelua
function mathkit.mat2d.equ(m1: mat2d, m2: mat2d): boolean
```



### mathkit.mat3.id

```nelua
function mathkit.mat3.id(): mat3
```


module: mat3

### mathkit.mat3.neg

```nelua
function mathkit.mat3.neg(m: mat3): mat3
```



### mathkit.mat3.zero

```nelua
function mathkit.mat3.zero(): mat3
```



### mathkit.mat3.one

```nelua
function mathkit.mat3.one(): mat3
```



### mathkit.mat3.from_mat4

```nelua
function mathkit.mat3.from_mat4(m: mat4): mat3
```



### mathkit.mat3.tostring

```nelua
function mathkit.mat3.tostring(m: mat3): string
```



### mathkit.mat3.add

```nelua
function mathkit.mat3.add(m1: mat3, m2: mat3): mat3
```



### mathkit.mat3.sub

```nelua
function mathkit.mat3.sub(m1: mat3, m2: mat3): mat3
```



### mathkit.mat3.scale

```nelua
function mathkit.mat3.scale(m: mat3, scalar: number): mat3
```



### mathkit.mat3.scale_and_add

```nelua
function mathkit.mat3.scale_and_add(m1: mat3, m2: mat3, scalar: number): mat3
```



### mathkit.mat3.equ

```nelua
function mathkit.mat3.equ(m1: mat3, m2: mat3): boolean
```



### mathkit.mat3.inv

```nelua
function mathkit.mat3.inv(m: mat3): mat3
```



### mathkit.mat3.adjoint

```nelua
function mathkit.mat3.adjoint(m: mat3): mat3
```



### mathkit.mat3.det

```nelua
function mathkit.mat3.det(m: mat3): number
```



### mathkit.mat3.mul

```nelua
function mathkit.mat3.mul(m1: mat3, m2: mat3): mat3
```



### mathkit.mat3.translate

```nelua
function mathkit.mat3.translate(m: mat3, v: vec2): mat3
```



### mathkit.mat3.rotate

```nelua
function mathkit.mat3.rotate(m: mat3, rad: number): mat3
```



### mathkit.mat3.vscale

```nelua
function mathkit.mat3.vscale(m: mat3, v: vec2): mat3
```



### mathkit.mat3.frob

```nelua
function mathkit.mat3.frob(m: mat3): number
```



### mathkit.mat3.from_mat2d

```nelua
function mathkit.mat3.from_mat2d(m: mat2d): mat3
```



### mathkit.mat3.from_translation

```nelua
function mathkit.mat3.from_translation(v: vec2): mat3
```



### mathkit.mat3.from_scale

```nelua
function mathkit.mat3.from_scale(v: vec2): mat3
```



### mathkit.mat3.from_rad

```nelua
function mathkit.mat3.from_rad(rad: number): mat3
```



### mathkit.mat3.from_quat

```nelua
function mathkit.mat3.from_quat(q: quat): mat3
```



### mathkit.mat3.norm_from_mat4

```nelua
function mathkit.mat3.norm_from_mat4(m: mat4): mat3
```



### mathkit.mat3.proj

```nelua
function mathkit.mat3.proj(w: number, h: number): mat3
```



### mathkit.mat4.id

```nelua
function mathkit.mat4.id(): mat4
```


module: mat4

### mathkit.mat4.zero

```nelua
function mathkit.mat4.zero(): mat4
```



### mathkit.mat4.one

```nelua
function mathkit.mat4.one(): mat4
```



### mathkit.mat4.neg

```nelua
function mathkit.mat4.neg(m: mat4): mat4
```



### mathkit.mat4.trace

```nelua
function mathkit.mat4.trace(m: mat4): number
```



### mathkit.mat4.transpose

```nelua
function mathkit.mat4.transpose(m: mat4): mat4
```



### mathkit.mat4.add

```nelua
function mathkit.mat4.add(m1: mat4, m2: mat4): mat4
```



### mathkit.mat4.sub

```nelua
function mathkit.mat4.sub(m1: mat4, m2: mat4): mat4
```



### mathkit.mat4.tostring

```nelua
function mathkit.mat4.tostring(m: mat4): string
```



### mathkit.mat4.frob

```nelua
function mathkit.mat4.frob(m: mat4): number
```



### mathkit.mat4.scale

```nelua
function mathkit.mat4.scale(m: mat4, scalar: number): mat4
```



### mathkit.mat4.scale_and_add

```nelua
function mathkit.mat4.scale_and_add(m1: mat4, m2: mat4, scalar: number): mat4
```



### mathkit.mat4.equ

```nelua
function mathkit.mat4.equ(m1: mat4, m2: mat4): boolean
```



### mathkit.mat4.inv

```nelua
function mathkit.mat4.inv(m: mat4): mat4
```



### mathkit.mat4.adjoint

```nelua
function mathkit.mat4.adjoint(m: mat4): mat4
```



### mathkit.mat4.det

```nelua
function mathkit.mat4.det(m: mat4): number
```



### mathkit.mat4.translate

```nelua
function mathkit.mat4.translate(m: mat4, v: vec3): mat4
```



### mathkit.mat4.vscale

```nelua
function mathkit.mat4.vscale(m: mat4, v: vec3): mat4
```



### mathkit.mat4.mul

```nelua
function mathkit.mat4.mul(m1: mat4, m2: mat4): mat4
```



### mathkit.mat4.rot

```nelua
function mathkit.mat4.rot(m: mat4, rad: number, axis: vec3): mat4
```



### mathkit.mat4.rotx

```nelua
function mathkit.mat4.rotx(m: mat4, rad: number): mat4
```



### mathkit.mat4.roty

```nelua
function mathkit.mat4.roty(m: mat4, rad: number): mat4
```



### mathkit.mat4.rotz

```nelua
function mathkit.mat4.rotz(m: mat4, rad: number): mat4
```



### mathkit.mat4.from_translation

```nelua
function mathkit.mat4.from_translation(v: vec3): mat4
```



### mathkit.mat4.from_scale

```nelua
function mathkit.mat4.from_scale(v: vec3): mat4
```



### mathkit.mat4.from_rot

```nelua
function mathkit.mat4.from_rot(rad: number, axis: vec3): mat4
```



### mathkit.mat4.from_xrot

```nelua
function mathkit.mat4.from_xrot(rad: number): mat4
```



### mathkit.mat4.from_yrot

```nelua
function mathkit.mat4.from_yrot(rad: number): mat4
```



### mathkit.mat4.from_zrot

```nelua
function mathkit.mat4.from_zrot(rad: number): mat4
```



### mathkit.mat4.from_axis_angle

```nelua
function mathkit.mat4.from_axis_angle(q: quat, v: vec3): mat4
```



### mathkit.mat4.from_quat2

```nelua
function mathkit.mat4.from_quat2(q: quat2): mat4
```



### mathkit.mat4.scaling

```nelua
function mathkit.mat4.scaling(m: mat4): vec3
```



### mathkit.mat4.rotation

```nelua
function mathkit.mat4.rotation(m: mat4): quat
```



### mathkit.mat4.translation

```nelua
function mathkit.mat4.translation(m: mat4): vec3
```



### mathkit.mat4.from_axis_angle_scale

```nelua
function mathkit.mat4.from_axis_angle_scale(q: quat, v: vec3, s: vec3): mat4
```



### mathkit.mat4.from_axis_angle_scale_origin

```nelua
function mathkit.mat4.from_axis_angle_scale_origin(q: quat, v: vec3, s: vec3, o: vec3): mat4
```



### mathkit.vec3.unproj

```nelua
function mathkit.vec3.unproj(src: vec3, proj: mat4, view: mat4): vec3
```



### mathkit.mat4.from_quat

```nelua
function mathkit.mat4.from_quat(q: quat): mat4
```



### mathkit.mat4.frustum

```nelua
function mathkit.mat4.frustum(left: number, right: number, bottom: number, top: number, near: number, far: number): mat4
```



### mathkit.mat4.perspective

```nelua
function mathkit.mat4.perspective(fovy: number, aspect: number, near: number, far: number): mat4
```



### mathkit.mat4.perspective_from_fov

```nelua
function mathkit.mat4.perspective_from_fov(fov: [4]number, near: number, far: number): mat4
```



### mathkit.mat4.ortho

```nelua
function mathkit.mat4.ortho(left: number, right: number, bottom: number, top: number, near: number, far: number): mat4
```



### mathkit.mat4.lookat

```nelua
function mathkit.mat4.lookat(out, eye: vec3, center: vec3, up: vec3): mat4
```



### mathkit.mat4.target_to

```nelua
function mathkit.mat4.target_to(eye: vec3, target: vec3, up: vec3): mat4
```



### mathkit.mat4.norm

```nelua
function mathkit.mat4.norm(m: mat4): mat4
```



### mathkit.quat2.from_mat4

```nelua
function mathkit.quat2.from_mat4(m: mat4): quat2
```



---
