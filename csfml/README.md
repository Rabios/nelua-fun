# API

### CSFML_VERSION_MAJOR

```nelua
global CSFML_VERSION_MAJOR: cint
```



### CSFML_VERSION_MINOR

```nelua
global CSFML_VERSION_MINOR: cint
```



### CSFML_VERSION_PATCH

```nelua
global CSFML_VERSION_PATCH: cint
```



### CSFML_SYSTEM_WINDOWS

```nelua
global CSFML_SYSTEM_WINDOWS: cint
```



### CSFML_SYSTEM_LINUX

```nelua
global CSFML_SYSTEM_LINUX: cint
```



### CSFML_SYSTEM_MACOS

```nelua
global CSFML_SYSTEM_MACOS: cint
```



### CSFML_SYSTEM_FREEBSD

```nelua
global CSFML_SYSTEM_FREEBSD: cint
```



### sfBool

```nelua
global sfBool: type = @cint
```



### sfFalse

```nelua
global sfFalse: cint
```



### sfTrue

```nelua
global sfTrue: cint
```



### sfInt8

```nelua
global sfInt8: type = @cchar
```



### sfUint8

```nelua
global sfUint8: type = @cuchar
```



### sfInt16

```nelua
global sfInt16: type = @cshort
```



### sfUint16

```nelua
global sfUint16: type = @cushort
```



### sfInt32

```nelua
global sfInt32: type = @cint
```



### sfUint32

```nelua
global sfUint32: type = @cuint
```



### sfInt64

```nelua
global sfInt64: type = @clonglong
```



### sfUint64

```nelua
global sfUint64: type = @culonglong
```



### sfTime

```nelua
global sfTime: type = @record {
  microseconds: sfInt64
}
```



### sfTime_Zero

```nelua
global sfTime_Zero: sfTime
```



### sfTime_asSeconds

```nelua
global function sfTime_asSeconds(time: sfTime): float32
```



### sfTime_asMilliseconds

```nelua
global function sfTime_asMilliseconds(time: sfTime): sfInt32
```



### sfTime_asMicroseconds

```nelua
global function sfTime_asMicroseconds(time: sfTime): sfInt64
```



### sfSeconds

```nelua
global function sfSeconds(amount: float32): sfTime
```



### sfMilliseconds

```nelua
global function sfMilliseconds(amount: sfInt32): sfTime
```



### sfMicroseconds

```nelua
global function sfMicroseconds(amount: sfInt64): sfTime
```



### sfClock

```nelua
global sfClock: type = @record {}
```



### sfMutex

```nelua
global sfMutex: type = @record {}
```



### sfThread

```nelua
global sfThread: type = @record {}
```



### sfClock_create

```nelua
global function sfClock_create(): *sfClock
```



### sfClock_copy

```nelua
global function sfClock_copy(clock: *sfClock <const>): *sfClock
```



### sfClock_destroy

```nelua
global function sfClock_destroy(clock: *sfClock): void
```



### sfClock_getElapsedTime

```nelua
global function sfClock_getElapsedTime(clock: *sfClock <const>): sfTime
```



### sfClock_restart

```nelua
global function sfClock_restart(clock: *sfClock): sfTime
```



### sfInputStreamReadFunc

```nelua
global sfInputStreamReadFunc: type = @function(pointer, sfInt64, pointer): sfInt64
```



### sfInputStreamSeekFunc

```nelua
global sfInputStreamSeekFunc: type = @function(sfInt64, pointer): sfInt64
```



### sfInputStreamTellFunc

```nelua
global sfInputStreamTellFunc: type = @function(pointer): sfInt64
```



### sfInputStreamGetSizeFunc

```nelua
global sfInputStreamGetSizeFunc: type = @function(pointer): sfInt64
```



### sfInputStream

```nelua
global sfInputStream: type = @record {
  read: sfInputStreamReadFunc,
  seek: sfInputStreamSeekFunc,
  tell: sfInputStreamTellFunc,
  getSize: sfInputStreamGetSizeFunc,
  userData: pointer
}
```



### sfMutex_create

```nelua
global function sfMutex_create(): *sfMutex
```



### sfMutex_destroy

```nelua
global function sfMutex_destroy(mutex: *sfMutex): void
```



### sfMutex_lock

```nelua
global function sfMutex_lock(mutex: *sfMutex): void
```



### sfMutex_unlock

```nelua
global function sfMutex_unlock(mutex: *sfMutex): void
```



### sfSleep

```nelua
global function sfSleep(duration: sfTime): void
```



### sfThread_create

```nelua
global function sfThread_create(f: function(pointer): void, userdata: pointer): *sfThread
```



### sfThread_destroy

```nelua
global function sfThread_destroy(thread: *sfThread): void
```



### sfThread_launch

```nelua
global function sfThread_launch(thread: *sfThread): void
```



### sfThread_wait

```nelua
global function sfThread_wait(thread: *sfThread): void
```



### sfThread_terminate

```nelua
global function sfThread_terminate(thread: *sfThread): void
```



### sfVector2i

```nelua
global sfVector2i: type = @record {
  x: cint,
  y: cint
}
```



### sfVector2u

```nelua
global sfVector2u: type = @record {
  x: cuint,
  y: cuint
}
```



### sfVector2f

```nelua
global sfVector2f: type = @record {
  x: float32,
  y: float32
}
```



### sfVector3f

```nelua
global sfVector3f: type = @record {
  x: float32,
  y: float32,
  z: float32
}
```



### sfFtpDirectoryResponse

```nelua
global sfFtpDirectoryResponse: type = @record {}
```



### sfFtpListingResponse

```nelua
global sfFtpListingResponse: type = @record {}
```



### sfFtpResponse

```nelua
global sfFtpResponse: type = @record {}
```



### sfFtp

```nelua
global sfFtp: type = @record {}
```



### sfHttpRequest

```nelua
global sfHttpRequest: type = @record {}
```



### sfHttpResponse

```nelua
global sfHttpResponse: type = @record {}
```



### sfHttp

```nelua
global sfHttp: type = @record {}
```



### sfPacket

```nelua
global sfPacket: type = @record {}
```



### sfSocketSelector

```nelua
global sfSocketSelector: type = @record {}
```



### sfTcpListener

```nelua
global sfTcpListener: type = @record {}
```



### sfTcpSocket

```nelua
global sfTcpSocket: type = @record {}
```



### sfUdpSocket

```nelua
global sfUdpSocket: type = @record {}
```



### sfIpAddress

```nelua
global sfIpAddress: type = @record {
  address: [16]cchar
}
```



### sfIpAddress_None

```nelua
global sfIpAddress_None: sfIpAddress
```



### sfIpAddress_Any

```nelua
global sfIpAddress_Any: sfIpAddress
```



### sfIpAddress_LocalHost

```nelua
global sfIpAddress_LocalHost: sfIpAddress
```



### sfIpAddress_Broadcast

```nelua
global sfIpAddress_Broadcast: sfIpAddress
```



### sfIpAddress_fromString

```nelua
global function sfIpAddress_fromString(address: cstring <const>): sfIpAddress
```



### sfIpAddress_fromBytes

```nelua
global function sfIpAddress_fromBytes(byte0: sfUint8, byte1: sfUint8, byte2: sfUint8, byte3: sfUint8): sfIpAddress
```



### sfIpAddress_fromInteger

```nelua
global function sfIpAddress_fromInteger(address: sfUint32): sfIpAddress
```



### sfIpAddress_toString

```nelua
global function sfIpAddress_toString(address: sfIpAddress, string: cstring): void
```



### sfIpAddress_toInteger

```nelua
global function sfIpAddress_toInteger(address: sfIpAddress): sfUint32
```



### sfIpAddress_getLocalAddress

```nelua
global function sfIpAddress_getLocalAddress(): sfIpAddress
```



### sfIpAddress_getPublicAddress

```nelua
global function sfIpAddress_getPublicAddress(timeout: sfTime): sfIpAddress
```



### sfFtpTransferMode

```nelua
global sfFtpTransferMode: type = @enum(cint) {
  sfFtpBinary = 0,
  sfFtpAscii,
  sfFtpEbcdic
}
```



### sfFtpStatus

```nelua
global sfFtpStatus: type = @enum(cint) {
  sfFtpRestartMarkerReply          = 110,
  sfFtpServiceReadySoon            = 120,
  sfFtpDataConnectionAlreadyOpened = 125,
  sfFtpOpeningDataConnection       = 150,  
  sfFtpOk                    = 200,
  sfFtpPointlessCommand      = 202,
  sfFtpSystemStatus          = 211,
  sfFtpDirectoryStatus       = 212,
  sfFtpFileStatus            = 213,
  sfFtpHelpMessage           = 214,
  sfFtpSystemType            = 215,
  sfFtpServiceReady          = 220,
  sfFtpClosingConnection     = 221,
  sfFtpDataConnectionOpened  = 225,
  sfFtpClosingDataConnection = 226,
  sfFtpEnteringPassiveMode   = 227,
  sfFtpLoggedIn              = 230,
  sfFtpFileActionOk          = 250,
  sfFtpDirectoryOk           = 257,
  sfFtpNeedPassword       = 331,
  sfFtpNeedAccountToLogIn = 332,
  sfFtpNeedInformation    = 350,

  sfFtpServiceUnavailable        = 421,
  sfFtpDataConnectionUnavailable = 425,
  sfFtpTransferAborted           = 426,
  sfFtpFileActionAborted         = 450,
  sfFtpLocalError                = 451,
  sfFtpInsufficientStorageSpace  = 452,
  sfFtpCommandUnknown          = 500,
  sfFtpParametersUnknown       = 501,
  sfFtpCommandNotImplemented   = 502,
  sfFtpBadCommandSequence      = 503,
  sfFtpParameterNotImplemented = 504,
  sfFtpNotLoggedIn             = 530,
  sfFtpNeedAccountToStore      = 532,
  sfFtpFileUnavailable         = 550,
  sfFtpPageTypeUnknown         = 551,
  sfFtpNotEnoughMemory         = 552,
  sfFtpFilenameNotAllowed      = 553,
  sfFtpInvalidResponse  = 1000,
  sfFtpConnectionFailed = 1001,
  sfFtpConnectionClosed = 1002,
  sfFtpInvalidFile      = 1003
}
```



### sfFtpListingResponse_destroy

```nelua
global function sfFtpListingResponse_destroy(ftpListingResponse: *sfFtpListingResponse): void
```



### sfFtpListingResponse_isOk

```nelua
global function sfFtpListingResponse_isOk(ftpListingResponse: *sfFtpListingResponse <const>): sfBool
```



### sfFtpListingResponse_getStatus

```nelua
global function sfFtpListingResponse_getStatus(ftpListingResponse: *sfFtpListingResponse <const>): sfFtpStatus
```



### sfFtpListingResponse_getMessage

```nelua
global function sfFtpListingResponse_getMessage(ftpListingResponse: *sfFtpListingResponse <const>): cstring
```



### sfFtpListingResponse_getCount

```nelua
global function sfFtpListingResponse_getCount(ftpListingResponse: *sfFtpListingResponse <const>): csize
```



### sfFtpListingResponse_getName

```nelua
global function sfFtpListingResponse_getName(ftpListingResponse: *sfFtpListingResponse <const>, index: csize): cstring
```



### sfFtpDirectoryResponse_destroy

```nelua
global function sfFtpDirectoryResponse_destroy(ftpListingResponse: *sfFtpListingResponse): void
```



### sfFtpDirectoryResponse_isOk

```nelua
global function sfFtpDirectoryResponse_isOk(ftpListingResponse: *sfFtpDirectoryResponse <const>): sfBool
```



### sfFtpDirectoryResponse_getStatus

```nelua
global function sfFtpDirectoryResponse_getStatus(ftpListingResponse: *sfFtpDirectoryResponse <const>): sfFtpStatus
```



### sfFtpDirectoryResponse_getMessage

```nelua
global function sfFtpDirectoryResponse_getMessage(ftpListingResponse: *sfFtpDirectoryResponse <const>): cstring
```



### sfFtpDirectoryResponse_getDirectory

```nelua
global function sfFtpDirectoryResponse_getDirectory(ftpListingResponse: *sfFtpDirectoryResponse <const>): cstring
```



### sfFtpResponse_destroy

```nelua
global function sfFtpResponse_destroy(ftpResponse: *sfFtpResponse): void
```



### sfFtpResponse_isOk

```nelua
global function sfFtpResponse_isOk(ftpResponse: *sfFtpResponse <const>): sfBool
```



### sfFtpResponse_getStatus

```nelua
global function sfFtpResponse_getStatus(ftpResponse: *sfFtpResponse <const>): sfFtpStatus
```



### sfFtpResponse_getMessage

```nelua
global function sfFtpResponse_getMessage(ftpResponse: *sfFtpResponse <const>): cstring
```



### sfFtp_create

```nelua
global function sfFtp_create(): *sfFtp
```



### sfFtp_destroy

```nelua
global function sfFtp_destroy(ftp: *sfFtp): void
```



### sfFtp_connect

```nelua
global function sfFtp_connect(ftp: *sfFtp, server: sfIpAddress, port: cushort, timeout: sfTime): *sfFtpResponse
```



### sfFtp_loginAnonymous

```nelua
global function sfFtp_loginAnonymous(ftp: *sfFtp): *sfFtpResponse
```



### sfFtp_login

```nelua
global function sfFtp_login(ftp: *sfFtp, name: cstring <const>, password: cstring <const>): *sfFtpResponse
```



### sfFtp_disconnect

```nelua
global function sfFtp_disconnect(ftp: *sfFtp): *sfFtpResponse
```



### sfFtp_keepAlive

```nelua
global function sfFtp_keepAlive(ftp: *sfFtp): *sfFtpResponse
```



### sfFtp_getWorkingDirectory

```nelua
global function sfFtp_getWorkingDirectory(ftp: *sfFtp): *sfFtpDirectoryResponse
```



### sfFtp_getDirectoryListing

```nelua
global function sfFtp_getDirectoryListing(ftp: *sfFtp, directory: cstring <const>): *sfFtpListingResponse
```



### sfFtp_changeDirectory

```nelua
global function sfFtp_changeDirectory(ftp: *sfFtp, directory: cstring <const>): *sfFtpResponse
```



### sfFtp_parentDirectory

```nelua
global function sfFtp_parentDirectory(ftp: *sfFtp): *sfFtpResponse
```



### sfFtp_createDirectory

```nelua
global function sfFtp_createDirectory(ftp: *sfFtp, name: cstring <const>): *sfFtpResponse
```



### sfFtp_deleteDirectory

```nelua
global function sfFtp_deleteDirectory(ftp: *sfFtp, name: cstring <const>): *sfFtpResponse
```



### sfFtp_renameFile

```nelua
global function sfFtp_renameFile(ftp: *sfFtp, file: cstring <const>, newName: cstring <const>): *sfFtpResponse
```



### sfFtp_deleteFile

```nelua
global function sfFtp_deleteFile(ftp: *sfFtp, file: cstring <const>): *sfFtpResponse
```



### sfFtp_download

```nelua
global function sfFtp_download(ftp: *sfFtp, remoteFile: cstring <const>, localPath: cstring <const>, mode: sfFtpTransferMode): *sfFtpResponse
```



### sfFtp_upload

```nelua
global function sfFtp_upload(ftp: *sfFtp, localFile: cstring <const>, remotePath: cstring <const>, mode: sfFtpTransferMode, append: sfBool): *sfFtpResponse
```



### sfFtp_sendCommand

```nelua
global function sfFtp_sendCommand(ftp: *sfFtp, command: cstring <const>, parameter: cstring <const>): *sfFtpResponse
```



### sfHttpMethod

```nelua
global sfHttpMethod: type = @enum(cint) {
  sfHttpGet = 0,
  sfHttpPost,
  sfHttpHead,
  sfHttpPut,
  sfHttpDelete
}
```



### sfHttpStatus

```nelua
global sfHttpStatus: type = @enum(cint) {
  sfHttpOk             = 200,
  sfHttpCreated        = 201,
  sfHttpAccepted       = 202,
  sfHttpNoContent      = 204,
  sfHttpResetContent   = 205,
  sfHttpPartialContent = 206,

  sfHttpMultipleChoices  = 300,
  sfHttpMovedPermanently = 301,
  sfHttpMovedTemporarily = 302,
  sfHttpNotModified      = 304,

  sfHttpBadRequest          = 400,
  sfHttpUnauthorized        = 401,
  sfHttpForbidden           = 403,
  sfHttpNotFound            = 404,
  sfHttpRangeNotSatisfiable = 407,

  sfHttpInternalServerError = 500,
  sfHttpNotImplemented      = 501,
  sfHttpBadGateway          = 502,
  sfHttpServiceNotAvailable = 503,
  sfHttpGatewayTimeout      = 504,
  sfHttpVersionNotSupported = 505,

  sfHttpInvalidResponse  = 1000,
  sfHttpConnectionFailed = 1001
}
```



### sfHttpRequest_create

```nelua
global function sfHttpRequest_create(): *sfHttpRequest
```



### sfHttpRequest_destroy

```nelua
global function sfHttpRequest_destroy(httpRequest: *sfHttpRequest): void
```



### sfHttpRequest_setField

```nelua
global function sfHttpRequest_setField(httpRequest: *sfHttpRequest, field: cstring <const>, value: cstring <const>): void
```



### sfHttpRequest_setMethod

```nelua
global function sfHttpRequest_setMethod(httpRequest: *sfHttpRequest, method: sfHttpMethod): void
```



### sfHttpRequest_setUri

```nelua
global function sfHttpRequest_setUri(httpRequest: *sfHttpRequest, uri: cstring <const>): void
```



### sfHttpRequest_setHttpVersion

