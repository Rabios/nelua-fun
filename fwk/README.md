# API

## fwk

commit: 14cf52246fc51d9f20c0df69c74efa670de6f4bd

### FILE

```nelua
global FILE: type = @record {}
```



### C_EPSILON

```nelua
global C_EPSILON: clonglong
```

math

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



### vec2

```nelua
global vec2: type = @union {
  s1: record {
    x: float32,
    y: float32
  },
  s2: record {
    r: float32,
    g: float32
  },
  s3: record {
    w: float32,
    h: float32
  },
  s4: record {
    min: float32,
    max: float32
  },
  v: [1]float32
}
```



### vec3

```nelua
global vec3: type = @union {
  s1: record {
    x: float32,
    y: float32,
    z: float32
  },
  s2: record {
    r: float32,
    g: float32,
    b: float32
  },
  s3: record {
    w: float32,
    h: float32,
    d: float32
  },
  xy: vec2,
  rg: vec2,
  wh: vec2,
  v: [1]float32
}
```



### vec4

```nelua
global vec4: type = @union {
  s1: record {
    x: float32,
    y: float32,
    z: float32,
    w: float32
  },
  s2: record {
    r: float32,
    g: float32,
    b: float32,
    a: float32
  },
  xy: vec2,
  xyz: vec3,
  rg: vec2,
  rgb: vec3,
  wh: vec2,
  whd: vec3,
  v: [1]float32
}
```



### quat

```nelua
global quat: type = @union {
  s: record {
    x: float32,
    y: float32,
    z: float32,
    w: float32
  },
  xyz: vec3,
  xyzw: vec4,
  v: [1]float32
}
```



### AXIS_ENUMS

```nelua
global AXIS_ENUMS: type = @enum(cint) {
  axis_front = 0,
  axis_back,
  axis_left,
  axis_right,
  axis_up,
  axis_down
}
```



### coord_system

```nelua
global coord_system: type = @union {
  s: record {
    x: AXIS_ENUMS,
    y: AXIS_ENUMS,
    z: AXIS_ENUMS
  }
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



### new_coord_system

```nelua
global function new_coord_system(...: cvarargs): coord_system
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
global function clampf(v: float32, a: float32, b: float32): cint
```



### mixf

```nelua
global function mixf(a: float32, b: float32, t: float32): cint
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



### transform_axis

```nelua
global function transform_axis(c: coord_system <const>, a: AXIS_ENUMS <const>): vec3
```



### rebase44

```nelua
global function rebase44(m: mat44, src_basis: coord_system <const>, dst_basis: coord_system <const>): void
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



### transform_axis

```nelua
global function transform_axis(basis: coord_system <const>, to: AXIS_ENUMS <const>): vec3
```



### transform_vector

```nelua
global function transform_vector(m: mat44 <const>, vector: vec3 <const>): vec3
```



### transform_point

```nelua
global function transform_point(m: mat44 <const>, p: vec3 <const>): vec3
```



### transform_tangent

```nelua
global function transform_tangent(m: mat44 <const>, tangent: vec3 <const>): vec3
```



### transform_normal

```nelua
global function transform_normal(m: mat44 <const>, normal: vec3 <const>): vec3
```



### transform_quat

```nelua
global function transform_quat(m: mat44 <const>, q: quat <const>): quat
```



### transform_matrix

```nelua
global function transform_matrix(out: mat44, m: mat44 <const>, matrix: mat44 <const>): *[0]float32
```



### transform_scaling

```nelua
global function transform_scaling(m: mat44 <const>, scaling: vec3 <const>): vec3
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
  AUDIO_1CH = 0,
  AUDIO_2CH = 1,

  AUDIO_8 = 2,
  AUDIO_16 = 0,
  AUDIO_32 = 4,
  AUDIO_FLOAT = 8,

  AUDIO_22KHZ = 0,
  AUDIO_44KHZ = 16
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
  D: [4]float32
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
    depth: float32,
    s1: record {
      t0: float32,
      t1: float32
    },
    s2: record {
      hits: cint,
      p0: vec3,
      p1: vec3,
      distance2: float32,
      iterations: cint
    }
  },
  u2: union {
    p: vec3,
    contact_point: vec3
  },
  u3: union {
    n: vec3,
    normal: vec3
  }
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