```nelua
global function sfHttpRequest_setHttpVersion(httpRequest: *sfHttpRequest, major: cuint, minor: cuint): void
```



### sfHttpRequest_setBody

```nelua
global function sfHttpRequest_setBody(httpRequest: *sfHttpRequest, body: cstring <const>): void
```



### sfHttpResponse_destroy

```nelua
global function sfHttpResponse_destroy(httpResponse: *sfHttpResponse): void
```



### sfHttpResponse_getField

```nelua
global function sfHttpResponse_getField(httpResponse: *sfHttpResponse <const>, field: cstring <const>): cstring
```



### sfHttpResponse_getStatus

```nelua
global function sfHttpResponse_getStatus(httpResponse: *sfHttpResponse <const>): sfHttpStatus
```



### sfHttpResponse_getMajorVersion

```nelua
global function sfHttpResponse_getMajorVersion(httpResponse: *sfHttpResponse <const>): cuint
```



### sfHttpResponse_getMinorVersion

```nelua
global function sfHttpResponse_getMinorVersion(httpResponse: *sfHttpResponse <const>): cuint
```



### sfHttpResponse_getBody

```nelua
global function sfHttpResponse_getBody(httpResponse: *sfHttpResponse <const>): cstring
```



### sfHttp_create

```nelua
global function sfHttp_create(): *sfHttp
```



### sfHttp_destroy

```nelua
global function sfHttp_destroy(http: *sfHttp): void
```



### sfHttp_setHost

```nelua
global function sfHttp_setHost(http: *sfHttp, host: cstring <const>, port: cuint): void
```



### sfHttp_sendRequest

```nelua
global function sfHttp_sendRequest(http: *sfHttp, request: *sfHttpRequest <const>, timeout: sfTime): *sfHttpResponse
```



### sfPacket_create

```nelua
global function sfPacket_create(): *sfPacket
```



### sfPacket_copy

```nelua
global function sfPacket_copy(packet: *sfPacket <const>): *sfPacket
```



### sfPacket_destroy

```nelua
global function sfPacket_destroy(packet: *sfPacket): void
```



### sfPacket_append

```nelua
global function sfPacket_append(packet: *sfPacket, data: pointer, sizeInBytes: csize): void
```



### sfPacket_clear

```nelua
global function sfPacket_clear(packet: *sfPacket): void
```



### sfPacket_getData

```nelua
global function sfPacket_getData(packet: *sfPacket <const>): pointer
```



### sfPacket_getDataSize

```nelua
global function sfPacket_getDataSize(packet: *sfPacket <const>): csize
```



### sfPacket_endOfPacket

```nelua
global function sfPacket_endOfPacket(packet: *sfPacket <const>): sfBool
```



### sfPacket_canRead

```nelua
global function sfPacket_canRead(packet: *sfPacket <const>): sfBool
```



### sfPacket_readBool

```nelua
global function sfPacket_readBool(packet: *sfPacket): sfBool
```



### sfPacket_readInt8

```nelua
global function sfPacket_readInt8(packet: *sfPacket): sfInt8
```



### sfPacket_readUint8

```nelua
global function sfPacket_readUint8(packet: *sfPacket): sfUint8
```



### sfPacket_readInt16

```nelua
global function sfPacket_readInt16(packet: *sfPacket): sfInt16
```



### sfPacket_readUint16

```nelua
global function sfPacket_readUint16(packet: *sfPacket): sfUint16
```



### sfPacket_readInt32

```nelua
global function sfPacket_readInt32(packet: *sfPacket): sfInt32
```



### sfPacket_readUint32

```nelua
global function sfPacket_readUint32(packet: *sfPacket): sfUint32
```



### sfPacket_readFloat

```nelua
global function sfPacket_readFloat(packet: *sfPacket): float32
```



### sfPacket_readDouble

```nelua
global function sfPacket_readDouble(packet: *sfPacket): float64
```



### sfPacket_readString

```nelua
global function sfPacket_readString(packet: *sfPacket, str: cstring): void
```



### sfPacket_readWideString

```nelua
global function sfPacket_readWideString(packet: *sfPacket, str: *[0]cint): void
```



### sfPacket_writeBool

```nelua
global function sfPacket_writeBool(packet: *sfPacket, data: sfBool): void
```



### sfPacket_writeInt8

```nelua
global function sfPacket_writeInt8(packet: *sfPacket, data: sfInt8): void
```



### sfPacket_writeUint8

```nelua
global function sfPacket_writeUint8(packet: *sfPacket, data: sfUint8): void
```



### sfPacket_writeInt16

```nelua
global function sfPacket_writeInt16(packet: *sfPacket, data: sfInt16): void
```



### sfPacket_writeUint16

```nelua
global function sfPacket_writeUint16(packet: *sfPacket, data: sfUint16): void
```



### sfPacket_writeInt32

```nelua
global function sfPacket_writeInt32(packet: *sfPacket, data: sfInt32): void
```



### sfPacket_writeUint32

```nelua
global function sfPacket_writeUint32(packet: *sfPacket, data: sfUint32): void
```



### sfPacket_writeFloat

```nelua
global function sfPacket_writeFloat(packet: *sfPacket, data: float32): void
```



### sfPacket_writeDouble

```nelua
global function sfPacket_writeDouble(packet: *sfPacket, data: float64): void
```



### sfPacket_writeString

```nelua
global function sfPacket_writeString(packet: *sfPacket, data: cstring <const>): void
```



### sfPacket_writeWideString

```nelua
global function sfPacket_writeWideString(packet: *sfPacket, data: *[0]cint): void
```



### sfSocketStatus

```nelua
global sfSocketStatus: type = @enum(cint) {
  sfSocketDone = 0,
  sfSocketNotReady,
  sfSocketPartial,
  sfSocketDisconnected,
  sfSocketError
}
```



### sfSocketSelector_create

```nelua
global function sfSocketSelector_create(): *sfSocketSelector
```



### sfSocketSelector_copy

```nelua
global function sfSocketSelector_copy(selector: *sfSocketSelector <const>): *sfSocketSelector
```



### sfSocketSelector_destroy

```nelua
global function sfSocketSelector_destroy(selector: *sfSocketSelector): void
```



### sfSocketSelector_addTcpListener

```nelua
global function sfSocketSelector_addTcpListener(selector: *sfSocketSelector, socket: *sfTcpListener): void
```



### sfSocketSelector_addTcpSocket

```nelua
global function sfSocketSelector_addTcpSocket(selector: *sfSocketSelector, socket: *sfTcpSocket): void
```



### sfSocketSelector_addUdpSocket

```nelua
global function sfSocketSelector_addUdpSocket(selector: *sfSocketSelector, socket: *sfUdpSocket): void
```



### sfSocketSelector_removeTcpListener

```nelua
global function sfSocketSelector_removeTcpListener(selector: *sfSocketSelector, socket: *sfTcpListener): void
```



### sfSocketSelector_removeTcpSocket

```nelua
global function sfSocketSelector_removeTcpSocket(selector: *sfSocketSelector, socket: *sfTcpSocket): void
```



### sfSocketSelector_removeUdpSocket

```nelua
global function sfSocketSelector_removeUdpSocket(selector: *sfSocketSelector, socket: *sfUdpSocket): void
```



### sfSocketSelector_clear

```nelua
global function sfSocketSelector_clear(selector: *sfSocketSelector): void
```



### sfSocketSelector_wait

```nelua
global function sfSocketSelector_wait(selector: *sfSocketSelector, timeout: sfTime): sfBool
```



### sfSocketSelector_isTcpListenerReady

```nelua
global function sfSocketSelector_isTcpListenerReady(selector: *sfSocketSelector <const>, socket: *sfTcpListener): void
```



### sfSocketSelector_isTcpSocketReady

```nelua
global function sfSocketSelector_isTcpSocketReady(selector: *sfSocketSelector <const>, socket: *sfTcpSocket): void
```



### sfSocketSelector_isUdpSocketReady

```nelua
global function sfSocketSelector_isUdpSocketReady(selector: *sfSocketSelector <const>, socket: *sfUdpSocket): void
```



### sfTcpListener_create

```nelua
global function sfTcpListener_create(): *sfTcpListener
```



### sfTcpListener_destroy

```nelua
global function sfTcpListener_destroy(listener: *sfTcpListener): void
```



### sfTcpListener_setBlocking

```nelua
global function sfTcpListener_setBlocking(listener: *sfTcpListener, blocking: sfBool): void
```



### sfTcpListener_isBlocking

```nelua
global function sfTcpListener_isBlocking(listener: *sfTcpListener <const>): sfBool
```



### sfTcpListener_getLocalPort

```nelua
global function sfTcpListener_getLocalPort(listener: *sfTcpListener <const>): cushort
```



### sfTcpListener_listen

```nelua
global function sfTcpListener_listen(listener: *sfTcpListener <const>, port: cushort, address: sfIpAddress): sfSocketStatus
```



### sfTcpListener_accept

```nelua
global function sfTcpListener_accept(listener: *sfTcpListener <const>, connected: *[0]*sfTcpSocket): sfSocketStatus
```



### sfTcpSocket_create

```nelua
global function sfTcpSocket_create(): *sfTcpSocket
```



### sfTcpSocket_destroy

```nelua
global function sfTcpSocket_destroy(socket: *sfTcpSocket): void
```



### sfTcpSocket_setBlocking

```nelua
global function sfTcpSocket_setBlocking(socket: *sfTcpSocket, blocking: sfBool): void
```



### sfTcpSocket_isBlocking

```nelua
global function sfTcpSocket_isBlocking(socket: *sfTcpSocket <const>): sfBool
```



### sfTcpSocket_getLocalPort

```nelua
global function sfTcpSocket_getLocalPort(socket: *sfTcpSocket <const>): cushort
```



### sfTcpSocket_getRemoteAddress

```nelua
global function sfTcpSocket_getRemoteAddress(socket: *sfTcpSocket <const>): sfIpAddress
```



### sfTcpSocket_getRemotePort

```nelua
global function sfTcpSocket_getRemotePort(socket: *sfTcpSocket <const>): cushort
```



### sfTcpSocket_connect

```nelua
global function sfTcpSocket_connect(socket: *sfTcpSocket, remoteAddress: sfIpAddress, remotePort: cushort, timeout: sfTime): sfSocketStatus
```



### sfTcpSocket_disconnect

```nelua
global function sfTcpSocket_disconnect(socket: *sfTcpSocket): void
```



### sfTcpSocket_send

```nelua
global function sfTcpSocket_send(socket: *sfTcpSocket, data: pointer <const>, size: csize): sfSocketStatus
```



### sfTcpSocket_sendPartial

```nelua
global function sfTcpSocket_sendPartial(socket: *sfTcpSocket, data: pointer <const>, size: csize, received: *csize): sfSocketStatus
```



### sfTcpSocket_receive

```nelua
global function sfTcpSocket_receive(socket: *sfTcpSocket, data: pointer <const>, size: csize, received: *csize): sfSocketStatus
```



### sfTcpSocket_sendPacket

```nelua
global function sfTcpSocket_sendPacket(socket: *sfTcpSocket, packet: *sfPacket): sfSocketStatus
```



### sfTcpSocket_receivePacket

```nelua
global function sfTcpSocket_receivePacket(socket: *sfTcpSocket, packet: *sfPacket): sfSocketStatus
```



### sfUdpSocket_create

```nelua
global function sfUdpSocket_create(): *sfUdpSocket
```



### sfUdpSocket_destroy

```nelua
global function sfUdpSocket_destroy(socket: *sfUdpSocket): void
```



### sfUdpSocket_setBlocking

```nelua
global function sfUdpSocket_setBlocking(socket: *sfUdpSocket, blocking: sfBool): void
```



### sfUdpSocket_isBlocking

```nelua
global function sfUdpSocket_isBlocking(socket: *sfUdpSocket <const>): sfBool
```



### sfUdpSocket_getLocalPort

```nelua
global function sfUdpSocket_getLocalPort(socket: *sfUdpSocket <const>): cushort
```



### sfUdpSocket_bind

```nelua
global function sfUdpSocket_bind(socket: *sfUdpSocket <const>, port: cushort, address: sfIpAddress): sfSocketStatus
```



### sfUdpSocket_unbind

```nelua
global function sfUdpSocket_unbind(socket: *sfUdpSocket): void
```



### sfUdpSocket_send

```nelua
global function sfUdpSocket_send(socket: *sfUdpSocket, data: pointer<const>, size: csize, remoteAddress: sfIpAddress, remotePort: cushort): sfSocketStatus
```



### sfUdpSocket_receive

```nelua
global function sfUdpSocket_receive(socket: *sfUdpSocket, data: pointer, size: csize, received: *csize, remoteAddress: *sfIpAddress, remotePort: *cushort): sfSocketStatus
```



### sfUdpSocket_sendPacket

```nelua
global function sfUdpSocket_sendPacket(socket: *sfUdpSocket, packet: *sfPacket, remoteAddress: sfIpAddress, remotePort: cushort): sfSocketStatus
```



### sfUdpSocket_receivePacket

```nelua
global function sfUdpSocket_receivePacket(socket: *sfUdpSocket, packet: *sfPacket, remoteAddress: *sfIpAddress, remotePort: *cushort): sfSocketStatus
```



### sfUdpSocket_maxDatagramSize

```nelua
global function sfUdpSocket_maxDatagramSize(): cuint
```



### sfListener_setGlobalVolume

```nelua
global function sfListener_setGlobalVolume(volume: float32): void
```



### sfListener_getGlobalVolume

```nelua
global function sfListener_getGlobalVolume(): float32
```



### sfListener_setPosition

```nelua
global function sfListener_setPosition(position: sfVector3f): void
```



### sfListener_getPosition

```nelua
global function sfListener_getPosition(): sfVector3f
```



### sfListener_setDirection

```nelua
global function sfListener_setDirection(direction: sfVector3f): void
```



### sfListener_getDirection

```nelua
global function sfListener_getDirection(): sfVector3f
```



### sfListener_setUpVector

```nelua
global function sfListener_setUpVector(upVector: sfVector3f): void
```



### sfListener_getUpVector

```nelua
global function sfListener_getUpVector(): sfVector3f
```



### sfSoundStatus

```nelua
global sfSoundStatus: type = @enum(cint) {
  sfStopped = 0,
  sfPaused,
  sfPlaying
}
```



### sfMusic

```nelua
global sfMusic: type = @record {}
```



### sfSound

```nelua
global sfSound: type = @record {}
```



### sfSoundBuffer

```nelua
global sfSoundBuffer: type = @record {}
```



### sfSoundBufferRecorder

```nelua
global sfSoundBufferRecorder: type = @record {}
```



### sfSoundRecorder

```nelua
global sfSoundRecorder: type = @record {}
```



### sfSoundStream

```nelua
global sfSoundStream: type = @record {}
```



### sfTimeSpan

```nelua
global sfTimeSpan: type = @record {
  offset: sfTime,
  length: sfTime
}
```



### sfMusic_createFromFile

```nelua
global function sfMusic_createFromFile(filename: cstring <const>): *sfMusic
```



### sfMusic_createFromMemory

```nelua
global function sfMusic_createFromMemory(data: pointer <const>, sizeInBytes: csize): *sfMusic
```



### sfMusic_createFromStream

```nelua
global function sfMusic_createFromStream(stream: *sfInputStream): *sfMusic
```



### sfMusic_destroy

```nelua
global function sfMusic_destroy(music: *sfMusic): void
```



### sfMusic_setLoop

```nelua
global function sfMusic_setLoop(music: *sfMusic, loop: sfBool): void
```



### sfMusic_getLoop

```nelua
global function sfMusic_getLoop(music: *sfMusic <const>): sfBool
```



### sfMusic_getDuration

```nelua
global function sfMusic_getDuration(music: *sfMusic <const>): sfTime
```



### sfMusic_getLoopPoints

```nelua
global function sfMusic_getLoopPoints(music: *sfMusic <const>): sfTimeSpan
```



### sfMusic_setLoopPoints

```nelua
global function sfMusic_setLoopPoints(music: *sfMusic, timePoints: sfTimeSpan): void
```



### sfMusic_play

```nelua
global function sfMusic_play(music: *sfMusic): void
```



### sfMusic_pause

```nelua
global function sfMusic_pause(music: *sfMusic): void
```



### sfMusic_stop

```nelua
global function sfMusic_stop(music: *sfMusic): void
```



### sfMusic_getChannelCount

```nelua
global function sfMusic_getChannelCount(music: *sfMusic <const>): cuint
```



### sfMusic_getSampleRate

```nelua
global function sfMusic_getSampleRate(music: *sfMusic <const>): cuint
```



### sfMusic_getStatus

```nelua
global function sfMusic_getStatus(music: *sfMusic <const>): sfSoundStatus
```



### sfMusic_getPlayingOffset

```nelua
global function sfMusic_getPlayingOffset(music: *sfMusic <const>): sfTime
```



### sfMusic_setPitch

```nelua
global function sfMusic_setPitch(music: *sfMusic, pitch: float32): void
```



### sfMusic_setVolume

```nelua
global function sfMusic_setVolume(music: *sfMusic, volume: float32): void
```



### sfMusic_setPosition

```nelua
global function sfMusic_setPosition(music: *sfMusic, position: sfVector3f): void
```



### sfMusic_setRelativeToListener

```nelua
global function sfMusic_setRelativeToListener(music: *sfMusic, relative: sfBool): void
```



### sfMusic_setMinDistance

```nelua
global function sfMusic_setMinDistance(music: *sfMusic, distance: float32): void
```



### sfMusic_setAttenuation

```nelua
global function sfMusic_setAttenuation(music: *sfMusic, attenuation: float32): void
```



### sfMusic_setPlayingOffset

```nelua
global function sfMusic_setPlayingOffset(music: *sfMusic, timeOffset: sfTime): void
```



### sfMusic_getPitch

```nelua
global function sfMusic_getPitch(music: *sfMusic <const>): float32
```



### sfMusic_getVolume

```nelua
global function sfMusic_getVolume(music: *sfMusic <const>): float32
```



### sfMusic_getPosition

```nelua
global function sfMusic_getPosition(music: *sfMusic <const>): sfVector3f
```



### sfMusic_isRelativeToListener

```nelua
global function sfMusic_isRelativeToListener(music: *sfMusic <const>): sfBool
```



### sfMusic_getMinDistance

```nelua
global function sfMusic_getMinDistance(music: *sfMusic <const>): float32
```



### sfMusic_getAttenuation

```nelua
global function sfMusic_getAttenuation(music: *sfMusic <const>): float32
```



### sfSound_create

```nelua
global function sfSound_create(): *sfSound
```



### sfSound_copy

```nelua
global function sfSound_copy(sound: *sfSound <const>): *sfSound
```



### sfSound_destroy

```nelua
global function sfSound_destroy(sound: *sfSound): void
```



### sfSound_play

```nelua
global function sfSound_play(sound: *sfSound): void
```



### sfSound_pause

```nelua
global function sfSound_pause(sound: *sfSound): void
```



### sfSound_stop

```nelua
global function sfSound_stop(sound: *sfSound): void
```



### sfSound_setBuffer

```nelua
global function sfSound_setBuffer(sound: *sfSound, buffer: *sfSoundBuffer <const>): void
```



### sfSound_getBuffer

```nelua
global function sfSound_getBuffer(sound: *sfSound <const>): *sfSoundBuffer
```



### sfSound_setLoop

```nelua
global function sfSound_setLoop(sound: *sfSound, loop: sfBool): void
```



### sfSound_getLoop

```nelua
global function sfSound_getLoop(sound: *sfSound <const>): sfBool
```



### sfSound_getStatus

```nelua
global function sfSound_getStatus(sound: *sfSound <const>): sfSoundStatus
```



### sfSound_setPitch

```nelua
global function sfSound_setPitch(sound: *sfSound, pitch: float32): void
```



### sfSound_setVolume

```nelua
global function sfSound_setVolume(sound: *sfSound, volume: float32): void
```



### sfSound_setPosition

```nelua
global function sfSound_setPosition(sound: *sfSound, position: sfVector3f): void
```



### sfSound_setRelativeToListener

```nelua
global function sfSound_setRelativeToListener(sound: *sfSound, relative: sfBool): void
```



### sfSound_setMinDistance

```nelua
global function sfSound_setMinDistance(sound: *sfSound, distance: float32): void
```



### sfSound_setAttenuation

```nelua
global function sfSound_setAttenuation(sound: *sfSound, attenuation: float32): void
```



### sfSound_setPlayingOffset

```nelua
global function sfSound_setPlayingOffset(sound: *sfSound, timeOffset: sfTime): void
```



### sfSound_getPitch

```nelua
global function sfSound_getPitch(sound: *sfSound <const>): float32
```



### sfSound_getVolume

```nelua
global function sfSound_getVolume(sound: *sfSound <const>): float32
```



### sfSound_getPosition

```nelua
global function sfSound_getPosition(sound: *sfSound <const>): sfVector3f
```



### sfSound_isRelativeToListener

```nelua
global function sfSound_isRelativeToListener(sound: *sfSound <const>): sfBool
```



### sfSound_getMinDistance

```nelua
global function sfSound_getMinDistance(sound: *sfSound <const>): float32
```



### sfSound_getAttenuation

```nelua
global function sfSound_getAttenuation(sound: *sfSound <const>): float32
```



### sfSound_getPlayingOffset

```nelua
global function sfSound_getPlayingOffset(sound: *sfSound <const>): sfTime
```



### sfSoundBuffer_createFromFile

```nelua
global function sfSoundBuffer_createFromFile(filename: cstring <const>): *sfSoundBuffer
```



### sfSoundBuffer_createFromMemory

```nelua
global function sfSoundBuffer_createFromMemory(data: pointer <const>, sizeInBytes: csize): *sfSoundBuffer
```



### sfSoundBuffer_createFromStream

```nelua
global function sfSoundBuffer_createFromStream(stream: *sfInputStream): *sfSoundBuffer
```



### sfSoundBuffer_createFromSamples

```nelua
global function sfSoundBuffer_createFromSamples(samples: *[0]sfInt16, sampleCount: sfUint64, channelCount: cuint, sampleRate: cuint): *sfSoundBuffer
```



### sfSoundBuffer_copy

```nelua
global function sfSoundBuffer_copy(soundBuffer: *sfSoundBuffer <const>): *sfSoundBuffer
```



### sfSoundBuffer_destroy

```nelua
global function sfSoundBuffer_destroy(soundBuffer: *sfSoundBuffer): void
```



### sfSoundBuffer_saveToFile

```nelua
global function sfSoundBuffer_saveToFile(soundBuffer: *sfSoundBuffer <const>, filename: cstring <const>): sfBool
```



### sfSoundBuffer_getSamples

```nelua
global function sfSoundBuffer_getSamples(soundBuffer: *sfSoundBuffer <const>): *[0]sfInt16
```



### sfSoundBuffer_getSampleCount

```nelua
global function sfSoundBuffer_getSampleCount(soundBuffer: *sfSoundBuffer <const>): sfUint64
```



### sfSoundBuffer_getSampleRate

```nelua
global function sfSoundBuffer_getSampleRate(soundBuffer: *sfSoundBuffer <const>): cuint
```



### sfSoundBuffer_getChannelCount

```nelua
global function sfSoundBuffer_getChannelCount(soundBuffer: *sfSoundBuffer <const>): cuint
```



### sfSoundBuffer_getDuration

```nelua
global function sfSoundBuffer_getDuration(soundBuffer: *sfSoundBuffer <const>): sfTime
```



### sfSoundBufferRecorder_create

```nelua
global function sfSoundBufferRecorder_create(): *sfSoundBufferRecorder
```



### sfSoundBufferRecorder_destroy

```nelua
global function sfSoundBufferRecorder_destroy(soundBufferRecorder: *sfSoundBufferRecorder): void
```



### sfSoundBufferRecorder_start

```nelua
global function sfSoundBufferRecorder_start(soundBufferRecorder: *sfSoundBufferRecorder, sampleRate: cuint): sfBool
```



### sfSoundBufferRecorder_stop

```nelua
global function sfSoundBufferRecorder_stop(soundBufferRecorder: *sfSoundBufferRecorder): void
```



### sfSoundBufferRecorder_getSampleRate

```nelua
global function sfSoundBufferRecorder_getSampleRate(soundBufferRecorder: *sfSoundBufferRecorder <const>): cuint
```



### sfSoundBufferRecorder_getBuffer

```nelua
global function sfSoundBufferRecorder_getBuffer(soundBufferRecorder: *sfSoundBufferRecorder <const>): *sfSoundBuffer
```



### sfSoundBufferRecorder_setDevice

```nelua
global function sfSoundBufferRecorder_setDevice(soundBufferRecorder: *sfSoundBufferRecorder <const>, name: cstring <const>): sfBool
```



### sfSoundBufferRecorder_getDevice

```nelua
global function sfSoundBufferRecorder_getDevice(soundBufferRecorder: *sfSoundBufferRecorder): cstring
```



### sfSoundRecorderStartCallback

```nelua
global sfSoundRecorderStartCallback: type = @function(pointer): sfBool
```



### sfSoundRecorderProcessCallback

```nelua
global sfSoundRecorderProcessCallback: type = @function(*[0]sfInt16, csize, pointer): sfBool
```



### sfSoundRecorderStopCallback

```nelua
global sfSoundRecorderStopCallback: type = @function(pointer): void
```



### sfSoundRecorder_create

```nelua
global function sfSoundRecorder_create(onStart: sfSoundRecorderStartCallback, onProcess: sfSoundRecorderProcessCallback, onStop: sfSoundRecorderStopCallback, userData: pointer): *sfSoundRecorder
```



### sfSoundRecorder_destroy

```nelua
global function sfSoundRecorder_destroy(soundRecorder: *sfSoundRecorder): void
```



### sfSoundRecorder_start

```nelua
global function sfSoundRecorder_start(soundRecorder: *sfSoundRecorder, sampleRate: cuint): sfBool
```



### sfSoundRecorder_stop

```nelua
global function sfSoundRecorder_stop(soundRecorder: *sfSoundRecorder): void
```



### sfSoundRecorder_getSampleRate

```nelua
global function sfSoundRecorder_getSampleRate(soundRecorder: *sfSoundRecorder <const>): cuint
```



### sfSoundRecorder_isAvailable

```nelua
global function sfSoundRecorder_isAvailable(): sfBool
```



### sfSoundRecorder_setProcessingInterval

```nelua
global function sfSoundRecorder_setProcessingInterval(soundRecorder: *sfSoundRecorder, interval: sfTime): void
```



### sfSoundRecorder_getAvailableDevices

```nelua
global function sfSoundRecorder_getAvailableDevices(count: csize): *[0]cstring
```



### sfSoundRecorder_getDefaultDevice

```nelua
global function sfSoundRecorder_getDefaultDevice(): cstring
```



### sfSoundRecorder_setDevice

```nelua
global function sfSoundRecorder_setDevice(soundRecorder: *sfSoundRecorder, name: cstring <const>): sfBool
```



### sfSoundRecorder_getDevice

```nelua
global function sfSoundRecorder_getDevice(soundRecorder: *sfSoundRecorder): cstring
```



### sfSoundRecorder_setChannelCount

```nelua
global function sfSoundRecorder_setChannelCount(soundRecorder: *sfSoundRecorder, channelCount: cuint): void
```



### sfSoundRecorder_getChannelCount

```nelua
global function sfSoundRecorder_getChannelCount(soundRecorder: *sfSoundRecorder <const>): cuint
```



### sfSoundStreamChunk

```nelua
global sfSoundStreamChunk: type = @record {
  samples: *[0]sfInt16,
  sampleCount: cuint
}
```



### sfSoundStreamGetDataCallback

```nelua
global sfSoundStreamGetDataCallback: type = @function(*sfSoundStreamChunk, pointer): sfBool
```



### sfSoundStreamSeekCallback

```nelua
global sfSoundStreamSeekCallback: type = @function(sfTime, pointer): void
```



### sfSoundStream_create

```nelua
global function sfSoundStream_create(onGetData: sfSoundStreamGetDataCallback, onSeek: sfSoundStreamSeekCallback, channelCount: cuint, sampleRate: cuint, userData: pointer): *sfSoundStream
```



### sfSoundStream_destroy

```nelua
global function sfSoundStream_destroy(soundStream: *sfSoundStream): void
```



### sfSoundStream_play

```nelua
global function sfSoundStream_play(soundStream: *sfSoundStream): void
```



### sfSoundStream_pause

```nelua
global function sfSoundStream_pause(soundStream: *sfSoundStream): void
```



### sfSoundStream_stop

```nelua
global function sfSoundStream_stop(soundStream: *sfSoundStream): void
```



### sfSoundStream_getStatus

```nelua
global function sfSoundStream_getStatus(soundStream: *sfSoundStream <const>): sfSoundStatus
```



### sfSoundStream_getChannelCount

```nelua
global function sfSoundStream_getChannelCount(soundStream: *sfSoundStream <const>): cuint
```



### sfSoundStream_setPitch

```nelua
global function sfSoundStream_setPitch(soundStream: *sfSoundStream, pitch: float32): void
```



### sfSoundStream_setVolume

```nelua
global function sfSoundStream_setVolume(soundStream: *sfSoundStream, volume: float32): void
```



### sfSoundStream_setPosition

```nelua
global function sfSoundStream_setPosition(soundStream: *sfSoundStream, position: sfVector3f): void
```



### sfSoundStream_setRelativeToListener

```nelua
global function sfSoundStream_setRelativeToListener(soundStream: *sfSoundStream, relative: sfBool): void
```



### sfSoundStream_setMinDistance

```nelua
global function sfSoundStream_setMinDistance(soundStream: *sfSoundStream, distance: float32): void
```



### sfSoundStream_setAttenuation

```nelua
global function sfSoundStream_setAttenuation(soundStream: *sfSoundStream, attenuation: float32): void
```



### sfSoundStream_setPlayingOffset

```nelua
global function sfSoundStream_setPlayingOffset(soundStream: *sfSoundStream, timeOffset: sfTime): void
```



### sfSoundStream_setLoop

```nelua
global function sfSoundStream_setLoop(soundStream: *sfSoundStream, loop: sfBool): void
```



### sfSoundStream_getPitch

```nelua
global function sfSoundStream_getPitch(soundStream: *sfSoundStream <const>): float32
```



### sfSoundStream_getVolume

```nelua
global function sfSoundStream_getVolume(soundStream: *sfSoundStream <const>): float32
```



### sfSoundStream_getPosition

```nelua
global function sfSoundStream_getPosition(soundStream: *sfSoundStream <const>): sfVector3f
```



### sfSoundStream_isRelativeToListener

```nelua
global function sfSoundStream_isRelativeToListener(soundStream: *sfSoundStream <const>): sfBool
```



### sfSoundStream_getMinDistance

```nelua
global function sfSoundStream_getMinDistance(soundStream: *sfSoundStream <const>): float32
```



### sfSoundStream_getAttenuation

```nelua
global function sfSoundStream_getAttenuation(soundStream: *sfSoundStream <const>): float32
```



### sfSoundStream_getLoop

```nelua
global function sfSoundStream_getLoop(soundStream: *sfSoundStream <const>): sfBool
```



### sfSoundStream_getPlayingOffset

```nelua
global function sfSoundStream_getPlayingOffset(soundStream: *sfSoundStream <const>): sfTime
```



### sfContext

```nelua
global sfContext: type = @record {}
```



### sfCursor

```nelua
global sfCursor: type = @record {}
```



### sfWindow

```nelua
global sfWindow: type = @record {}
```



### sfClipboard_getString

```nelua
global function sfClipboard_getString(): cstring
```



### sfClipboard_getUnicodeString

```nelua
global function sfClipboard_getUnicodeString(): *[0]sfUint32
```



### sfClipboard_setString

```nelua
global function sfClipboard_setString(text: cstring <const>): void
```



### sfClipboard_setUnicodeString

```nelua
global function sfClipboard_setUnicodeString(text: *[0]sfUint32): void
```



### sfWindowHandle

```nelua
global sfWindowHandle: type = @culong
```



### sfWindowHandle

```nelua
global sfWindowHandle: type = @pointer
```



### sfVideoMode

```nelua
global sfVideoMode: type = @record {
  width: cuint,
  height: cuint,
  bitsPerPixel: cuint
}
```



### sfVideoMode_getDesktopMode

```nelua
global function sfVideoMode_getDesktopMode(): sfVideoMode
```



### sfVideoMode_getFullscreenModes

```nelua
global function sfVideoMode_getFullscreenModes(count: *csize): *[0]sfVideoMode
```



### sfVideoMode_isValid

```nelua
global function sfVideoMode_isValid(mode: sfVideoMode): sfBool
```



### sfJoystickIdentification

```nelua
global sfJoystickIdentification: type = @record {
  name: cstring,
  vendorId: cuint,
  productId: cuint
}
```



### sfJoystickCount

```nelua
global sfJoystickCount: cint
```



### sfJoystickButtonCount

```nelua
global sfJoystickButtonCount: cint
```



### sfJoystickAxisCount

```nelua
global sfJoystickAxisCount: cint
```



### sfJoystickAxis

```nelua
global sfJoystickAxis: type = @enum(cint) {
  sfJoystickX = 0,
  sfJoystickY,
  sfJoystickZ,
  sfJoystickR,
  sfJoystickU,
  sfJoystickV,
  sfJoystickPovX,
  sfJoystickPovY
}
```



### sfJoystick_isConnected

```nelua
global function sfJoystick_isConnected(joystick: cuint): sfBool
```



### sfJoystick_getButtonCount

```nelua
global function sfJoystick_getButtonCount(joystick: cuint): cuint
```



### sfJoystick_hasAxis

```nelua
global function sfJoystick_hasAxis(joystick: cuint, axis: sfJoystickAxis): sfBool
```



### sfJoystick_isButtonPressed

```nelua
global function sfJoystick_isButtonPressed(joystick: cuint, button: cuint): sfBool
```



### sfJoystick_getAxisPosition

```nelua
global function sfJoystick_getAxisPosition(joystick: cuint, axis: sfJoystickAxis): float32
```



### sfJoystick_getIdentification

```nelua
global function sfJoystick_getIdentification(joystick: cuint): sfJoystickIdentification
```



### sfJoystick_update

```nelua
global function sfJoystick_update(): void
```



### sfKeyCode