### line_closest_point

```nelua
global function line_closest_point(l: line, p: vec3): vec3
```



### ray_test_plane

```nelua
global function ray_test_plane(r: ray, p4: vec3): float32
```



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



### COOKER_FLAGS

```nelua
global COOKER_FLAGS: type = @enum(cint) {
  COOKER_ASYNC = 1
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



### cooker_stop

```nelua
global function cooker_stop(): void
```



### cooker_progress

```nelua
global function cooker_progress(): cint
```



### cooker_jobs

```nelua
global function cooker_jobs(): cint
```



### data_push

```nelua
global function data_push(source: cstring <const>): boolean
```

data

### data_count

```nelua
global function data_count(keypath: cstring <const>): cint
```



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



### data_get

```nelua
global function data_get(is_string: boolean, keypath: cstring <const>): data_t
```



### dll

```nelua
global function dll(filename: cstring <const>, symbol: cstring <const>): pointer
```

dll

### less_int

```nelua
global function less_int(a: cint, b: cint): cint
```

ds

### less_u64

```nelua
global function less_u64(a: uint64, b: uint64): cint
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
global function hash_ptr(ptr: pointer <const>): uint64
```



### vrealloc

```nelua
global function vrealloc(p: pointer, sz: csize): pointer
```



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



### editor

```nelua
global function editor(): void
```

editor

### editor_active

```nelua
global function editor_active(): boolean
```



### gizmo

```nelua
global function gizmo(pos: *vec3, rot: *vec3, sca: *vec3): cint
```



### gizmo_active

```nelua
global function gizmo_active(): boolean
```



### file_list

```nelua
global function file_list(path: cstring <const>, masks: cstring <const>): *[0]cstring
```

file

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



### file_path

```nelua
global function file_path(pathfile: cstring <const>): cstring
```



### file_name

```nelua
global function file_name(pathfile: cstring <const>): cstring
```



### file_ext

```nelua
global function file_ext(pathfile: cstring <const>): cstring
```



### file_id

```nelua
global function file_id(pathfile: cstring <const>): cstring
```



### file_normalize

```nelua
global function file_normalize(pathfile: cstring <const>): cstring
```



### file_stamp

```nelua
global function file_stamp(pathfile: cstring <const>): uint64
```

global function file_normalize_with_folder(pathfile: cstring <const>): cstring <cimport, nodecl> end

### file_stamp_epoch

```nelua
global function file_stamp_epoch(pathfile: cstring <const>): uint64
```



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



### vfs_mount

```nelua
global function vfs_mount(mount_point: cstring <const>): boolean
```



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



### vfs_handle

```nelua
global function vfs_handle(pathfile: cstring <const>): *FILE
```



### cache_insert

```nelua
global function cache_insert(key: cstring <const>, value: pointer, size: cint): pointer
```



### cache_lookup

```nelua
global function cache_lookup(key: cstring <const>, size: *cint): pointer
```



### input_use

```nelua
global function input_use(controller_id: cint): cint
```

input

### input

```nelua
global function input(vk: cint): float32
```



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
global function input_up(vk: cint): cint
```



### input_down

```nelua
global function input_down(vk: cint): cint
```



### input_held

```nelua
global function input_held(vk: cint): cint
```



### input_idle

```nelua
global function input_idle(vk: cint): cint
```



### input_click

```nelua
global function input_click(vk: cint, ms: cint): cint
```



### input_click2

```nelua
global function input_click2(vk: cint, ms: cint): cint
```



### input_repeat

```nelua
global function input_repeat(vk: cint, ms: cint): cint
```



### input_chord2

```nelua
global function input_chord2(vk1: cint, vk2: cint): cint
```



### input_chord3

```nelua
global function input_chord3(vk1: cint, vk2: cint, vk3: cint): cint
```



### input_chord4

```nelua
global function input_chord4(vk1: cint, vk2: cint, vk3: cint, vk4: cint): cint
```



### input_filter_positive

```nelua
global function input_filter_positive(v: float32): float32
```



### input_filter_positive2

```nelua
global function input_filter_positive2(v: vec2): vec2
```



### input_filter_deadzone

```nelua
global function input_filter_deadzone(v: vec2, deadzone: float32): vec2
```



### input_filter_deadzone_4way

```nelua
global function input_filter_deadzone_4way(v: vec2, deadzone: float32): vec2
```



### input_demo

```nelua
global function input_demo(): void
```



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



### INPUT_ENUMS

```nelua
global INPUT_ENUMS: type = @enum(cint) {
  KEY_ESC = 0,
  KEY_TICK, KEY_1,KEY_2,KEY_3,KEY_4,KEY_5,KEY_6,KEY_7,KEY_8,KEY_9,KEY_0,  KEY_BS,
  KEY_TAB, KEY_Q,KEY_W,KEY_E,KEY_R,KEY_T,KEY_Y,KEY_U,KEY_I,KEY_O,KEY_P,
  KEY_CAPS, KEY_A,KEY_S,KEY_D,KEY_F,KEY_G,KEY_H,KEY_J,KEY_K,KEY_L, KEY_ENTER,
  KEY_LSHIFT,KEY_Z,KEY_X,KEY_C,KEY_V,KEY_B,KEY_N,KEY_M, KEY_RSHIFT, KEY_UP,
  KEY_LCTRL,KEY_LALT,KEY_SPACE,KEY_RALT,KEY_RCTRL,  KEY_LEFT,KEY_DOWN,KEY_RIGHT,
  KEY_INS,KEY_HOME,KEY_PGUP,KEY_DEL,KEY_END,KEY_PGDN,
  KEY_LMETA,KEY_RMETA,KEY_MENU,KEY_PRINT,KEY_PAUSE,KEY_SCROLL,KEY_NUMLOCK,
  KEY_MINUS,KEY_EQUAL,KEY_LSQUARE,KEY_RSQUARE,KEY_SEMICOLON,KEY_QUOTE,KEY_HASH,KEY_BAR,KEY_COMMA,KEY_DOT,KEY_SLASH,
  KEY_F1,KEY_F2,KEY_F3,KEY_F4,KEY_F5,KEY_F6,KEY_F7,KEY_F8,KEY_F9,KEY_F10,KEY_F11,KEY_F12,
  KEY_PAD1,KEY_PAD2,KEY_PAD3,KEY_PAD4,KEY_PAD5,KEY_PAD6,KEY_PAD7,KEY_PAD8,KEY_PAD9,KEY_PAD0,
  KEY_PADADD,KEY_PADSUB,KEY_PADMUL,KEY_PADDIV,KEY_PADDOT,KEY_PADENTER,
  MOUSE_L, MOUSE_M, MOUSE_R,
  GAMEPAD_CONNECTED, GAMEPAD_A, GAMEPAD_B, GAMEPAD_X, GAMEPAD_Y,
  GAMEPAD_UP, GAMEPAD_DOWN, GAMEPAD_LEFT, GAMEPAD_RIGHT, GAMEPAD_MENU, GAMEPAD_START,
  GAMEPAD_LB, GAMEPAD_RB, GAMEPAD_LTHUMB, GAMEPAD_RTHUMB,
  WINDOW_BLUR, WINDOW_FOCUS, WINDOW_CLOSE, WINDOW_MINIMIZE, WINDOW_MAXIMIZE,WINDOW_FULLSCREEN, WINDOW_WINDOWED,
  GAMEPAD_LPAD, GAMEPAD_LPADY, GAMEPAD_RPAD, GAMEPAD_RPADY,
  GAMEPAD_LT, GAMEPAD_RT, GAMEPAD_BATTERY,
  MOUSE, MOUSE_Y, MOUSE_W,
  TOUCH_X1, TOUCH_Y1, TOUCH_X2, TOUCH_Y2,
  WINDOW_RESIZE, WINDOW_RESIZEY, WINDOW_ORIENTATION, WINDOW_BATTERY,
  GAMEPAD_GUID, GAMEPAD_NAME
}
```



### GAMEPAD_LPADX

```nelua
global GAMEPAD_LPADX: cint
```



### GAMEPAD_RPADX