```nelua
global sfKeyCode: type = @enum(cint) {
  sfKeyUnknown = -1,
  sfKeyA,
  sfKeyB,
  sfKeyC,
  sfKeyD,
  sfKeyE,
  sfKeyF,
  sfKeyG,
  sfKeyH,
  sfKeyI,
  sfKeyJ,
  sfKeyK,
  sfKeyL,
  sfKeyM,
  sfKeyN,
  sfKeyO,
  sfKeyP,
  sfKeyQ,
  sfKeyR,
  sfKeyS,
  sfKeyT,
  sfKeyU,
  sfKeyV,
  sfKeyW,
  sfKeyX,
  sfKeyY,
  sfKeyZ,
  sfKeyNum0,
  sfKeyNum1,
  sfKeyNum2,
  sfKeyNum3,
  sfKeyNum4,
  sfKeyNum5,
  sfKeyNum6,
  sfKeyNum7,
  sfKeyNum8,
  sfKeyNum9,
  sfKeyEscape,
  sfKeyLControl,
  sfKeyLShift,
  sfKeyLAlt,
  sfKeyLSystem,
  sfKeyRControl,
  sfKeyRShift,
  sfKeyRAlt,
  sfKeyRSystem,
  sfKeyMenu,
  sfKeyLBracket,
  sfKeyRBracket,
  sfKeySemicolon,
  sfKeyComma,
  sfKeyPeriod,
  sfKeyQuote,
  sfKeySlash,
  sfKeyBackslash,
  sfKeyTilde,
  sfKeyEqual,
  sfKeyHyphen,
  sfKeySpace,
  sfKeyEnter,
  sfKeyBackspace,
  sfKeyTab,
  sfKeyPageUp,
  sfKeyPageDown,
  sfKeyEnd,
  sfKeyHome,
  sfKeyInsert,
  sfKeyDelete,
  sfKeyAdd,
  sfKeySubtract,
  sfKeyMultiply,
  sfKeyDivide,
  sfKeyLeft,
  sfKeyRight,
  sfKeyUp,
  sfKeyDown,
  sfKeyNumpad0,
  sfKeyNumpad1,
  sfKeyNumpad2,
  sfKeyNumpad3,
  sfKeyNumpad4,
  sfKeyNumpad5,
  sfKeyNumpad6,
  sfKeyNumpad7,
  sfKeyNumpad8,
  sfKeyNumpad9,
  sfKeyF1,
  sfKeyF2,
  sfKeyF3,
  sfKeyF4,
  sfKeyF5,
  sfKeyF6,
  sfKeyF7,
  sfKeyF8,
  sfKeyF9,
  sfKeyF10,
  sfKeyF11,
  sfKeyF12,
  sfKeyF13,
  sfKeyF14,
  sfKeyF15,
  sfKeyPause,
  sfKeyCount
}
```



### sfKeyDash

```nelua
global sfKeyDash: cint
```



### sfKeyBack

```nelua
global sfKeyBack: cint
```



### sfKeyBackSlash

```nelua
global sfKeyBackSlash: cint
```



### sfKeySemiColon

```nelua
global sfKeySemiColon: cint
```



### sfKeyReturn

```nelua
global sfKeyReturn: cint
```



### sfKeyboard_isKeyPressed

```nelua
global function sfKeyboard_isKeyPressed(key: sfKeyCode): sfBool
```



### sfKeyboard_setVirtualKeyboardVisible

```nelua
global function sfKeyboard_setVirtualKeyboardVisible(visible: sfBool): void
```



### sfMouseButton

```nelua
global sfMouseButton: type = @enum(cint) {
  sfMouseLeft = 0,
  sfMouseRight,
  sfMouseMiddle,
  sfMouseXButton1,
  sfMouseXButton2,
  sfMouseButtonCount,
}
```



### sfMouseWheel

```nelua
global sfMouseWheel: type = @enum(cint) {
  sfMouseVerticalWheel = 0,
  sfMouseHorizontalWheel
}
```



### sfMouse_isButtonPressed

```nelua
global function sfMouse_isButtonPressed(button: sfMouseButton): sfBool
```



### sfMouse_getPosition

```nelua
global function sfMouse_getPosition(relativeTo: *sfWindow <const>): sfVector2i
```



### sfMouse_setPosition

```nelua
global function sfMouse_setPosition(position: sfVector2i, relativeTo: *sfWindow <const>): void
```



### sfCursorType

```nelua
global sfCursorType: type = @enum(cint) {
  sfCursorArrow = 0,
  sfCursorArrowWait,
  sfCursorWait,
  sfCursorText,
  sfCursorHand,
  sfCursorSizeHorizontal,
  sfCursorSizeVertical,
  sfCursorSizeTopLeftBottomRight,
  sfCursorSizeBottomLeftTopRight,
  sfCursorSizeAll,
  sfCursorCross,
  sfCursorHelp,
  sfCursorNotAllowed
}
```



### sfCursor_createFromPixels

```nelua
global function sfCursor_createFromPixels(pixels: *[0]sfUint8 <const>, size: sfVector2u, hotspot: sfVector2u): *sfCursor
```



### sfCursor_createFromSystem

```nelua
global function sfCursor_createFromSystem(cursor_type: sfCursorType): *sfCursor
```



### sfCursor_destroy

```nelua
global function sfCursor_destroy(cursor: *sfCursor): void
```



### sfSensorType

```nelua
global sfSensorType: type = @enum(cint) {
  sfSensorAccelerometer = 0,
  sfSensorGyroscope,
  sfSensorMagnetometer,
  sfSensorGravity,
  sfSensorOrientation,
  sfSensorCount
}
```



### sfSensor_isAvailable

```nelua
global function sfSensor_isAvailable(sensor: sfSensorType): sfBool
```



### sfSensor_setEnabled

```nelua
global function sfSensor_setEnabled(sensor: sfSensorType, enabled: sfBool): void
```



### sfSensor_getValue

```nelua
global function sfSensor_getValue(sensor: sfSensorType): sfVector3f
```



### sfTouch_isDown

```nelua
global function sfTouch_isDown(finger: cuint): sfBool
```



### sfTouch_getPosition

```nelua
global function sfTouch_getPosition(finger: cuint, relativeTo: *sfWindow <const>): sfVector2i
```



### sfEventType

```nelua
global sfEventType: type = @enum(cint) {
  sfEvtClosed = 0,
  sfEvtResized,
  sfEvtLostFocus,
  sfEvtGainedFocus,
  sfEvtTextEntered,
  sfEvtKeyPressed,
  sfEvtKeyReleased,
  sfEvtMouseWheelMoved,
  sfEvtMouseWheelScrolled,
  sfEvtMouseButtonPressed,
  sfEvtMouseButtonReleased,
  sfEvtMouseMoved,
  sfEvtMouseEntered,
  sfEvtKeyPressed,
  sfEvtKeyReleased,
  sfEvtMouseWheelMoved,
  sfEvtMouseWheelScrolled,
  sfEvtMouseButtonPressed,
  sfEvtMouseButtonReleased,
  sfEvtMouseMoved,
  sfEvtMouseEntered,
  sfEvtMouseLeft,
  sfEvtJoystickButtonPressed,
  sfEvtJoystickButtonReleased,
  sfEvtJoystickMoved,
  sfEvtJoystickConnected,
  sfEvtJoystickDisconnected,
  sfEvtTouchBegan,
  sfEvtTouchMoved,
  sfEvtTouchEnded,
  sfEvtSensorChanged,
  sfEvtCount
}
```



### sfKeyEvent

```nelua
global sfKeyEvent: type = @record {
  type: sfEventType,
  code: sfKeyCode,
  alt: sfBool,
  control: sfBool,
  shift: sfBool,
  system: sfBool
}
```



### sfTextEvent

```nelua
global sfTextEvent: type = @record {
  type: sfEventType,
  unicode: sfUint32
}
```



### sfMouseMoveEvent

```nelua
global sfMouseMoveEvent: type = @record {
  type: sfEventType,
  x: cint,
  y: cint
}
```



### sfMouseButtonEvent

```nelua
global sfMouseButtonEvent: type = @record {
  type: sfEventType,
  button: sfMouseButton,
  x: cint,
  y: cint
}
```



### sfMouseWheelEvent

```nelua
global sfMouseWheelEvent: type = @record {
  type: sfEventType,
  delta: cint,
  x: cint,
  y: cint
}
```



### sfMouseWheelScrollEvent

```nelua
global sfMouseWheelScrollEvent: type = @record {
  type: sfEventType,
  wheel: sfMouseWheel,
  delta: cint,
  x: cint,
  y: cint
}
```



### sfJoystickMoveEvent

```nelua
global sfJoystickMoveEvent: type = @record {
  type: sfEventType,
  joystickId: cuint,
  axis: sfJoystickAxis,
  position: float32
}
```



### sfJoystickButtonEvent

```nelua
global sfJoystickButtonEvent: type = @record {
  type: sfEventType,
  joystickId: cuint,
  button: cuint
}
```



### sfJoystickConnectEvent

```nelua
global sfJoystickConnectEvent: type = @record {
  type: sfEventType,
  joystickId: cuint
}
```



### sfSizeEvent

```nelua
global sfSizeEvent: type = @record {
  type: sfEventType,
  width: cuint,
  height: cuint
}
```



### sfTouchEvent

```nelua
global sfTouchEvent: type = @record {
  type: sfEventType,
  finger: cuint,
  x: cint,
  y: cint
}
```



### sfSensorEvent

```nelua
global sfSensorEvent: type = @record {
  type: sfEventType,
  sensorType: sfSensorType,
  x: float32,
  y: float32,
  z: float32
}
```



### sfEvent

```nelua
global sfEvent: type = @union {
  type: sfEventType,
  size: sfSizeEvent,
  key: sfKeyEvent,
  text: sfTextEvent,
  mouseMove: sfMouseMoveEvent,
  mouseButton: sfMouseButtonEvent,
  mouseWheel: sfMouseWheelEvent,
  mouseWheelScroll: sfMouseWheelScrollEvent,
  joystickMove: sfJoystickMoveEvent,
  joystickButton: sfJoystickButtonEvent,
  joystickConnect: sfJoystickConnectEvent,
  touch: sfTouchEvent,
  sensor: sfSensorEvent,
}
```



### sfWindowStyle

```nelua
global sfWindowStyle: type = @enum(cint) {
  sfNone = 0,
  sfTitlebar = 1 << 0,
  sfResize = 1 << 1,
  sfClose = 1 << 2,
  sfFullscreen = 1 << 3
}
```



### sfDefaultStyle

```nelua
global sfDefaultStyle: cint
```



### sfContextAttribute

```nelua
global sfContextAttribute: type = @enum(cint) {
  sfContextDefault = 0,
  sfContextCore = 1 << 0,
  sfContextDebug = 1 << 2,
}
```



### sfContextSettings

```nelua
global sfContextSettings: type = @record {
  depthBits: cuint,
  stencilBits: cuint,
  antialiasingLevel: cuint,
  majorVersion: cuint,
  minorVersion: cuint,
  attributeFlags: sfUint32,
  sRgbCapable: sfBool,
}
```



### sfWindow_create

```nelua
global function sfWindow_create(mode: sfVideoMode, title: cstring <const>, style: sfUint32, settings: *sfContextSettings <const>): *sfWindow
```



### sfWindow_createUnicode

```nelua
global function sfWindow_createUnicode(mode: sfVideoMode, title: *[0]sfUint32 <const>, style: sfUint32, settings: *sfContextSettings <const>): *sfWindow
```



### sfWindow_createFromHandle

```nelua
global function sfWindow_createFromHandle(handle: sfWindowHandle, settings: *sfContextSettings <const>): *sfWindow
```



### sfWindow_destroy

```nelua
global function sfWindow_destroy(window: *sfWindow): void
```



### sfWindow_close

```nelua
global function sfWindow_close(window: *sfWindow): void
```



### sfWindow_isOpen

```nelua
global function sfWindow_isOpen(window: *sfWindow <const>): sfBool
```



### sfWindow_getSettings

```nelua
global function sfWindow_getSettings(window: *sfWindow <const>): sfContextSettings
```



### sfWindow_pollEvent

```nelua
global function sfWindow_pollEvent(window: *sfWindow, event: *sfEvent): sfBool
```



### sfWindow_waitEvent

```nelua
global function sfWindow_waitEvent(window: *sfWindow, event: *sfEvent): sfBool
```



### sfWindow_getPosition

```nelua
global function sfWindow_getPosition(window: *sfWindow <const>): sfVector2i
```



### sfWindow_setPosition

```nelua
global function sfWindow_setPosition(window: *sfWindow, position: sfVector2i): void
```



### sfWindow_getSize

```nelua
global function sfWindow_getSize(window: *sfWindow <const>): sfVector2u
```



### sfWindow_setSize

```nelua
global function sfWindow_setSize(window: *sfWindow, size: sfVector2u): void
```



### sfWindow_setTitle

```nelua
global function sfWindow_setTitle(window: *sfWindow, title: cstring <const>): void
```



### sfWindow_setUnicodeTitle

```nelua
global function sfWindow_setUnicodeTitle(window: *sfWindow, title: *[0]sfUint32 <const>): void
```



### sfWindow_setIcon

```nelua
global function sfWindow_setIcon(window: *sfWindow, width: cuint, height: cuint, pixels: *[0]sfUint8): void
```



### sfWindow_setVisible

```nelua
global function sfWindow_setVisible(window: *sfWindow, visible: sfBool): void
```



### sfWindow_setVerticalSyncEnabled

```nelua
global function sfWindow_setVerticalSyncEnabled(window: *sfWindow, enabled: sfBool): void
```



### sfWindow_setMouseCursorVisible

```nelua
global function sfWindow_setMouseCursorVisible(window: *sfWindow, visible: sfBool): void
```



### sfWindow_setMouseCursorGrabbed

```nelua
global function sfWindow_setMouseCursorGrabbed(window: *sfWindow, grabbed: sfBool): void
```



### sfWindow_setMouseCursor

```nelua
global function sfWindow_setMouseCursor(window: *sfWindow, cursor: *sfCursor <const>): void
```



### sfWindow_setKeyRepeatEnabled

```nelua
global function sfWindow_setKeyRepeatEnabled(window: *sfWindow, enabled: sfBool): void
```



### sfWindow_setFramerateLimit

```nelua
global function sfWindow_setFramerateLimit(window: *sfWindow, threshold: float32): void
```



### sfWindow_setActive

```nelua
global function sfWindow_setActive(window: *sfWindow, active: sfBool): void
```



### sfWindow_requestFocus

```nelua
global function sfWindow_requestFocus(window: *sfWindow): void
```



### sfWindow_hasFocus

```nelua
global function sfWindow_hasFocus(window: *sfWindow <const>): sfBool
```



### sfWindow_display

```nelua
global function sfWindow_display(window: *sfWindow): void
```



### sfWindow_getSystemHandle

```nelua
global function sfWindow_getSystemHandle(window: *sfWindow <const>): sfWindowHandle
```



### sfContext_create

```nelua
global function sfContext_create(): *sfContext
```



### sfContext_destroy

```nelua
global function sfContext_destroy(context: *sfContext): void
```



### sfContext_setActive

```nelua
global function sfContext_setActive(context: *sfContext, active: sfBool): sfBool
```



### sfContext_getSettings

```nelua
global function sfContext_getSettings(context: *sfContext <const>): sfContextSettings
```



### sfContext_getActiveContextId

```nelua
global function sfContext_getActiveContextId(): sfUint64
```



### sfCircleShape

```nelua
global sfCircleShape: type = @record {}
```



### sfConvexShape

```nelua
global sfConvexShape: type = @record {}
```



### sfFont

```nelua
global sfFont: type = @record {}
```



### sfImage

```nelua
global sfImage: type = @record {}
```



### sfShader

```nelua
global sfShader: type = @record {}
```



### sfRectangleShape

```nelua
global sfRectangleShape: type = @record {}
```



### sfRenderTexture

```nelua
global sfRenderTexture: type = @record {}
```



### sfRenderWindow

```nelua
global sfRenderWindow: type = @record {}
```



### sfShape

```nelua
global sfShape: type = @record {}
```



### sfSprite

```nelua
global sfSprite: type = @record {}
```



### sfText

```nelua
global sfText: type = @record {}
```



### sfTexture

```nelua
global sfTexture: type = @record {}
```



### sfTransformable

```nelua
global sfTransformable: type = @record {}
```



### sfVertexArray

```nelua
global sfVertexArray: type = @record {}
```



### sfVertexBuffer

```nelua
global sfVertexBuffer: type = @record {}
```



### sfView

```nelua
global sfView: type = @record {}
```



### sfBlendFactor

```nelua
global sfBlendFactor: type = @enum(cint) {
  sfBlendFactorZero = 0,
  sfBlendFactorOne,
  sfBlendFactorSrcColor,
  sfBlendFactorOneMinusSrcColor,
  sfBlendFactorDstColor,
  sfBlendFactorOneMinusDstColor,
  sfBlendFactorSrcAlpha,
  sfBlendFactorOneMinusSrcAlpha,
  sfBlendFactorDstAlpha,
  sfBlendFactorOneMinusDstAlpha
}
```



### sfBlendEquation

```nelua
global sfBlendEquation: type = @enum(cint) {
  sfBlendEquationAdd = 0,
  sfBlendEquationSubtract,
  sfBlendEquationReverseSubtract
}
```



### sfBlendMode

```nelua
global sfBlendMode: type = @record {
  colorSrcFactor: sfBlendFactor,
  colorDstFactor: sfBlendFactor,
  colorEquation: sfBlendEquation,
  alphaSrcFactor: sfBlendFactor,
  alphaDstFactor: sfBlendFactor,
  alphaEquation: sfBlendEquation
}
```



### sfBlendAlpha

```nelua
global sfBlendAlpha: sfBlendMode
```



### sfBlendAdd

```nelua
global sfBlendAdd: sfBlendMode
```



### sfBlendMultiply

```nelua
global sfBlendMultiply: sfBlendMode
```



### sfBlendNone

```nelua
global sfBlendNone: sfBlendMode
```



### sfFloatRect

```nelua
global sfFloatRect: type = @record {
  left: float32,
  top: float32,
  width: float32,
  height: float32
}
```



### sfIntRect

```nelua
global sfIntRect: type = @record {
  left: cint,
  top: cint,
  width: cint,
  height: cint
}
```



### sfColor

```nelua
global sfColor: type = @record {
  r: sfUint8,
  g: sfUint8,
  b: sfUint8,
  a: sfUint8
}
```



### sfTransform