```nelua
global GAMEPAD_RPADX: cint
```



### MOUSE_X

```nelua
global MOUSE_X: cint
```



### WINDOW_RESIZEX

```nelua
global WINDOW_RESIZEX: cint
```



### xrealloc

```nelua
global function xrealloc(p: pointer, sz: csize): pointer
```

memory

### xsize

```nelua
global function xsize(p: pointer): csize
```



### stack

```nelua
global function stack(bytes: cint): pointer
```



### watch

```nelua
global function watch(ptr: pointer, sz: cint): pointer
```



### forget

```nelua
global function forget(ptr: pointer): pointer
```



### download

```nelua
global function download(out: pointer, url: cstring <const>): cint
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



### udp_open

```nelua
global function udp_open(address: cstring <const>, port: cstring <const>): cint
```



### udp_sendto

```nelua
global function udp_sendto(arg1: cint, ip: cstring <const>, port: cstring <const>, buf: pointer <const>, len: cint): cint
```



### udp_recv

```nelua
global function udp_recv(arg1: cint, buf: pointer <const>, len: cint): cint
```



### udp_peek

```nelua
global function udp_peek(arg1: cint): cint
```



### tcp_open

```nelua
global function tcp_open(address: cstring <const>, port: cstring <const>): cint
```



### tcp_bind

```nelua
global function tcp_bind(interface_: cstring <const>, port: cstring <const>, queue: cint): cint
```



### tcp_peek

```nelua
global function tcp_peek(arg1: cint, callback: function(cint): cint): cint
```



### tcp_send

```nelua
global function tcp_send(arg1: cint, buf: pointer <const>, len: cint): cint
```



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



### tcp_close

```nelua
global function tcp_close(arg1: cint): cint
```



### tcp_debug

```nelua
global function tcp_debug(arg1: cint): cint
```



### profile_t

```nelua
global profile_t: type = @record {
  stat: float64,
  cost: int32,
  avg: int32
}
```

profile

### profile_init

```nelua
global function profile_init(): void
```



### profile_incstat

```nelua
global function profile_incstat(name: cstring <const>, accum: cint): void
```



### profile

```nelua
global function profile(...: cvarargs): void
```



### profile_render

```nelua
global function profile_render(): void
```



### rgba

```nelua
global function rgba(r: uint8, g: uint8, b: uint8, a: uint8): uint32
```

render

### bgra

```nelua
global function bgra(r: uint8, g: uint8, b: uint8, a: uint8): uint32
```



### alpha

```nelua
global function alpha(rgba: uint32): float32
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
  IMAGE_R    = 0x01000,
  IMAGE_RG   = 0x02000,
  IMAGE_RGB  = 0x04000,
  IMAGE_RGBA = 0x08000,
  IMAGE_FLIP = 0x10000
}
```



### image_t

```nelua
global image_t: type = @union {
  u1: union {
    x: cuint,
    w: cuint
  },
  u2: union {
    y: cuint,
    h: cuint
  },
  u3: union {
    n: cuint,
    comps: cuint
  },
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
  TEXTURE_BC1 = 8,
  TEXTURE_BC2 = 16,
  TEXTURE_BC3 = 32,
  --TEXTURE_BC4,

  TEXTURE_NEAREST = 0,
  TEXTURE_LINEAR = 64,
  TEXTURE_MIPMAPS = 128,

  TEXTURE_EDGE = 0,
  TEXTURE_BORDER = 0x100,
  TEXTURE_REPEAT = 0x200,

  TEXTURE_BYTE = 0,
  TEXTURE_FLOAT = 0x400,

  TEXTURE_COLOR = 0,
  TEXTURE_DEPTH = 0x800,

  TEXTURE_R = IMAGE_R,
  TEXTURE_RG = IMAGE_RG,
  TEXTURE_RGB = IMAGE_RGB,
  TEXTURE_RGBA = IMAGE_RGBA,
  TEXTURE_FLIP = IMAGE_FLIP,

  TEXTURE_SRGB = 1 << 24,
  TEXTURE_BGR = 1 << 25,
  TEXTURE_ARRAY = 1 << 26
}
```



### texture_t

```nelua
global texture_t: type = @record {
  u1: union {
    x: cuint,
    w: cuint
  },
  u2: union {
    y: cuint,
    h: cuint
  },
  u3: union {
    z: cuint,
    d: cuint
  },
  u4: union {
    n: cuint,
    bpp: cuint
  },
  id: cuint,
  flags: cuint
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
global function texture_from_mem(ptr: cstring <const>, len: cint, flags: cint): texture_t
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

global function texture_add_loader(loader: function(cstring, *cint, *cint, *cint, cint, cint): cint): void <cimport, nodecl> end

### fullscreen_rgb_quad

```nelua
global function fullscreen_rgb_quad(texture_rgb: texture_t, gamma: float32): void
```



### fullscreen_ycbcr_quad

```nelua
global function fullscreen_ycbcr_quad(texture_YCbCr: [3]texture_t, gamma: float32): void
```



### tile

```nelua
global function tile(texture: texture_t, position: vec3, color: uint32, rotation: float32): void
```



### sprite

```nelua
global function sprite(texture: texture_t, position: [3]float32, rotation: float32, offset: [2]float32, scale: [2]float32, is_additive: cint, rgba: uint32, spritesheet: [3]float32): void
```



### sprite_update

```nelua
global function sprite_update(): void
```



### cubemap_t

```nelua
global cubemap_t: type = @record {
  id: cuint,
  sh: [9]vec3
}
```



### cubemap

```nelua
global function cubemap(image: image_t <const>, flags: cint): cubemap_t
```



### cubemap6

```nelua
global function cubemap6(image: [6]image_t <const>, flags: cint): cubemap_t
```



### cubemap_destroy

```nelua
global function cubemap_destroy(c: *cubemap_t): void
```



### cubemap_get_active

```nelua
global function cubemap_get_active(): *cubemap_t
```



### fbo

```nelua
global function fbo(texture_color: cuint, texture_depth: cuint, wr_flags: cint): cuint
```



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
  fbo: cuint,
  texture: cuint,
  texture_width: cint
}
```



### shadowmap

```nelua
global function shadowmap(texture_width: cint): shadowmap_t
```



### shadowmap_destroy

```nelua
global function shadowmap_destroy(s: *shadowmap_t): void
```



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



### shader_bind

```nelua
global function shader_bind(program: cuint): cuint
```



### shader_int

```nelua
global function shader_int(uniform: cstring <const>, i: cint): void
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



### mesh_t

```nelua
global mesh_t: type = @record {
  vao: cuint,
  vbo: cuint,
  ibo: cuint,
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



### mesh_push_state

```nelua
global function mesh_push_state(m: *mesh_t, program: cuint, texture_id: cuint, model: [16]float32, view: [16]float32, proj: [16]float32, billboard: cuint): void
```



### mesh_pop_state

```nelua
global function mesh_pop_state(m: *mesh_t): void
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
  iqm: pointer,
  num_textures: cuint,
  textures: *[0]cuint,
  num_meshes: cuint,
  num_triangles: cuint,
  num_joints: cuint,
  num_anims: cuint,
  num_frames: cuint,
  program: cuint,
  curframe: float32,
  pivot: mat44,
  flags: cuint,
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



### model_set_texture

```nelua
global function model_set_texture(m: model_t, t: texture_t): void
```



### model_destroy

```nelua
global function model_destroy(m: model_t): void
```



### skybox_t

```nelua
global skybox_t: type = @record {
  program: cuint,
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
global function viewport_color(color: vec3): void
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



### ddraw_color

```nelua
global function ddraw_color(rgb: cuint): void
```

renderdd

### ddraw_ontop

```nelua
global function ddraw_ontop(enabled: cint): void
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
global function ddraw_text(pos: vec3, scale: float32, ...: cvarargs): void
```

global function ddraw_text(pos: vec3, scale: float32, text: cstring <const>): void <cimport, nodecl> end
global function ddraw_text2d(pos: vec2, scale: float32, text: cstring <const>): void <cimport, nodecl> end

### ddraw_text2d

```nelua
global function ddraw_text2d(pos: vec2, scale: float32, ...: cvarargs): void
```



### ddraw_triangle

```nelua
global function ddraw_triangle(p1: vec3, p2: vec3, p3: vec3): void
```



### ddraw_demo

```nelua
global function ddraw_demo(): void
```



### ddraw_flush

```nelua
global function ddraw_flush(): void
```



### camera_t

```nelua
global camera_t: type = @record {
  view: mat44,
  proj: mat44,
  position: vec3,
  up: vec3,
  look: vec3,
  yaw: float32,
  pitch: float32,
  speed: float32,
  last_look: vec3,
  last_move: vec3
}
```

scene

### camera

```nelua
global function camera(): camera_t
```



### camera_move

```nelua
global function camera_move(cam: *camera_t, x: float32, y: float32, z: float32): void
```



### camera_fps

```nelua
global function camera_fps(cam: *camera_t, yaw: float32, pitch: float32): void
```



### camera_lookat

```nelua
global function camera_lookat(cam: *camera_t, target: vec3): void
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
  sca: vec3,
  pos: vec3,
  euler: vec3,
  pivot: vec3,
  texture_id: cuint,
  model: model_t,
  bounds: aabb,
  billboard: cuint
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
  program: cuint,
  objs: *[0]object_t,
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