```nelua
global sfTransform: type = @record {
  matrix: [9]float32
}
```



### sfGlyph

```nelua
global sfGlyph: type = @record {
  advance: float32,
  bounds: sfFloatRect,
  textureRect: sfIntRect
}
```



### sfVertex

```nelua
global sfVertex: type = @record {
  position: sfVector2f,
  color: sfColor,
  texCoords: sfVector2f
}
```



### sfPrimitiveType

```nelua
global sfPrimitiveType: type = @enum(cint) {
  sfPoints = 0,
  sfLines,
  sfLineStrip,
  sfTriangles,
  sfTriangleStrip,
  sfTriangleFan,
  sfQuads
}
```



### sfLinesStrip

```nelua
global sfLinesStrip: cint
```



### sfTrianglesStrip

```nelua
global sfTrianglesStrip: cint
```



### sfTrianglesFan

```nelua
global sfTrianglesFan: cint
```



### sfRenderStates

```nelua
global sfRenderStates: type = @record {
  blendMode: sfBlendMode,
  transform: sfTransform,
  texture: *sfTexture,
  shader: *sfShader
}
```



### sfFontInfo

```nelua
global sfFontInfo: type = @record {
  family: cstring
}
```



### sfBlack

```nelua
global sfBlack: sfColor
```



### sfWhite

```nelua
global sfWhite: sfColor
```



### sfRed

```nelua
global sfRed: sfColor
```



### sfGreen

```nelua
global sfGreen: sfColor
```



### sfBlue

```nelua
global sfBlue: sfColor
```



### sfYellow

```nelua
global sfYellow: sfColor
```



### sfMagenta

```nelua
global sfMagenta: sfColor
```



### sfCyan

```nelua
global sfCyan: sfColor
```



### sfTransparent

```nelua
global sfTransparent: sfColor
```



### sfColor_fromRGB

```nelua
global function sfColor_fromRGB(red: sfUint8, green: sfUint8, blue: sfUint8): sfColor
```



### sfColor_fromRGBA

```nelua
global function sfColor_fromRGBA(red: sfUint8, green: sfUint8, blue: sfUint8, alpha: sfUint8): sfColor
```



### sfColor_fromInteger

```nelua
global function sfColor_fromInteger(color: sfUint32): sfColor
```



### sfColor_toInteger

```nelua
global function sfColor_toInteger(color: sfColor): sfUint32
```



### sfColor_add

```nelua
global function sfColor_add(color1: sfColor, color2: sfColor): sfColor
```



### sfColor_subtract

```nelua
global function sfColor_subtract(color1: sfColor, color2: sfColor): sfColor
```



### sfColor_modulate

```nelua
global function sfColor_modulate(color1: sfColor, color2: sfColor): sfColor
```



### sfFloatRect_contains

```nelua
global function sfFloatRect_contains(rect: *sfFloatRect <const>, x: float32, y: float32): sfBool
```



### sfIntRect_contains

```nelua
global function sfIntRect_contains(rect: *sfIntRect <const>, x: cint, y: cint): sfBool
```



### sfFloatRect_intersects

```nelua
global function sfFloatRect_intersects(rect1: *sfFloatRect <const>, rect2: *sfFloatRect <const>, intersection: *sfFloatRect): sfBool
```



### sfIntRect_intersects

```nelua
global function sfIntRect_intersects(rect1: *sfIntRect <const>, rect2: *sfIntRect <const>, intersection: *sfIntRect): sfBool
```



### sfVertexArray_create

```nelua
global function sfVertexArray_create(): *sfVertexArray
```



### sfVertexArray_copy

```nelua
global function sfVertexArray_copy(vertexArray: *sfVertexArray <const>): *sfVertexArray
```



### sfVertexArray_destroy

```nelua
global function sfVertexArray_destroy(vertexArray: *sfVertexArray): void
```



### sfVertexArray_getVertexCount

```nelua
global function sfVertexArray_getVertexCount(vertexArray: *sfVertexArray <const>): csize
```



### sfVertexArray_getVertex

```nelua
global function sfVertexArray_getVertex(vertexArray: *sfVertexArray, index: csize): *sfVertex
```



### sfVertexArray_clear

```nelua
global function sfVertexArray_clear(vertexArray: *sfVertexArray): void
```



### sfVertexArray_resize

```nelua
global function sfVertexArray_resize(vertexArray: *sfVertexArray, vertexCount: csize): void
```



### sfVertexArray_append

```nelua
global function sfVertexArray_append(vertexArray: *sfVertexArray, vertex: sfVertex): void
```



### sfVertexArray_setPrimitiveType

```nelua
global function sfVertexArray_setPrimitiveType(vertexArray: *sfVertexArray, type: sfPrimitiveType): void
```



### sfVertexArray_getPrimitiveType

```nelua
global function sfVertexArray_getPrimitiveType(vertexArray: *sfVertexArray): sfPrimitiveType
```



### sfVertexArray_getBounds

```nelua
global function sfVertexArray_getBounds(vertexArray: *sfVertexArray): sfFloatRect
```



### sfTransformable_create

```nelua
global function sfTransformable_create(): *sfTransformable
```



### sfTransformable_copy

```nelua
global function sfTransformable_copy(transformable: *sfTransformable <const>): *sfTransformable
```



### sfTransformable_destroy

```nelua
global function sfTransformable_destroy(transformable: *sfTransformable): void
```



### sfTransformable_setPosition

```nelua
global function sfTransformable_setPosition(transformable: *sfTransformable, position: sfVector2f): void
```



### sfTransformable_setRotation

```nelua
global function sfTransformable_setRotation(transformable: *sfTransformable, angle: float32): void
```



### sfTransformable_setScale

```nelua
global function sfTransformable_setScale(transformable: *sfTransformable, scale: sfVector2f): void
```



### sfTransformable_setOrigin

```nelua
global function sfTransformable_setOrigin(transformable: *sfTransformable, origin: sfVector2f): void
```



### sfTransformable_getPosition

```nelua
global function sfTransformable_getPosition(transformable: *sfTransformable <const>): sfVector2f
```



### sfTransformable_getRotation

```nelua
global function sfTransformable_getRotation(transformable: *sfTransformable <const>): float32
```



### sfTransformable_getScale

```nelua
global function sfTransformable_getScale(transformable: *sfTransformable <const>): sfVector2f
```



### sfTransformable_getOrigin

```nelua
global function sfTransformable_getOrigin(transformable: *sfTransformable <const>): sfVector2f
```



### sfTransformable_move

```nelua
global function sfTransformable_move(transformable: *sfTransformable, offset: sfVector2f): void
```



### sfTransformable_rotate

```nelua
global function sfTransformable_rotate(transformable: *sfTransformable, angle: float32): void
```



### sfTransformable_scale

```nelua
global function sfTransformable_scale(transformable: *sfTransformable, factors: sfVector2f): void
```



### sfTransformable_getTransform

```nelua
global function sfTransformable_getTransform(transformable: *sfTransformable <const>): sfTransform
```



### sfTransformable_getInverseTransform

```nelua
global function sfTransformable_getInverseTransform(transformable: *sfTransformable <const>): sfTransform
```



### sfTransform_Identity

```nelua
global sfTransform_Identity: sfTransform
```



### sfTransform_fromMatrix

```nelua
global function sfTransform_fromMatrix(a00: float32, a01: float32, a02: float32, a10: float32, a11: float32, a12: float32, a20: float32, a21: float32, a22: float32): sfTransform
```



### sfTransform_getMatrix

```nelua
global function sfTransform_getMatrix(transform: *sfTransform <const>, matrix: *[0]float32): void
```



### sfTransform_getInverse

```nelua
global function sfTransform_getInverse(transform: *sfTransform <const>): sfTransform
```



### sfTransform_transformPoint

```nelua
global function sfTransform_transformPoint(transform: *sfTransform <const>, point: sfVector2f): sfVector2f
```



### sfTransform_transformRect

```nelua
global function sfTransform_transformRect(transform: *sfTransform <const>, rectangle: sfFloatRect): sfFloatRect
```



### sfTransform_combine

```nelua
global function sfTransform_combine(transform: *sfTransform, other: *sfTransform <const>): sfFloatRect
```



### sfTransform_translate

```nelua
global function sfTransform_translate(transform: *sfTransform, x: float32, y: float32): void
```



### sfTransform_rotate

```nelua
global function sfTransform_rotate(transform: *sfTransform, angle: float32): void
```



### sfTransform_rotateWithCenter

```nelua
global function sfTransform_rotateWithCenter(transform: *sfTransform, angle: float32, centerX: float32, centerY: float32): void
```



### sfTransform_scale

```nelua
global function sfTransform_scale(transform: *sfTransform, scaleX: float32, scaleY: float32): void
```



### sfTransform_scaleWithCenter

```nelua
global function sfTransform_scaleWithCenter(transform: *sfTransform, scaleX: float32, scaleY: float32, centerX: float32, centerY: float32): void
```



### sfTransform_equal

```nelua
global function sfTransform_equal(transform: *sfTransform, right: *sfTransform): sfBool
```



### sfGlslVec2

```nelua
global sfGlslVec2: type = @sfVector2f
```



### sfGlslIvec2

```nelua
global sfGlslIvec2: type = @sfVector2i
```



### sfGlslBvec2

```nelua
global sfGlslBvec2: type = @record {
  x: sfBool,
  y: sfBool
}
```



### sfGlslVec3

```nelua
global sfGlslVec3: type = @sfVector3f
```



### sfGlslIvec3

```nelua
global sfGlslIvec3: type = @record {
  x: cint,
  y: cint,
  z: cint
}
```



### sfGlslBvec3

```nelua
global sfGlslBvec3: type = @record {
  x: sfBool,
  y: sfBool,
  z: sfBool
}
```



### sfGlslVec4

```nelua
global sfGlslVec4: type = @record {
  x: float32,
  y: float32,
  z: float32,
  w: float32
}
```



### sfGlslIvec4

```nelua
global sfGlslIvec4: type = @record {
  x: cint,
  y: cint,
  z: cint,
  w: cint
}
```



### sfGlslBvec4

```nelua
global sfGlslBvec4: type = @record {
  x: sfBool,
  y: sfBool,
  z: sfBool,
  w: sfBool
}
```



### sfGlslMat3

```nelua
global sfGlslMat3: type = @record {
  array: [9]float32
}
```



### sfGlslMat4

```nelua
global sfGlslMat4: type = @record {
  array: [16]float32
}
```



### sfView_create

```nelua
global function sfView_create(): *sfView
```



### sfView_createFromRect

```nelua
global function sfView_createFromRect(rectangle: sfFloatRect): *sfView
```



### sfView_copy

```nelua
global function sfView_copy(view: *sfView <const>): *sfView
```



### sfView_destroy

```nelua
global function sfView_destroy(view: *sfView): void
```



### sfView_setCenter

```nelua
global function sfView_setCenter(view: *sfView, center: sfVector2f): void
```



### sfView_setSize

```nelua
global function sfView_setSize(view: *sfView, size: sfVector2f): void
```



### sfView_setRotation

```nelua
global function sfView_setRotation(view: *sfView, angle: float32): void
```



### sfView_setViewport

```nelua
global function sfView_setViewport(view: *sfView, viewport: sfFloatRect): void
```



### sfView_reset

```nelua
global function sfView_reset(view: *sfView, rectangle: sfFloatRect): void
```



### sfView_getCenter

```nelua
global function sfView_getCenter(view: *sfView <const>): sfVector2f
```



### sfView_getSize

```nelua
global function sfView_getSize(view: *sfView <const>): sfVector2f
```



### sfView_getRotation

```nelua
global function sfView_getRotation(view: *sfView <const>): float32
```



### sfView_getViewport

```nelua
global function sfView_getViewport(view: *sfView <const>): sfFloatRect
```



### sfView_move

```nelua
global function sfView_move(view: *sfView, offset: sfVector2f): void
```



### sfView_rotate

```nelua
global function sfView_rotate(view: *sfView, angle: float32): void
```



### sfView_zoom

```nelua
global function sfView_zoom(view: *sfView, factor: float32): void
```



### sfFont_createFromFile

```nelua
global function sfFont_createFromFile(filename: cstring <const>): *sfFont
```



### sfFont_createFromMemory

```nelua
global function sfFont_createFromMemory(data: pointer <const>, sizeInBytes: csize): *sfFont
```



### sfFont_createFromStream

```nelua
global function sfFont_createFromStream(stream: *sfInputStream): *sfFont
```



### sfFont_copy

```nelua
global function sfFont_copy(font: *sfFont <const>): *sfFont
```



### sfFont_destroy

```nelua
global function sfFont_destroy(font: *sfFont): void
```



### sfFont_getGlyph

```nelua
global function sfFont_getGlyph(font: *sfFont <const>, codePoint: sfUint32, characterSize: cuint, bold: sfBool, outlineThickness: float32): sfGlyph
```



### sfFont_getKerning

```nelua
global function sfFont_getKerning(font: *sfFont <const>, first: sfUint32, second: sfUint32, characterSize: cuint): float32
```



### sfFont_getLineSpacing

```nelua
global function sfFont_getLineSpacing(font: *sfFont <const>, characterSize: cuint): float32
```



### sfFont_getUnderlinePosition

```nelua
global function sfFont_getUnderlinePosition(font: *sfFont <const>, characterSize: cuint): float32
```



### sfFont_getUnderlineThickness

```nelua
global function sfFont_getUnderlineThickness(font: *sfFont <const>, characterSize: cuint): float32
```



### sfFont_getTexture

```nelua
global function sfFont_getTexture(font: *sfFont <const>, characterSize: cuint): *sfTexture
```



### sfFont_getInfo

```nelua
global function sfFont_getInfo(font: *sfFont <const>): sfFontInfo
```



### sfCircleShape_create

```nelua
global function sfCircleShape_create(): *sfCircleShape
```



### sfCircleShape_copy

```nelua
global function sfCircleShape_copy(shape: *sfCircleShape <const>): *sfCircleShape
```



### sfCircleShape_destroy

```nelua
global function sfCircleShape_destroy(shape: *sfCircleShape): void
```



### sfCircleShape_setPosition

```nelua
global function sfCircleShape_setPosition(shape: *sfCircleShape, position: sfVector2f): void
```



### sfCircleShape_setRotation

```nelua
global function sfCircleShape_setRotation(shape: *sfCircleShape, angle: float32): void
```



### sfCircleShape_setScale

```nelua
global function sfCircleShape_setScale(shape: *sfCircleShape, scale: sfVector2f): void
```



### sfCircleShape_setOrigin

```nelua
global function sfCircleShape_setOrigin(shape: *sfCircleShape, origin: sfVector2f): void
```



### sfCircleShape_getPosition

```nelua
global function sfCircleShape_getPosition(shape: *sfCircleShape <const>): sfVector2f
```



### sfCircleShape_getRotation

```nelua
global function sfCircleShape_getRotation(shape: *sfCircleShape <const>): float32
```



### sfCircleShape_getScale

```nelua
global function sfCircleShape_getScale(shape: *sfCircleShape <const>): sfVector2f
```



### sfCircleShape_getOrigin

```nelua
global function sfCircleShape_getOrigin(shape: *sfCircleShape <const>): sfVector2f
```



### sfCircleShape_move

```nelua
global function sfCircleShape_move(shape: *sfCircleShape, offset: sfVector2f): void
```



### sfCircleShape_rotate

```nelua
global function sfCircleShape_rotate(shape: *sfCircleShape, angle: float32): void
```



### sfCircleShape_scale

```nelua
global function sfCircleShape_scale(shape: *sfCircleShape, factors: sfVector2f): void
```



### sfCircleShape_getTransform

```nelua
global function sfCircleShape_getTransform(shape: *sfCircleShape <const>): sfTransform
```



### sfCircleShape_getInverseTransform

```nelua
global function sfCircleShape_getInverseTransform(shape: *sfCircleShape <const>): sfTransform
```



### sfCircleShape_setTexture

```nelua
global function sfCircleShape_setTexture(shape: *sfCircleShape, texture: *sfTexture <const>, resetRect: sfBool): void
```



### sfCircleShape_setTextureRect

```nelua
global function sfCircleShape_setTextureRect(shape: *sfCircleShape, rect: sfIntRect): void
```



### sfCircleShape_setFillColor

```nelua
global function sfCircleShape_setFillColor(shape: *sfCircleShape, color: sfColor): void
```



### sfCircleShape_setOutlineColor

```nelua
global function sfCircleShape_setOutlineColor(shape: *sfCircleShape, color: sfColor): void
```



### sfCircleShape_setOutlineThickness

```nelua
global function sfCircleShape_setOutlineThickness(shape: *sfCircleShape, thickness: float32): void
```



### sfCircleShape_getTexture

```nelua
global function sfCircleShape_getTexture(shape: *sfCircleShape <const>): *sfTexture
```



### sfCircleShape_getTextureRect

```nelua
global function sfCircleShape_getTextureRect(shape: *sfCircleShape <const>): sfIntRect
```



### sfCircleShape_getFillColor

```nelua
global function sfCircleShape_getFillColor(shape: *sfCircleShape <const>): sfColor
```



### sfCircleShape_getOutlineColor

```nelua
global function sfCircleShape_getOutlineColor(shape: *sfCircleShape <const>): sfColor
```



### sfCircleShape_getOutlineThickness

```nelua
global function sfCircleShape_getOutlineThickness(shape: *sfCircleShape <const>): float32
```



### sfCircleShape_getPointCount

```nelua
global function sfCircleShape_getPointCount(shape: *sfCircleShape <const>): csize
```



### sfCircleShape_getPoint

```nelua
global function sfCircleShape_getPoint(shape: *sfCircleShape <const>, index: csize): sfVector2f
```



### sfCircleShape_setRadius

```nelua
global function sfCircleShape_setRadius(shape: *sfCircleShape, radius: float32): void
```



### sfCircleShape_getRadius

```nelua
global function sfCircleShape_getRadius(shape: *sfCircleShape <const>): float32
```



### sfCircleShape_setPointCount

```nelua
global function sfCircleShape_setPointCount(shape: *sfCircleShape, count: csize): void
```



### sfCircleShape_getLocalBounds

```nelua
global function sfCircleShape_getLocalBounds(shape: *sfCircleShape <const>): sfFloatRect
```



### sfCircleShape_getGlobalBounds

```nelua
global function sfCircleShape_getGlobalBounds(shape: *sfCircleShape <const>): sfFloatRect
```



### sfConvexShape_create

```nelua
global function sfConvexShape_create(): *sfConvexShape
```



### sfConvexShape_copy

```nelua
global function sfConvexShape_copy(shape: *sfConvexShape <const>): *sfConvexShape
```



### sfConvexShape_destroy

```nelua
global function sfConvexShape_destroy(shape: *sfConvexShape): void
```



### sfConvexShape_setPosition

```nelua
global function sfConvexShape_setPosition(shape: *sfConvexShape, position: sfVector2f): void
```



### sfConvexShape_setRotation

```nelua
global function sfConvexShape_setRotation(shape: *sfConvexShape, angle: float32): void
```



### sfConvexShape_setScale

```nelua
global function sfConvexShape_setScale(shape: *sfConvexShape, scale: sfVector2f): void
```



### sfConvexShape_setOrigin

```nelua
global function sfConvexShape_setOrigin(shape: *sfConvexShape, origin: sfVector2f): void
```



### sfConvexShape_getPosition

```nelua
global function sfConvexShape_getPosition(shape: *sfConvexShape <const>): sfVector2f
```



### sfConvexShape_getRotation

```nelua
global function sfConvexShape_getRotation(shape: *sfConvexShape <const>): float32
```



### sfConvexShape_getScale

```nelua
global function sfConvexShape_getScale(shape: *sfConvexShape <const>): sfVector2f
```



### sfConvexShape_getOrigin

```nelua
global function sfConvexShape_getOrigin(shape: *sfConvexShape <const>): sfVector2f
```



### sfConvexShape_move

```nelua
global function sfConvexShape_move(shape: *sfConvexShape, offset: sfVector2f): void
```



### sfConvexShape_rotate

```nelua
global function sfConvexShape_rotate(shape: *sfConvexShape, angle: float32): void
```



### sfConvexShape_scale

```nelua
global function sfConvexShape_scale(shape: *sfConvexShape, factors: sfVector2f): void
```



### sfConvexShape_getTransform

```nelua
global function sfConvexShape_getTransform(shape: *sfConvexShape <const>): sfTransform
```



### sfConvexShape_getInverseTransform

```nelua
global function sfConvexShape_getInverseTransform(shape: *sfConvexShape <const>): sfTransform
```



### sfConvexShape_setTexture

```nelua
global function sfConvexShape_setTexture(shape: *sfConvexShape, texture: *sfTexture <const>, resetRect: sfBool): void
```



### sfConvexShape_setTextureRect

```nelua
global function sfConvexShape_setTextureRect(shape: *sfConvexShape, rect: sfIntRect): void
```



### sfConvexShape_setFillColor

```nelua
global function sfConvexShape_setFillColor(shape: *sfConvexShape, color: sfColor): void
```



### sfConvexShape_setOutlineColor

```nelua
global function sfConvexShape_setOutlineColor(shape: *sfConvexShape, color: sfColor): void
```



### sfConvexShape_setOutlineThickness

```nelua
global function sfConvexShape_setOutlineThickness(shape: *sfConvexShape, thickness: float32): void
```



### sfConvexShape_getTexture

```nelua
global function sfConvexShape_getTexture(shape: *sfConvexShape <const>): *sfTexture
```



### sfConvexShape_getTextureRect

```nelua
global function sfConvexShape_getTextureRect(shape: *sfConvexShape <const>): sfIntRect
```



### sfConvexShape_getFillColor

```nelua
global function sfConvexShape_getFillColor(shape: *sfConvexShape <const>): sfColor
```



### sfConvexShape_getOutlineColor

```nelua
global function sfConvexShape_getOutlineColor(shape: *sfConvexShape <const>): sfColor
```



### sfConvexShape_getOutlineThickness

```nelua
global function sfConvexShape_getOutlineThickness(shape: *sfConvexShape <const>): float32
```



### sfConvexShape_getPointCount

```nelua
global function sfConvexShape_getPointCount(shape: *sfConvexShape <const>): csize
```



### sfConvexShape_getPoint

```nelua
global function sfConvexShape_getPoint(shape: *sfConvexShape <const>, index: csize): sfVector2f
```



### sfConvexShape_setRadius

```nelua
global function sfConvexShape_setRadius(shape: *sfConvexShape, radius: float32): void
```



### sfConvexShape_getRadius

```nelua
global function sfConvexShape_getRadius(shape: *sfConvexShape <const>): float32
```



### sfConvexShape_setPointCount

```nelua
global function sfConvexShape_setPointCount(shape: *sfConvexShape, count: csize): void
```



### sfConvexShape_getLocalBounds

```nelua
global function sfConvexShape_getLocalBounds(shape: *sfConvexShape <const>): sfFloatRect
```



### sfConvexShape_getGlobalBounds

```nelua
global function sfConvexShape_getGlobalBounds(shape: *sfConvexShape <const>): sfFloatRect
```



### sfImage_create

```nelua
global function sfImage_create(width: cuint, height: cuint): *sfImage
```



### sfImage_createFromColor

```nelua
global function sfImage_createFromColor(width: cuint, height: cuint, color: sfColor): *sfImage
```



### sfImage_createFromPixels

```nelua
global function sfImage_createFromPixels(width: cuint, height: cuint, pixels: *[0]sfUint8): *sfImage
```



### sfImage_createFromFile

```nelua
global function sfImage_createFromFile(filename: cstring <const>): *sfImage
```



### sfImage_createFromMemory

```nelua
global function sfImage_createFromMemory(data: pointer <const>, size: csize): *sfImage
```



### sfImage_createFromStream

```nelua
global function sfImage_createFromStream(stream: *sfInputStream): *sfImage
```



### sfImage_copy

```nelua
global function sfImage_copy(image: *sfImage <const>): *sfImage
```



### sfImage_destroy

```nelua
global function sfImage_destroy(image: *sfImage): void
```



### sfImage_saveToFile

```nelua
global function sfImage_saveToFile(image: *sfImage <const>, filename: cstring <const>): sfBool
```



### sfImage_getSize

```nelua
global function sfImage_getSize(image: *sfImage <const>): sfVector2u
```



### sfImage_createMaskFromColor

```nelua
global function sfImage_createMaskFromColor(image: *sfImage, color: sfColor, alpha: sfUint8): void
```



### sfImage_copyImage

```nelua
global function sfImage_copyImage(image: *sfImage, source: *sfImage <const>, destX: cuint, destY: cuint, sourceRect: sfIntRect, applyAlpha: sfBool): void
```



### sfImage_setPixel

```nelua
global function sfImage_setPixel(image: *sfImage, x: cuint, y: cuint, color: sfColor): void
```



### sfImage_getPixel

```nelua
global function sfImage_getPixel(image: *sfImage <const>, x: cuint, y: cuint): sfColor
```



### sfImage_getPixelsPtr

```nelua
global function sfImage_getPixelsPtr(image: *sfImage <const>): *[0]sfUint8
```



### sfImage_flipHorizontally

```nelua
global function sfImage_flipHorizontally(image: *sfImage): void
```



### sfImage_flipVertically

```nelua
global function sfImage_flipVertically(image: *sfImage): void
```



### sfRectangleShape_create

```nelua
global function sfRectangleShape_create(): *sfRectangleShape
```



### sfRectangleShape_copy

```nelua
global function sfRectangleShape_copy(shape: *sfRectangleShape <const>): *sfRectangleShape
```



### sfRectangleShape_destroy

```nelua
global function sfRectangleShape_destroy(shape: *sfRectangleShape): void
```



### sfRectangleShape_setPosition

```nelua
global function sfRectangleShape_setPosition(shape: *sfRectangleShape, position: sfVector2f): void
```



### sfRectangleShape_setRotation

```nelua
global function sfRectangleShape_setRotation(shape: *sfRectangleShape, angle: float32): void
```



### sfRectangleShape_setScale

```nelua
global function sfRectangleShape_setScale(shape: *sfRectangleShape, scale: sfVector2f): void
```



### sfRectangleShape_setOrigin

```nelua
global function sfRectangleShape_setOrigin(shape: *sfRectangleShape, origin: sfVector2f): void
```



### sfRectangleShape_getPosition

```nelua
global function sfRectangleShape_getPosition(shape: *sfRectangleShape <const>): sfVector2f
```



### sfRectangleShape_getRotation

```nelua
global function sfRectangleShape_getRotation(shape: *sfRectangleShape <const>): float32
```



### sfRectangleShape_getScale

```nelua
global function sfRectangleShape_getScale(shape: *sfRectangleShape <const>): sfVector2f
```



### sfRectangleShape_getOrigin

```nelua
global function sfRectangleShape_getOrigin(shape: *sfRectangleShape <const>): sfVector2f
```



### sfRectangleShape_move

```nelua
global function sfRectangleShape_move(shape: *sfRectangleShape, offset: sfVector2f): void
```



### sfRectangleShape_rotate

```nelua
global function sfRectangleShape_rotate(shape: *sfRectangleShape, angle: float32): void
```



### sfRectangleShape_scale

```nelua
global function sfRectangleShape_scale(shape: *sfRectangleShape, factors: sfVector2f): void
```



### sfRectangleShape_getTransform

```nelua
global function sfRectangleShape_getTransform(shape: *sfRectangleShape <const>): sfTransform
```



### sfRectangleShape_getInverseTransform

```nelua
global function sfRectangleShape_getInverseTransform(shape: *sfRectangleShape <const>): sfTransform
```



### sfRectangleShape_setTexture

```nelua
global function sfRectangleShape_setTexture(shape: *sfRectangleShape, texture: *sfTexture <const>, resetRect: sfBool): void
```



### sfRectangleShape_setTextureRect

```nelua
global function sfRectangleShape_setTextureRect(shape: *sfRectangleShape, rect: sfIntRect): void
```



### sfRectangleShape_setFillColor

```nelua
global function sfRectangleShape_setFillColor(shape: *sfRectangleShape, color: sfColor): void
```



### sfRectangleShape_setOutlineColor

```nelua
global function sfRectangleShape_setOutlineColor(shape: *sfRectangleShape, color: sfColor): void
```



### sfRectangleShape_setOutlineThickness

```nelua
global function sfRectangleShape_setOutlineThickness(shape: *sfRectangleShape, thickness: float32): void
```



### sfRectangleShape_getTexture

```nelua
global function sfRectangleShape_getTexture(shape: *sfRectangleShape <const>): *sfTexture
```



### sfRectangleShape_getTextureRect

```nelua
global function sfRectangleShape_getTextureRect(shape: *sfRectangleShape <const>): sfIntRect
```



### sfRectangleShape_getFillColor

```nelua
global function sfRectangleShape_getFillColor(shape: *sfRectangleShape <const>): sfColor
```



### sfRectangleShape_getOutlineColor

```nelua
global function sfRectangleShape_getOutlineColor(shape: *sfRectangleShape <const>): sfColor
```



### sfRectangleShape_getOutlineThickness

```nelua
global function sfRectangleShape_getOutlineThickness(shape: *sfRectangleShape <const>): float32
```



### sfRectangleShape_getPointCount

```nelua
global function sfRectangleShape_getPointCount(shape: *sfRectangleShape <const>): csize
```



### sfRectangleShape_getPoint

```nelua
global function sfRectangleShape_getPoint(shape: *sfRectangleShape <const>, index: csize): sfVector2f
```



### sfRectangleShape_setSize

```nelua
global function sfRectangleShape_setSize(shape: *sfRectangleShape, size: float32): void
```



### sfRectangleShape_getSize

```nelua
global function sfRectangleShape_getSize(shape: *sfRectangleShape <const>): sfVector2f
```



### sfRectangleShape_setPointCount

```nelua
global function sfRectangleShape_setPointCount(shape: *sfRectangleShape, count: csize): void
```



### sfRectangleShape_getLocalBounds

```nelua
global function sfRectangleShape_getLocalBounds(shape: *sfRectangleShape <const>): sfFloatRect
```



### sfRectangleShape_getGlobalBounds

```nelua
global function sfRectangleShape_getGlobalBounds(shape: *sfRectangleShape <const>): sfFloatRect
```



### sfRenderTexture_create

```nelua
global function sfRenderTexture_create(width: cuint, height: cuint, depthBuffer: sfBool): *sfRenderTexture
```



### sfRenderTexture_createWithSettings

```nelua
global function sfRenderTexture_createWithSettings(width: cuint, height: cuint, settings: *sfContextSettings <const>): *sfRenderTexture
```



### sfRenderTexture_destroy

```nelua
global function sfRenderTexture_destroy(renderTexture: *sfRenderTexture): void
```



### sfRenderTexture_getSize

```nelua
global function sfRenderTexture_getSize(renderTexture: *sfRenderTexture <const>): sfVector2u
```



### sfRenderTexture_setActive

```nelua
global function sfRenderTexture_setActive(renderTexture: *sfRenderTexture, active: sfBool): sfVector2u
```



### sfRenderTexture_display

```nelua
global function sfRenderTexture_display(renderTexture: *sfRenderTexture): void
```



### sfRenderTexture_clear

```nelua
global function sfRenderTexture_clear(renderTexture: *sfRenderTexture, color: sfColor): void
```



### sfRenderTexture_setView

```nelua
global function sfRenderTexture_setView(renderTexture: *sfRenderTexture, view: *sfView <const>): void
```



### sfRenderTexture_getView

```nelua
global function sfRenderTexture_getView(renderTexture: *sfRenderTexture <const>): *sfView
```



### sfRenderTexture_getDefaultView

```nelua
global function sfRenderTexture_getDefaultView(renderTexture: *sfRenderTexture <const>): *sfView
```



### sfRenderTexture_getViewport

```nelua
global function sfRenderTexture_getViewport(renderTexture: *sfRenderTexture <const>, view: *sfView <const>): sfIntRect
```



### sfRenderTexture_mapPixelToCoords

```nelua
global function sfRenderTexture_mapPixelToCoords(renderTexture: *sfRenderTexture <const>, point: sfVector2i, view: *sfView <const>): sfVector2f
```



### sfRenderTexture_mapCoordsToPixel

```nelua
global function sfRenderTexture_mapCoordsToPixel(renderTexture: *sfRenderTexture <const>, point: sfVector2f, view: *sfView <const>): sfVector2i
```



### sfRenderTexture_drawSprite

```nelua
global function sfRenderTexture_drawSprite(renderTexture: *sfRenderTexture, object: *sfSprite <const>, states: *sfRenderStates <const>): void
```



### sfRenderTexture_drawText

```nelua
global function sfRenderTexture_drawText(renderTexture: *sfRenderTexture, object: *sfText <const>, states: *sfRenderStates <const>): void
```



### sfRenderTexture_drawShape

```nelua
global function sfRenderTexture_drawShape(renderTexture: *sfRenderTexture, object: *sfShape <const>, states: *sfRenderStates <const>): void
```



### sfRenderTexture_drawCircleShape

```nelua
global function sfRenderTexture_drawCircleShape(renderTexture: *sfRenderTexture, object: *sfCircleShape <const>, states: *sfRenderStates <const>): void
```



### sfRenderTexture_drawConvexShape

```nelua
global function sfRenderTexture_drawConvexShape(renderTexture: *sfRenderTexture, object: *sfConvexShape <const>, states: *sfRenderStates <const>): void
```



### sfRenderTexture_drawRectangleShape

```nelua
global function sfRenderTexture_drawRectangleShape(renderTexture: *sfRenderTexture, object: *sfRectangleShape <const>, states: *sfRenderStates <const>): void
```



### sfRenderTexture_drawVertexArray

```nelua
global function sfRenderTexture_drawVertexArray(renderTexture: *sfRenderTexture, object: *sfVertexArray <const>, states: *sfRenderStates <const>): void
```



### sfRenderTexture_drawVertexBuffer

```nelua
global function sfRenderTexture_drawVertexBuffer(renderTexture: *sfRenderTexture, object: *sfVertexBuffer <const>, states: *sfRenderStates <const>): void
```



### sfRenderTexture_drawPrimitives

```nelua
global function sfRenderTexture_drawPrimitives(renderTexture: *sfRenderTexture, vertices: *[0]sfVertex <const>, vertexCount: csize, type: sfPrimitiveType, states: *sfRenderStates <const>): void
```



### sfRenderTexture_pushGLStates

```nelua
global function sfRenderTexture_pushGLStates(renderTexture: *sfRenderTexture): void
```



### sfRenderTexture_popGLStates

```nelua
global function sfRenderTexture_popGLStates(renderTexture: *sfRenderTexture): void
```



### sfRenderTexture_resetGLStates

```nelua
global function sfRenderTexture_resetGLStates(renderTexture: *sfRenderTexture): void
```



### sfRenderTexture_getTexture

```nelua
global function sfRenderTexture_getTexture(renderTexture: *sfRenderTexture <const>): *sfTexture
```



### sfRenderTexture_getMaximumAntialiasingLevel

```nelua
global function sfRenderTexture_getMaximumAntialiasingLevel(): cuint
```



### sfRenderTexture_setSmooth

```nelua
global function sfRenderTexture_setSmooth(renderTexture: *sfRenderTexture, smooth: sfBool): void
```