### stringf

```nelua
global function stringf(fmt: cstring <const>, ...: cvarargs): cstring
```

string

### strcatf

```nelua
global function strcatf(x: *[0]cstring, buf: cstring <const>): cstring
```



### strtok_s

```nelua
global function strtok_s(str: cstring, delimiters: cstring <const>, context: *[0]cstring): cstring
```



### strmatch

```nelua
global function strmatch(s: cstring <const>, wildcard: cstring <const>): cint
```



### strcmp_qsort

```nelua
global function strcmp_qsort(a: pointer <const>, b: pointer <const>): cint
```



### strcmpi_qsort

```nelua
global function strcmpi_qsort(a: pointer <const>, b: pointer <const>): cint
```



### strbegi

```nelua
global function strbegi(src: cstring <const>, sub: cstring <const>): boolean
```



### strendi

```nelua
global function strendi(src: cstring <const>, sub: cstring <const>): boolean
```



### strstri

```nelua
global function strstri(src: cstring <const>, sub: cstring <const>): cstring
```



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



### strswap

```nelua
global function strswap(copy: cstring, target: cstring <const>, replace: cstring <const>): cstring
```



### strcut

```nelua
global function strcut(copy: cstring, target: cstring <const>): cstring
```



### str16to8

```nelua
global function str16to8(str: *cint <const>): cstring
```



### strlerp

```nelua
global function strlerp(numpairs: cuint, pairs: *[0]cstring <const>, str: cstring <const>): cstring
```



### strlcat

```nelua
global function strlcat(dst: cstring, src: cstring <const>, dstcap: csize): csize
```



### strlcpy

```nelua
global function strlcpy(dst: cstring, src: cstring <const>, dstcap: csize): csize
```



### strsplit

```nelua
global function strsplit(string: cstring <const>, delimiters: cstring <const>): *[0]cstring
```



### strjoin

```nelua
global function strjoin(list: *[0]cstring, separator: cstring <const>): cstring
```



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



### optioni

```nelua
global function optioni(commalist: cstring <const>, defaults: cint): cint
```



### optionf

```nelua
global function optionf(commalist: cstring <const>, defaults: float32): float32
```



### os_exec_output

```nelua
global function os_exec_output(): cstring
```



### os_exec

```nelua
global function os_exec(retvalue: *cint, command: cstring <const>): void
```



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



### app_reload

```nelua
global function app_reload(): void
```



### date

```nelua
global function date(): uint64
```



### date_epoch

```nelua
global function date_epoch(): uint64
```



### time_ss

```nelua
global function time_ss(): float64
```



### time_ms

```nelua
global function time_ms(): float64
```



### time_us

```nelua
global function time_us(): uint64
```



### sleep_ss

```nelua
global function sleep_ss(ss: float64): float64
```



### sleep_ms

```nelua
global function sleep_ms(ms: float64): float64
```



### sleep_us

```nelua
global function sleep_us(us: uint64): uint64
```