### sfRenderTexture_isSmooth

```nelua
global function sfRenderTexture_isSmooth(renderTexture: *sfRenderTexture <const>): sfBool
```



### sfRenderTexture_setRepeated

```nelua
global function sfRenderTexture_setRepeated(renderTexture: *sfRenderTexture, repeated: sfBool): void
```



### sfRenderTexture_isRepeated

```nelua
global function sfRenderTexture_isRepeated(renderTexture: *sfRenderTexture <const>): sfBool
```



### sfRenderTexture_generateMipmap

```nelua
global function sfRenderTexture_generateMipmap(renderTexture: *sfRenderTexture): sfBool
```



### sfRenderWindow_create

```nelua
global function sfRenderWindow_create(mode: sfVideoMode, title: cstring <const>, style: sfUint32, settings: *sfContextSettings <const>): *sfRenderWindow
```



### sfRenderWindow_createUnicode

```nelua
global function sfRenderWindow_createUnicode(mode: sfVideoMode, title: *sfUint32, style: sfUint32, settings: *sfContextSettings <const>): *sfRenderWindow
```



### sfRenderWindow_createFromHandle

```nelua
global function sfRenderWindow_createFromHandle(handle: sfWindowHandle, settings: *sfContextSettings <const>): *sfRenderWindow
```



### sfRenderWindow_destroy

```nelua
global function sfRenderWindow_destroy(renderWindow: *sfRenderWindow): void
```



### sfRenderWindow_close

```nelua
global function sfRenderWindow_close(renderWindow: *sfRenderWindow): void
```



### sfRenderWindow_isOpen

```nelua
global function sfRenderWindow_isOpen(renderWindow: *sfRenderWindow <const>): sfBool
```



### sfRenderWindow_getSettings

```nelua
global function sfRenderWindow_getSettings(renderWindow: *sfRenderWindow <const>): sfContextSettings
```



### sfRenderWindow_pollEvent

```nelua
global function sfRenderWindow_pollEvent(renderWindow: *sfRenderWindow, event: *sfEvent): sfContextSettings
```



### sfRenderWindow_waitEvent

```nelua
global function sfRenderWindow_waitEvent(renderWindow: *sfRenderWindow, event: *sfEvent): sfContextSettings
```



### sfRenderWindow_getPosition

```nelua
global function sfRenderWindow_getPosition(renderWindow: *sfRenderWindow <const>): sfVector2i
```



### sfRenderWindow_setPosition

```nelua
global function sfRenderWindow_setPosition(renderWindow: *sfRenderWindow, position: sfVector2i): void
```



### sfRenderWindow_getSize

```nelua
global function sfRenderWindow_getSize(renderWindow: *sfRenderWindow <const>): sfVector2u
```



### sfRenderWindow_setSize

```nelua
global function sfRenderWindow_setSize(renderWindow: *sfRenderWindow, size: sfVector2u): void
```



### sfRenderWindow_setSize

```nelua
global function sfRenderWindow_setSize(renderWindow: *sfRenderWindow, title: cstring <const>): void
```



### sfRenderWindow_setUnicodeTitle

```nelua
global function sfRenderWindow_setUnicodeTitle(renderWindow: *sfRenderWindow, title: *sfUint32 <const>): void
```



### sfRenderWindow_setIcon

```nelua
global function sfRenderWindow_setIcon(renderWindow: *sfRenderWindow, width: cuint, height: cuint, pixels: *[0]sfUint8 <const>): void
```



### sfRenderWindow_setVisible

```nelua
global function sfRenderWindow_setVisible(renderWindow: *sfRenderWindow, visible: sfBool): void
```



### sfRenderWindow_setVerticalSyncEnabled

```nelua
global function sfRenderWindow_setVerticalSyncEnabled(renderWindow: *sfRenderWindow, enabled: sfBool): void
```



### sfRenderWindow_setMouseCursorVisible

```nelua
global function sfRenderWindow_setMouseCursorVisible(renderWindow: *sfRenderWindow, show: sfBool): void
```



### sfRenderWindow_setMouseCursorGrabbed

```nelua
global function sfRenderWindow_setMouseCursorGrabbed(renderWindow: *sfRenderWindow, grabbed: sfBool): void
```



### sfRenderWindow_setMouseCursor

```nelua
global function sfRenderWindow_setMouseCursor(renderWindow: *sfRenderWindow, cursor: *sfCursor <const>): void
```



### sfRenderWindow_setKeyRepeatEnabled

```nelua
global function sfRenderWindow_setKeyRepeatEnabled(renderWindow: *sfRenderWindow, enabled: sfBool): void
```



### sfRenderWindow_setFramerateLimit

```nelua
global function sfRenderWindow_setFramerateLimit(renderWindow: *sfRenderWindow, limit: cuint): void
```



### sfRenderWindow_setJoystickThreshold

```nelua
global function sfRenderWindow_setJoystickThreshold(renderWindow: *sfRenderWindow, threshold: float32): void
```



### sfRenderWindow_setActive

```nelua
global function sfRenderWindow_setActive(renderWindow: *sfRenderWindow, active: sfBool): void
```



### sfRenderWindow_requestFocus

```nelua
global function sfRenderWindow_requestFocus(renderWindow: *sfRenderWindow): void
```



### sfRenderWindow_hasFocus

```nelua
global function sfRenderWindow_hasFocus(renderWindow: *sfRenderWindow <const>): sfBool
```



### sfRenderWindow_display

```nelua
global function sfRenderWindow_display(renderWindow: *sfRenderWindow): void
```



### sfRenderWindow_getSystemHandle

```nelua
global function sfRenderWindow_getSystemHandle(renderWindow: *sfRenderWindow <const>): sfWindowHandle
```



### sfRenderWindow_clear

```nelua
global function sfRenderWindow_clear(renderWindow: *sfRenderWindow, color: sfColor): void
```



### sfRenderWindow_setView

```nelua
global function sfRenderWindow_setView(renderWindow: *sfRenderWindow, view: *sfView): void
```



### sfRenderWindow_getView

```nelua
global function sfRenderWindow_getView(renderWindow: *sfRenderWindow <const>): *sfView
```



### sfRenderWindow_getDefaultView

```nelua
global function sfRenderWindow_getDefaultView(renderWindow: *sfRenderWindow <const>): *sfView
```



### sfRenderWindow_getViewport

```nelua
global function sfRenderWindow_getViewport(renderWindow: *sfRenderWindow <const>, view: *sfView <const>): sfIntRect
```



### sfRenderWindow_mapPixelToCoords

```nelua
global function sfRenderWindow_mapPixelToCoords(renderWindow: *sfRenderWindow <const>, point: sfVector2i, view: *sfView <const>): sfVector2f
```



### sfRenderWindow_mapCoordsToPixel

```nelua
global function sfRenderWindow_mapCoordsToPixel(renderWindow: *sfRenderWindow <const>, point: sfVector2f, view: *sfView <const>): sfVector2i
```



### sfRenderWindow_drawSprite

```nelua
global function sfRenderWindow_drawSprite(renderWindow: *sfRenderWindow, object: *sfSprite <const>, states: *sfRenderStates <const>): void
```



### sfRenderWindow_drawText

```nelua
global function sfRenderWindow_drawText(renderWindow: *sfRenderWindow, object: *sfText <const>, states: *sfRenderStates <const>): void
```



### sfRenderWindow_drawShape

```nelua
global function sfRenderWindow_drawShape(renderWindow: *sfRenderWindow, object: *sfShape <const>, states: *sfRenderStates <const>): void
```



### sfRenderWindow_drawCircleShape

```nelua
global function sfRenderWindow_drawCircleShape(renderWindow: *sfRenderWindow, object: *sfCircleShape <const>, states: *sfRenderStates <const>): void
```



### sfRenderWindow_drawConvexShape

```nelua
global function sfRenderWindow_drawConvexShape(renderWindow: *sfRenderWindow, object: *sfConvexShape <const>, states: *sfRenderStates <const>): void
```



### sfRenderWindow_drawRectangleShape

```nelua
global function sfRenderWindow_drawRectangleShape(renderWindow: *sfRenderWindow, object: *sfRectangleShape <const>, states: *sfRenderStates <const>): void
```



### sfRenderWindow_drawVertexArray

```nelua
global function sfRenderWindow_drawVertexArray(renderWindow: *sfRenderWindow, object: *sfVertexArray <const>, states: *sfRenderStates <const>): void
```



### sfRenderWindow_drawVertexBuffer

```nelua
global function sfRenderWindow_drawVertexBuffer(renderWindow: *sfRenderWindow, object: *sfVertexBuffer <const>, states: *sfRenderStates <const>): void
```



### sfRenderWindow_drawPrimitives

```nelua
global function sfRenderWindow_drawPrimitives(renderWindow: *sfRenderWindow, vertices: *sfVertex <const>, vertexCount: csize, type: sfPrimitiveType, states: *sfRenderStates <const>): void
```



### sfRenderWindow_pushGLStates

```nelua
global function sfRenderWindow_pushGLStates(renderWindow: *sfRenderWindow): void
```



### sfRenderWindow_popGLStates

```nelua
global function sfRenderWindow_popGLStates(renderWindow: *sfRenderWindow): void
```



### sfRenderWindow_resetGLStates

```nelua
global function sfRenderWindow_resetGLStates(renderWindow: *sfRenderWindow): void
```



### sfRenderWindow_capture

```nelua
global function sfRenderWindow_capture(renderWindow: *sfRenderWindow <const>): *sfImage
```



### sfMouse_getPositionRenderWindow

```nelua
global function sfMouse_getPositionRenderWindow(relativeTo: *sfRenderWindow <const>): sfVector2i
```



### sfMouse_setPositionRenderWindow

```nelua
global function sfMouse_setPositionRenderWindow(position: sfVector2i, relativeTo: *sfRenderWindow <const>): void
```



### sfTouch_getPositionRenderWindow

```nelua
global function sfTouch_getPositionRenderWindow(finger: cuint, relativeTo: *sfRenderWindow <const>): sfVector2i
```



### sfShader_createFromFile

```nelua
global function sfShader_createFromFile(vertexShaderFilename: cstring <const>, geometryShaderFilename: cstring <const>, fragmentShaderFilename: cstring <const>): *sfShader
```



### sfShader_createFromMemory

```nelua
global function sfShader_createFromMemory(vertexShader: cstring <const>, geometryShader: cstring <const>, fragmentShader: cstring <const>): *sfShader
```



### sfShader_createFromStream

```nelua
global function sfShader_createFromStream(vertexShader: *sfInputStream, geometryShader: *sfInputStream, fragmentShader: *sfInputStream): *sfShader
```



### sfShader_destroy

```nelua
global function sfShader_destroy(shader: *sfShader): void
```



### sfShader_setFloatUniform

```nelua
global function sfShader_setFloatUniform(shader: *sfShader, name: cstring <const>, x: float32): void
```



### sfShader_setVec3Uniform

```nelua
global function sfShader_setVec3Uniform(shader: *sfShader, name: cstring <const>, vector: sfGlslVec2): void
```



### sfShader_setVec3Uniform

```nelua
global function sfShader_setVec3Uniform(shader: *sfShader, name: cstring <const>, vector: sfGlslVec3): void
```



### sfShader_setVec4Uniform

```nelua
global function sfShader_setVec4Uniform(shader: *sfShader, name: cstring <const>, vector: sfGlslVec4): void
```



### sfShader_setColorUniform

```nelua
global function sfShader_setColorUniform(shader: *sfShader, name: cstring <const>, color: sfColor): void
```



### sfShader_setIntUniform

```nelua
global function sfShader_setIntUniform(shader: *sfShader, name: cstring <const>, x: cint): void
```



### sfShader_setIvec2Uniform

```nelua
global function sfShader_setIvec2Uniform(shader: *sfShader, name: cstring <const>, vector: sfGlslIvec2): void
```



### sfShader_setIvec3Uniform

```nelua
global function sfShader_setIvec3Uniform(shader: *sfShader, name: cstring <const>, vector: sfGlslIvec3): void
```



### sfShader_setIvec4Uniform

```nelua
global function sfShader_setIvec4Uniform(shader: *sfShader, name: cstring <const>, vector: sfGlslIvec4): void
```



### sfShader_setIntColorUniform

```nelua
global function sfShader_setIntColorUniform(shader: *sfShader, name: cstring <const>, color: sfColor): void
```



### sfShader_setBoolUniform

```nelua
global function sfShader_setBoolUniform(shader: *sfShader, name: cstring <const>, x: sfBool): void
```



### sfShader_setBvec2Uniform

```nelua
global function sfShader_setBvec2Uniform(shader: *sfShader, name: cstring <const>, vector: sfGlslBvec2): void
```



### sfShader_setBvec3Uniform

```nelua
global function sfShader_setBvec3Uniform(shader: *sfShader, name: cstring <const>, vector: sfGlslBvec3): void
```



### sfShader_setBvec4Uniform

```nelua
global function sfShader_setBvec4Uniform(shader: *sfShader, name: cstring <const>, vector: sfGlslBvec4): void
```



### sfShader_setMat3Uniform

```nelua
global function sfShader_setMat3Uniform(shader: *sfShader, name: cstring <const>, matrix: *sfGlslMat3 <const>): void
```



### sfShader_setMat4Uniform

```nelua
global function sfShader_setMat4Uniform(shader: *sfShader, name: cstring <const>, matrix: *sfGlslMat4 <const>): void
```



### sfShader_setTextureUniform

```nelua
global function sfShader_setTextureUniform(shader: *sfShader, name: cstring <const>, texture: *sfTexture <const>): void
```



### sfShader_setCurrentTextureUniform

```nelua
global function sfShader_setCurrentTextureUniform(shader: *sfShader, name: cstring <const>): void
```



### sfShader_setFloatUniformArray

```nelua
global function sfShader_setFloatUniformArray(shader: *sfShader, name: cstring <const>, scalarArray: *[0]float32, length: csize): void
```



### sfShader_setVec2UniformArray

```nelua
global function sfShader_setVec2UniformArray(shader: *sfShader, name: cstring <const>, vectorArray: *[0]sfGlslVec2, length: csize): void
```



### sfShader_setVec3UniformArray

```nelua
global function sfShader_setVec3UniformArray(shader: *sfShader, name: cstring <const>, vectorArray: *[0]sfGlslVec3, length: csize): void
```



### sfShader_setVec4UniformArray

```nelua
global function sfShader_setVec4UniformArray(shader: *sfShader, name: cstring <const>, vectorArray: *[0]sfGlslVec4, length: csize): void
```



### sfShader_setMat3UniformArray

```nelua
global function sfShader_setMat3UniformArray(shader: *sfShader, name: cstring <const>, matrixArray: *[0]sfGlslMat3, length: csize): void
```



### sfShader_setMat4UniformArray

```nelua
global function sfShader_setMat4UniformArray(shader: *sfShader, name: cstring <const>, matrixArray: *[0]sfGlslMat4, length: csize): void
```



### sfShader_setFloatParameter

```nelua
global function sfShader_setFloatParameter(shader: *sfShader, name: cstring <const>, x: float32): void
```



### sfShader_setFloat2Parameter

```nelua
global function sfShader_setFloat2Parameter(shader: *sfShader, name: cstring <const>, x: float32, y: float32): void
```



### sfShader_setFloat3Parameter

```nelua
global function sfShader_setFloat3Parameter(shader: *sfShader, name: cstring <const>, x: float32, y: float32, z: float32): void
```



### sfShader_setFloat4Parameter

```nelua
global function sfShader_setFloat4Parameter(shader: *sfShader, name: cstring <const>, x: float32, y: float32, z: float32, w: float32): void
```



### sfShader_setVector2Parameter

```nelua
global function sfShader_setVector2Parameter(shader: *sfShader, name: cstring <const>, vector: sfVector2f): void
```



### sfShader_setVector3Parameter

```nelua
global function sfShader_setVector3Parameter(shader: *sfShader, name: cstring <const>, vector: sfVector3f): void
```



### sfShader_setColorParameter

```nelua
global function sfShader_setColorParameter(shader: *sfShader, name: cstring <const>, color: sfColor): void
```



### sfShader_setTransformParameter

```nelua
global function sfShader_setTransformParameter(shader: *sfShader, name: cstring <const>, transform: sfTransform): void
```



### sfShader_setTextureParameter

```nelua
global function sfShader_setTextureParameter(shader: *sfShader, name: cstring <const>, texture: *sfTexture <const>): void
```



### sfShader_setCurrentTextureParameter

```nelua
global function sfShader_setCurrentTextureParameter(shader: *sfShader, name: cstring <const>): void
```



### sfShader_getNativeHandle

```nelua
global function sfShader_getNativeHandle(shader: *sfShader <const>): cuint
```



### sfShader_bind

```nelua
global function sfShader_bind(shader: *sfShader <const>): void
```



### sfShader_isAvailable

```nelua
global function sfShader_isAvailable(): sfBool
```



### sfShader_isGeometryAvailable

```nelua
global function sfShader_isGeometryAvailable(): sfBool
```



### sfShapeGetPointCountCallback

```nelua
global sfShapeGetPointCountCallback: type = @function(pointer): csize
```



### sfShapeGetPointCallback

```nelua
global sfShapeGetPointCallback: type = @function(csize, pointer): sfVector2f
```



### sfShape_create

```nelua
global function sfShape_create(getPointCount: sfShapeGetPointCountCallback, getPoint: sfShapeGetPointCallback, userData: pointer): *sfShape
```



### sfShape_destroy

```nelua
global function sfShape_destroy(shape: *sfShape): void
```



### sfShape_setPosition

```nelua
global function sfShape_setPosition(shape: *sfShape, position: sfVector2f): void
```