### callstack

```nelua
global function callstack(traces: cint): cstring
```



### callstackf

```nelua
global function callstackf(fp: *FILE, traces: cint): cint
```



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



### lil32f

```nelua
global function lil32f(n: float32): float32
```



### lil64

```nelua
global function lil64(n: uint64): uint64
```



### lil64f

```nelua
global function lil64f(n: float64): float64
```



### big16

```nelua
global function big16(n: uint16): uint16
```



### big32

```nelua
global function big32(n: uint32): uint16
```



### big32f

```nelua
global function big32f(n: float32): float32
```



### big64

```nelua
global function big64(n: uint64): uint64
```



### big64f

```nelua
global function big64f(n: float64): float64
```



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



### PRINTF

```nelua
global function PRINTF(...: cvarargs): cint
```



### PANIC

```nelua
global function PANIC(...: cvarargs): cint
```



### ui_begin

```nelua
global function ui_begin(title: cstring <const>, flags: cint): cint
```

ui

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



### ui_string

```nelua
global function ui_string(label: cstring <const>, buffer: cstring, buflen: cint): cint
```



### ui_color3

```nelua
global function ui_color3(label: cstring <const>, color3: *[0]float32): cint
```



### ui_color4

```nelua
global function ui_color4(label: cstring <const>, color4: *[0]float32): cint
```



### ui_button

```nelua
global function ui_button(label: cstring <const>): cint
```



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



### ui_image

```nelua
global function ui_image(label: cstring <const>, img: texture_t): cint
```



### ui_separator

```nelua
global function ui_separator(): cint
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



### ui_const_stringf

```nelua
global function ui_const_stringf(label: cstring <const>, ...: cvarargs): cint
```



### ui_end

```nelua
global function ui_end(): void
```



### ui_menu

```nelua
global function ui_menu(items: cstring <const>): cint
```



### ui_item

```nelua
global function ui_item(): cint
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
global function ui_demo(): void
```



### video_t

```nelua
global video_t: type = @record {}
```

video

### video

```nelua
global function video(filename: cstring <const>, flags: cint): *video_t
```



### video_decode

```nelua
global function video_decode(v: *video_t): *texture_t
```



### video_has_finished

```nelua
global function video_has_finished(v: *video_t): cint
```



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



### WINDOW_FLAGS

```nelua
global WINDOW_FLAGS: type = @enum(cint) {
  WINDOW_NO_MOUSE = 0x01,

  WINDOW_MSAA2 = 0x02,
  WINDOW_MSAA4 = 0x04,
  WINDOW_MSAA8 = 0x08,

  WINDOW_SQUARE = 0x20,
  WINDOW_PORTRAIT = 0x40,
  WINDOW_LANDSCAPE = 0x80
}
```

window

### window_create

```nelua
global function window_create(zoom: float32, flags: cint): void
```



### window_title

```nelua
global function window_title(title: cstring <const>): void
```



### window_icon

```nelua
global function window_icon(file_icon: cstring <const>): void
```



### window_flush

```nelua
global function window_flush(): void
```



### window_swap

```nelua
global function window_swap(): cint
```



### window_handle

```nelua
global function window_handle(): pointer
```



### window_width

```nelua
global function window_width(): cint
```



### window_height

```nelua
global function window_height(): cint
```



### window_aspect

```nelua
global function window_aspect(): float64
```



### window_time

```nelua
global function window_time(): float64
```



### window_delta

```nelua
global function window_delta(): float64
```



### window_fps

```nelua
global function window_fps(): float64
```



### window_hook

```nelua
global function window_hook(func: function(): void, userdata: pointer): boolean
```



### window_unhook

```nelua
global function window_unhook(func: function(): void, userdata: pointer): void
```



### window_focus

```nelua
global function window_focus(): void
```



### window_has_focus

```nelua
global function window_has_focus(): cint
```



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



### window_videorec

```nelua
global function window_videorec(filename_mpg: cstring <const>): void
```



### window_has_videorec

```nelua
global function window_has_videorec(): cint
```



### window_screenshot

```nelua
global function window_screenshot(filename_png: cstring <const>): void
```



---