### sfShape_setRotation

```nelua
global function sfShape_setRotation(shape: *sfShape, angle: float32): void
```



### sfShape_setScale

```nelua
global function sfShape_setScale(shape: *sfShape, scale: sfVector2f): void
```



### sfShape_setOrigin

```nelua
global function sfShape_setOrigin(shape: *sfShape, origin: sfVector2f): void
```



### sfShape_getPosition

```nelua
global function sfShape_getPosition(shape: *sfShape <const>): sfVector2f
```



### sfShape_getRotation

```nelua
global function sfShape_getRotation(shape: *sfShape <const>): float32
```



### sfShape_getScale

```nelua
global function sfShape_getScale(shape: *sfShape <const>): sfVector2f
```



### sfShape_getOrigin

```nelua
global function sfShape_getOrigin(shape: *sfShape <const>): sfVector2f
```



### sfShape_move

```nelua
global function sfShape_move(shape: *sfShape, offset: sfVector2f): void
```



### sfShape_rotate

```nelua
global function sfShape_rotate(shape: *sfShape, angle: float32): void
```



### sfShape_scale

```nelua
global function sfShape_scale(shape: *sfShape, factors: sfVector2f): void
```



### sfShape_getTransform

```nelua
global function sfShape_getTransform(shape: *sfShape <const>): sfTransform
```



### sfShape_getInverseTransform

```nelua
global function sfShape_getInverseTransform(shape: *sfShape <const>): sfTransform
```



### sfShape_setTexture

```nelua
global function sfShape_setTexture(shape: *sfShape, texture: *sfTexture <const>, resetRect: sfBool): void
```



### sfShape_setTextureRect

```nelua
global function sfShape_setTextureRect(shape: *sfShape, rect: sfIntRect): void
```



### sfShape_setFillColor

```nelua
global function sfShape_setFillColor(shape: *sfShape, color: sfColor): void
```



### sfShape_setOutlineColor

```nelua
global function sfShape_setOutlineColor(shape: *sfShape, color: sfColor): void
```



### sfShape_setOutlineThickness

```nelua
global function sfShape_setOutlineThickness(shape: *sfShape, thickness: float32): void
```



### sfShape_getTexture

```nelua
global function sfShape_getTexture(shape: *sfShape <const>): *sfTexture
```



### sfShape_getTextureRect

```nelua
global function sfShape_getTextureRect(shape: *sfShape <const>): sfIntRect
```



### sfShape_getFillColor

```nelua
global function sfShape_getFillColor(shape: *sfShape <const>): sfColor
```



### sfShape_getOutlineColor

```nelua
global function sfShape_getOutlineColor(shape: *sfShape <const>): sfColor
```



### sfShape_getOutlineThickness

```nelua
global function sfShape_getOutlineThickness(shape: *sfShape <const>): float32
```



### sfShape_getPointCount

```nelua
global function sfShape_getPointCount(shape: *sfShape <const>): csize
```



### sfShape_getPoint

```nelua
global function sfShape_getPoint(shape: *sfShape <const>, index: csize): sfVector2f
```



### sfShape_setSize

```nelua
global function sfShape_setSize(shape: *sfShape, size: float32): void
```



### sfShape_getSize

```nelua
global function sfShape_getSize(shape: *sfShape <const>): sfVector2f
```



### sfShape_setPointCount

```nelua
global function sfShape_setPointCount(shape: *sfShape, count: csize): void
```



### sfShape_getLocalBounds

```nelua
global function sfShape_getLocalBounds(shape: *sfShape <const>): sfFloatRect
```



### sfShape_getGlobalBounds

```nelua
global function sfShape_getGlobalBounds(shape: *sfShape <const>): sfFloatRect
```



### sfShape_update

```nelua
global function sfShape_update(shape: *sfShape): void
```



### sfSprite_create

```nelua
global function sfSprite_create(): *sfSprite
```



### sfSprite_copy

```nelua
global function sfSprite_copy(sprite: *sfSprite <const>): *sfSprite
```



### sfSprite_destroy

```nelua
global function sfSprite_destroy(sprite: *sfSprite): void
```



### sfSprite_setPosition

```nelua
global function sfSprite_setPosition(sprite: *sfSprite, position: sfVector2f): void
```



### sfSprite_setRotation

```nelua
global function sfSprite_setRotation(sprite: *sfSprite, angle: float32): void
```



### sfSprite_setScale

```nelua
global function sfSprite_setScale(sprite: *sfSprite, scale: sfVector2f): void
```



### sfSprite_setOrigin

```nelua
global function sfSprite_setOrigin(sprite: *sfSprite, origin: sfVector2f): void
```



### sfSprite_getPosition

```nelua
global function sfSprite_getPosition(sprite: *sfSprite <const>): sfVector2f
```



### sfSprite_getRotation

```nelua
global function sfSprite_getRotation(sprite: *sfSprite <const>): float32
```



### sfSprite_getScale

```nelua
global function sfSprite_getScale(sprite: *sfSprite <const>): sfVector2f
```



### sfSprite_getOrigin

```nelua
global function sfSprite_getOrigin(sprite: *sfSprite <const>): sfVector2f
```



### sfSprite_move

```nelua
global function sfSprite_move(sprite: *sfSprite, offset: sfVector2f): void
```



### sfSprite_rotate

```nelua
global function sfSprite_rotate(sprite: *sfSprite, angle: float32): void
```



### sfSprite_scale

```nelua
global function sfSprite_scale(sprite: *sfSprite, factors: sfVector2f): void
```



### sfSprite_getTransform

```nelua
global function sfSprite_getTransform(sprite: *sfSprite <const>): sfTransform
```



### sfSprite_getInverseTransform

```nelua
global function sfSprite_getInverseTransform(sprite: *sfSprite <const>): sfTransform
```



### sfSprite_setTexture

```nelua
global function sfSprite_setTexture(sprite: *sfSprite, texture: *sfTexture, resetRect: sfBool): void
```



### sfSprite_setTextureRect

```nelua
global function sfSprite_setTextureRect(sprite: *sfSprite, rectangle: sfIntRect): void
```



### sfSprite_setColor

```nelua
global function sfSprite_setColor(sprite: *sfSprite, color: sfColor): void
```



### sfSprite_getTexture

```nelua
global function sfSprite_getTexture(sprite: *sfSprite <const>): *sfTexture
```



### sfSprite_getTextureRect

```nelua
global function sfSprite_getTextureRect(sprite: *sfSprite <const>): sfIntRect
```



### sfSprite_getColor

```nelua
global function sfSprite_getColor(sprite: *sfSprite <const>): sfColor
```



### sfSprite_getLocalBounds

```nelua
global function sfSprite_getLocalBounds(sprite: *sfSprite <const>): sfFloatRect
```



### sfSprite_getGlobalBounds

```nelua
global function sfSprite_getGlobalBounds(sprite: *sfSprite <const>): sfFloatRect
```



### sfTextStyle

```nelua
global sfTextStyle: type = @enum(cint) {
  sfTextRegular       = 0,
  sfTextBold          = 1 << 0,
  sfTextItalic        = 1 << 1,
  sfTextUnderlined    = 1 << 2,
  sfTextStrikeThrough = 1 << 3
}
```



### sfText_create

```nelua
global function sfText_create(): *sfText
```



### sfText_copy

```nelua
global function sfText_copy(text: *sfText <const>): *sfText
```



### sfText_destroy

```nelua
global function sfText_destroy(text: *sfText): void
```



### sfText_setPosition

```nelua
global function sfText_setPosition(text: *sfText, position: sfVector2f): void
```



### sfText_setRotation

```nelua
global function sfText_setRotation(text: *sfText, angle: float32): void
```



### sfText_setScale

```nelua
global function sfText_setScale(text: *sfText, scale: sfVector2f): void
```



### sfText_setOrigin

```nelua
global function sfText_setOrigin(text: *sfText, origin: sfVector2f): void
```



### sfText_getPosition

```nelua
global function sfText_getPosition(text: *sfText <const>): sfVector2f
```



### sfText_getRotation

```nelua
global function sfText_getRotation(text: *sfText <const>): float32
```



### sfText_getScale

```nelua
global function sfText_getScale(text: *sfText <const>): sfVector2f
```



### sfText_getOrigin

```nelua
global function sfText_getOrigin(text: *sfText <const>): sfVector2f
```



### sfText_move

```nelua
global function sfText_move(text: *sfText, offset: sfVector2f): void
```



### sfText_rotate

```nelua
global function sfText_rotate(text: *sfText, angle: float32): void
```



### sfText_scale

```nelua
global function sfText_scale(text: *sfText, factors: sfVector2f): void
```



### sfText_getTransform

```nelua
global function sfText_getTransform(text: *sfText <const>): sfTransform
```



### sfText_getInverseTransform

```nelua
global function sfText_getInverseTransform(text: *sfText <const>): sfTransform
```



### sfText_setString

```nelua
global function sfText_setString(text: *sfText, string: cstring <const>): void
```



### sfText_setUnicodeString

```nelua
global function sfText_setUnicodeString(text: *sfText, string: *sfUint32 <const>): void
```



### sfText_setFont

```nelua
global function sfText_setFont(text: *sfText, font: *sfFont <const>): void
```



### sfText_setCharacterSize

```nelua
global function sfText_setCharacterSize(text: *sfText, size: cuint): void
```



### sfText_setLineSpacing

```nelua
global function sfText_setLineSpacing(text: *sfText, spacingFactor: float32): void
```



### sfText_setLetterSpacing

```nelua
global function sfText_setLetterSpacing(text: *sfText, spacingFactor: float32): void
```



### sfText_setStyle

```nelua
global function sfText_setStyle(text: *sfText, style: sfUint32): void
```



### sfText_setColor

```nelua
global function sfText_setColor(text: *sfText, color: sfColor): void
```



### sfText_setFillColor

```nelua
global function sfText_setFillColor(text: *sfText, color: sfColor): void
```



### sfText_setOutlineColor

```nelua
global function sfText_setOutlineColor(text: *sfText, color: sfColor): void
```



### sfText_setOutlineThickness

```nelua
global function sfText_setOutlineThickness(text: *sfText, thickness: float32): void
```



### sfText_getString

```nelua
global function sfText_getString(text: *sfText <const>): cstring
```



### sfText_getUnicodeString

```nelua
global function sfText_getUnicodeString(text: *sfText <const>): *sfUint32
```



### sfText_getFont

```nelua
global function sfText_getFont(text: *sfText <const>): *sfFont
```



### sfText_getCharacterSize

```nelua
global function sfText_getCharacterSize(text: *sfText <const>): cuint
```



### sfText_getLineSpacing

```nelua
global function sfText_getLineSpacing(text: *sfText <const>): float32
```



### sfText_getLetterSpacing

```nelua
global function sfText_getLetterSpacing(text: *sfText <const>): float32
```



### sfText_getStyle

```nelua
global function sfText_getStyle(text: *sfText <const>): sfUint32
```



### sfText_getColor

```nelua
global function sfText_getColor(text: *sfText <const>): sfColor
```



### sfText_getFillColor

```nelua
global function sfText_getFillColor(text: *sfText <const>): sfColor
```



### sfText_getOutlineColor

```nelua
global function sfText_getOutlineColor(text: *sfText <const>): sfColor
```



### sfText_getOutlineThickness

```nelua
global function sfText_getOutlineThickness(text: *sfText <const>): float32
```



### sfText_findCharacterPos

```nelua
global function sfText_findCharacterPos(text: cstring <const>, index: csize): sfVector2f
```



### sfText_getLocalBounds

```nelua
global function sfText_getLocalBounds(text: cstring <const>): sfFloatRect
```



### sfText_getGlobalBounds

```nelua
global function sfText_getGlobalBounds(text: cstring <const>): sfFloatRect
```



### sfTexture_create

```nelua
global function sfTexture_create(width: cuint, height: cuint): *sfTexture
```



### sfTexture_createFromFile

```nelua
global function sfTexture_createFromFile(filename: cstring <const>, area: *sfIntRect <const>): *sfTexture
```



### sfTexture_createFromMemory

```nelua
global function sfTexture_createFromMemory(data: pointer <const>, sizeInBytes: csize, area: *sfIntRect <const>): *sfTexture
```



### sfTexture_createFromStream

```nelua
global function sfTexture_createFromStream(stream: *sfInputStream, area: *sfIntRect <const>): *sfTexture
```



### sfTexture_createFromImage

```nelua
global function sfTexture_createFromImage(image: *sfImage <const>, area: *sfIntRect <const>): *sfTexture
```



### sfTexture_copy

```nelua
global function sfTexture_copy(texture: *sfTexture <const>): *sfTexture
```



### sfTexture_destroy

```nelua
global function sfTexture_destroy(texture: *sfTexture): void
```



### sfTexture_getSize

```nelua
global function sfTexture_getSize(texture: *sfTexture <const>): sfVector2u
```



### sfTexture_copyToImage

```nelua
global function sfTexture_copyToImage(texture: *sfTexture <const>): *sfImage
```



### sfTexture_updateFromPixels

```nelua
global function sfTexture_updateFromPixels(texture: *sfTexture, pixels: *[0]sfUint8 <const>, width: cuint, height: cuint, x: cuint, y: cuint): void
```



### sfTexture_updateFromImage

```nelua
global function sfTexture_updateFromImage(destination: *sfTexture, source: *sfTexture, x: cuint, y: cuint): void
```



### sfTexture_updateFromWindow

```nelua
global function sfTexture_updateFromWindow(texture: *sfTexture, window: *sfWindow <const>, x: cuint, y: cuint): void
```



### sfTexture_updateFromRenderWindow

```nelua
global function sfTexture_updateFromRenderWindow(texture: *sfTexture, renderWindow: *sfRenderWindow <const>, x: cuint, y: cuint): void
```



### sfTexture_setSmooth

```nelua
global function sfTexture_setSmooth(texture: *sfTexture, smooth: sfBool): void
```



### sfTexture_isSmooth

```nelua
global function sfTexture_isSmooth(texture: *sfTexture <const>): sfBool
```



### sfTexture_setSrgb

```nelua
global function sfTexture_setSrgb(texture: *sfTexture, sRgb: sfBool): void
```



### sfTexture_isSrgb

```nelua
global function sfTexture_isSrgb(texture: *sfTexture <const>): sfBool
```



### sfTexture_setRepeated

```nelua
global function sfTexture_setRepeated(texture: *sfTexture, repeated: sfBool): void
```



### sfTexture_isRepeated

```nelua
global function sfTexture_isRepeated(texture: *sfTexture <const>): sfBool
```



### sfTexture_generateMipmap

```nelua
global function sfTexture_generateMipmap(texture: *sfTexture): sfBool
```



### sfTexture_swap

```nelua
global function sfTexture_swap(left: *sfTexture, right: *sfTexture): void
```



### sfTexture_getNativeHandle

```nelua
global function sfTexture_getNativeHandle(texture: *sfTexture <const>): cuint
```



### sfTexture_getMaximumSize

```nelua
global function sfTexture_getMaximumSize(): cuint
```



### sfVertexBufferUsage

```nelua
global sfVertexBufferUsage: type = @enum(cint) {
  sfVertexBufferStream = 0,
  sfVertexBufferDynamic,
  sfVertexBufferStatic
}
```



### sfVertexBuffer_create

```nelua
global function sfVertexBuffer_create(vertexCount: cuint, type: sfPrimitiveType, usage: sfVertexBufferUsage): *sfVertexBuffer
```



### sfVertexBuffer_copy

```nelua
global function sfVertexBuffer_copy(vertexBuffer: *sfVertexBuffer <const>): *sfVertexBuffer
```



### sfVertexBuffer_destroy

```nelua
global function sfVertexBuffer_destroy(vertexBuffer: *sfVertexBuffer): void
```



### sfVertexBuffer_getVertexCount

```nelua
global function sfVertexBuffer_getVertexCount(vertexBuffer: *sfVertexBuffer <const>): cuint
```



### sfVertexBuffer_update

```nelua
global function sfVertexBuffer_update(vertexBuffer: *sfVertexBuffer , vertices: *[0]sfVertex <const>, vertexCount: cuint, offset: cuint): sfBool
```



### sfVertexBuffer_updateFromVertexBuffer

```nelua
global function sfVertexBuffer_updateFromVertexBuffer(vertexBuffer: *sfVertexBuffer, other: *sfVertexBuffer <const>): sfBool
```



### sfVertexBuffer_swap

```nelua
global function sfVertexBuffer_swap(left: *sfVertexBuffer, right: *sfVertexBuffer): void
```



### sfVertexBuffer_getNativeHandle

```nelua
global function sfVertexBuffer_getNativeHandle(vertexBuffer: *sfVertexBuffer): cuint
```



### sfVertexBuffer_setPrimitiveType

```nelua
global function sfVertexBuffer_setPrimitiveType(vertexBuffer: *sfVertexBuffer, type: sfPrimitiveType): void
```



### sfVertexBuffer_getPrimitiveType

```nelua
global function sfVertexBuffer_getPrimitiveType(vertexBuffer: *sfVertexBuffer <const>): sfPrimitiveType
```



### sfVertexBuffer_setUsage

```nelua
global function sfVertexBuffer_setUsage(vertexBuffer: *sfVertexBuffer, usage: sfVertexBufferUsage): void
```



### sfVertexBuffer_getUsage

```nelua
global function sfVertexBuffer_getUsage(vertexBuffer: *sfVertexBuffer <const>): sfVertexBufferUsage
```



### sfVertexBuffer_bind

```nelua
global function sfVertexBuffer_bind(vertexBuffer: *sfVertexBuffer <const>): void
```



### sfVertexBuffer_isAvailable

```nelua
global function sfVertexBuffer_isAvailable(): sfBool
```



---
