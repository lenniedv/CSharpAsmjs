#include "HelloWorld.h"

System_Type* HelloWorld__type = 0/*undef*/;
System_Type* System_Collections_Generic_IEnumerableGSystem_StringC__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_Collections_Generic_ICollectionGSystem_StringC__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_Collections_Generic_IListGSystem_StringC__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_Collections_Generic_IReadOnlyCollectionGSystem_StringC__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_Collections_Generic_IReadOnlyListGSystem_StringC__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_StringAY__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_ArraySegmentGSystem_StringC__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_Collections_Generic_IEnumeratorGSystem_StringC__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_Collections_Generic_IEnumerableGSystem_Int32C__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_Collections_Generic_ICollectionGSystem_Int32C__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_Collections_Generic_IListGSystem_Int32C__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_Collections_Generic_IReadOnlyCollectionGSystem_Int32C__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_Collections_Generic_IReadOnlyListGSystem_Int32C__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_Int32AY__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_Collections_Generic_IEnumerableGSystem_ByteC__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_Collections_Generic_ICollectionGSystem_ByteC__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_Collections_Generic_IListGSystem_ByteC__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_Collections_Generic_IReadOnlyCollectionGSystem_ByteC__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_Collections_Generic_IReadOnlyListGSystem_ByteC__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_ByteAY__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_ArraySegmentGSystem_Int32C__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_Collections_Generic_IEnumeratorGSystem_Int32C__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_ArraySegmentGSystem_ByteC__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_Collections_Generic_IEnumeratorGSystem_ByteC__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
System_Type* System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__type_HelloWorld_r00iaxum_dll = 0/*undef*/;
Void Void_HelloWorld__ctorFN(HelloWorld* __this) {
    __check_this((Void*)__this);
    Void_System_Object__ctorFN((System_Object*) (__this));
    return ;
}
static const struct { Byte* vtable;Int32 len; Char data[14]; } _s1879048193243930825_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 13, { 72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33, 0 } };

Int32 Int32_HelloWorld_MainFSystem_StringAYN(System_StringAY* args) {
    Void_System_Console_WriteLineFSystem_StringN(((System_String*) &_s1879048193243930825_));
    return 0;
}
HelloWorld* HelloWorld_HelloWorld__newFN() {
    Int32 local0;
    UInt32 _dup6;
    UInt32 _dup8;
    Void* _dup28;
    Void* _dup37;
    HelloWorld* _dup47;
    _dup6 = sizeof(HelloWorld);
    ;
    local0 = (Int32) (_dup6);
a8:
    _dup8 = _dup6;
    ;
    if ((UInt32)_dup8 >= (UInt32)102400) goto a23;
    Void* _phi16;
    _phi16 = GC_MALLOC_ATOMIC(_dup8);
    goto a28;
a23:
    _phi16 = GC_MALLOC_ATOMIC_IGNORE_OFF_PAGE((Int32) (_dup8));
a28:
    _dup28 = _phi16;
    ;
    if (_dup28) goto a37;
    System_OutOfMemoryException* _new31;
    _new31 = System_OutOfMemoryException_System_OutOfMemoryException__newFN();
    Void_System_OutOfMemoryException__ctorFN(_new31);
    throw (Void*) _new31;
a37:
    _dup37 = _dup28;
    ;
    Memset((Byte*) ((Byte*) (_dup37)), 0, (local0));
    _dup47 = (HelloWorld*) (_dup37);
    ;
    Void_HelloWorld__initFN(_dup47);
    return _dup47;
}
Void Void_HelloWorld__initFN(HelloWorld* __this) {
    __check_this((Void*)__this);
    ((System_Object*) (__this))->__vtbl = (Void**) &HelloWorld_vtable_impl;
    return ;
}
Int32 Int32_HelloWorld__getsizeFN(HelloWorld* __this) {
    __check_this((Void*)__this);
    return (Int32) (sizeof(HelloWorld));
}
System_Type* System_Type_HelloWorld__gettypeFN(HelloWorld* __this) {
    __check_this((Void*)__this);
    return System_Type_HelloWorld__sgettypeFN();
}
System_Object* System_Object_HelloWorld__dynifaceFSystem_TypeN(HelloWorld* __this, System_Type* _type) {
    __check_this((Void*)__this);
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[12]; } _s64224986209_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 10, { 72, 101, 108, 108, 111, 87, 111, 114, 108, 100, 0, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[12]; } _s84224986209_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 10, { 72, 101, 108, 108, 111, 87, 111, 114, 108, 100, 0, 0 } };

System_Type* System_Type_HelloWorld__sgettypeFN() {
    System_NativeType* local0;
    if (HelloWorld__type) goto a75;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&HelloWorld__type), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (HelloWorld__type), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s64224986209_);
    (local0)->fullname = ((System_String*) &_s84224986209_);
    (local0)->baseType = System_Type_System_Object__sgettypeFN();
    (local0)->attributeFlags = 0;
a75:
    return HelloWorld__type;
}
System_Object* System_Object_System_Collections_Generic_IEnumerableGSystem_StringC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_Collections_Generic_IEnumerableGSystem_StringC* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) (__this)));
a20:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[28]; } _s63637442858_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 26, { 73, 69, 110, 117, 109, 101, 114, 97, 98, 108, 101, 60, 83, 121, 115, 116, 101, 109, 46, 83, 116, 114, 105, 110, 103, 62, 0, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[54]; } _s83894617509_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 53, { 83, 121, 115, 116, 101, 109, 46, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 115, 46, 71, 101, 110, 101, 114, 105, 99, 46, 73, 69, 110, 117, 109, 101, 114, 97, 98, 108, 101, 60, 83, 121, 115, 116, 101, 109, 46, 83, 116, 114, 105, 110, 103, 62, 0 } };

System_Type* System_Type_System_Collections_Generic_IEnumerableGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_Collections_Generic_IEnumerableGSystem_StringC__type_HelloWorld_r00iaxum_dll) goto a60;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_Collections_Generic_IEnumerableGSystem_StringC__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_Collections_Generic_IEnumerableGSystem_StringC__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s63637442858_);
    (local0)->fullname = ((System_String*) &_s83894617509_);
    (local0)->attributeFlags = 32;
a60:
    return System_Collections_Generic_IEnumerableGSystem_StringC__type_HelloWorld_r00iaxum_dll;
}
System_Object* System_Object_System_Collections_Generic_ICollectionGSystem_StringC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_Collections_Generic_ICollectionGSystem_StringC* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_Generic_IEnumerableGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumerableGSystem_StringC*) (__this)));
a20:
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) (__this)));
a40:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[28]; } _s62951721035_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 26, { 73, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 60, 83, 121, 115, 116, 101, 109, 46, 83, 116, 114, 105, 110, 103, 62, 0, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[54]; } _s82462975660_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 53, { 83, 121, 115, 116, 101, 109, 46, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 115, 46, 71, 101, 110, 101, 114, 105, 99, 46, 73, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 60, 83, 121, 115, 116, 101, 109, 46, 83, 116, 114, 105, 110, 103, 62, 0 } };

System_Type* System_Type_System_Collections_Generic_ICollectionGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_Collections_Generic_ICollectionGSystem_StringC__type_HelloWorld_r00iaxum_dll) goto a60;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_Collections_Generic_ICollectionGSystem_StringC__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_Collections_Generic_ICollectionGSystem_StringC__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s62951721035_);
    (local0)->fullname = ((System_String*) &_s82462975660_);
    (local0)->attributeFlags = 32;
a60:
    return System_Collections_Generic_ICollectionGSystem_StringC__type_HelloWorld_r00iaxum_dll;
}
System_Object* System_Object_System_Collections_Generic_IListGSystem_StringC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_Collections_Generic_IListGSystem_StringC* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_Generic_ICollectionGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_Generic_ICollectionGSystem_StringC*) (__this)));
a20:
    if ((Byte*)System_Type_System_Collections_Generic_IEnumerableGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumerableGSystem_StringC*) (__this)));
a40:
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a60;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) (__this)));
a60:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[22]; } _s64098727529_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 20, { 73, 76, 105, 115, 116, 60, 83, 121, 115, 116, 101, 109, 46, 83, 116, 114, 105, 110, 103, 62, 0, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[48]; } _s81699179532_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 47, { 83, 121, 115, 116, 101, 109, 46, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 115, 46, 71, 101, 110, 101, 114, 105, 99, 46, 73, 76, 105, 115, 116, 60, 83, 121, 115, 116, 101, 109, 46, 83, 116, 114, 105, 110, 103, 62, 0 } };

System_Type* System_Type_System_Collections_Generic_IListGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_Collections_Generic_IListGSystem_StringC__type_HelloWorld_r00iaxum_dll) goto a60;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_Collections_Generic_IListGSystem_StringC__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_Collections_Generic_IListGSystem_StringC__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s64098727529_);
    (local0)->fullname = ((System_String*) &_s81699179532_);
    (local0)->attributeFlags = 32;
a60:
    return System_Collections_Generic_IListGSystem_StringC__type_HelloWorld_r00iaxum_dll;
}
System_Object* System_Object_System_Collections_Generic_IReadOnlyCollectionGSystem_StringC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_Collections_Generic_IReadOnlyCollectionGSystem_StringC* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_Generic_IEnumerableGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumerableGSystem_StringC*) (__this)));
a20:
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) (__this)));
a40:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[36]; } _s63274706886_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 34, { 73, 82, 101, 97, 100, 79, 110, 108, 121, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 60, 83, 121, 115, 116, 101, 109, 46, 83, 116, 114, 105, 110, 103, 62, 0, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[62]; } _s81550143228_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 61, { 83, 121, 115, 116, 101, 109, 46, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 115, 46, 71, 101, 110, 101, 114, 105, 99, 46, 73, 82, 101, 97, 100, 79, 110, 108, 121, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 60, 83, 121, 115, 116, 101, 109, 46, 83, 116, 114, 105, 110, 103, 62, 0 } };

System_Type* System_Type_System_Collections_Generic_IReadOnlyCollectionGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_Collections_Generic_IReadOnlyCollectionGSystem_StringC__type_HelloWorld_r00iaxum_dll) goto a60;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_Collections_Generic_IReadOnlyCollectionGSystem_StringC__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_Collections_Generic_IReadOnlyCollectionGSystem_StringC__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s63274706886_);
    (local0)->fullname = ((System_String*) &_s81550143228_);
    (local0)->attributeFlags = 32;
a60:
    return System_Collections_Generic_IReadOnlyCollectionGSystem_StringC__type_HelloWorld_r00iaxum_dll;
}
System_Object* System_Object_System_Collections_Generic_IReadOnlyListGSystem_StringC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_Collections_Generic_IReadOnlyListGSystem_StringC* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_Generic_IReadOnlyCollectionGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IReadOnlyCollectionGSystem_StringC*) (__this)));
a20:
    if ((Byte*)System_Type_System_Collections_Generic_IEnumerableGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumerableGSystem_StringC*) (__this)));
a40:
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a60;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) (__this)));
a60:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[30]; } _s6578614341_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 28, { 73, 82, 101, 97, 100, 79, 110, 108, 121, 76, 105, 115, 116, 60, 83, 121, 115, 116, 101, 109, 46, 83, 116, 114, 105, 110, 103, 62, 0, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[56]; } _s8632569688_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 55, { 83, 121, 115, 116, 101, 109, 46, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 115, 46, 71, 101, 110, 101, 114, 105, 99, 46, 73, 82, 101, 97, 100, 79, 110, 108, 121, 76, 105, 115, 116, 60, 83, 121, 115, 116, 101, 109, 46, 83, 116, 114, 105, 110, 103, 62, 0 } };

System_Type* System_Type_System_Collections_Generic_IReadOnlyListGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_Collections_Generic_IReadOnlyListGSystem_StringC__type_HelloWorld_r00iaxum_dll) goto a60;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_Collections_Generic_IReadOnlyListGSystem_StringC__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_Collections_Generic_IReadOnlyListGSystem_StringC__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s6578614341_);
    (local0)->fullname = ((System_String*) &_s8632569688_);
    (local0)->attributeFlags = 32;
a60:
    return System_Collections_Generic_IReadOnlyListGSystem_StringC__type_HelloWorld_r00iaxum_dll;
}
Void Void_System_StringAY__ctorFInt32N_HelloWorld_r00iaxum_dll(System_StringAY* __this, Int32 param0) {
    System_Int32AY* local0;
    System_Int32AY* local1;
    System_StringAY* _dup1;
    System_StringAY* _dup2;
    System_StringAY* _dup3;
    __check_this((Void*)__this);
    _dup1 = __this;
    ;
    _dup2 = _dup1;
    ;
    _dup3 = _dup2;
    ;
    (_dup3)->rank = 1;
    (_dup3)->typeCode = 18;
    (_dup2)->elementSize = 4;
    (_dup1)->length = param0;
    return ;
}
System_StringAY* System_StringAY_System_StringAY__newFInt32N_HelloWorld_r00iaxum_dll(Int32 param0) {
    Int32 _dup15;
    Int32 _dup24;
    Void* _dup44;
    System_StringAY* _dup58;
    _dup15 = ((sizeof(System_String) * param0) + sizeof(System_StringAY));
    ;
a24:
    _dup24 = ((_dup15 + 3) & -4);
    ;
    if ((UInt32)_dup24 >= (UInt32)102400) goto a39;
    Void* _phi32;
    _phi32 = GC_MALLOC(_dup24);
    goto a44;
a39:
    _phi32 = GC_MALLOC_IGNORE_OFF_PAGE(_dup24);
a44:
    _dup44 = _phi32;
    ;
    if (_dup44) goto a53;
    System_OutOfMemoryException* _new47;
    _new47 = System_OutOfMemoryException_System_OutOfMemoryException__newFN();
    Void_System_OutOfMemoryException__ctorFN(_new47);
    throw (Void*) _new47;
a53:
    _dup58 = (System_StringAY*) (_dup44);
    ;
    Void_System_StringAY__initFN_HelloWorld_r00iaxum_dll(_dup58);
    return _dup58;
}
Void Void_System_StringAY__initFN_HelloWorld_r00iaxum_dll(System_StringAY* __this) {
    __check_this((Void*)__this);
    ((System_Object*) (__this))->__vtbl = (Void**) &System_StringAY_vtable_implHelloWorld_r00iaxum_dll;
    return ;
}
Int32 Int32_System_StringAY__getsizeFN_HelloWorld_r00iaxum_dll(System_StringAY* __this) {
    __check_this((Void*)__this);
    return (Int32) (sizeof(System_StringAY));
}
System_Type* System_Type_System_StringAY__gettypeFN_HelloWorld_r00iaxum_dll(System_StringAY* __this) {
    __check_this((Void*)__this);
    return System_Type_System_StringAY__sgettypeFN_HelloWorld_r00iaxum_dll();
}
System_Object* System_Object_System_StringAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_StringAY* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_ICloneable__sgettypeFN() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_ICloneable*) __new_interface((Void*)__this, (Void**)((System_StringAY__vtbl*) __this->base.base.__vtbl)->ifce_System_ICloneable)));
a20:
    if ((Byte*)System_Type_System_Collections_IList__sgettypeFN() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_IList*) __new_interface((Void*)__this, (Void**)((System_StringAY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_IList)));
a40:
    if ((Byte*)System_Type_System_Collections_ICollection__sgettypeFN() != (Byte*)_type) goto a60;
    return (System_Object*) ((Void*) ((System_Collections_ICollection*) __new_interface((Void*)__this, (Void**)&((System_StringAY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_IList->ifce_System_Collections_ICollection)));
a60:
    if ((Byte*)System_Type_System_Collections_Generic_IListGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a80;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IListGSystem_StringC*) __new_interface((Void*)__this, (Void**)((System_StringAY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_StringC)));
a80:
    if ((Byte*)System_Type_System_Collections_Generic_ICollectionGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a100;
    return (System_Object*) ((Void*) ((System_Collections_Generic_ICollectionGSystem_StringC*) __new_interface((Void*)__this, (Void**)&((System_StringAY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_StringC->ifce_System_Collections_Generic_ICollectionGSystem_StringC)));
a100:
    if ((Byte*)System_Type_System_Collections_Generic_IReadOnlyListGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a120;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IReadOnlyListGSystem_StringC*) __new_interface((Void*)__this, (Void**)((System_StringAY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IReadOnlyListGSystem_StringC)));
a120:
    if ((Byte*)System_Type_System_Collections_Generic_IReadOnlyCollectionGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a140;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IReadOnlyCollectionGSystem_StringC*) __new_interface((Void*)__this, (Void**)&((System_StringAY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IReadOnlyListGSystem_StringC->ifce_System_Collections_Generic_IReadOnlyCollectionGSystem_StringC)));
a140:
    if ((Byte*)System_Type_System_Collections_Generic_IEnumerableGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a160;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumerableGSystem_StringC*) __new_interface((Void*)__this, (Void**)&((System_StringAY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_StringC->ifce_System_Collections_Generic_ICollectionGSystem_StringC.ifce_System_Collections_Generic_IEnumerableGSystem_StringC)));
a160:
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a180;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) __new_interface((Void*)__this, (Void**)&((System_StringAY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_IList->ifce_System_Collections_ICollection.ifce_System_Collections_IEnumerable)));
a180:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[10]; } _s62191247092_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 8, { 83, 116, 114, 105, 110, 103, 91, 93, 0, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[16]; } _s8390706205_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 15, { 83, 121, 115, 116, 101, 109, 46, 83, 116, 114, 105, 110, 103, 91, 93, 0 } };

System_Type* System_Type_System_StringAY__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_StringAY__type_HelloWorld_r00iaxum_dll) goto a75;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_StringAY__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_StringAY__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s62191247092_);
    (local0)->fullname = ((System_String*) &_s8390706205_);
    (local0)->baseType = System_Type_System_Array__sgettypeFN();
    (local0)->attributeFlags = 0;
a75:
    return System_StringAY__type_HelloWorld_r00iaxum_dll;
}
System_Collections_Generic_IEnumeratorGSystem_StringC* System_Collections_Generic_IEnumeratorGSystem_StringC_System_StringAY_GetEnumeratorFN_HelloWorld_r00iaxum_dll(System_StringAY* __this) {
    __check_this((Void*)__this);
    System_ArraySegmentGSystem_StringC__struct_data _new1;
    Memset((Byte*) (&_new1), 0, sizeof(System_ArraySegmentGSystem_StringC__struct_data));
    Void_System_ArraySegmentGSystem_StringC__ctorFSystem_StringAYN_HelloWorld_r00iaxum_dll(&_new1, __this);
    System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator* _new6;
    _new6 = System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__newFN_HelloWorld_r00iaxum_dll();
    Void_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__ctorFSystem_ArraySegmentGSystem_StringCN_HelloWorld_r00iaxum_dll(_new6, (*((System_ArraySegmentGSystem_StringC__struct_data*)&_new1)));
    return (System_Collections_Generic_IEnumeratorGSystem_StringC*) __new_interface((Void*)_new6, (Void**)((System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__vtbl*) _new6->base.__vtbl)->ifce_System_Collections_Generic_IEnumeratorGSystem_StringC);
}
Int32 Int32_System_StringAY_get_CountFN_HelloWorld_r00iaxum_dll(System_StringAY* __this) {
    __check_this((Void*)__this);
    return (Int32) ((__this)->length);
}
System_String* System_String_System_StringAY_get_ItemFInt32N_HelloWorld_r00iaxum_dll(System_StringAY* __this, Int32 index) {
    __check_this((Void*)__this);
    return (__this)->data[index];
}
Void Void_System_StringAY_set_ItemFInt32__System_StringN_HelloWorld_r00iaxum_dll(System_StringAY* __this, Int32 index, System_String* _value) {
    __check_this((Void*)__this);
    (__this)->data[index] = _value;
    return ;
}
Void Void_System_StringAY_CopyToFSystem_StringAY__Int32N_HelloWorld_r00iaxum_dll(System_StringAY* __this, System_StringAY* _array, Int32 arrayIndex) {
    __check_this((Void*)__this);
    Void_System_Array_CopyFSystem_Array__Int32__System_Array__Int32__Int32N((System_Array*) (__this), 0, (System_Array*) (_array), arrayIndex, (Int32) ((__this)->length));
    return ;
}
static const struct { Byte* vtable;Int32 len; Char data[6]; } _s18790568674007973390_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 5, { 97, 114, 114, 97, 121, 0 } };

Void Void_System_ArraySegmentGSystem_StringC__ctorFSystem_StringAYN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this, System_StringAY* array) {
    __check_this((Void*)__this);
    if (array) goto a14;
    System_ArgumentNullException* _new8;
    _new8 = System_ArgumentNullException_System_ArgumentNullException__newFN();
    Void_System_ArgumentNullException__ctorFSystem_StringN(_new8, ((System_String*) &_s18790568674007973390_));
    throw (Void*) _new8;
a14:
    (__this)->_array = array;
    (__this)->_offset = 0;
    (__this)->_count = (Int32) ((array)->length);
    return ;
}
static const struct { Byte* vtable;Int32 len; Char data[34]; } _s1879049765898548126_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 32, { 65, 114, 103, 117, 109, 101, 110, 116, 79, 117, 116, 79, 102, 82, 97, 110, 103, 101, 95, 78, 101, 101, 100, 78, 111, 110, 78, 101, 103, 78, 117, 109, 0, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[6]; } _s18790502452002595880_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 5, { 99, 111, 117, 110, 116, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[8]; } _s18790502571082126080_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 6, { 111, 102, 102, 115, 101, 116, 0, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[24]; } _s18790502711582197642_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 22, { 65, 114, 103, 117, 109, 101, 110, 116, 95, 73, 110, 118, 97, 108, 105, 100, 79, 102, 102, 76, 101, 110, 0, 0 } };

Void Void_System_ArraySegmentGSystem_StringC__ctorFSystem_StringAY__Int32__Int32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this, System_StringAY* array, Int32 offset, Int32 count) {
    __check_this((Void*)__this);
    if (array) goto a14;
    System_ArgumentNullException* _new8;
    _new8 = System_ArgumentNullException_System_ArgumentNullException__newFN();
    Void_System_ArgumentNullException__ctorFSystem_StringN(_new8, ((System_String*) &_s18790568674007973390_));
    throw (Void*) _new8;
a14:
    if (offset >= 0) goto a39;
    System_ArgumentOutOfRangeException* _new33;
    _new33 = System_ArgumentOutOfRangeException_System_ArgumentOutOfRangeException__newFN();
    Void_System_ArgumentOutOfRangeException__ctorFSystem_String__System_StringN(_new33, ((System_String*) &_s18790502571082126080_), System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s1879049765898548126_)));
    throw (Void*) _new33;
a39:
    if (count >= 0) goto a64;
    System_ArgumentOutOfRangeException* _new58;
    _new58 = System_ArgumentOutOfRangeException_System_ArgumentOutOfRangeException__newFN();
    Void_System_ArgumentOutOfRangeException__ctorFSystem_String__System_StringN(_new58, ((System_String*) &_s18790502452002595880_), System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s1879049765898548126_)));
    throw (Void*) _new58;
a64:
    if (((Int32) ((array)->length) - offset) >= count) goto a88;
    System_ArgumentException* _new82;
    _new82 = System_ArgumentException_System_ArgumentException__newFN();
    Void_System_ArgumentException__ctorFSystem_StringN(_new82, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790502711582197642_)));
    throw (Void*) _new82;
a88:
    (__this)->_array = array;
    (__this)->_offset = offset;
    (__this)->_count = count;
    return ;
}
System_StringAY* System_StringAY_System_ArraySegmentGSystem_StringC_get_ArrayFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this) {
    __check_this((Void*)__this);
    return (__this)->_array;
}
Int32 Int32_System_ArraySegmentGSystem_StringC_get_OffsetFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this) {
    __check_this((Void*)__this);
    return (__this)->_offset;
}
Int32 Int32_System_ArraySegmentGSystem_StringC_get_CountFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this) {
    __check_this((Void*)__this);
    return (__this)->_count;
}
Int32 Int32_System_ArraySegmentGSystem_StringC_GetHashCodeFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this) {
    __check_this((Void*)__this);
    if (!(__this)->_array) goto a34;
    System_Object* __expr52727118;
    __expr52727118 = (System_Object*) ((__this)->_array);
    return ((((System_Object__vtbl*) (__expr52727118)->__vtbl)->Int32_System_Object_GetHashCodeFN(__expr52727118) ^ (__this)->_offset) ^ (__this)->_count);
a34:
    return 0;
}
Boolean Boolean_System_ArraySegmentGSystem_StringC_EqualsFSystem_ObjectN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this, System_Object* obj) {
    __check_this((Void*)__this);
    if (!((System_ArraySegmentGSystem_StringC*)System_Object_System_Object__dyncastFSystem_Object__System_TypeN((System_Object*) (obj), System_Type_System_ArraySegmentGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll()))) goto a21;
    return Boolean_System_ArraySegmentGSystem_StringC_EqualsFSystem_ArraySegmentGSystem_StringCN_HelloWorld_r00iaxum_dll(__this, System_ArraySegmentGSystem_StringC_System_ArraySegmentGSystem_StringC__unboxFN_HelloWorld_r00iaxum_dll(((System_ArraySegmentGSystem_StringC*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (obj), System_Type_System_ArraySegmentGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll()))));
a21:
    return 0;
}
Boolean Boolean_System_ArraySegmentGSystem_StringC_EqualsFSystem_ArraySegmentGSystem_StringCN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this, System_ArraySegmentGSystem_StringC__struct_data obj) {
    __check_this((Void*)__this);
    if ((Byte*)(&obj)->_array != (Byte*)(__this)->_array) goto a46;
    if ((UInt32)(&obj)->_offset != (UInt32)(__this)->_offset) goto a46;
    return ((&obj)->_count == (__this)->_count);
a46:
    return 0;
}
Boolean Boolean_System_ArraySegmentGSystem_StringC_op_EqualityFSystem_ArraySegmentGSystem_StringC__System_ArraySegmentGSystem_StringCN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data a, System_ArraySegmentGSystem_StringC__struct_data b) {
    return Boolean_System_ArraySegmentGSystem_StringC_EqualsFSystem_ArraySegmentGSystem_StringCN_HelloWorld_r00iaxum_dll(&a, b);
}
Boolean Boolean_System_ArraySegmentGSystem_StringC_op_InequalityFSystem_ArraySegmentGSystem_StringC__System_ArraySegmentGSystem_StringCN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data a, System_ArraySegmentGSystem_StringC__struct_data b) {
    return (Boolean_System_ArraySegmentGSystem_StringC_op_EqualityFSystem_ArraySegmentGSystem_StringC__System_ArraySegmentGSystem_StringCN_HelloWorld_r00iaxum_dll(a, b) == 0);
}
static const struct { Byte* vtable;Int32 len; Char data[6]; } _s1879056919797640427_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 5, { 105, 110, 100, 101, 120, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[28]; } _s18790698893774629488_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 26, { 73, 110, 118, 97, 108, 105, 100, 79, 112, 101, 114, 97, 116, 105, 111, 110, 95, 78, 117, 108, 108, 65, 114, 114, 97, 121, 0, 0 } };

System_String* System_String_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IListGSystem_StringC_get_ItemFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this, Int32 index) {
    __check_this((Void*)__this);
    if ((__this)->_array) goto a24;
    System_InvalidOperationException* _new18;
    _new18 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new18, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790698893774629488_)));
    throw (Void*) _new18;
a24:
    if (index < 0) goto a37;
    if (index < (__this)->_count) goto a48;
a37:
    System_ArgumentOutOfRangeException* _new42;
    _new42 = System_ArgumentOutOfRangeException_System_ArgumentOutOfRangeException__newFN();
    Void_System_ArgumentOutOfRangeException__ctorFSystem_StringN(_new42, ((System_String*) &_s1879056919797640427_));
    throw (Void*) _new42;
a48:
    return ((__this)->_array)->data[((__this)->_offset + index)];
}

Void Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IListGSystem_StringC_set_ItemFInt32__System_StringN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this, Int32 index, System_String* value) {
    __check_this((Void*)__this);
    if ((__this)->_array) goto a24;
    System_InvalidOperationException* _new18;
    _new18 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new18, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790698893774629488_)));
    throw (Void*) _new18;
a24:
    if (index < 0) goto a37;
    if (index < (__this)->_count) goto a48;
a37:
    System_ArgumentOutOfRangeException* _new42;
    _new42 = System_ArgumentOutOfRangeException_System_ArgumentOutOfRangeException__newFN();
    Void_System_ArgumentOutOfRangeException__ctorFSystem_StringN(_new42, ((System_String*) &_s1879056919797640427_));
    throw (Void*) _new42;
a48:
    ((__this)->_array)->data[((__this)->_offset + index)] = value;
    return ;
}
Int32 Int32_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IListGSystem_StringC_IndexOfFSystem_StringN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this, System_String* item) {
    __check_this((Void*)__this);
    System_NotImplementedException* _new0;
    _new0 = System_NotImplementedException_System_NotImplementedException__newFN();
    Void_System_NotImplementedException__ctorFN(_new0);
    throw (Void*) _new0;
}
Void Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IListGSystem_StringC_InsertFInt32__System_StringN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this, Int32 index, System_String* item) {
    __check_this((Void*)__this);
    System_NotSupportedException* _new0;
    _new0 = System_NotSupportedException_System_NotSupportedException__newFN();
    Void_System_NotSupportedException__ctorFN(_new0);
    throw (Void*) _new0;
}
Void Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IListGSystem_StringC_RemoveAtFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this, Int32 index) {
    __check_this((Void*)__this);
    System_NotSupportedException* _new0;
    _new0 = System_NotSupportedException_System_NotSupportedException__newFN();
    Void_System_NotSupportedException__ctorFN(_new0);
    throw (Void*) _new0;
}

System_String* System_String_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IReadOnlyListGSystem_StringC_get_ItemFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this, Int32 index) {
    __check_this((Void*)__this);
    if ((__this)->_array) goto a24;
    System_InvalidOperationException* _new18;
    _new18 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new18, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790698893774629488_)));
    throw (Void*) _new18;
a24:
    if (index < 0) goto a37;
    if (index < (__this)->_count) goto a48;
a37:
    System_ArgumentOutOfRangeException* _new42;
    _new42 = System_ArgumentOutOfRangeException_System_ArgumentOutOfRangeException__newFN();
    Void_System_ArgumentOutOfRangeException__ctorFSystem_StringN(_new42, ((System_String*) &_s1879056919797640427_));
    throw (Void*) _new42;
a48:
    return ((__this)->_array)->data[((__this)->_offset + index)];
}
Boolean Boolean_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_get_IsReadOnlyFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this) {
    __check_this((Void*)__this);
    return 1;
}
Void Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_AddFSystem_StringN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this, System_String* item) {
    __check_this((Void*)__this);
    System_NotSupportedException* _new0;
    _new0 = System_NotSupportedException_System_NotSupportedException__newFN();
    Void_System_NotSupportedException__ctorFN(_new0);
    throw (Void*) _new0;
}
Void Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_ClearFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this) {
    __check_this((Void*)__this);
    System_NotSupportedException* _new0;
    _new0 = System_NotSupportedException_System_NotSupportedException__newFN();
    Void_System_NotSupportedException__ctorFN(_new0);
    throw (Void*) _new0;
}
Boolean Boolean_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_ContainsFSystem_StringN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this, System_String* item) {
    __check_this((Void*)__this);
    System_NotImplementedException* _new0;
    _new0 = System_NotImplementedException_System_NotImplementedException__newFN();
    Void_System_NotImplementedException__ctorFN(_new0);
    throw (Void*) _new0;
}

Void Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_CopyToFSystem_StringAY__Int32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this, System_StringAY* array, Int32 arrayIndex) {
    __check_this((Void*)__this);
    if ((__this)->_array) goto a24;
    System_InvalidOperationException* _new18;
    _new18 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new18, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790698893774629488_)));
    throw (Void*) _new18;
a24:
    Void_System_Array_CopyFSystem_Array__Int32__System_Array__Int32__Int32N((System_Array*) ((__this)->_array), (__this)->_offset, (System_Array*) (array), arrayIndex, (__this)->_count);
    return ;
}
Boolean Boolean_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_RemoveFSystem_StringN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this, System_String* item) {
    __check_this((Void*)__this);
    System_NotSupportedException* _new0;
    _new0 = System_NotSupportedException_System_NotSupportedException__newFN();
    Void_System_NotSupportedException__ctorFN(_new0);
    throw (Void*) _new0;
}

System_Collections_Generic_IEnumeratorGSystem_StringC* System_Collections_Generic_IEnumeratorGSystem_StringC_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IEnumerableGSystem_StringC_GetEnumeratorFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this) {
    __check_this((Void*)__this);
    if ((__this)->_array) goto a24;
    System_InvalidOperationException* _new18;
    _new18 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new18, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790698893774629488_)));
    throw (Void*) _new18;
a24:
    System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator* _new30;
    _new30 = System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__newFN_HelloWorld_r00iaxum_dll();
    Void_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__ctorFSystem_ArraySegmentGSystem_StringCN_HelloWorld_r00iaxum_dll(_new30, (*((System_ArraySegmentGSystem_StringC__struct_data*)__this)));
    return (System_Collections_Generic_IEnumeratorGSystem_StringC*) __new_interface((Void*)_new30, (Void**)((System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__vtbl*) _new30->base.__vtbl)->ifce_System_Collections_Generic_IEnumeratorGSystem_StringC);
}

System_Collections_IEnumerator* System_Collections_IEnumerator_System_ArraySegmentGSystem_StringC_System_Collections_IEnumerable_GetEnumeratorFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data* __this) {
    __check_this((Void*)__this);
    if ((__this)->_array) goto a24;
    System_InvalidOperationException* _new18;
    _new18 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new18, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790698893774629488_)));
    throw (Void*) _new18;
a24:
    System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator* _new30;
    _new30 = System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__newFN_HelloWorld_r00iaxum_dll();
    Void_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__ctorFSystem_ArraySegmentGSystem_StringCN_HelloWorld_r00iaxum_dll(_new30, (*((System_ArraySegmentGSystem_StringC__struct_data*)__this)));
    return (System_Collections_IEnumerator*) __new_interface((Void*)_new30, (Void**)&((System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__vtbl*) _new30->base.__vtbl)->ifce_System_Collections_Generic_IEnumeratorGSystem_StringC->ifce_System_Collections_IEnumerator);
}
System_ArraySegmentGSystem_StringC* System_ArraySegmentGSystem_StringC_System_ArraySegmentGSystem_StringC__newFN_HelloWorld_r00iaxum_dll() {
    UInt32 _dup6;
    Void* _dup26;
    System_ArraySegmentGSystem_StringC* _dup40;
a6:
    _dup6 = sizeof(System_ArraySegmentGSystem_StringC);
    ;
    if ((UInt32)_dup6 >= (UInt32)102400) goto a21;
    Void* _phi14;
    _phi14 = GC_MALLOC(_dup6);
    goto a26;
a21:
    _phi14 = GC_MALLOC_IGNORE_OFF_PAGE((Int32) (_dup6));
a26:
    _dup26 = _phi14;
    ;
    if (_dup26) goto a35;
    System_OutOfMemoryException* _new29;
    _new29 = System_OutOfMemoryException_System_OutOfMemoryException__newFN();
    Void_System_OutOfMemoryException__ctorFN(_new29);
    throw (Void*) _new29;
a35:
    _dup40 = (System_ArraySegmentGSystem_StringC*) (_dup26);
    ;
    Void_System_ArraySegmentGSystem_StringC__initFN_HelloWorld_r00iaxum_dll(_dup40);
    return _dup40;
}
Void Void_System_ArraySegmentGSystem_StringC__initFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this) {
    __check_this((Void*)__this);
    ((System_Object*) (__this))->__vtbl = (Void**) &System_ArraySegmentGSystem_StringC_vtable_implHelloWorld_r00iaxum_dll;
    return ;
}
Int32 Int32_System_ArraySegmentGSystem_StringC__getsizeFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this) {
    __check_this((Void*)__this);
    return (Int32) (sizeof(System_ArraySegmentGSystem_StringC));
}
System_Type* System_Type_System_ArraySegmentGSystem_StringC__gettypeFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this) {
    __check_this((Void*)__this);
    return System_Type_System_ArraySegmentGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll();
}
System_Object* System_Object_System_ArraySegmentGSystem_StringC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_Generic_IListGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IListGSystem_StringC*) __new_interface((Void*)__this, (Void**)((System_ArraySegmentGSystem_StringC__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_StringC)));
a20:
    if ((Byte*)System_Type_System_Collections_Generic_ICollectionGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_Generic_ICollectionGSystem_StringC*) __new_interface((Void*)__this, (Void**)&((System_ArraySegmentGSystem_StringC__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_StringC->ifce_System_Collections_Generic_ICollectionGSystem_StringC)));
a40:
    if ((Byte*)System_Type_System_Collections_Generic_IReadOnlyListGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a60;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IReadOnlyListGSystem_StringC*) __new_interface((Void*)__this, (Void**)((System_ArraySegmentGSystem_StringC__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IReadOnlyListGSystem_StringC)));
a60:
    if ((Byte*)System_Type_System_Collections_Generic_IReadOnlyCollectionGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a80;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IReadOnlyCollectionGSystem_StringC*) __new_interface((Void*)__this, (Void**)&((System_ArraySegmentGSystem_StringC__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IReadOnlyListGSystem_StringC->ifce_System_Collections_Generic_IReadOnlyCollectionGSystem_StringC)));
a80:
    if ((Byte*)System_Type_System_Collections_Generic_IEnumerableGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a100;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumerableGSystem_StringC*) __new_interface((Void*)__this, (Void**)&((System_ArraySegmentGSystem_StringC__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_StringC->ifce_System_Collections_Generic_ICollectionGSystem_StringC.ifce_System_Collections_Generic_IEnumerableGSystem_StringC)));
a100:
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a120;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) __new_interface((Void*)__this, (Void**)&((System_ArraySegmentGSystem_StringC__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_StringC->ifce_System_Collections_Generic_ICollectionGSystem_StringC.ifce_System_Collections_Generic_IEnumerableGSystem_StringC.ifce_System_Collections_IEnumerable)));
a120:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[28]; } _s62771872818_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 27, { 65, 114, 114, 97, 121, 83, 101, 103, 109, 101, 110, 116, 60, 83, 121, 115, 116, 101, 109, 46, 83, 116, 114, 105, 110, 103, 62, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[36]; } _s81462172846_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 34, { 83, 121, 115, 116, 101, 109, 46, 65, 114, 114, 97, 121, 83, 101, 103, 109, 101, 110, 116, 60, 83, 121, 115, 116, 101, 109, 46, 83, 116, 114, 105, 110, 103, 62, 0, 0 } };

System_Type* System_Type_System_ArraySegmentGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_ArraySegmentGSystem_StringC__type_HelloWorld_r00iaxum_dll) goto a75;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_ArraySegmentGSystem_StringC__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_ArraySegmentGSystem_StringC__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s62771872818_);
    (local0)->fullname = ((System_String*) &_s81462172846_);
    (local0)->baseType = System_Type_System_ValueType__sgettypeFN();
    (local0)->attributeFlags = 0;
a75:
    return System_ArraySegmentGSystem_StringC__type_HelloWorld_r00iaxum_dll;
}
System_ArraySegmentGSystem_StringC* System_ArraySegmentGSystem_StringC_System_ArraySegmentGSystem_StringC__boxFSystem_ArraySegmentGSystem_StringCN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC__struct_data _value) {
    UInt32 _dup6;
    Void* _dup26;
    System_ArraySegmentGSystem_StringC* _dup40;
    System_ArraySegmentGSystem_StringC* _dup52;
a6:
    _dup6 = sizeof(System_ArraySegmentGSystem_StringC);
    ;
    if ((UInt32)_dup6 >= (UInt32)102400) goto a21;
    Void* _phi14;
    _phi14 = GC_MALLOC(_dup6);
    goto a26;
a21:
    _phi14 = GC_MALLOC_IGNORE_OFF_PAGE((Int32) (_dup6));
a26:
    _dup26 = _phi14;
    ;
    if (_dup26) goto a35;
    System_OutOfMemoryException* _new29;
    _new29 = System_OutOfMemoryException_System_OutOfMemoryException__newFN();
    Void_System_OutOfMemoryException__ctorFN(_new29);
    throw (Void*) _new29;
a35:
    _dup40 = (System_ArraySegmentGSystem_StringC*) (_dup26);
    ;
    *((System_ArraySegmentGSystem_StringC__struct_data*) &(_dup40)->_array) = _value;
    _dup52 = _dup40;
    ;
    Void_System_ArraySegmentGSystem_StringC__initFN_HelloWorld_r00iaxum_dll(_dup52);
    return _dup52;
}
System_ArraySegmentGSystem_StringC__struct_data System_ArraySegmentGSystem_StringC_System_ArraySegmentGSystem_StringC__unboxFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this) {
    __check_this((Void*)__this);
    if (__this) goto a9;
    System_NullReferenceException* _new3;
    _new3 = System_NullReferenceException_System_NullReferenceException__newFN();
    Void_System_NullReferenceException__ctorFN(_new3);
    throw (Void*) _new3;
a9:
    return (*((System_ArraySegmentGSystem_StringC__struct_data*)&(__this)->_array));
}
System_StringAY* System_StringAY_System_ArraySegmentGSystem_StringC_get_Array__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this) {
    __check_this((Void*)__this);
    return System_StringAY_System_ArraySegmentGSystem_StringC_get_ArrayFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_StringC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
}
Int32 Int32_System_ArraySegmentGSystem_StringC_get_Offset__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this) {
    __check_this((Void*)__this);
    return Int32_System_ArraySegmentGSystem_StringC_get_OffsetFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_StringC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
}
Int32 Int32_System_ArraySegmentGSystem_StringC_get_Count__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this) {
    __check_this((Void*)__this);
    return Int32_System_ArraySegmentGSystem_StringC_get_CountFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_StringC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
}
Int32 Int32_System_ArraySegmentGSystem_StringC_GetHashCode__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this) {
    __check_this((Void*)__this);
    System_ArraySegmentGSystem_StringC__struct_data* __expr13;
    __expr13 = (System_ArraySegmentGSystem_StringC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*)));
    return Int32_System_ArraySegmentGSystem_StringC_GetHashCodeFN_HelloWorld_r00iaxum_dll(__expr13);
}
Boolean Boolean_System_ArraySegmentGSystem_StringC_Equals__entry_for_objectFSystem_ObjectN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this, System_Object* obj) {
    __check_this((Void*)__this);
    System_ArraySegmentGSystem_StringC__struct_data* __expr13;
    __expr13 = (System_ArraySegmentGSystem_StringC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*)));
    return Boolean_System_ArraySegmentGSystem_StringC_EqualsFSystem_ObjectN_HelloWorld_r00iaxum_dll(__expr13, obj);
}
Boolean Boolean_System_ArraySegmentGSystem_StringC_Equals__entry_for_objectFSystem_ArraySegmentGSystem_StringCN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this, System_ArraySegmentGSystem_StringC__struct_data obj) {
    __check_this((Void*)__this);
    return Boolean_System_ArraySegmentGSystem_StringC_EqualsFSystem_ArraySegmentGSystem_StringCN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_StringC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), obj);
}
System_String* System_String_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IListGSystem_StringC_get_Item__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this, Int32 index) {
    __check_this((Void*)__this);
    return System_String_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IListGSystem_StringC_get_ItemFInt32N_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_StringC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), index);
}
Void Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IListGSystem_StringC_set_Item__entry_for_objectFInt32__System_StringN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this, Int32 index, System_String* value) {
    __check_this((Void*)__this);
    Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IListGSystem_StringC_set_ItemFInt32__System_StringN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_StringC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), index, value);
    return ;
}
Int32 Int32_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IListGSystem_StringC_IndexOf__entry_for_objectFSystem_StringN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this, System_String* item) {
    __check_this((Void*)__this);
    return Int32_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IListGSystem_StringC_IndexOfFSystem_StringN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_StringC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), item);
}
Void Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IListGSystem_StringC_Insert__entry_for_objectFInt32__System_StringN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this, Int32 index, System_String* item) {
    __check_this((Void*)__this);
    Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IListGSystem_StringC_InsertFInt32__System_StringN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_StringC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), index, item);
    return ;
}
Void Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IListGSystem_StringC_RemoveAt__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this, Int32 index) {
    __check_this((Void*)__this);
    Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IListGSystem_StringC_RemoveAtFInt32N_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_StringC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), index);
    return ;
}
System_String* System_String_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IReadOnlyListGSystem_StringC_get_Item__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this, Int32 index) {
    __check_this((Void*)__this);
    return System_String_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IReadOnlyListGSystem_StringC_get_ItemFInt32N_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_StringC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), index);
}
Boolean Boolean_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_get_IsReadOnly__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this) {
    __check_this((Void*)__this);
    return Boolean_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_get_IsReadOnlyFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_StringC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
}
Void Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_Add__entry_for_objectFSystem_StringN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this, System_String* item) {
    __check_this((Void*)__this);
    Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_AddFSystem_StringN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_StringC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), item);
    return ;
}
Void Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_Clear__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this) {
    __check_this((Void*)__this);
    Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_ClearFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_StringC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
    return ;
}
Boolean Boolean_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_Contains__entry_for_objectFSystem_StringN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this, System_String* item) {
    __check_this((Void*)__this);
    return Boolean_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_ContainsFSystem_StringN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_StringC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), item);
}
Void Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_CopyTo__entry_for_objectFSystem_StringAY__Int32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this, System_StringAY* array, Int32 arrayIndex) {
    __check_this((Void*)__this);
    Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_CopyToFSystem_StringAY__Int32N_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_StringC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), array, arrayIndex);
    return ;
}
Boolean Boolean_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_Remove__entry_for_objectFSystem_StringN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this, System_String* item) {
    __check_this((Void*)__this);
    return Boolean_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_RemoveFSystem_StringN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_StringC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), item);
}
System_Collections_Generic_IEnumeratorGSystem_StringC* System_Collections_Generic_IEnumeratorGSystem_StringC_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IEnumerableGSystem_StringC_GetEnumerator__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this) {
    __check_this((Void*)__this);
    return System_Collections_Generic_IEnumeratorGSystem_StringC_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IEnumerableGSystem_StringC_GetEnumeratorFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_StringC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
}
System_Collections_IEnumerator* System_Collections_IEnumerator_System_ArraySegmentGSystem_StringC_System_Collections_IEnumerable_GetEnumerator__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC* __this) {
    __check_this((Void*)__this);
    return System_Collections_IEnumerator_System_ArraySegmentGSystem_StringC_System_Collections_IEnumerable_GetEnumeratorFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_StringC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
}
System_Object* System_Object_System_Collections_Generic_IEnumeratorGSystem_StringC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_Collections_Generic_IEnumeratorGSystem_StringC* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_IDisposable__sgettypeFN() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_IDisposable*) (__this)));
a20:
    if ((Byte*)System_Type_System_Collections_IEnumerator__sgettypeFN() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerator*) __new_interface((Void*)(__this)->__this, (Void**)(Void**) &((__this)->__vtbl->ifce_System_Collections_IEnumerator))));
a40:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[28]; } _s63465103481_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 26, { 73, 69, 110, 117, 109, 101, 114, 97, 116, 111, 114, 60, 83, 121, 115, 116, 101, 109, 46, 83, 116, 114, 105, 110, 103, 62, 0, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[54]; } _s82491108153_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 53, { 83, 121, 115, 116, 101, 109, 46, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 115, 46, 71, 101, 110, 101, 114, 105, 99, 46, 73, 69, 110, 117, 109, 101, 114, 97, 116, 111, 114, 60, 83, 121, 115, 116, 101, 109, 46, 83, 116, 114, 105, 110, 103, 62, 0 } };

System_Type* System_Type_System_Collections_Generic_IEnumeratorGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_Collections_Generic_IEnumeratorGSystem_StringC__type_HelloWorld_r00iaxum_dll) goto a60;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_Collections_Generic_IEnumeratorGSystem_StringC__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_Collections_Generic_IEnumeratorGSystem_StringC__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s63465103481_);
    (local0)->fullname = ((System_String*) &_s82491108153_);
    (local0)->attributeFlags = 32;
a60:
    return System_Collections_Generic_IEnumeratorGSystem_StringC__type_HelloWorld_r00iaxum_dll;
}
Void Void_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__ctorFSystem_ArraySegmentGSystem_StringCN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator* __this, System_ArraySegmentGSystem_StringC__struct_data arraySegment) {
    __check_this((Void*)__this);
    Void_System_Object__ctorFN((System_Object*) (__this));
    (__this)->_array = (&arraySegment)->_array;
    (__this)->_start = (&arraySegment)->_offset;
    (__this)->_end = ((__this)->_start + (&arraySegment)->_count);
    (__this)->_current = ((__this)->_start - 1);
    return ;
}
Boolean Boolean_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator_MoveNextFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator* __this) {
    System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator* _dup15;
    __check_this((Void*)__this);
    if ((__this)->_current >= (__this)->_end) goto a43;
    _dup15 = __this;
    ;
    (_dup15)->_current = ((_dup15)->_current + 1);
    return ((__this)->_current < (__this)->_end);
a43:
    return 0;
}
static const struct { Byte* vtable;Int32 len; Char data[32]; } _s18790699433979637350_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 31, { 73, 110, 118, 97, 108, 105, 100, 79, 112, 101, 114, 97, 116, 105, 111, 110, 95, 69, 110, 117, 109, 78, 111, 116, 83, 116, 97, 114, 116, 101, 100, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[28]; } _s18790700072471947324_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 26, { 73, 110, 118, 97, 108, 105, 100, 79, 112, 101, 114, 97, 116, 105, 111, 110, 95, 69, 110, 117, 109, 69, 110, 100, 101, 100, 0, 0 } };

System_String* System_String_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator_get_CurrentFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    if ((__this)->_current >= (__this)->_start) goto a30;
    System_InvalidOperationException* _new24;
    _new24 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new24, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790699433979637350_)));
    throw (Void*) _new24;
a30:
    if ((__this)->_current < (__this)->_end) goto a60;
    System_InvalidOperationException* _new54;
    _new54 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new54, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790700072471947324_)));
    throw (Void*) _new54;
a60:
    return ((__this)->_array)->data[(__this)->_current];
}
System_Object* System_Object_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator_System_Collections_IEnumerator_get_CurrentFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    return (System_Object*) (System_String_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator_get_CurrentFN_HelloWorld_r00iaxum_dll(__this));
}
Void Void_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator_System_Collections_IEnumerator_ResetFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    (__this)->_current = ((__this)->_start - 1);
    return ;
}
Void Void_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator_DisposeFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    return ;
}
System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator* System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__newFN_HelloWorld_r00iaxum_dll() {
    UInt32 _dup6;
    Void* _dup26;
    System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator* _dup40;
a6:
    _dup6 = sizeof(System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator);
    ;
    if ((UInt32)_dup6 >= (UInt32)102400) goto a21;
    Void* _phi14;
    _phi14 = GC_MALLOC(_dup6);
    goto a26;
a21:
    _phi14 = GC_MALLOC_IGNORE_OFF_PAGE((Int32) (_dup6));
a26:
    _dup26 = _phi14;
    ;
    if (_dup26) goto a35;
    System_OutOfMemoryException* _new29;
    _new29 = System_OutOfMemoryException_System_OutOfMemoryException__newFN();
    Void_System_OutOfMemoryException__ctorFN(_new29);
    throw (Void*) _new29;
a35:
    _dup40 = (System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator*) (_dup26);
    ;
    Void_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__initFN_HelloWorld_r00iaxum_dll(_dup40);
    return _dup40;
}
Void Void_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__initFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    ((System_Object*) (__this))->__vtbl = (Void**) &System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator_vtable_implHelloWorld_r00iaxum_dll;
    return ;
}
Int32 Int32_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__getsizeFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    return (Int32) (sizeof(System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator));
}
System_Type* System_Type_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__gettypeFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    return System_Type_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__sgettypeFN_HelloWorld_r00iaxum_dll();
}
System_Object* System_Object_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_Generic_IEnumeratorGSystem_StringC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumeratorGSystem_StringC*) __new_interface((Void*)__this, (Void**)((System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__vtbl*) __this->base.__vtbl)->ifce_System_Collections_Generic_IEnumeratorGSystem_StringC)));
a20:
    if ((Byte*)System_Type_System_IDisposable__sgettypeFN() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_IDisposable*) __new_interface((Void*)__this, (Void**)&((System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__vtbl*) __this->base.__vtbl)->ifce_System_Collections_Generic_IEnumeratorGSystem_StringC->ifce_System_IDisposable)));
a40:
    if ((Byte*)System_Type_System_Collections_IEnumerator__sgettypeFN() != (Byte*)_type) goto a60;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerator*) __new_interface((Void*)__this, (Void**)&((System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__vtbl*) __this->base.__vtbl)->ifce_System_Collections_Generic_IEnumeratorGSystem_StringC->ifce_System_Collections_IEnumerator)));
a60:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[24]; } _s6655898870_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 22, { 65, 114, 114, 97, 121, 83, 101, 103, 109, 101, 110, 116, 69, 110, 117, 109, 101, 114, 97, 116, 111, 114, 0, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[58]; } _s81576836831_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 57, { 83, 121, 115, 116, 101, 109, 46, 65, 114, 114, 97, 121, 83, 101, 103, 109, 101, 110, 116, 60, 83, 121, 115, 116, 101, 109, 46, 83, 116, 114, 105, 110, 103, 62, 46, 65, 114, 114, 97, 121, 83, 101, 103, 109, 101, 110, 116, 69, 110, 117, 109, 101, 114, 97, 116, 111, 114, 0 } };

System_Type* System_Type_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__type_HelloWorld_r00iaxum_dll) goto a75;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s6655898870_);
    (local0)->fullname = ((System_String*) &_s81576836831_);
    (local0)->baseType = System_Type_System_Object__sgettypeFN();
    (local0)->attributeFlags = 0;
a75:
    return System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__type_HelloWorld_r00iaxum_dll;
}
System_Object* System_Object_System_Collections_Generic_IEnumerableGSystem_Int32C__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_Collections_Generic_IEnumerableGSystem_Int32C* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) (__this)));
a20:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[26]; } _s62971801419_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 25, { 73, 69, 110, 117, 109, 101, 114, 97, 98, 108, 101, 60, 83, 121, 115, 116, 101, 109, 46, 73, 110, 116, 51, 50, 62, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[54]; } _s8393728125_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 52, { 83, 121, 115, 116, 101, 109, 46, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 115, 46, 71, 101, 110, 101, 114, 105, 99, 46, 73, 69, 110, 117, 109, 101, 114, 97, 98, 108, 101, 60, 83, 121, 115, 116, 101, 109, 46, 73, 110, 116, 51, 50, 62, 0, 0 } };

System_Type* System_Type_System_Collections_Generic_IEnumerableGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_Collections_Generic_IEnumerableGSystem_Int32C__type_HelloWorld_r00iaxum_dll) goto a60;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_Collections_Generic_IEnumerableGSystem_Int32C__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_Collections_Generic_IEnumerableGSystem_Int32C__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s62971801419_);
    (local0)->fullname = ((System_String*) &_s8393728125_);
    (local0)->attributeFlags = 32;
a60:
    return System_Collections_Generic_IEnumerableGSystem_Int32C__type_HelloWorld_r00iaxum_dll;
}
System_Object* System_Object_System_Collections_Generic_ICollectionGSystem_Int32C__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_Collections_Generic_ICollectionGSystem_Int32C* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_Generic_IEnumerableGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumerableGSystem_Int32C*) (__this)));
a20:
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) (__this)));
a40:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[26]; } _s62422873336_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 25, { 73, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 60, 83, 121, 115, 116, 101, 109, 46, 73, 110, 116, 51, 50, 62, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[54]; } _s81391004832_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 52, { 83, 121, 115, 116, 101, 109, 46, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 115, 46, 71, 101, 110, 101, 114, 105, 99, 46, 73, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 60, 83, 121, 115, 116, 101, 109, 46, 73, 110, 116, 51, 50, 62, 0, 0 } };

System_Type* System_Type_System_Collections_Generic_ICollectionGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_Collections_Generic_ICollectionGSystem_Int32C__type_HelloWorld_r00iaxum_dll) goto a60;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_Collections_Generic_ICollectionGSystem_Int32C__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_Collections_Generic_ICollectionGSystem_Int32C__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s62422873336_);
    (local0)->fullname = ((System_String*) &_s81391004832_);
    (local0)->attributeFlags = 32;
a60:
    return System_Collections_Generic_ICollectionGSystem_Int32C__type_HelloWorld_r00iaxum_dll;
}
System_Object* System_Object_System_Collections_Generic_IListGSystem_Int32C__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_Collections_Generic_IListGSystem_Int32C* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_Generic_ICollectionGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_Generic_ICollectionGSystem_Int32C*) (__this)));
a20:
    if ((Byte*)System_Type_System_Collections_Generic_IEnumerableGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumerableGSystem_Int32C*) (__this)));
a40:
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a60;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) (__this)));
a60:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[20]; } _s62939898836_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 19, { 73, 76, 105, 115, 116, 60, 83, 121, 115, 116, 101, 109, 46, 73, 110, 116, 51, 50, 62, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[48]; } _s83691831090_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 46, { 83, 121, 115, 116, 101, 109, 46, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 115, 46, 71, 101, 110, 101, 114, 105, 99, 46, 73, 76, 105, 115, 116, 60, 83, 121, 115, 116, 101, 109, 46, 73, 110, 116, 51, 50, 62, 0, 0 } };

System_Type* System_Type_System_Collections_Generic_IListGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_Collections_Generic_IListGSystem_Int32C__type_HelloWorld_r00iaxum_dll) goto a60;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_Collections_Generic_IListGSystem_Int32C__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_Collections_Generic_IListGSystem_Int32C__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s62939898836_);
    (local0)->fullname = ((System_String*) &_s83691831090_);
    (local0)->attributeFlags = 32;
a60:
    return System_Collections_Generic_IListGSystem_Int32C__type_HelloWorld_r00iaxum_dll;
}
System_Object* System_Object_System_Collections_Generic_IReadOnlyCollectionGSystem_Int32C__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_Collections_Generic_IReadOnlyCollectionGSystem_Int32C* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_Generic_IEnumerableGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumerableGSystem_Int32C*) (__this)));
a20:
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) (__this)));
a40:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[34]; } _s61771892425_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 33, { 73, 82, 101, 97, 100, 79, 110, 108, 121, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 60, 83, 121, 115, 116, 101, 109, 46, 73, 110, 116, 51, 50, 62, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[62]; } _s82206693395_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 60, { 83, 121, 115, 116, 101, 109, 46, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 115, 46, 71, 101, 110, 101, 114, 105, 99, 46, 73, 82, 101, 97, 100, 79, 110, 108, 121, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 60, 83, 121, 115, 116, 101, 109, 46, 73, 110, 116, 51, 50, 62, 0, 0 } };

System_Type* System_Type_System_Collections_Generic_IReadOnlyCollectionGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_Collections_Generic_IReadOnlyCollectionGSystem_Int32C__type_HelloWorld_r00iaxum_dll) goto a60;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_Collections_Generic_IReadOnlyCollectionGSystem_Int32C__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_Collections_Generic_IReadOnlyCollectionGSystem_Int32C__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s61771892425_);
    (local0)->fullname = ((System_String*) &_s82206693395_);
    (local0)->attributeFlags = 32;
a60:
    return System_Collections_Generic_IReadOnlyCollectionGSystem_Int32C__type_HelloWorld_r00iaxum_dll;
}
System_Object* System_Object_System_Collections_Generic_IReadOnlyListGSystem_Int32C__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_Collections_Generic_IReadOnlyListGSystem_Int32C* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_Generic_IReadOnlyCollectionGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IReadOnlyCollectionGSystem_Int32C*) (__this)));
a20:
    if ((Byte*)System_Type_System_Collections_Generic_IEnumerableGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumerableGSystem_Int32C*) (__this)));
a40:
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a60;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) (__this)));
a60:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[28]; } _s61102702574_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 27, { 73, 82, 101, 97, 100, 79, 110, 108, 121, 76, 105, 115, 116, 60, 83, 121, 115, 116, 101, 109, 46, 73, 110, 116, 51, 50, 62, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[56]; } _s82101154876_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 54, { 83, 121, 115, 116, 101, 109, 46, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 115, 46, 71, 101, 110, 101, 114, 105, 99, 46, 73, 82, 101, 97, 100, 79, 110, 108, 121, 76, 105, 115, 116, 60, 83, 121, 115, 116, 101, 109, 46, 73, 110, 116, 51, 50, 62, 0, 0 } };

System_Type* System_Type_System_Collections_Generic_IReadOnlyListGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_Collections_Generic_IReadOnlyListGSystem_Int32C__type_HelloWorld_r00iaxum_dll) goto a60;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_Collections_Generic_IReadOnlyListGSystem_Int32C__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_Collections_Generic_IReadOnlyListGSystem_Int32C__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s61102702574_);
    (local0)->fullname = ((System_String*) &_s82101154876_);
    (local0)->attributeFlags = 32;
a60:
    return System_Collections_Generic_IReadOnlyListGSystem_Int32C__type_HelloWorld_r00iaxum_dll;
}
Void Void_System_Int32AY__ctorFInt32N_HelloWorld_r00iaxum_dll(System_Int32AY* __this, Int32 param0) {
    System_Int32AY* local0;
    System_Int32AY* local1;
    System_Int32AY* _dup1;
    System_Int32AY* _dup2;
    System_Int32AY* _dup3;
    __check_this((Void*)__this);
    _dup1 = __this;
    ;
    _dup2 = _dup1;
    ;
    _dup3 = _dup2;
    ;
    (_dup3)->rank = 1;
    (_dup3)->typeCode = 9;
    (_dup2)->elementSize = 4;
    (_dup1)->length = param0;
    return ;
}
System_Int32AY* Int32AY_System_Int32AY__newFInt32N_HelloWorld_r00iaxum_dll(Int32 param0) {
    Int32 local0;
    Int32 _dup15;
    Int32 _dup24;
    Int32 _dup26;
    Void* _dup46;
    Void* _dup55;
    System_Int32AY* _dup65;
    _dup15 = ((sizeof(Int32) * param0) + sizeof(System_Int32AY));
    ;
    _dup24 = ((_dup15 + 3) & -4);
    ;
    local0 = _dup24;
a26:
    _dup26 = _dup24;
    ;
    if ((UInt32)_dup26 >= (UInt32)102400) goto a41;
    Void* _phi34;
    _phi34 = GC_MALLOC_ATOMIC(_dup26);
    goto a46;
a41:
    _phi34 = GC_MALLOC_ATOMIC_IGNORE_OFF_PAGE(_dup26);
a46:
    _dup46 = _phi34;
    ;
    if (_dup46) goto a55;
    System_OutOfMemoryException* _new49;
    _new49 = System_OutOfMemoryException_System_OutOfMemoryException__newFN();
    Void_System_OutOfMemoryException__ctorFN(_new49);
    throw (Void*) _new49;
a55:
    _dup55 = _dup46;
    ;
    Memset((Byte*) ((Byte*) (_dup55)), 0, (local0));
    _dup65 = (System_Int32AY*) (_dup55);
    ;
    Void_System_Int32AY__initFN_HelloWorld_r00iaxum_dll(_dup65);
    return _dup65;
}
Void Void_System_Int32AY__initFN_HelloWorld_r00iaxum_dll(System_Int32AY* __this) {
    __check_this((Void*)__this);
    ((System_Object*) (__this))->__vtbl = (Void**) &System_Int32AY_vtable_implHelloWorld_r00iaxum_dll;
    return ;
}
Int32 Int32_System_Int32AY__getsizeFN_HelloWorld_r00iaxum_dll(System_Int32AY* __this) {
    __check_this((Void*)__this);
    return (Int32) (sizeof(System_Int32AY));
}
System_Type* System_Type_System_Int32AY__gettypeFN_HelloWorld_r00iaxum_dll(System_Int32AY* __this) {
    __check_this((Void*)__this);
    return System_Type_System_Int32AY__sgettypeFN_HelloWorld_r00iaxum_dll();
}
System_Object* System_Object_System_Int32AY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_Int32AY* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_ICloneable__sgettypeFN() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_ICloneable*) __new_interface((Void*)__this, (Void**)((System_Int32AY__vtbl*) __this->base.base.__vtbl)->ifce_System_ICloneable)));
a20:
    if ((Byte*)System_Type_System_Collections_IList__sgettypeFN() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_IList*) __new_interface((Void*)__this, (Void**)((System_Int32AY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_IList)));
a40:
    if ((Byte*)System_Type_System_Collections_ICollection__sgettypeFN() != (Byte*)_type) goto a60;
    return (System_Object*) ((Void*) ((System_Collections_ICollection*) __new_interface((Void*)__this, (Void**)&((System_Int32AY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_IList->ifce_System_Collections_ICollection)));
a60:
    if ((Byte*)System_Type_System_Collections_Generic_IListGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a80;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IListGSystem_Int32C*) __new_interface((Void*)__this, (Void**)((System_Int32AY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_Int32C)));
a80:
    if ((Byte*)System_Type_System_Collections_Generic_ICollectionGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a100;
    return (System_Object*) ((Void*) ((System_Collections_Generic_ICollectionGSystem_Int32C*) __new_interface((Void*)__this, (Void**)&((System_Int32AY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_Int32C->ifce_System_Collections_Generic_ICollectionGSystem_Int32C)));
a100:
    if ((Byte*)System_Type_System_Collections_Generic_IReadOnlyListGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a120;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IReadOnlyListGSystem_Int32C*) __new_interface((Void*)__this, (Void**)((System_Int32AY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IReadOnlyListGSystem_Int32C)));
a120:
    if ((Byte*)System_Type_System_Collections_Generic_IReadOnlyCollectionGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a140;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IReadOnlyCollectionGSystem_Int32C*) __new_interface((Void*)__this, (Void**)&((System_Int32AY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IReadOnlyListGSystem_Int32C->ifce_System_Collections_Generic_IReadOnlyCollectionGSystem_Int32C)));
a140:
    if ((Byte*)System_Type_System_Collections_Generic_IEnumerableGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a160;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumerableGSystem_Int32C*) __new_interface((Void*)__this, (Void**)&((System_Int32AY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_Int32C->ifce_System_Collections_Generic_ICollectionGSystem_Int32C.ifce_System_Collections_Generic_IEnumerableGSystem_Int32C)));
a160:
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a180;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) __new_interface((Void*)__this, (Void**)&((System_Int32AY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_IList->ifce_System_Collections_ICollection.ifce_System_Collections_IEnumerable)));
a180:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[8]; } _s63933064538_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 7, { 73, 110, 116, 51, 50, 91, 93, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[16]; } _s8761375448_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 14, { 83, 121, 115, 116, 101, 109, 46, 73, 110, 116, 51, 50, 91, 93, 0, 0 } };

System_Type* System_Type_System_Int32AY__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_Int32AY__type_HelloWorld_r00iaxum_dll) goto a75;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_Int32AY__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_Int32AY__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s63933064538_);
    (local0)->fullname = ((System_String*) &_s8761375448_);
    (local0)->baseType = System_Type_System_Array__sgettypeFN();
    (local0)->attributeFlags = 0;
a75:
    return System_Int32AY__type_HelloWorld_r00iaxum_dll;
}
System_Collections_Generic_IEnumeratorGSystem_Int32C* System_Collections_Generic_IEnumeratorGSystem_Int32C_System_Int32AY_GetEnumeratorFN_HelloWorld_r00iaxum_dll(System_Int32AY* __this) {
    __check_this((Void*)__this);
    System_ArraySegmentGSystem_Int32C__struct_data _new1;
    Memset((Byte*) (&_new1), 0, sizeof(System_ArraySegmentGSystem_Int32C__struct_data));
    Void_System_ArraySegmentGSystem_Int32C__ctorFInt32AYN_HelloWorld_r00iaxum_dll(&_new1, __this);
    System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator* _new6;
    _new6 = System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__newFN_HelloWorld_r00iaxum_dll();
    Void_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__ctorFSystem_ArraySegmentGSystem_Int32CN_HelloWorld_r00iaxum_dll(_new6, (*((System_ArraySegmentGSystem_Int32C__struct_data*)&_new1)));
    return (System_Collections_Generic_IEnumeratorGSystem_Int32C*) __new_interface((Void*)_new6, (Void**)((System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__vtbl*) _new6->base.__vtbl)->ifce_System_Collections_Generic_IEnumeratorGSystem_Int32C);
}
Int32 Int32_System_Int32AY_get_CountFN_HelloWorld_r00iaxum_dll(System_Int32AY* __this) {
    __check_this((Void*)__this);
    return (Int32) ((__this)->length);
}
Int32 Int32_System_Int32AY_get_ItemFInt32N_HelloWorld_r00iaxum_dll(System_Int32AY* __this, Int32 index) {
    __check_this((Void*)__this);
    return (__this)->data[index];
}
Void Void_System_Int32AY_set_ItemFInt32__Int32N_HelloWorld_r00iaxum_dll(System_Int32AY* __this, Int32 index, Int32 _value) {
    __check_this((Void*)__this);
    (__this)->data[index] = _value;
    return ;
}
Void Void_System_Int32AY_CopyToFInt32AY__Int32N_HelloWorld_r00iaxum_dll(System_Int32AY* __this, System_Int32AY* _array, Int32 arrayIndex) {
    __check_this((Void*)__this);
    Void_System_Array_CopyFSystem_Array__Int32__System_Array__Int32__Int32N((System_Array*) (__this), 0, (System_Array*) (_array), arrayIndex, (Int32) ((__this)->length));
    return ;
}
System_Object* System_Object_System_Collections_Generic_IEnumerableGSystem_ByteC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_Collections_Generic_IEnumerableGSystem_ByteC* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) (__this)));
a20:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[26]; } _s63909514908_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 24, { 73, 69, 110, 117, 109, 101, 114, 97, 98, 108, 101, 60, 83, 121, 115, 116, 101, 109, 46, 66, 121, 116, 101, 62, 0, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[52]; } _s8918596506_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 51, { 83, 121, 115, 116, 101, 109, 46, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 115, 46, 71, 101, 110, 101, 114, 105, 99, 46, 73, 69, 110, 117, 109, 101, 114, 97, 98, 108, 101, 60, 83, 121, 115, 116, 101, 109, 46, 66, 121, 116, 101, 62, 0 } };

System_Type* System_Type_System_Collections_Generic_IEnumerableGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_Collections_Generic_IEnumerableGSystem_ByteC__type_HelloWorld_r00iaxum_dll) goto a60;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_Collections_Generic_IEnumerableGSystem_ByteC__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_Collections_Generic_IEnumerableGSystem_ByteC__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s63909514908_);
    (local0)->fullname = ((System_String*) &_s8918596506_);
    (local0)->attributeFlags = 32;
a60:
    return System_Collections_Generic_IEnumerableGSystem_ByteC__type_HelloWorld_r00iaxum_dll;
}
System_Object* System_Object_System_Collections_Generic_ICollectionGSystem_ByteC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_Collections_Generic_ICollectionGSystem_ByteC* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_Generic_IEnumerableGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumerableGSystem_ByteC*) (__this)));
a20:
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) (__this)));
a40:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[26]; } _s63843854995_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 24, { 73, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 60, 83, 121, 115, 116, 101, 109, 46, 66, 121, 116, 101, 62, 0, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[52]; } _s83881178449_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 51, { 83, 121, 115, 116, 101, 109, 46, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 115, 46, 71, 101, 110, 101, 114, 105, 99, 46, 73, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 60, 83, 121, 115, 116, 101, 109, 46, 66, 121, 116, 101, 62, 0 } };

System_Type* System_Type_System_Collections_Generic_ICollectionGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_Collections_Generic_ICollectionGSystem_ByteC__type_HelloWorld_r00iaxum_dll) goto a60;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_Collections_Generic_ICollectionGSystem_ByteC__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_Collections_Generic_ICollectionGSystem_ByteC__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s63843854995_);
    (local0)->fullname = ((System_String*) &_s83881178449_);
    (local0)->attributeFlags = 32;
a60:
    return System_Collections_Generic_ICollectionGSystem_ByteC__type_HelloWorld_r00iaxum_dll;
}
System_Object* System_Object_System_Collections_Generic_IListGSystem_ByteC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_Collections_Generic_IListGSystem_ByteC* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_Generic_ICollectionGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_Generic_ICollectionGSystem_ByteC*) (__this)));
a20:
    if ((Byte*)System_Type_System_Collections_Generic_IEnumerableGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumerableGSystem_ByteC*) (__this)));
a40:
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a60;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) (__this)));
a60:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[20]; } _s64161738829_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 18, { 73, 76, 105, 115, 116, 60, 83, 121, 115, 116, 101, 109, 46, 66, 121, 116, 101, 62, 0, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[46]; } _s82913197785_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 45, { 83, 121, 115, 116, 101, 109, 46, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 115, 46, 71, 101, 110, 101, 114, 105, 99, 46, 73, 76, 105, 115, 116, 60, 83, 121, 115, 116, 101, 109, 46, 66, 121, 116, 101, 62, 0 } };

System_Type* System_Type_System_Collections_Generic_IListGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_Collections_Generic_IListGSystem_ByteC__type_HelloWorld_r00iaxum_dll) goto a60;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_Collections_Generic_IListGSystem_ByteC__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_Collections_Generic_IListGSystem_ByteC__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s64161738829_);
    (local0)->fullname = ((System_String*) &_s82913197785_);
    (local0)->attributeFlags = 32;
a60:
    return System_Collections_Generic_IListGSystem_ByteC__type_HelloWorld_r00iaxum_dll;
}
System_Object* System_Object_System_Collections_Generic_IReadOnlyCollectionGSystem_ByteC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_Collections_Generic_IReadOnlyCollectionGSystem_ByteC* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_Generic_IEnumerableGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumerableGSystem_ByteC*) (__this)));
a20:
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) (__this)));
a40:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[34]; } _s6364153244_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 32, { 73, 82, 101, 97, 100, 79, 110, 108, 121, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 60, 83, 121, 115, 116, 101, 109, 46, 66, 121, 116, 101, 62, 0, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[60]; } _s8146971894_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 59, { 83, 121, 115, 116, 101, 109, 46, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 115, 46, 71, 101, 110, 101, 114, 105, 99, 46, 73, 82, 101, 97, 100, 79, 110, 108, 121, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 60, 83, 121, 115, 116, 101, 109, 46, 66, 121, 116, 101, 62, 0 } };

System_Type* System_Type_System_Collections_Generic_IReadOnlyCollectionGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_Collections_Generic_IReadOnlyCollectionGSystem_ByteC__type_HelloWorld_r00iaxum_dll) goto a60;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_Collections_Generic_IReadOnlyCollectionGSystem_ByteC__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_Collections_Generic_IReadOnlyCollectionGSystem_ByteC__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s6364153244_);
    (local0)->fullname = ((System_String*) &_s8146971894_);
    (local0)->attributeFlags = 32;
a60:
    return System_Collections_Generic_IReadOnlyCollectionGSystem_ByteC__type_HelloWorld_r00iaxum_dll;
}
System_Object* System_Object_System_Collections_Generic_IReadOnlyListGSystem_ByteC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_Collections_Generic_IReadOnlyListGSystem_ByteC* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_Generic_IReadOnlyCollectionGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IReadOnlyCollectionGSystem_ByteC*) (__this)));
a20:
    if ((Byte*)System_Type_System_Collections_Generic_IEnumerableGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumerableGSystem_ByteC*) (__this)));
a40:
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a60;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) (__this)));
a60:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[28]; } _s6206116051_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 26, { 73, 82, 101, 97, 100, 79, 110, 108, 121, 76, 105, 115, 116, 60, 83, 121, 115, 116, 101, 109, 46, 66, 121, 116, 101, 62, 0, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[54]; } _s81152783715_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 53, { 83, 121, 115, 116, 101, 109, 46, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 115, 46, 71, 101, 110, 101, 114, 105, 99, 46, 73, 82, 101, 97, 100, 79, 110, 108, 121, 76, 105, 115, 116, 60, 83, 121, 115, 116, 101, 109, 46, 66, 121, 116, 101, 62, 0 } };

System_Type* System_Type_System_Collections_Generic_IReadOnlyListGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_Collections_Generic_IReadOnlyListGSystem_ByteC__type_HelloWorld_r00iaxum_dll) goto a60;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_Collections_Generic_IReadOnlyListGSystem_ByteC__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_Collections_Generic_IReadOnlyListGSystem_ByteC__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s6206116051_);
    (local0)->fullname = ((System_String*) &_s81152783715_);
    (local0)->attributeFlags = 32;
a60:
    return System_Collections_Generic_IReadOnlyListGSystem_ByteC__type_HelloWorld_r00iaxum_dll;
}
Void Void_System_ByteAY__ctorFInt32N_HelloWorld_r00iaxum_dll(System_ByteAY* __this, Int32 param0) {
    System_Int32AY* local0;
    System_Int32AY* local1;
    System_ByteAY* _dup1;
    System_ByteAY* _dup2;
    System_ByteAY* _dup3;
    __check_this((Void*)__this);
    _dup1 = __this;
    ;
    _dup2 = _dup1;
    ;
    _dup3 = _dup2;
    ;
    (_dup3)->rank = 1;
    (_dup3)->typeCode = 6;
    (_dup2)->elementSize = 1;
    (_dup1)->length = param0;
    return ;
}
System_ByteAY* ByteAY_System_ByteAY__newFInt32N_HelloWorld_r00iaxum_dll(Int32 param0) {
    Int32 local0;
    Int32 _dup15;
    Int32 _dup24;
    Int32 _dup26;
    Void* _dup46;
    Void* _dup55;
    System_ByteAY* _dup65;
    _dup15 = ((sizeof(Byte) * param0) + sizeof(System_ByteAY));
    ;
    _dup24 = ((_dup15 + 3) & -4);
    ;
    local0 = _dup24;
a26:
    _dup26 = _dup24;
    ;
    if ((UInt32)_dup26 >= (UInt32)102400) goto a41;
    Void* _phi34;
    _phi34 = GC_MALLOC_ATOMIC(_dup26);
    goto a46;
a41:
    _phi34 = GC_MALLOC_ATOMIC_IGNORE_OFF_PAGE(_dup26);
a46:
    _dup46 = _phi34;
    ;
    if (_dup46) goto a55;
    System_OutOfMemoryException* _new49;
    _new49 = System_OutOfMemoryException_System_OutOfMemoryException__newFN();
    Void_System_OutOfMemoryException__ctorFN(_new49);
    throw (Void*) _new49;
a55:
    _dup55 = _dup46;
    ;
    Memset((Byte*) ((Byte*) (_dup55)), 0, (local0));
    _dup65 = (System_ByteAY*) (_dup55);
    ;
    Void_System_ByteAY__initFN_HelloWorld_r00iaxum_dll(_dup65);
    return _dup65;
}
Void Void_System_ByteAY__initFN_HelloWorld_r00iaxum_dll(System_ByteAY* __this) {
    __check_this((Void*)__this);
    ((System_Object*) (__this))->__vtbl = (Void**) &System_ByteAY_vtable_implHelloWorld_r00iaxum_dll;
    return ;
}
Int32 Int32_System_ByteAY__getsizeFN_HelloWorld_r00iaxum_dll(System_ByteAY* __this) {
    __check_this((Void*)__this);
    return (Int32) (sizeof(System_ByteAY));
}
System_Type* System_Type_System_ByteAY__gettypeFN_HelloWorld_r00iaxum_dll(System_ByteAY* __this) {
    __check_this((Void*)__this);
    return System_Type_System_ByteAY__sgettypeFN_HelloWorld_r00iaxum_dll();
}
System_Object* System_Object_System_ByteAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_ByteAY* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_ICloneable__sgettypeFN() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_ICloneable*) __new_interface((Void*)__this, (Void**)((System_ByteAY__vtbl*) __this->base.base.__vtbl)->ifce_System_ICloneable)));
a20:
    if ((Byte*)System_Type_System_Collections_IList__sgettypeFN() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_IList*) __new_interface((Void*)__this, (Void**)((System_ByteAY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_IList)));
a40:
    if ((Byte*)System_Type_System_Collections_ICollection__sgettypeFN() != (Byte*)_type) goto a60;
    return (System_Object*) ((Void*) ((System_Collections_ICollection*) __new_interface((Void*)__this, (Void**)&((System_ByteAY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_IList->ifce_System_Collections_ICollection)));
a60:
    if ((Byte*)System_Type_System_Collections_Generic_IListGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a80;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IListGSystem_ByteC*) __new_interface((Void*)__this, (Void**)((System_ByteAY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_ByteC)));
a80:
    if ((Byte*)System_Type_System_Collections_Generic_ICollectionGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a100;
    return (System_Object*) ((Void*) ((System_Collections_Generic_ICollectionGSystem_ByteC*) __new_interface((Void*)__this, (Void**)&((System_ByteAY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_ByteC->ifce_System_Collections_Generic_ICollectionGSystem_ByteC)));
a100:
    if ((Byte*)System_Type_System_Collections_Generic_IReadOnlyListGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a120;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IReadOnlyListGSystem_ByteC*) __new_interface((Void*)__this, (Void**)((System_ByteAY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IReadOnlyListGSystem_ByteC)));
a120:
    if ((Byte*)System_Type_System_Collections_Generic_IReadOnlyCollectionGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a140;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IReadOnlyCollectionGSystem_ByteC*) __new_interface((Void*)__this, (Void**)&((System_ByteAY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IReadOnlyListGSystem_ByteC->ifce_System_Collections_Generic_IReadOnlyCollectionGSystem_ByteC)));
a140:
    if ((Byte*)System_Type_System_Collections_Generic_IEnumerableGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a160;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumerableGSystem_ByteC*) __new_interface((Void*)__this, (Void**)&((System_ByteAY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_ByteC->ifce_System_Collections_Generic_ICollectionGSystem_ByteC.ifce_System_Collections_Generic_IEnumerableGSystem_ByteC)));
a160:
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a180;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) __new_interface((Void*)__this, (Void**)&((System_ByteAY__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_IList->ifce_System_Collections_ICollection.ifce_System_Collections_IEnumerable)));
a180:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[8]; } _s6133939039_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 6, { 66, 121, 116, 101, 91, 93, 0, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[14]; } _s83021064759_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 13, { 83, 121, 115, 116, 101, 109, 46, 66, 121, 116, 101, 91, 93, 0 } };

System_Type* System_Type_System_ByteAY__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_ByteAY__type_HelloWorld_r00iaxum_dll) goto a75;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_ByteAY__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_ByteAY__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s6133939039_);
    (local0)->fullname = ((System_String*) &_s83021064759_);
    (local0)->baseType = System_Type_System_Array__sgettypeFN();
    (local0)->attributeFlags = 0;
a75:
    return System_ByteAY__type_HelloWorld_r00iaxum_dll;
}
System_Collections_Generic_IEnumeratorGSystem_ByteC* System_Collections_Generic_IEnumeratorGSystem_ByteC_System_ByteAY_GetEnumeratorFN_HelloWorld_r00iaxum_dll(System_ByteAY* __this) {
    __check_this((Void*)__this);
    System_ArraySegmentGSystem_ByteC__struct_data _new1;
    Memset((Byte*) (&_new1), 0, sizeof(System_ArraySegmentGSystem_ByteC__struct_data));
    Void_System_ArraySegmentGSystem_ByteC__ctorFByteAYN_HelloWorld_r00iaxum_dll(&_new1, __this);
    System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator* _new6;
    _new6 = System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__newFN_HelloWorld_r00iaxum_dll();
    Void_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__ctorFSystem_ArraySegmentGSystem_ByteCN_HelloWorld_r00iaxum_dll(_new6, (*((System_ArraySegmentGSystem_ByteC__struct_data*)&_new1)));
    return (System_Collections_Generic_IEnumeratorGSystem_ByteC*) __new_interface((Void*)_new6, (Void**)((System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__vtbl*) _new6->base.__vtbl)->ifce_System_Collections_Generic_IEnumeratorGSystem_ByteC);
}
Int32 Int32_System_ByteAY_get_CountFN_HelloWorld_r00iaxum_dll(System_ByteAY* __this) {
    __check_this((Void*)__this);
    return (Int32) ((__this)->length);
}
Byte Byte_System_ByteAY_get_ItemFInt32N_HelloWorld_r00iaxum_dll(System_ByteAY* __this, Int32 index) {
    __check_this((Void*)__this);
    return (__this)->data[index];
}
Void Void_System_ByteAY_set_ItemFInt32__ByteN_HelloWorld_r00iaxum_dll(System_ByteAY* __this, Int32 index, Byte _value) {
    __check_this((Void*)__this);
    (__this)->data[index] = _value;
    return ;
}
Void Void_System_ByteAY_CopyToFByteAY__Int32N_HelloWorld_r00iaxum_dll(System_ByteAY* __this, System_ByteAY* _array, Int32 arrayIndex) {
    __check_this((Void*)__this);
    Void_System_Array_CopyFSystem_Array__Int32__System_Array__Int32__Int32N((System_Array*) (__this), 0, (System_Array*) (_array), arrayIndex, (Int32) ((__this)->length));
    return ;
}

Void Void_System_ArraySegmentGSystem_Int32C__ctorFInt32AYN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this, System_Int32AY* array) {
    __check_this((Void*)__this);
    if (array) goto a14;
    System_ArgumentNullException* _new8;
    _new8 = System_ArgumentNullException_System_ArgumentNullException__newFN();
    Void_System_ArgumentNullException__ctorFSystem_StringN(_new8, ((System_String*) &_s18790568674007973390_));
    throw (Void*) _new8;
a14:
    (__this)->_array = array;
    (__this)->_offset = 0;
    (__this)->_count = (Int32) ((array)->length);
    return ;
}

Void Void_System_ArraySegmentGSystem_Int32C__ctorFInt32AY__Int32__Int32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this, System_Int32AY* array, Int32 offset, Int32 count) {
    __check_this((Void*)__this);
    if (array) goto a14;
    System_ArgumentNullException* _new8;
    _new8 = System_ArgumentNullException_System_ArgumentNullException__newFN();
    Void_System_ArgumentNullException__ctorFSystem_StringN(_new8, ((System_String*) &_s18790568674007973390_));
    throw (Void*) _new8;
a14:
    if (offset >= 0) goto a39;
    System_ArgumentOutOfRangeException* _new33;
    _new33 = System_ArgumentOutOfRangeException_System_ArgumentOutOfRangeException__newFN();
    Void_System_ArgumentOutOfRangeException__ctorFSystem_String__System_StringN(_new33, ((System_String*) &_s18790502571082126080_), System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s1879049765898548126_)));
    throw (Void*) _new33;
a39:
    if (count >= 0) goto a64;
    System_ArgumentOutOfRangeException* _new58;
    _new58 = System_ArgumentOutOfRangeException_System_ArgumentOutOfRangeException__newFN();
    Void_System_ArgumentOutOfRangeException__ctorFSystem_String__System_StringN(_new58, ((System_String*) &_s18790502452002595880_), System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s1879049765898548126_)));
    throw (Void*) _new58;
a64:
    if (((Int32) ((array)->length) - offset) >= count) goto a88;
    System_ArgumentException* _new82;
    _new82 = System_ArgumentException_System_ArgumentException__newFN();
    Void_System_ArgumentException__ctorFSystem_StringN(_new82, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790502711582197642_)));
    throw (Void*) _new82;
a88:
    (__this)->_array = array;
    (__this)->_offset = offset;
    (__this)->_count = count;
    return ;
}
System_Int32AY* Int32AY_System_ArraySegmentGSystem_Int32C_get_ArrayFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this) {
    __check_this((Void*)__this);
    return (__this)->_array;
}
Int32 Int32_System_ArraySegmentGSystem_Int32C_get_OffsetFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this) {
    __check_this((Void*)__this);
    return (__this)->_offset;
}
Int32 Int32_System_ArraySegmentGSystem_Int32C_get_CountFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this) {
    __check_this((Void*)__this);
    return (__this)->_count;
}
Int32 Int32_System_ArraySegmentGSystem_Int32C_GetHashCodeFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this) {
    __check_this((Void*)__this);
    if (!(__this)->_array) goto a34;
    System_Object* __expr4781836;
    __expr4781836 = (System_Object*) ((__this)->_array);
    return ((((System_Object__vtbl*) (__expr4781836)->__vtbl)->Int32_System_Object_GetHashCodeFN(__expr4781836) ^ (__this)->_offset) ^ (__this)->_count);
a34:
    return 0;
}
Boolean Boolean_System_ArraySegmentGSystem_Int32C_EqualsFSystem_ObjectN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this, System_Object* obj) {
    __check_this((Void*)__this);
    if (!((System_ArraySegmentGSystem_Int32C*)System_Object_System_Object__dyncastFSystem_Object__System_TypeN((System_Object*) (obj), System_Type_System_ArraySegmentGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll()))) goto a21;
    return Boolean_System_ArraySegmentGSystem_Int32C_EqualsFSystem_ArraySegmentGSystem_Int32CN_HelloWorld_r00iaxum_dll(__this, System_ArraySegmentGSystem_Int32C_System_ArraySegmentGSystem_Int32C__unboxFN_HelloWorld_r00iaxum_dll(((System_ArraySegmentGSystem_Int32C*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (obj), System_Type_System_ArraySegmentGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll()))));
a21:
    return 0;
}
Boolean Boolean_System_ArraySegmentGSystem_Int32C_EqualsFSystem_ArraySegmentGSystem_Int32CN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this, System_ArraySegmentGSystem_Int32C__struct_data obj) {
    __check_this((Void*)__this);
    if ((Byte*)(&obj)->_array != (Byte*)(__this)->_array) goto a46;
    if ((UInt32)(&obj)->_offset != (UInt32)(__this)->_offset) goto a46;
    return ((&obj)->_count == (__this)->_count);
a46:
    return 0;
}
Boolean Boolean_System_ArraySegmentGSystem_Int32C_op_EqualityFSystem_ArraySegmentGSystem_Int32C__System_ArraySegmentGSystem_Int32CN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data a, System_ArraySegmentGSystem_Int32C__struct_data b) {
    return Boolean_System_ArraySegmentGSystem_Int32C_EqualsFSystem_ArraySegmentGSystem_Int32CN_HelloWorld_r00iaxum_dll(&a, b);
}
Boolean Boolean_System_ArraySegmentGSystem_Int32C_op_InequalityFSystem_ArraySegmentGSystem_Int32C__System_ArraySegmentGSystem_Int32CN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data a, System_ArraySegmentGSystem_Int32C__struct_data b) {
    return (Boolean_System_ArraySegmentGSystem_Int32C_op_EqualityFSystem_ArraySegmentGSystem_Int32C__System_ArraySegmentGSystem_Int32CN_HelloWorld_r00iaxum_dll(a, b) == 0);
}

Int32 Int32_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IListGSystem_Int32C_get_ItemFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this, Int32 index) {
    __check_this((Void*)__this);
    if ((__this)->_array) goto a24;
    System_InvalidOperationException* _new18;
    _new18 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new18, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790698893774629488_)));
    throw (Void*) _new18;
a24:
    if (index < 0) goto a37;
    if (index < (__this)->_count) goto a48;
a37:
    System_ArgumentOutOfRangeException* _new42;
    _new42 = System_ArgumentOutOfRangeException_System_ArgumentOutOfRangeException__newFN();
    Void_System_ArgumentOutOfRangeException__ctorFSystem_StringN(_new42, ((System_String*) &_s1879056919797640427_));
    throw (Void*) _new42;
a48:
    return ((__this)->_array)->data[((__this)->_offset + index)];
}

Void Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IListGSystem_Int32C_set_ItemFInt32__Int32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this, Int32 index, Int32 value) {
    __check_this((Void*)__this);
    if ((__this)->_array) goto a24;
    System_InvalidOperationException* _new18;
    _new18 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new18, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790698893774629488_)));
    throw (Void*) _new18;
a24:
    if (index < 0) goto a37;
    if (index < (__this)->_count) goto a48;
a37:
    System_ArgumentOutOfRangeException* _new42;
    _new42 = System_ArgumentOutOfRangeException_System_ArgumentOutOfRangeException__newFN();
    Void_System_ArgumentOutOfRangeException__ctorFSystem_StringN(_new42, ((System_String*) &_s1879056919797640427_));
    throw (Void*) _new42;
a48:
    ((__this)->_array)->data[((__this)->_offset + index)] = value;
    return ;
}
Int32 Int32_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IListGSystem_Int32C_IndexOfFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this, Int32 item) {
    __check_this((Void*)__this);
    System_NotImplementedException* _new0;
    _new0 = System_NotImplementedException_System_NotImplementedException__newFN();
    Void_System_NotImplementedException__ctorFN(_new0);
    throw (Void*) _new0;
}
Void Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IListGSystem_Int32C_InsertFInt32__Int32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this, Int32 index, Int32 item) {
    __check_this((Void*)__this);
    System_NotSupportedException* _new0;
    _new0 = System_NotSupportedException_System_NotSupportedException__newFN();
    Void_System_NotSupportedException__ctorFN(_new0);
    throw (Void*) _new0;
}
Void Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IListGSystem_Int32C_RemoveAtFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this, Int32 index) {
    __check_this((Void*)__this);
    System_NotSupportedException* _new0;
    _new0 = System_NotSupportedException_System_NotSupportedException__newFN();
    Void_System_NotSupportedException__ctorFN(_new0);
    throw (Void*) _new0;
}

Int32 Int32_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IReadOnlyListGSystem_Int32C_get_ItemFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this, Int32 index) {
    __check_this((Void*)__this);
    if ((__this)->_array) goto a24;
    System_InvalidOperationException* _new18;
    _new18 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new18, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790698893774629488_)));
    throw (Void*) _new18;
a24:
    if (index < 0) goto a37;
    if (index < (__this)->_count) goto a48;
a37:
    System_ArgumentOutOfRangeException* _new42;
    _new42 = System_ArgumentOutOfRangeException_System_ArgumentOutOfRangeException__newFN();
    Void_System_ArgumentOutOfRangeException__ctorFSystem_StringN(_new42, ((System_String*) &_s1879056919797640427_));
    throw (Void*) _new42;
a48:
    return ((__this)->_array)->data[((__this)->_offset + index)];
}
Boolean Boolean_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_get_IsReadOnlyFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this) {
    __check_this((Void*)__this);
    return 1;
}
Void Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_AddFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this, Int32 item) {
    __check_this((Void*)__this);
    System_NotSupportedException* _new0;
    _new0 = System_NotSupportedException_System_NotSupportedException__newFN();
    Void_System_NotSupportedException__ctorFN(_new0);
    throw (Void*) _new0;
}
Void Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_ClearFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this) {
    __check_this((Void*)__this);
    System_NotSupportedException* _new0;
    _new0 = System_NotSupportedException_System_NotSupportedException__newFN();
    Void_System_NotSupportedException__ctorFN(_new0);
    throw (Void*) _new0;
}
Boolean Boolean_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_ContainsFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this, Int32 item) {
    __check_this((Void*)__this);
    System_NotImplementedException* _new0;
    _new0 = System_NotImplementedException_System_NotImplementedException__newFN();
    Void_System_NotImplementedException__ctorFN(_new0);
    throw (Void*) _new0;
}

Void Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_CopyToFInt32AY__Int32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this, System_Int32AY* array, Int32 arrayIndex) {
    __check_this((Void*)__this);
    if ((__this)->_array) goto a24;
    System_InvalidOperationException* _new18;
    _new18 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new18, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790698893774629488_)));
    throw (Void*) _new18;
a24:
    Void_System_Array_CopyFSystem_Array__Int32__System_Array__Int32__Int32N((System_Array*) ((__this)->_array), (__this)->_offset, (System_Array*) (array), arrayIndex, (__this)->_count);
    return ;
}
Boolean Boolean_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_RemoveFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this, Int32 item) {
    __check_this((Void*)__this);
    System_NotSupportedException* _new0;
    _new0 = System_NotSupportedException_System_NotSupportedException__newFN();
    Void_System_NotSupportedException__ctorFN(_new0);
    throw (Void*) _new0;
}

System_Collections_Generic_IEnumeratorGSystem_Int32C* System_Collections_Generic_IEnumeratorGSystem_Int32C_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IEnumerableGSystem_Int32C_GetEnumeratorFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this) {
    __check_this((Void*)__this);
    if ((__this)->_array) goto a24;
    System_InvalidOperationException* _new18;
    _new18 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new18, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790698893774629488_)));
    throw (Void*) _new18;
a24:
    System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator* _new30;
    _new30 = System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__newFN_HelloWorld_r00iaxum_dll();
    Void_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__ctorFSystem_ArraySegmentGSystem_Int32CN_HelloWorld_r00iaxum_dll(_new30, (*((System_ArraySegmentGSystem_Int32C__struct_data*)__this)));
    return (System_Collections_Generic_IEnumeratorGSystem_Int32C*) __new_interface((Void*)_new30, (Void**)((System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__vtbl*) _new30->base.__vtbl)->ifce_System_Collections_Generic_IEnumeratorGSystem_Int32C);
}

System_Collections_IEnumerator* System_Collections_IEnumerator_System_ArraySegmentGSystem_Int32C_System_Collections_IEnumerable_GetEnumeratorFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data* __this) {
    __check_this((Void*)__this);
    if ((__this)->_array) goto a24;
    System_InvalidOperationException* _new18;
    _new18 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new18, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790698893774629488_)));
    throw (Void*) _new18;
a24:
    System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator* _new30;
    _new30 = System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__newFN_HelloWorld_r00iaxum_dll();
    Void_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__ctorFSystem_ArraySegmentGSystem_Int32CN_HelloWorld_r00iaxum_dll(_new30, (*((System_ArraySegmentGSystem_Int32C__struct_data*)__this)));
    return (System_Collections_IEnumerator*) __new_interface((Void*)_new30, (Void**)&((System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__vtbl*) _new30->base.__vtbl)->ifce_System_Collections_Generic_IEnumeratorGSystem_Int32C->ifce_System_Collections_IEnumerator);
}
System_ArraySegmentGSystem_Int32C* System_ArraySegmentGSystem_Int32C_System_ArraySegmentGSystem_Int32C__newFN_HelloWorld_r00iaxum_dll() {
    UInt32 _dup6;
    Void* _dup26;
    System_ArraySegmentGSystem_Int32C* _dup40;
a6:
    _dup6 = sizeof(System_ArraySegmentGSystem_Int32C);
    ;
    if ((UInt32)_dup6 >= (UInt32)102400) goto a21;
    Void* _phi14;
    _phi14 = GC_MALLOC(_dup6);
    goto a26;
a21:
    _phi14 = GC_MALLOC_IGNORE_OFF_PAGE((Int32) (_dup6));
a26:
    _dup26 = _phi14;
    ;
    if (_dup26) goto a35;
    System_OutOfMemoryException* _new29;
    _new29 = System_OutOfMemoryException_System_OutOfMemoryException__newFN();
    Void_System_OutOfMemoryException__ctorFN(_new29);
    throw (Void*) _new29;
a35:
    _dup40 = (System_ArraySegmentGSystem_Int32C*) (_dup26);
    ;
    Void_System_ArraySegmentGSystem_Int32C__initFN_HelloWorld_r00iaxum_dll(_dup40);
    return _dup40;
}
Void Void_System_ArraySegmentGSystem_Int32C__initFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this) {
    __check_this((Void*)__this);
    ((System_Object*) (__this))->__vtbl = (Void**) &System_ArraySegmentGSystem_Int32C_vtable_implHelloWorld_r00iaxum_dll;
    return ;
}
Int32 Int32_System_ArraySegmentGSystem_Int32C__getsizeFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this) {
    __check_this((Void*)__this);
    return (Int32) (sizeof(System_ArraySegmentGSystem_Int32C));
}
System_Type* System_Type_System_ArraySegmentGSystem_Int32C__gettypeFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this) {
    __check_this((Void*)__this);
    return System_Type_System_ArraySegmentGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll();
}
System_Object* System_Object_System_ArraySegmentGSystem_Int32C__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_Generic_IListGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IListGSystem_Int32C*) __new_interface((Void*)__this, (Void**)((System_ArraySegmentGSystem_Int32C__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_Int32C)));
a20:
    if ((Byte*)System_Type_System_Collections_Generic_ICollectionGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_Generic_ICollectionGSystem_Int32C*) __new_interface((Void*)__this, (Void**)&((System_ArraySegmentGSystem_Int32C__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_Int32C->ifce_System_Collections_Generic_ICollectionGSystem_Int32C)));
a40:
    if ((Byte*)System_Type_System_Collections_Generic_IReadOnlyListGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a60;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IReadOnlyListGSystem_Int32C*) __new_interface((Void*)__this, (Void**)((System_ArraySegmentGSystem_Int32C__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IReadOnlyListGSystem_Int32C)));
a60:
    if ((Byte*)System_Type_System_Collections_Generic_IReadOnlyCollectionGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a80;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IReadOnlyCollectionGSystem_Int32C*) __new_interface((Void*)__this, (Void**)&((System_ArraySegmentGSystem_Int32C__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IReadOnlyListGSystem_Int32C->ifce_System_Collections_Generic_IReadOnlyCollectionGSystem_Int32C)));
a80:
    if ((Byte*)System_Type_System_Collections_Generic_IEnumerableGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a100;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumerableGSystem_Int32C*) __new_interface((Void*)__this, (Void**)&((System_ArraySegmentGSystem_Int32C__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_Int32C->ifce_System_Collections_Generic_ICollectionGSystem_Int32C.ifce_System_Collections_Generic_IEnumerableGSystem_Int32C)));
a100:
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a120;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) __new_interface((Void*)__this, (Void**)&((System_ArraySegmentGSystem_Int32C__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_Int32C->ifce_System_Collections_Generic_ICollectionGSystem_Int32C.ifce_System_Collections_Generic_IEnumerableGSystem_Int32C.ifce_System_Collections_IEnumerable)));
a120:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[28]; } _s62491173084_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 26, { 65, 114, 114, 97, 121, 83, 101, 103, 109, 101, 110, 116, 60, 83, 121, 115, 116, 101, 109, 46, 73, 110, 116, 51, 50, 62, 0, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[34]; } _s8268950703_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 33, { 83, 121, 115, 116, 101, 109, 46, 65, 114, 114, 97, 121, 83, 101, 103, 109, 101, 110, 116, 60, 83, 121, 115, 116, 101, 109, 46, 73, 110, 116, 51, 50, 62, 0 } };

System_Type* System_Type_System_ArraySegmentGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_ArraySegmentGSystem_Int32C__type_HelloWorld_r00iaxum_dll) goto a75;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_ArraySegmentGSystem_Int32C__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_ArraySegmentGSystem_Int32C__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s62491173084_);
    (local0)->fullname = ((System_String*) &_s8268950703_);
    (local0)->baseType = System_Type_System_ValueType__sgettypeFN();
    (local0)->attributeFlags = 0;
a75:
    return System_ArraySegmentGSystem_Int32C__type_HelloWorld_r00iaxum_dll;
}
System_ArraySegmentGSystem_Int32C* System_ArraySegmentGSystem_Int32C_System_ArraySegmentGSystem_Int32C__boxFSystem_ArraySegmentGSystem_Int32CN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C__struct_data _value) {
    UInt32 _dup6;
    Void* _dup26;
    System_ArraySegmentGSystem_Int32C* _dup40;
    System_ArraySegmentGSystem_Int32C* _dup52;
a6:
    _dup6 = sizeof(System_ArraySegmentGSystem_Int32C);
    ;
    if ((UInt32)_dup6 >= (UInt32)102400) goto a21;
    Void* _phi14;
    _phi14 = GC_MALLOC(_dup6);
    goto a26;
a21:
    _phi14 = GC_MALLOC_IGNORE_OFF_PAGE((Int32) (_dup6));
a26:
    _dup26 = _phi14;
    ;
    if (_dup26) goto a35;
    System_OutOfMemoryException* _new29;
    _new29 = System_OutOfMemoryException_System_OutOfMemoryException__newFN();
    Void_System_OutOfMemoryException__ctorFN(_new29);
    throw (Void*) _new29;
a35:
    _dup40 = (System_ArraySegmentGSystem_Int32C*) (_dup26);
    ;
    *((System_ArraySegmentGSystem_Int32C__struct_data*) &(_dup40)->_array) = _value;
    _dup52 = _dup40;
    ;
    Void_System_ArraySegmentGSystem_Int32C__initFN_HelloWorld_r00iaxum_dll(_dup52);
    return _dup52;
}
System_ArraySegmentGSystem_Int32C__struct_data System_ArraySegmentGSystem_Int32C_System_ArraySegmentGSystem_Int32C__unboxFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this) {
    __check_this((Void*)__this);
    if (__this) goto a9;
    System_NullReferenceException* _new3;
    _new3 = System_NullReferenceException_System_NullReferenceException__newFN();
    Void_System_NullReferenceException__ctorFN(_new3);
    throw (Void*) _new3;
a9:
    return (*((System_ArraySegmentGSystem_Int32C__struct_data*)&(__this)->_array));
}
System_Int32AY* Int32AY_System_ArraySegmentGSystem_Int32C_get_Array__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this) {
    __check_this((Void*)__this);
    return Int32AY_System_ArraySegmentGSystem_Int32C_get_ArrayFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_Int32C__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
}
Int32 Int32_System_ArraySegmentGSystem_Int32C_get_Offset__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this) {
    __check_this((Void*)__this);
    return Int32_System_ArraySegmentGSystem_Int32C_get_OffsetFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_Int32C__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
}
Int32 Int32_System_ArraySegmentGSystem_Int32C_get_Count__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this) {
    __check_this((Void*)__this);
    return Int32_System_ArraySegmentGSystem_Int32C_get_CountFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_Int32C__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
}
Int32 Int32_System_ArraySegmentGSystem_Int32C_GetHashCode__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this) {
    __check_this((Void*)__this);
    System_ArraySegmentGSystem_Int32C__struct_data* __expr13;
    __expr13 = (System_ArraySegmentGSystem_Int32C__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*)));
    return Int32_System_ArraySegmentGSystem_Int32C_GetHashCodeFN_HelloWorld_r00iaxum_dll(__expr13);
}
Boolean Boolean_System_ArraySegmentGSystem_Int32C_Equals__entry_for_objectFSystem_ObjectN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this, System_Object* obj) {
    __check_this((Void*)__this);
    System_ArraySegmentGSystem_Int32C__struct_data* __expr13;
    __expr13 = (System_ArraySegmentGSystem_Int32C__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*)));
    return Boolean_System_ArraySegmentGSystem_Int32C_EqualsFSystem_ObjectN_HelloWorld_r00iaxum_dll(__expr13, obj);
}
Boolean Boolean_System_ArraySegmentGSystem_Int32C_Equals__entry_for_objectFSystem_ArraySegmentGSystem_Int32CN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this, System_ArraySegmentGSystem_Int32C__struct_data obj) {
    __check_this((Void*)__this);
    return Boolean_System_ArraySegmentGSystem_Int32C_EqualsFSystem_ArraySegmentGSystem_Int32CN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_Int32C__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), obj);
}
Int32 Int32_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IListGSystem_Int32C_get_Item__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this, Int32 index) {
    __check_this((Void*)__this);
    return Int32_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IListGSystem_Int32C_get_ItemFInt32N_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_Int32C__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), index);
}
Void Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IListGSystem_Int32C_set_Item__entry_for_objectFInt32__Int32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this, Int32 index, Int32 value) {
    __check_this((Void*)__this);
    Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IListGSystem_Int32C_set_ItemFInt32__Int32N_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_Int32C__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), index, value);
    return ;
}
Int32 Int32_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IListGSystem_Int32C_IndexOf__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this, Int32 item) {
    __check_this((Void*)__this);
    return Int32_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IListGSystem_Int32C_IndexOfFInt32N_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_Int32C__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), item);
}
Void Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IListGSystem_Int32C_Insert__entry_for_objectFInt32__Int32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this, Int32 index, Int32 item) {
    __check_this((Void*)__this);
    Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IListGSystem_Int32C_InsertFInt32__Int32N_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_Int32C__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), index, item);
    return ;
}
Void Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IListGSystem_Int32C_RemoveAt__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this, Int32 index) {
    __check_this((Void*)__this);
    Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IListGSystem_Int32C_RemoveAtFInt32N_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_Int32C__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), index);
    return ;
}
Int32 Int32_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IReadOnlyListGSystem_Int32C_get_Item__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this, Int32 index) {
    __check_this((Void*)__this);
    return Int32_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IReadOnlyListGSystem_Int32C_get_ItemFInt32N_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_Int32C__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), index);
}
Boolean Boolean_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_get_IsReadOnly__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this) {
    __check_this((Void*)__this);
    return Boolean_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_get_IsReadOnlyFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_Int32C__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
}
Void Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_Add__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this, Int32 item) {
    __check_this((Void*)__this);
    Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_AddFInt32N_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_Int32C__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), item);
    return ;
}
Void Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_Clear__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this) {
    __check_this((Void*)__this);
    Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_ClearFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_Int32C__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
    return ;
}
Boolean Boolean_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_Contains__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this, Int32 item) {
    __check_this((Void*)__this);
    return Boolean_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_ContainsFInt32N_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_Int32C__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), item);
}
Void Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_CopyTo__entry_for_objectFInt32AY__Int32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this, System_Int32AY* array, Int32 arrayIndex) {
    __check_this((Void*)__this);
    Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_CopyToFInt32AY__Int32N_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_Int32C__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), array, arrayIndex);
    return ;
}
Boolean Boolean_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_Remove__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this, Int32 item) {
    __check_this((Void*)__this);
    return Boolean_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_RemoveFInt32N_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_Int32C__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), item);
}
System_Collections_Generic_IEnumeratorGSystem_Int32C* System_Collections_Generic_IEnumeratorGSystem_Int32C_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IEnumerableGSystem_Int32C_GetEnumerator__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this) {
    __check_this((Void*)__this);
    return System_Collections_Generic_IEnumeratorGSystem_Int32C_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IEnumerableGSystem_Int32C_GetEnumeratorFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_Int32C__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
}
System_Collections_IEnumerator* System_Collections_IEnumerator_System_ArraySegmentGSystem_Int32C_System_Collections_IEnumerable_GetEnumerator__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C* __this) {
    __check_this((Void*)__this);
    return System_Collections_IEnumerator_System_ArraySegmentGSystem_Int32C_System_Collections_IEnumerable_GetEnumeratorFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_Int32C__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
}
System_Object* System_Object_System_Collections_Generic_IEnumeratorGSystem_Int32C__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_Collections_Generic_IEnumeratorGSystem_Int32C* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_IDisposable__sgettypeFN() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_IDisposable*) (__this)));
a20:
    if ((Byte*)System_Type_System_Collections_IEnumerator__sgettypeFN() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerator*) __new_interface((Void*)(__this)->__this, (Void**)(Void**) &((__this)->__vtbl->ifce_System_Collections_IEnumerator))));
a40:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[26]; } _s61280172714_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 25, { 73, 69, 110, 117, 109, 101, 114, 97, 116, 111, 114, 60, 83, 121, 115, 116, 101, 109, 46, 73, 110, 116, 51, 50, 62, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[54]; } _s83705518534_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 52, { 83, 121, 115, 116, 101, 109, 46, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 115, 46, 71, 101, 110, 101, 114, 105, 99, 46, 73, 69, 110, 117, 109, 101, 114, 97, 116, 111, 114, 60, 83, 121, 115, 116, 101, 109, 46, 73, 110, 116, 51, 50, 62, 0, 0 } };

System_Type* System_Type_System_Collections_Generic_IEnumeratorGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_Collections_Generic_IEnumeratorGSystem_Int32C__type_HelloWorld_r00iaxum_dll) goto a60;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_Collections_Generic_IEnumeratorGSystem_Int32C__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_Collections_Generic_IEnumeratorGSystem_Int32C__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s61280172714_);
    (local0)->fullname = ((System_String*) &_s83705518534_);
    (local0)->attributeFlags = 32;
a60:
    return System_Collections_Generic_IEnumeratorGSystem_Int32C__type_HelloWorld_r00iaxum_dll;
}
Void Void_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__ctorFSystem_ArraySegmentGSystem_Int32CN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator* __this, System_ArraySegmentGSystem_Int32C__struct_data arraySegment) {
    __check_this((Void*)__this);
    Void_System_Object__ctorFN((System_Object*) (__this));
    (__this)->_array = (&arraySegment)->_array;
    (__this)->_start = (&arraySegment)->_offset;
    (__this)->_end = ((__this)->_start + (&arraySegment)->_count);
    (__this)->_current = ((__this)->_start - 1);
    return ;
}
Boolean Boolean_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator_MoveNextFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator* __this) {
    System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator* _dup15;
    __check_this((Void*)__this);
    if ((__this)->_current >= (__this)->_end) goto a43;
    _dup15 = __this;
    ;
    (_dup15)->_current = ((_dup15)->_current + 1);
    return ((__this)->_current < (__this)->_end);
a43:
    return 0;
}

Int32 Int32_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator_get_CurrentFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    if ((__this)->_current >= (__this)->_start) goto a30;
    System_InvalidOperationException* _new24;
    _new24 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new24, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790699433979637350_)));
    throw (Void*) _new24;
a30:
    if ((__this)->_current < (__this)->_end) goto a60;
    System_InvalidOperationException* _new54;
    _new54 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new54, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790700072471947324_)));
    throw (Void*) _new54;
a60:
    return ((__this)->_array)->data[(__this)->_current];
}
System_Object* System_Object_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator_System_Collections_IEnumerator_get_CurrentFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    return (System_Object*) (System_Int32_System_Int32__boxFInt32N(Int32_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator_get_CurrentFN_HelloWorld_r00iaxum_dll(__this)));
}
Void Void_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator_System_Collections_IEnumerator_ResetFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    (__this)->_current = ((__this)->_start - 1);
    return ;
}
Void Void_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator_DisposeFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    return ;
}
System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator* System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__newFN_HelloWorld_r00iaxum_dll() {
    UInt32 _dup6;
    Void* _dup26;
    System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator* _dup40;
a6:
    _dup6 = sizeof(System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator);
    ;
    if ((UInt32)_dup6 >= (UInt32)102400) goto a21;
    Void* _phi14;
    _phi14 = GC_MALLOC(_dup6);
    goto a26;
a21:
    _phi14 = GC_MALLOC_IGNORE_OFF_PAGE((Int32) (_dup6));
a26:
    _dup26 = _phi14;
    ;
    if (_dup26) goto a35;
    System_OutOfMemoryException* _new29;
    _new29 = System_OutOfMemoryException_System_OutOfMemoryException__newFN();
    Void_System_OutOfMemoryException__ctorFN(_new29);
    throw (Void*) _new29;
a35:
    _dup40 = (System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator*) (_dup26);
    ;
    Void_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__initFN_HelloWorld_r00iaxum_dll(_dup40);
    return _dup40;
}
Void Void_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__initFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    ((System_Object*) (__this))->__vtbl = (Void**) &System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator_vtable_implHelloWorld_r00iaxum_dll;
    return ;
}
Int32 Int32_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__getsizeFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    return (Int32) (sizeof(System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator));
}
System_Type* System_Type_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__gettypeFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    return System_Type_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__sgettypeFN_HelloWorld_r00iaxum_dll();
}
System_Object* System_Object_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_Generic_IEnumeratorGSystem_Int32C__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumeratorGSystem_Int32C*) __new_interface((Void*)__this, (Void**)((System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__vtbl*) __this->base.__vtbl)->ifce_System_Collections_Generic_IEnumeratorGSystem_Int32C)));
a20:
    if ((Byte*)System_Type_System_IDisposable__sgettypeFN() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_IDisposable*) __new_interface((Void*)__this, (Void**)&((System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__vtbl*) __this->base.__vtbl)->ifce_System_Collections_Generic_IEnumeratorGSystem_Int32C->ifce_System_IDisposable)));
a40:
    if ((Byte*)System_Type_System_Collections_IEnumerator__sgettypeFN() != (Byte*)_type) goto a60;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerator*) __new_interface((Void*)__this, (Void**)&((System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__vtbl*) __this->base.__vtbl)->ifce_System_Collections_Generic_IEnumeratorGSystem_Int32C->ifce_System_Collections_IEnumerator)));
a60:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[58]; } _s82374667823_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 56, { 83, 121, 115, 116, 101, 109, 46, 65, 114, 114, 97, 121, 83, 101, 103, 109, 101, 110, 116, 60, 83, 121, 115, 116, 101, 109, 46, 73, 110, 116, 51, 50, 62, 46, 65, 114, 114, 97, 121, 83, 101, 103, 109, 101, 110, 116, 69, 110, 117, 109, 101, 114, 97, 116, 111, 114, 0, 0 } };

System_Type* System_Type_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__type_HelloWorld_r00iaxum_dll) goto a75;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s6655898870_);
    (local0)->fullname = ((System_String*) &_s82374667823_);
    (local0)->baseType = System_Type_System_Object__sgettypeFN();
    (local0)->attributeFlags = 0;
a75:
    return System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__type_HelloWorld_r00iaxum_dll;
}

Void Void_System_ArraySegmentGSystem_ByteC__ctorFByteAYN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this, System_ByteAY* array) {
    __check_this((Void*)__this);
    if (array) goto a14;
    System_ArgumentNullException* _new8;
    _new8 = System_ArgumentNullException_System_ArgumentNullException__newFN();
    Void_System_ArgumentNullException__ctorFSystem_StringN(_new8, ((System_String*) &_s18790568674007973390_));
    throw (Void*) _new8;
a14:
    (__this)->_array = array;
    (__this)->_offset = 0;
    (__this)->_count = (Int32) ((array)->length);
    return ;
}

Void Void_System_ArraySegmentGSystem_ByteC__ctorFByteAY__Int32__Int32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this, System_ByteAY* array, Int32 offset, Int32 count) {
    __check_this((Void*)__this);
    if (array) goto a14;
    System_ArgumentNullException* _new8;
    _new8 = System_ArgumentNullException_System_ArgumentNullException__newFN();
    Void_System_ArgumentNullException__ctorFSystem_StringN(_new8, ((System_String*) &_s18790568674007973390_));
    throw (Void*) _new8;
a14:
    if (offset >= 0) goto a39;
    System_ArgumentOutOfRangeException* _new33;
    _new33 = System_ArgumentOutOfRangeException_System_ArgumentOutOfRangeException__newFN();
    Void_System_ArgumentOutOfRangeException__ctorFSystem_String__System_StringN(_new33, ((System_String*) &_s18790502571082126080_), System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s1879049765898548126_)));
    throw (Void*) _new33;
a39:
    if (count >= 0) goto a64;
    System_ArgumentOutOfRangeException* _new58;
    _new58 = System_ArgumentOutOfRangeException_System_ArgumentOutOfRangeException__newFN();
    Void_System_ArgumentOutOfRangeException__ctorFSystem_String__System_StringN(_new58, ((System_String*) &_s18790502452002595880_), System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s1879049765898548126_)));
    throw (Void*) _new58;
a64:
    if (((Int32) ((array)->length) - offset) >= count) goto a88;
    System_ArgumentException* _new82;
    _new82 = System_ArgumentException_System_ArgumentException__newFN();
    Void_System_ArgumentException__ctorFSystem_StringN(_new82, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790502711582197642_)));
    throw (Void*) _new82;
a88:
    (__this)->_array = array;
    (__this)->_offset = offset;
    (__this)->_count = count;
    return ;
}
System_ByteAY* ByteAY_System_ArraySegmentGSystem_ByteC_get_ArrayFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this) {
    __check_this((Void*)__this);
    return (__this)->_array;
}
Int32 Int32_System_ArraySegmentGSystem_ByteC_get_OffsetFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this) {
    __check_this((Void*)__this);
    return (__this)->_offset;
}
Int32 Int32_System_ArraySegmentGSystem_ByteC_get_CountFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this) {
    __check_this((Void*)__this);
    return (__this)->_count;
}
Int32 Int32_System_ArraySegmentGSystem_ByteC_GetHashCodeFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this) {
    __check_this((Void*)__this);
    if (!(__this)->_array) goto a34;
    System_Object* __expr43036345;
    __expr43036345 = (System_Object*) ((__this)->_array);
    return ((((System_Object__vtbl*) (__expr43036345)->__vtbl)->Int32_System_Object_GetHashCodeFN(__expr43036345) ^ (__this)->_offset) ^ (__this)->_count);
a34:
    return 0;
}
Boolean Boolean_System_ArraySegmentGSystem_ByteC_EqualsFSystem_ObjectN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this, System_Object* obj) {
    __check_this((Void*)__this);
    if (!((System_ArraySegmentGSystem_ByteC*)System_Object_System_Object__dyncastFSystem_Object__System_TypeN((System_Object*) (obj), System_Type_System_ArraySegmentGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll()))) goto a21;
    return Boolean_System_ArraySegmentGSystem_ByteC_EqualsFSystem_ArraySegmentGSystem_ByteCN_HelloWorld_r00iaxum_dll(__this, System_ArraySegmentGSystem_ByteC_System_ArraySegmentGSystem_ByteC__unboxFN_HelloWorld_r00iaxum_dll(((System_ArraySegmentGSystem_ByteC*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (obj), System_Type_System_ArraySegmentGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll()))));
a21:
    return 0;
}
Boolean Boolean_System_ArraySegmentGSystem_ByteC_EqualsFSystem_ArraySegmentGSystem_ByteCN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this, System_ArraySegmentGSystem_ByteC__struct_data obj) {
    __check_this((Void*)__this);
    if ((Byte*)(&obj)->_array != (Byte*)(__this)->_array) goto a46;
    if ((UInt32)(&obj)->_offset != (UInt32)(__this)->_offset) goto a46;
    return ((&obj)->_count == (__this)->_count);
a46:
    return 0;
}
Boolean Boolean_System_ArraySegmentGSystem_ByteC_op_EqualityFSystem_ArraySegmentGSystem_ByteC__System_ArraySegmentGSystem_ByteCN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data a, System_ArraySegmentGSystem_ByteC__struct_data b) {
    return Boolean_System_ArraySegmentGSystem_ByteC_EqualsFSystem_ArraySegmentGSystem_ByteCN_HelloWorld_r00iaxum_dll(&a, b);
}
Boolean Boolean_System_ArraySegmentGSystem_ByteC_op_InequalityFSystem_ArraySegmentGSystem_ByteC__System_ArraySegmentGSystem_ByteCN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data a, System_ArraySegmentGSystem_ByteC__struct_data b) {
    return (Boolean_System_ArraySegmentGSystem_ByteC_op_EqualityFSystem_ArraySegmentGSystem_ByteC__System_ArraySegmentGSystem_ByteCN_HelloWorld_r00iaxum_dll(a, b) == 0);
}

Byte Byte_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IListGSystem_ByteC_get_ItemFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this, Int32 index) {
    __check_this((Void*)__this);
    if ((__this)->_array) goto a24;
    System_InvalidOperationException* _new18;
    _new18 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new18, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790698893774629488_)));
    throw (Void*) _new18;
a24:
    if (index < 0) goto a37;
    if (index < (__this)->_count) goto a48;
a37:
    System_ArgumentOutOfRangeException* _new42;
    _new42 = System_ArgumentOutOfRangeException_System_ArgumentOutOfRangeException__newFN();
    Void_System_ArgumentOutOfRangeException__ctorFSystem_StringN(_new42, ((System_String*) &_s1879056919797640427_));
    throw (Void*) _new42;
a48:
    return ((__this)->_array)->data[((__this)->_offset + index)];
}

Void Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IListGSystem_ByteC_set_ItemFInt32__ByteN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this, Int32 index, Byte value) {
    __check_this((Void*)__this);
    if ((__this)->_array) goto a24;
    System_InvalidOperationException* _new18;
    _new18 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new18, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790698893774629488_)));
    throw (Void*) _new18;
a24:
    if (index < 0) goto a37;
    if (index < (__this)->_count) goto a48;
a37:
    System_ArgumentOutOfRangeException* _new42;
    _new42 = System_ArgumentOutOfRangeException_System_ArgumentOutOfRangeException__newFN();
    Void_System_ArgumentOutOfRangeException__ctorFSystem_StringN(_new42, ((System_String*) &_s1879056919797640427_));
    throw (Void*) _new42;
a48:
    ((__this)->_array)->data[((__this)->_offset + index)] = value;
    return ;
}
Int32 Int32_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IListGSystem_ByteC_IndexOfFByteN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this, Byte item) {
    __check_this((Void*)__this);
    System_NotImplementedException* _new0;
    _new0 = System_NotImplementedException_System_NotImplementedException__newFN();
    Void_System_NotImplementedException__ctorFN(_new0);
    throw (Void*) _new0;
}
Void Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IListGSystem_ByteC_InsertFInt32__ByteN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this, Int32 index, Byte item) {
    __check_this((Void*)__this);
    System_NotSupportedException* _new0;
    _new0 = System_NotSupportedException_System_NotSupportedException__newFN();
    Void_System_NotSupportedException__ctorFN(_new0);
    throw (Void*) _new0;
}
Void Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IListGSystem_ByteC_RemoveAtFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this, Int32 index) {
    __check_this((Void*)__this);
    System_NotSupportedException* _new0;
    _new0 = System_NotSupportedException_System_NotSupportedException__newFN();
    Void_System_NotSupportedException__ctorFN(_new0);
    throw (Void*) _new0;
}

Byte Byte_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IReadOnlyListGSystem_ByteC_get_ItemFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this, Int32 index) {
    __check_this((Void*)__this);
    if ((__this)->_array) goto a24;
    System_InvalidOperationException* _new18;
    _new18 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new18, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790698893774629488_)));
    throw (Void*) _new18;
a24:
    if (index < 0) goto a37;
    if (index < (__this)->_count) goto a48;
a37:
    System_ArgumentOutOfRangeException* _new42;
    _new42 = System_ArgumentOutOfRangeException_System_ArgumentOutOfRangeException__newFN();
    Void_System_ArgumentOutOfRangeException__ctorFSystem_StringN(_new42, ((System_String*) &_s1879056919797640427_));
    throw (Void*) _new42;
a48:
    return ((__this)->_array)->data[((__this)->_offset + index)];
}
Boolean Boolean_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_get_IsReadOnlyFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this) {
    __check_this((Void*)__this);
    return 1;
}
Void Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_AddFByteN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this, Byte item) {
    __check_this((Void*)__this);
    System_NotSupportedException* _new0;
    _new0 = System_NotSupportedException_System_NotSupportedException__newFN();
    Void_System_NotSupportedException__ctorFN(_new0);
    throw (Void*) _new0;
}
Void Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_ClearFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this) {
    __check_this((Void*)__this);
    System_NotSupportedException* _new0;
    _new0 = System_NotSupportedException_System_NotSupportedException__newFN();
    Void_System_NotSupportedException__ctorFN(_new0);
    throw (Void*) _new0;
}
Boolean Boolean_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_ContainsFByteN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this, Byte item) {
    __check_this((Void*)__this);
    System_NotImplementedException* _new0;
    _new0 = System_NotImplementedException_System_NotImplementedException__newFN();
    Void_System_NotImplementedException__ctorFN(_new0);
    throw (Void*) _new0;
}

Void Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_CopyToFByteAY__Int32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this, System_ByteAY* array, Int32 arrayIndex) {
    __check_this((Void*)__this);
    if ((__this)->_array) goto a24;
    System_InvalidOperationException* _new18;
    _new18 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new18, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790698893774629488_)));
    throw (Void*) _new18;
a24:
    Void_System_Array_CopyFSystem_Array__Int32__System_Array__Int32__Int32N((System_Array*) ((__this)->_array), (__this)->_offset, (System_Array*) (array), arrayIndex, (__this)->_count);
    return ;
}
Boolean Boolean_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_RemoveFByteN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this, Byte item) {
    __check_this((Void*)__this);
    System_NotSupportedException* _new0;
    _new0 = System_NotSupportedException_System_NotSupportedException__newFN();
    Void_System_NotSupportedException__ctorFN(_new0);
    throw (Void*) _new0;
}

System_Collections_Generic_IEnumeratorGSystem_ByteC* System_Collections_Generic_IEnumeratorGSystem_ByteC_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IEnumerableGSystem_ByteC_GetEnumeratorFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this) {
    __check_this((Void*)__this);
    if ((__this)->_array) goto a24;
    System_InvalidOperationException* _new18;
    _new18 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new18, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790698893774629488_)));
    throw (Void*) _new18;
a24:
    System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator* _new30;
    _new30 = System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__newFN_HelloWorld_r00iaxum_dll();
    Void_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__ctorFSystem_ArraySegmentGSystem_ByteCN_HelloWorld_r00iaxum_dll(_new30, (*((System_ArraySegmentGSystem_ByteC__struct_data*)__this)));
    return (System_Collections_Generic_IEnumeratorGSystem_ByteC*) __new_interface((Void*)_new30, (Void**)((System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__vtbl*) _new30->base.__vtbl)->ifce_System_Collections_Generic_IEnumeratorGSystem_ByteC);
}

System_Collections_IEnumerator* System_Collections_IEnumerator_System_ArraySegmentGSystem_ByteC_System_Collections_IEnumerable_GetEnumeratorFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data* __this) {
    __check_this((Void*)__this);
    if ((__this)->_array) goto a24;
    System_InvalidOperationException* _new18;
    _new18 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new18, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790698893774629488_)));
    throw (Void*) _new18;
a24:
    System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator* _new30;
    _new30 = System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__newFN_HelloWorld_r00iaxum_dll();
    Void_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__ctorFSystem_ArraySegmentGSystem_ByteCN_HelloWorld_r00iaxum_dll(_new30, (*((System_ArraySegmentGSystem_ByteC__struct_data*)__this)));
    return (System_Collections_IEnumerator*) __new_interface((Void*)_new30, (Void**)&((System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__vtbl*) _new30->base.__vtbl)->ifce_System_Collections_Generic_IEnumeratorGSystem_ByteC->ifce_System_Collections_IEnumerator);
}
System_ArraySegmentGSystem_ByteC* System_ArraySegmentGSystem_ByteC_System_ArraySegmentGSystem_ByteC__newFN_HelloWorld_r00iaxum_dll() {
    UInt32 _dup6;
    Void* _dup26;
    System_ArraySegmentGSystem_ByteC* _dup40;
a6:
    _dup6 = sizeof(System_ArraySegmentGSystem_ByteC);
    ;
    if ((UInt32)_dup6 >= (UInt32)102400) goto a21;
    Void* _phi14;
    _phi14 = GC_MALLOC(_dup6);
    goto a26;
a21:
    _phi14 = GC_MALLOC_IGNORE_OFF_PAGE((Int32) (_dup6));
a26:
    _dup26 = _phi14;
    ;
    if (_dup26) goto a35;
    System_OutOfMemoryException* _new29;
    _new29 = System_OutOfMemoryException_System_OutOfMemoryException__newFN();
    Void_System_OutOfMemoryException__ctorFN(_new29);
    throw (Void*) _new29;
a35:
    _dup40 = (System_ArraySegmentGSystem_ByteC*) (_dup26);
    ;
    Void_System_ArraySegmentGSystem_ByteC__initFN_HelloWorld_r00iaxum_dll(_dup40);
    return _dup40;
}
Void Void_System_ArraySegmentGSystem_ByteC__initFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this) {
    __check_this((Void*)__this);
    ((System_Object*) (__this))->__vtbl = (Void**) &System_ArraySegmentGSystem_ByteC_vtable_implHelloWorld_r00iaxum_dll;
    return ;
}
Int32 Int32_System_ArraySegmentGSystem_ByteC__getsizeFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this) {
    __check_this((Void*)__this);
    return (Int32) (sizeof(System_ArraySegmentGSystem_ByteC));
}
System_Type* System_Type_System_ArraySegmentGSystem_ByteC__gettypeFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this) {
    __check_this((Void*)__this);
    return System_Type_System_ArraySegmentGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll();
}
System_Object* System_Object_System_ArraySegmentGSystem_ByteC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_Generic_IListGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IListGSystem_ByteC*) __new_interface((Void*)__this, (Void**)((System_ArraySegmentGSystem_ByteC__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_ByteC)));
a20:
    if ((Byte*)System_Type_System_Collections_Generic_ICollectionGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_Generic_ICollectionGSystem_ByteC*) __new_interface((Void*)__this, (Void**)&((System_ArraySegmentGSystem_ByteC__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_ByteC->ifce_System_Collections_Generic_ICollectionGSystem_ByteC)));
a40:
    if ((Byte*)System_Type_System_Collections_Generic_IReadOnlyListGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a60;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IReadOnlyListGSystem_ByteC*) __new_interface((Void*)__this, (Void**)((System_ArraySegmentGSystem_ByteC__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IReadOnlyListGSystem_ByteC)));
a60:
    if ((Byte*)System_Type_System_Collections_Generic_IReadOnlyCollectionGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a80;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IReadOnlyCollectionGSystem_ByteC*) __new_interface((Void*)__this, (Void**)&((System_ArraySegmentGSystem_ByteC__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IReadOnlyListGSystem_ByteC->ifce_System_Collections_Generic_IReadOnlyCollectionGSystem_ByteC)));
a80:
    if ((Byte*)System_Type_System_Collections_Generic_IEnumerableGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a100;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumerableGSystem_ByteC*) __new_interface((Void*)__this, (Void**)&((System_ArraySegmentGSystem_ByteC__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_ByteC->ifce_System_Collections_Generic_ICollectionGSystem_ByteC.ifce_System_Collections_Generic_IEnumerableGSystem_ByteC)));
a100:
    if ((Byte*)System_Type_System_Collections_IEnumerable__sgettypeFN() != (Byte*)_type) goto a120;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerable*) __new_interface((Void*)__this, (Void**)&((System_ArraySegmentGSystem_ByteC__vtbl*) __this->base.base.__vtbl)->ifce_System_Collections_Generic_IListGSystem_ByteC->ifce_System_Collections_Generic_ICollectionGSystem_ByteC.ifce_System_Collections_Generic_IEnumerableGSystem_ByteC.ifce_System_Collections_IEnumerable)));
a120:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[26]; } _s61569147491_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 25, { 65, 114, 114, 97, 121, 83, 101, 103, 109, 101, 110, 116, 60, 83, 121, 115, 116, 101, 109, 46, 66, 121, 116, 101, 62, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[34]; } _s81551250985_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 32, { 83, 121, 115, 116, 101, 109, 46, 65, 114, 114, 97, 121, 83, 101, 103, 109, 101, 110, 116, 60, 83, 121, 115, 116, 101, 109, 46, 66, 121, 116, 101, 62, 0, 0 } };

System_Type* System_Type_System_ArraySegmentGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_ArraySegmentGSystem_ByteC__type_HelloWorld_r00iaxum_dll) goto a75;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_ArraySegmentGSystem_ByteC__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_ArraySegmentGSystem_ByteC__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s61569147491_);
    (local0)->fullname = ((System_String*) &_s81551250985_);
    (local0)->baseType = System_Type_System_ValueType__sgettypeFN();
    (local0)->attributeFlags = 0;
a75:
    return System_ArraySegmentGSystem_ByteC__type_HelloWorld_r00iaxum_dll;
}
System_ArraySegmentGSystem_ByteC* System_ArraySegmentGSystem_ByteC_System_ArraySegmentGSystem_ByteC__boxFSystem_ArraySegmentGSystem_ByteCN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC__struct_data _value) {
    UInt32 _dup6;
    Void* _dup26;
    System_ArraySegmentGSystem_ByteC* _dup40;
    System_ArraySegmentGSystem_ByteC* _dup52;
a6:
    _dup6 = sizeof(System_ArraySegmentGSystem_ByteC);
    ;
    if ((UInt32)_dup6 >= (UInt32)102400) goto a21;
    Void* _phi14;
    _phi14 = GC_MALLOC(_dup6);
    goto a26;
a21:
    _phi14 = GC_MALLOC_IGNORE_OFF_PAGE((Int32) (_dup6));
a26:
    _dup26 = _phi14;
    ;
    if (_dup26) goto a35;
    System_OutOfMemoryException* _new29;
    _new29 = System_OutOfMemoryException_System_OutOfMemoryException__newFN();
    Void_System_OutOfMemoryException__ctorFN(_new29);
    throw (Void*) _new29;
a35:
    _dup40 = (System_ArraySegmentGSystem_ByteC*) (_dup26);
    ;
    *((System_ArraySegmentGSystem_ByteC__struct_data*) &(_dup40)->_array) = _value;
    _dup52 = _dup40;
    ;
    Void_System_ArraySegmentGSystem_ByteC__initFN_HelloWorld_r00iaxum_dll(_dup52);
    return _dup52;
}
System_ArraySegmentGSystem_ByteC__struct_data System_ArraySegmentGSystem_ByteC_System_ArraySegmentGSystem_ByteC__unboxFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this) {
    __check_this((Void*)__this);
    if (__this) goto a9;
    System_NullReferenceException* _new3;
    _new3 = System_NullReferenceException_System_NullReferenceException__newFN();
    Void_System_NullReferenceException__ctorFN(_new3);
    throw (Void*) _new3;
a9:
    return (*((System_ArraySegmentGSystem_ByteC__struct_data*)&(__this)->_array));
}
System_ByteAY* ByteAY_System_ArraySegmentGSystem_ByteC_get_Array__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this) {
    __check_this((Void*)__this);
    return ByteAY_System_ArraySegmentGSystem_ByteC_get_ArrayFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_ByteC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
}
Int32 Int32_System_ArraySegmentGSystem_ByteC_get_Offset__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this) {
    __check_this((Void*)__this);
    return Int32_System_ArraySegmentGSystem_ByteC_get_OffsetFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_ByteC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
}
Int32 Int32_System_ArraySegmentGSystem_ByteC_get_Count__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this) {
    __check_this((Void*)__this);
    return Int32_System_ArraySegmentGSystem_ByteC_get_CountFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_ByteC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
}
Int32 Int32_System_ArraySegmentGSystem_ByteC_GetHashCode__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this) {
    __check_this((Void*)__this);
    System_ArraySegmentGSystem_ByteC__struct_data* __expr13;
    __expr13 = (System_ArraySegmentGSystem_ByteC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*)));
    return Int32_System_ArraySegmentGSystem_ByteC_GetHashCodeFN_HelloWorld_r00iaxum_dll(__expr13);
}
Boolean Boolean_System_ArraySegmentGSystem_ByteC_Equals__entry_for_objectFSystem_ObjectN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this, System_Object* obj) {
    __check_this((Void*)__this);
    System_ArraySegmentGSystem_ByteC__struct_data* __expr13;
    __expr13 = (System_ArraySegmentGSystem_ByteC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*)));
    return Boolean_System_ArraySegmentGSystem_ByteC_EqualsFSystem_ObjectN_HelloWorld_r00iaxum_dll(__expr13, obj);
}
Boolean Boolean_System_ArraySegmentGSystem_ByteC_Equals__entry_for_objectFSystem_ArraySegmentGSystem_ByteCN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this, System_ArraySegmentGSystem_ByteC__struct_data obj) {
    __check_this((Void*)__this);
    return Boolean_System_ArraySegmentGSystem_ByteC_EqualsFSystem_ArraySegmentGSystem_ByteCN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_ByteC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), obj);
}
Byte Byte_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IListGSystem_ByteC_get_Item__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this, Int32 index) {
    __check_this((Void*)__this);
    return Byte_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IListGSystem_ByteC_get_ItemFInt32N_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_ByteC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), index);
}
Void Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IListGSystem_ByteC_set_Item__entry_for_objectFInt32__ByteN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this, Int32 index, Byte value) {
    __check_this((Void*)__this);
    Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IListGSystem_ByteC_set_ItemFInt32__ByteN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_ByteC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), index, value);
    return ;
}
Int32 Int32_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IListGSystem_ByteC_IndexOf__entry_for_objectFByteN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this, Byte item) {
    __check_this((Void*)__this);
    return Int32_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IListGSystem_ByteC_IndexOfFByteN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_ByteC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), item);
}
Void Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IListGSystem_ByteC_Insert__entry_for_objectFInt32__ByteN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this, Int32 index, Byte item) {
    __check_this((Void*)__this);
    Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IListGSystem_ByteC_InsertFInt32__ByteN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_ByteC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), index, item);
    return ;
}
Void Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IListGSystem_ByteC_RemoveAt__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this, Int32 index) {
    __check_this((Void*)__this);
    Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IListGSystem_ByteC_RemoveAtFInt32N_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_ByteC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), index);
    return ;
}
Byte Byte_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IReadOnlyListGSystem_ByteC_get_Item__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this, Int32 index) {
    __check_this((Void*)__this);
    return Byte_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IReadOnlyListGSystem_ByteC_get_ItemFInt32N_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_ByteC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), index);
}
Boolean Boolean_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_get_IsReadOnly__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this) {
    __check_this((Void*)__this);
    return Boolean_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_get_IsReadOnlyFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_ByteC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
}
Void Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_Add__entry_for_objectFByteN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this, Byte item) {
    __check_this((Void*)__this);
    Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_AddFByteN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_ByteC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), item);
    return ;
}
Void Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_Clear__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this) {
    __check_this((Void*)__this);
    Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_ClearFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_ByteC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
    return ;
}
Boolean Boolean_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_Contains__entry_for_objectFByteN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this, Byte item) {
    __check_this((Void*)__this);
    return Boolean_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_ContainsFByteN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_ByteC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), item);
}
Void Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_CopyTo__entry_for_objectFByteAY__Int32N_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this, System_ByteAY* array, Int32 arrayIndex) {
    __check_this((Void*)__this);
    Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_CopyToFByteAY__Int32N_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_ByteC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), array, arrayIndex);
    return ;
}
Boolean Boolean_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_Remove__entry_for_objectFByteN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this, Byte item) {
    __check_this((Void*)__this);
    return Boolean_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_RemoveFByteN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_ByteC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))), item);
}
System_Collections_Generic_IEnumeratorGSystem_ByteC* System_Collections_Generic_IEnumeratorGSystem_ByteC_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IEnumerableGSystem_ByteC_GetEnumerator__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this) {
    __check_this((Void*)__this);
    return System_Collections_Generic_IEnumeratorGSystem_ByteC_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IEnumerableGSystem_ByteC_GetEnumeratorFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_ByteC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
}
System_Collections_IEnumerator* System_Collections_IEnumerator_System_ArraySegmentGSystem_ByteC_System_Collections_IEnumerable_GetEnumerator__entry_for_objectFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC* __this) {
    __check_this((Void*)__this);
    return System_Collections_IEnumerator_System_ArraySegmentGSystem_ByteC_System_Collections_IEnumerable_GetEnumeratorFN_HelloWorld_r00iaxum_dll((System_ArraySegmentGSystem_ByteC__struct_data*) (((Byte*) ((Byte*) (__this)) + sizeof(Void*))));
}
System_Object* System_Object_System_Collections_Generic_IEnumeratorGSystem_ByteC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_Collections_Generic_IEnumeratorGSystem_ByteC* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_IDisposable__sgettypeFN() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_IDisposable*) (__this)));
a20:
    if ((Byte*)System_Type_System_Collections_IEnumerator__sgettypeFN() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerator*) __new_interface((Void*)(__this)->__this, (Void**)(Void**) &((__this)->__vtbl->ifce_System_Collections_IEnumerator))));
a40:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[26]; } _s61983582617_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 24, { 73, 69, 110, 117, 109, 101, 114, 97, 116, 111, 114, 60, 83, 121, 115, 116, 101, 109, 46, 66, 121, 116, 101, 62, 0, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[52]; } _s82734381865_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 51, { 83, 121, 115, 116, 101, 109, 46, 67, 111, 108, 108, 101, 99, 116, 105, 111, 110, 115, 46, 71, 101, 110, 101, 114, 105, 99, 46, 73, 69, 110, 117, 109, 101, 114, 97, 116, 111, 114, 60, 83, 121, 115, 116, 101, 109, 46, 66, 121, 116, 101, 62, 0 } };

System_Type* System_Type_System_Collections_Generic_IEnumeratorGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_Collections_Generic_IEnumeratorGSystem_ByteC__type_HelloWorld_r00iaxum_dll) goto a60;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_Collections_Generic_IEnumeratorGSystem_ByteC__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_Collections_Generic_IEnumeratorGSystem_ByteC__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s61983582617_);
    (local0)->fullname = ((System_String*) &_s82734381865_);
    (local0)->attributeFlags = 32;
a60:
    return System_Collections_Generic_IEnumeratorGSystem_ByteC__type_HelloWorld_r00iaxum_dll;
}
Void Void_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__ctorFSystem_ArraySegmentGSystem_ByteCN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator* __this, System_ArraySegmentGSystem_ByteC__struct_data arraySegment) {
    __check_this((Void*)__this);
    Void_System_Object__ctorFN((System_Object*) (__this));
    (__this)->_array = (&arraySegment)->_array;
    (__this)->_start = (&arraySegment)->_offset;
    (__this)->_end = ((__this)->_start + (&arraySegment)->_count);
    (__this)->_current = ((__this)->_start - 1);
    return ;
}
Boolean Boolean_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator_MoveNextFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator* __this) {
    System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator* _dup15;
    __check_this((Void*)__this);
    if ((__this)->_current >= (__this)->_end) goto a43;
    _dup15 = __this;
    ;
    (_dup15)->_current = ((_dup15)->_current + 1);
    return ((__this)->_current < (__this)->_end);
a43:
    return 0;
}

Byte Byte_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator_get_CurrentFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    if ((__this)->_current >= (__this)->_start) goto a30;
    System_InvalidOperationException* _new24;
    _new24 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new24, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790699433979637350_)));
    throw (Void*) _new24;
a30:
    if ((__this)->_current < (__this)->_end) goto a60;
    System_InvalidOperationException* _new54;
    _new54 = System_InvalidOperationException_System_InvalidOperationException__newFN();
    Void_System_InvalidOperationException__ctorFSystem_StringN(_new54, System_String_System_Environment_GetResourceStringFSystem_StringN(((System_String*) &_s18790700072471947324_)));
    throw (Void*) _new54;
a60:
    return ((__this)->_array)->data[(__this)->_current];
}
System_Object* System_Object_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator_System_Collections_IEnumerator_get_CurrentFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    return (System_Object*) (System_Byte_System_Byte__boxFByteN(Byte_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator_get_CurrentFN_HelloWorld_r00iaxum_dll(__this)));
}
Void Void_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator_System_Collections_IEnumerator_ResetFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    (__this)->_current = ((__this)->_start - 1);
    return ;
}
Void Void_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator_DisposeFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    return ;
}
System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator* System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__newFN_HelloWorld_r00iaxum_dll() {
    UInt32 _dup6;
    Void* _dup26;
    System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator* _dup40;
a6:
    _dup6 = sizeof(System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator);
    ;
    if ((UInt32)_dup6 >= (UInt32)102400) goto a21;
    Void* _phi14;
    _phi14 = GC_MALLOC(_dup6);
    goto a26;
a21:
    _phi14 = GC_MALLOC_IGNORE_OFF_PAGE((Int32) (_dup6));
a26:
    _dup26 = _phi14;
    ;
    if (_dup26) goto a35;
    System_OutOfMemoryException* _new29;
    _new29 = System_OutOfMemoryException_System_OutOfMemoryException__newFN();
    Void_System_OutOfMemoryException__ctorFN(_new29);
    throw (Void*) _new29;
a35:
    _dup40 = (System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator*) (_dup26);
    ;
    Void_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__initFN_HelloWorld_r00iaxum_dll(_dup40);
    return _dup40;
}
Void Void_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__initFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    ((System_Object*) (__this))->__vtbl = (Void**) &System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator_vtable_implHelloWorld_r00iaxum_dll;
    return ;
}
Int32 Int32_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__getsizeFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    return (Int32) (sizeof(System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator));
}
System_Type* System_Type_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__gettypeFN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator* __this) {
    __check_this((Void*)__this);
    return System_Type_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__sgettypeFN_HelloWorld_r00iaxum_dll();
}
System_Object* System_Object_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll(System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator* __this, System_Type* _type) {
    __check_this((Void*)__this);
    if ((Byte*)System_Type_System_Collections_Generic_IEnumeratorGSystem_ByteC__sgettypeFN_HelloWorld_r00iaxum_dll() != (Byte*)_type) goto a20;
    return (System_Object*) ((Void*) ((System_Collections_Generic_IEnumeratorGSystem_ByteC*) __new_interface((Void*)__this, (Void**)((System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__vtbl*) __this->base.__vtbl)->ifce_System_Collections_Generic_IEnumeratorGSystem_ByteC)));
a20:
    if ((Byte*)System_Type_System_IDisposable__sgettypeFN() != (Byte*)_type) goto a40;
    return (System_Object*) ((Void*) ((System_IDisposable*) __new_interface((Void*)__this, (Void**)&((System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__vtbl*) __this->base.__vtbl)->ifce_System_Collections_Generic_IEnumeratorGSystem_ByteC->ifce_System_IDisposable)));
a40:
    if ((Byte*)System_Type_System_Collections_IEnumerator__sgettypeFN() != (Byte*)_type) goto a60;
    return (System_Object*) ((Void*) ((System_Collections_IEnumerator*) __new_interface((Void*)__this, (Void**)&((System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__vtbl*) __this->base.__vtbl)->ifce_System_Collections_Generic_IEnumeratorGSystem_ByteC->ifce_System_Collections_IEnumerator)));
a60:
    return (System_Object*) (0/*null*/);
}
static const struct { Byte* vtable;Int32 len; Char data[56]; } _s82079345635_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 55, { 83, 121, 115, 116, 101, 109, 46, 65, 114, 114, 97, 121, 83, 101, 103, 109, 101, 110, 116, 60, 83, 121, 115, 116, 101, 109, 46, 66, 121, 116, 101, 62, 46, 65, 114, 114, 97, 121, 83, 101, 103, 109, 101, 110, 116, 69, 110, 117, 109, 101, 114, 97, 116, 111, 114, 0 } };

System_Type* System_Type_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__sgettypeFN_HelloWorld_r00iaxum_dll() {
    System_NativeType* local0;
    if (System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__type_HelloWorld_r00iaxum_dll) goto a75;
    // pop
    System_Object_System_Threading_Interlocked_CompareExchangeFRef_System_ObjectR__System_Object__System_ObjectN((System_Object**) (&System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__type_HelloWorld_r00iaxum_dll), (System_Object*) (System_NativeType_System_NativeType__newFN()), (System_Object*) (0/*null*/));
    local0 = ((System_NativeType*)System_Object_System_Object__castFSystem_Object__System_TypeN((System_Object*) (System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__type_HelloWorld_r00iaxum_dll), System_Type_System_NativeType__sgettypeFN()));
    (local0)->name = ((System_String*) &_s6655898870_);
    (local0)->fullname = ((System_String*) &_s82079345635_);
    (local0)->baseType = System_Type_System_Object__sgettypeFN();
    (local0)->attributeFlags = 0;
a75:
    return System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__type_HelloWorld_r00iaxum_dll;
}
const Void* HelloWorld_vtable_impl[] = {
    (Void*) &System_String_System_Object_ToStringFN,
    (Void*) &Boolean_System_Object_EqualsFSystem_ObjectN,
    (Void*) &Int32_System_Object_GetHashCodeFN,
    (Void*) &Void_System_Object_FinalizeFN,
    (Void*) &Int32_HelloWorld__getsizeFN,
    (Void*) &System_Type_HelloWorld__gettypeFN,
    (Void*) &System_Object_HelloWorld__dynifaceFSystem_TypeN
};
const Void* System_StringAY_vtable_System_Collections_Generic_IListGSystem_StringC_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_Collections_IEnumerator_System_Array_GetEnumeratorFN,
    (Void*) &System_Object_System_StringAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Collections_Generic_IEnumeratorGSystem_StringC_System_StringAY_GetEnumeratorFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_StringAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_StringAY_get_CountFN_HelloWorld_r00iaxum_dll,
    (Void*) &Boolean_System_Array_get_IsReadOnlyFN,
    (Void*) &__pure_virtual,
    (Void*) &__pure_virtual,
    (Void*) &__pure_virtual,
    (Void*) &Void_System_StringAY_CopyToFSystem_StringAY__Int32N_HelloWorld_r00iaxum_dll,
    (Void*) &__pure_virtual,
    (Void*) &System_Object_System_StringAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_String_System_StringAY_get_ItemFInt32N_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_StringAY_set_ItemFInt32__System_StringN_HelloWorld_r00iaxum_dll,
    (Void*) &__pure_virtual,
    (Void*) &__pure_virtual,
    (Void*) &__pure_virtual,
    (Void*) &System_Object_System_StringAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_StringAY_vtable_System_Collections_Generic_IReadOnlyListGSystem_StringC_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_Collections_IEnumerator_System_Array_GetEnumeratorFN,
    (Void*) &System_Object_System_StringAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Collections_Generic_IEnumeratorGSystem_StringC_System_StringAY_GetEnumeratorFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_StringAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_StringAY_get_CountFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_StringAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_String_System_StringAY_get_ItemFInt32N_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_StringAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_StringAY_vtable_System_ICloneable_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_Object_System_Array_CloneFN,
    (Void*) &System_Object_System_StringAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_StringAY_vtable_System_Collections_IList_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_Collections_IEnumerator_System_Array_GetEnumeratorFN,
    (Void*) &System_Object_System_StringAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_Array_CopyToFSystem_Array__Int32N,
    (Void*) &Int32_System_Array_System_Collections_ICollection_get_CountFN,
    (Void*) &System_Object_System_Array_get_SyncRootFN,
    (Void*) &Boolean_System_Array_get_IsSynchronizedFN,
    (Void*) &System_Object_System_StringAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_Array_System_Collections_IList_get_ItemFInt32N,
    (Void*) &Void_System_Array_System_Collections_IList_set_ItemFInt32__System_ObjectN,
    (Void*) &Int32_System_Array_System_Collections_IList_AddFSystem_ObjectN,
    (Void*) &Boolean_System_Array_System_Collections_IList_ContainsFSystem_ObjectN,
    (Void*) &Void_System_Array_System_Collections_IList_ClearFN,
    (Void*) &Boolean_System_Array_get_IsReadOnlyFN,
    (Void*) &Boolean_System_Array_get_IsFixedSizeFN,
    (Void*) &Int32_System_Array_System_Collections_IList_IndexOfFSystem_ObjectN,
    (Void*) &Void_System_Array_System_Collections_IList_InsertFInt32__System_ObjectN,
    (Void*) &Void_System_Array_System_Collections_IList_RemoveFSystem_ObjectN,
    (Void*) &Void_System_Array_System_Collections_IList_RemoveAtFInt32N,
    (Void*) &System_Object_System_StringAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_StringAY_vtable_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_String_System_Object_ToStringFN,
    (Void*) &Boolean_System_Object_EqualsFSystem_ObjectN,
    (Void*) &Int32_System_Object_GetHashCodeFN,
    (Void*) &Void_System_Object_FinalizeFN,
    (Void*) &Int32_System_StringAY__getsizeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Type_System_StringAY__gettypeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_StringAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_StringAY_vtable_System_ICloneable_interface_implHelloWorld_r00iaxum_dll,
    (Void*) &System_StringAY_vtable_System_Collections_IList_interface_implHelloWorld_r00iaxum_dll,
    (Void*) &System_StringAY_vtable_System_Collections_Generic_IListGSystem_StringC_interface_implHelloWorld_r00iaxum_dll,
    (Void*) &System_StringAY_vtable_System_Collections_Generic_IReadOnlyListGSystem_StringC_interface_implHelloWorld_r00iaxum_dll
};
const Void* System_ArraySegmentGSystem_StringC_vtable_System_Collections_Generic_IListGSystem_StringC_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_Collections_IEnumerator_System_ArraySegmentGSystem_StringC_System_Collections_IEnumerable_GetEnumerator__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_StringC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Collections_Generic_IEnumeratorGSystem_StringC_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IEnumerableGSystem_StringC_GetEnumerator__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_StringC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_ArraySegmentGSystem_StringC_get_Count__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &Boolean_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_get_IsReadOnly__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_Add__entry_for_objectFSystem_StringN_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_Clear__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &Boolean_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_Contains__entry_for_objectFSystem_StringN_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_CopyTo__entry_for_objectFSystem_StringAY__Int32N_HelloWorld_r00iaxum_dll,
    (Void*) &Boolean_System_ArraySegmentGSystem_StringC_System_Collections_Generic_ICollectionGSystem_StringC_Remove__entry_for_objectFSystem_StringN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_StringC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_String_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IListGSystem_StringC_get_Item__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IListGSystem_StringC_set_Item__entry_for_objectFInt32__System_StringN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IListGSystem_StringC_IndexOf__entry_for_objectFSystem_StringN_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IListGSystem_StringC_Insert__entry_for_objectFInt32__System_StringN_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IListGSystem_StringC_RemoveAt__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_StringC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_ArraySegmentGSystem_StringC_vtable_System_Collections_Generic_IReadOnlyListGSystem_StringC_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_Collections_IEnumerator_System_ArraySegmentGSystem_StringC_System_Collections_IEnumerable_GetEnumerator__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_StringC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Collections_Generic_IEnumeratorGSystem_StringC_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IEnumerableGSystem_StringC_GetEnumerator__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_StringC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_ArraySegmentGSystem_StringC_get_Count__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_StringC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_String_System_ArraySegmentGSystem_StringC_System_Collections_Generic_IReadOnlyListGSystem_StringC_get_Item__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_StringC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_ArraySegmentGSystem_StringC_vtable_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_String_System_Object_ToStringFN,
    (Void*) &Boolean_System_ArraySegmentGSystem_StringC_Equals__entry_for_objectFSystem_ObjectN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_ArraySegmentGSystem_StringC_GetHashCode__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_Object_FinalizeFN,
    (Void*) &Int32_System_ArraySegmentGSystem_StringC__getsizeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Type_System_ArraySegmentGSystem_StringC__gettypeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_StringC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_ArraySegmentGSystem_StringC_vtable_System_Collections_Generic_IListGSystem_StringC_interface_implHelloWorld_r00iaxum_dll,
    (Void*) &System_ArraySegmentGSystem_StringC_vtable_System_Collections_Generic_IReadOnlyListGSystem_StringC_interface_implHelloWorld_r00iaxum_dll
};
const Void* System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator_vtable_System_Collections_Generic_IEnumeratorGSystem_StringC_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &Void_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator_DisposeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Boolean_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator_MoveNextFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator_System_Collections_IEnumerator_get_CurrentFN_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator_System_Collections_IEnumerator_ResetFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_String_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator_get_CurrentFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator_vtable_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_String_System_Object_ToStringFN,
    (Void*) &Boolean_System_Object_EqualsFSystem_ObjectN,
    (Void*) &Int32_System_Object_GetHashCodeFN,
    (Void*) &Void_System_Object_FinalizeFN,
    (Void*) &Int32_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__getsizeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Type_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__gettypeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_ArraySegmentGSystem_StringC_ArraySegmentEnumerator_vtable_System_Collections_Generic_IEnumeratorGSystem_StringC_interface_implHelloWorld_r00iaxum_dll
};
const Void* System_Int32AY_vtable_System_Collections_Generic_IListGSystem_Int32C_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_Collections_IEnumerator_System_Array_GetEnumeratorFN,
    (Void*) &System_Object_System_Int32AY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Collections_Generic_IEnumeratorGSystem_Int32C_System_Int32AY_GetEnumeratorFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_Int32AY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_Int32AY_get_CountFN_HelloWorld_r00iaxum_dll,
    (Void*) &Boolean_System_Array_get_IsReadOnlyFN,
    (Void*) &__pure_virtual,
    (Void*) &__pure_virtual,
    (Void*) &__pure_virtual,
    (Void*) &Void_System_Int32AY_CopyToFInt32AY__Int32N_HelloWorld_r00iaxum_dll,
    (Void*) &__pure_virtual,
    (Void*) &System_Object_System_Int32AY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_Int32AY_get_ItemFInt32N_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_Int32AY_set_ItemFInt32__Int32N_HelloWorld_r00iaxum_dll,
    (Void*) &__pure_virtual,
    (Void*) &__pure_virtual,
    (Void*) &__pure_virtual,
    (Void*) &System_Object_System_Int32AY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_Int32AY_vtable_System_Collections_Generic_IReadOnlyListGSystem_Int32C_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_Collections_IEnumerator_System_Array_GetEnumeratorFN,
    (Void*) &System_Object_System_Int32AY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Collections_Generic_IEnumeratorGSystem_Int32C_System_Int32AY_GetEnumeratorFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_Int32AY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_Int32AY_get_CountFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_Int32AY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_Int32AY_get_ItemFInt32N_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_Int32AY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_Int32AY_vtable_System_ICloneable_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_Object_System_Array_CloneFN,
    (Void*) &System_Object_System_Int32AY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_Int32AY_vtable_System_Collections_IList_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_Collections_IEnumerator_System_Array_GetEnumeratorFN,
    (Void*) &System_Object_System_Int32AY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_Array_CopyToFSystem_Array__Int32N,
    (Void*) &Int32_System_Array_System_Collections_ICollection_get_CountFN,
    (Void*) &System_Object_System_Array_get_SyncRootFN,
    (Void*) &Boolean_System_Array_get_IsSynchronizedFN,
    (Void*) &System_Object_System_Int32AY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_Array_System_Collections_IList_get_ItemFInt32N,
    (Void*) &Void_System_Array_System_Collections_IList_set_ItemFInt32__System_ObjectN,
    (Void*) &Int32_System_Array_System_Collections_IList_AddFSystem_ObjectN,
    (Void*) &Boolean_System_Array_System_Collections_IList_ContainsFSystem_ObjectN,
    (Void*) &Void_System_Array_System_Collections_IList_ClearFN,
    (Void*) &Boolean_System_Array_get_IsReadOnlyFN,
    (Void*) &Boolean_System_Array_get_IsFixedSizeFN,
    (Void*) &Int32_System_Array_System_Collections_IList_IndexOfFSystem_ObjectN,
    (Void*) &Void_System_Array_System_Collections_IList_InsertFInt32__System_ObjectN,
    (Void*) &Void_System_Array_System_Collections_IList_RemoveFSystem_ObjectN,
    (Void*) &Void_System_Array_System_Collections_IList_RemoveAtFInt32N,
    (Void*) &System_Object_System_Int32AY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_Int32AY_vtable_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_String_System_Object_ToStringFN,
    (Void*) &Boolean_System_Object_EqualsFSystem_ObjectN,
    (Void*) &Int32_System_Object_GetHashCodeFN,
    (Void*) &Void_System_Object_FinalizeFN,
    (Void*) &Int32_System_Int32AY__getsizeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Type_System_Int32AY__gettypeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_Int32AY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Int32AY_vtable_System_ICloneable_interface_implHelloWorld_r00iaxum_dll,
    (Void*) &System_Int32AY_vtable_System_Collections_IList_interface_implHelloWorld_r00iaxum_dll,
    (Void*) &System_Int32AY_vtable_System_Collections_Generic_IListGSystem_Int32C_interface_implHelloWorld_r00iaxum_dll,
    (Void*) &System_Int32AY_vtable_System_Collections_Generic_IReadOnlyListGSystem_Int32C_interface_implHelloWorld_r00iaxum_dll
};
const Void* System_ByteAY_vtable_System_Collections_Generic_IListGSystem_ByteC_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_Collections_IEnumerator_System_Array_GetEnumeratorFN,
    (Void*) &System_Object_System_ByteAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Collections_Generic_IEnumeratorGSystem_ByteC_System_ByteAY_GetEnumeratorFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ByteAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_ByteAY_get_CountFN_HelloWorld_r00iaxum_dll,
    (Void*) &Boolean_System_Array_get_IsReadOnlyFN,
    (Void*) &__pure_virtual,
    (Void*) &__pure_virtual,
    (Void*) &__pure_virtual,
    (Void*) &Void_System_ByteAY_CopyToFByteAY__Int32N_HelloWorld_r00iaxum_dll,
    (Void*) &__pure_virtual,
    (Void*) &System_Object_System_ByteAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Byte_System_ByteAY_get_ItemFInt32N_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ByteAY_set_ItemFInt32__ByteN_HelloWorld_r00iaxum_dll,
    (Void*) &__pure_virtual,
    (Void*) &__pure_virtual,
    (Void*) &__pure_virtual,
    (Void*) &System_Object_System_ByteAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_ByteAY_vtable_System_Collections_Generic_IReadOnlyListGSystem_ByteC_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_Collections_IEnumerator_System_Array_GetEnumeratorFN,
    (Void*) &System_Object_System_ByteAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Collections_Generic_IEnumeratorGSystem_ByteC_System_ByteAY_GetEnumeratorFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ByteAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_ByteAY_get_CountFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ByteAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Byte_System_ByteAY_get_ItemFInt32N_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ByteAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_ByteAY_vtable_System_ICloneable_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_Object_System_Array_CloneFN,
    (Void*) &System_Object_System_ByteAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_ByteAY_vtable_System_Collections_IList_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_Collections_IEnumerator_System_Array_GetEnumeratorFN,
    (Void*) &System_Object_System_ByteAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_Array_CopyToFSystem_Array__Int32N,
    (Void*) &Int32_System_Array_System_Collections_ICollection_get_CountFN,
    (Void*) &System_Object_System_Array_get_SyncRootFN,
    (Void*) &Boolean_System_Array_get_IsSynchronizedFN,
    (Void*) &System_Object_System_ByteAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_Array_System_Collections_IList_get_ItemFInt32N,
    (Void*) &Void_System_Array_System_Collections_IList_set_ItemFInt32__System_ObjectN,
    (Void*) &Int32_System_Array_System_Collections_IList_AddFSystem_ObjectN,
    (Void*) &Boolean_System_Array_System_Collections_IList_ContainsFSystem_ObjectN,
    (Void*) &Void_System_Array_System_Collections_IList_ClearFN,
    (Void*) &Boolean_System_Array_get_IsReadOnlyFN,
    (Void*) &Boolean_System_Array_get_IsFixedSizeFN,
    (Void*) &Int32_System_Array_System_Collections_IList_IndexOfFSystem_ObjectN,
    (Void*) &Void_System_Array_System_Collections_IList_InsertFInt32__System_ObjectN,
    (Void*) &Void_System_Array_System_Collections_IList_RemoveFSystem_ObjectN,
    (Void*) &Void_System_Array_System_Collections_IList_RemoveAtFInt32N,
    (Void*) &System_Object_System_ByteAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_ByteAY_vtable_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_String_System_Object_ToStringFN,
    (Void*) &Boolean_System_Object_EqualsFSystem_ObjectN,
    (Void*) &Int32_System_Object_GetHashCodeFN,
    (Void*) &Void_System_Object_FinalizeFN,
    (Void*) &Int32_System_ByteAY__getsizeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Type_System_ByteAY__gettypeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ByteAY__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_ByteAY_vtable_System_ICloneable_interface_implHelloWorld_r00iaxum_dll,
    (Void*) &System_ByteAY_vtable_System_Collections_IList_interface_implHelloWorld_r00iaxum_dll,
    (Void*) &System_ByteAY_vtable_System_Collections_Generic_IListGSystem_ByteC_interface_implHelloWorld_r00iaxum_dll,
    (Void*) &System_ByteAY_vtable_System_Collections_Generic_IReadOnlyListGSystem_ByteC_interface_implHelloWorld_r00iaxum_dll
};
const Void* System_ArraySegmentGSystem_Int32C_vtable_System_Collections_Generic_IListGSystem_Int32C_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_Collections_IEnumerator_System_ArraySegmentGSystem_Int32C_System_Collections_IEnumerable_GetEnumerator__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_Int32C__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Collections_Generic_IEnumeratorGSystem_Int32C_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IEnumerableGSystem_Int32C_GetEnumerator__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_Int32C__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_ArraySegmentGSystem_Int32C_get_Count__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &Boolean_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_get_IsReadOnly__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_Add__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_Clear__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &Boolean_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_Contains__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_CopyTo__entry_for_objectFInt32AY__Int32N_HelloWorld_r00iaxum_dll,
    (Void*) &Boolean_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_ICollectionGSystem_Int32C_Remove__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_Int32C__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IListGSystem_Int32C_get_Item__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IListGSystem_Int32C_set_Item__entry_for_objectFInt32__Int32N_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IListGSystem_Int32C_IndexOf__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IListGSystem_Int32C_Insert__entry_for_objectFInt32__Int32N_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IListGSystem_Int32C_RemoveAt__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_Int32C__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_ArraySegmentGSystem_Int32C_vtable_System_Collections_Generic_IReadOnlyListGSystem_Int32C_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_Collections_IEnumerator_System_ArraySegmentGSystem_Int32C_System_Collections_IEnumerable_GetEnumerator__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_Int32C__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Collections_Generic_IEnumeratorGSystem_Int32C_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IEnumerableGSystem_Int32C_GetEnumerator__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_Int32C__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_ArraySegmentGSystem_Int32C_get_Count__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_Int32C__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_ArraySegmentGSystem_Int32C_System_Collections_Generic_IReadOnlyListGSystem_Int32C_get_Item__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_Int32C__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_ArraySegmentGSystem_Int32C_vtable_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_String_System_Object_ToStringFN,
    (Void*) &Boolean_System_ArraySegmentGSystem_Int32C_Equals__entry_for_objectFSystem_ObjectN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_ArraySegmentGSystem_Int32C_GetHashCode__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_Object_FinalizeFN,
    (Void*) &Int32_System_ArraySegmentGSystem_Int32C__getsizeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Type_System_ArraySegmentGSystem_Int32C__gettypeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_Int32C__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_ArraySegmentGSystem_Int32C_vtable_System_Collections_Generic_IListGSystem_Int32C_interface_implHelloWorld_r00iaxum_dll,
    (Void*) &System_ArraySegmentGSystem_Int32C_vtable_System_Collections_Generic_IReadOnlyListGSystem_Int32C_interface_implHelloWorld_r00iaxum_dll
};
const Void* System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator_vtable_System_Collections_Generic_IEnumeratorGSystem_Int32C_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &Void_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator_DisposeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Boolean_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator_MoveNextFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator_System_Collections_IEnumerator_get_CurrentFN_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator_System_Collections_IEnumerator_ResetFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator_get_CurrentFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator_vtable_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_String_System_Object_ToStringFN,
    (Void*) &Boolean_System_Object_EqualsFSystem_ObjectN,
    (Void*) &Int32_System_Object_GetHashCodeFN,
    (Void*) &Void_System_Object_FinalizeFN,
    (Void*) &Int32_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__getsizeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Type_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__gettypeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_ArraySegmentGSystem_Int32C_ArraySegmentEnumerator_vtable_System_Collections_Generic_IEnumeratorGSystem_Int32C_interface_implHelloWorld_r00iaxum_dll
};
const Void* System_ArraySegmentGSystem_ByteC_vtable_System_Collections_Generic_IListGSystem_ByteC_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_Collections_IEnumerator_System_ArraySegmentGSystem_ByteC_System_Collections_IEnumerable_GetEnumerator__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_ByteC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Collections_Generic_IEnumeratorGSystem_ByteC_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IEnumerableGSystem_ByteC_GetEnumerator__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_ByteC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_ArraySegmentGSystem_ByteC_get_Count__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &Boolean_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_get_IsReadOnly__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_Add__entry_for_objectFByteN_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_Clear__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &Boolean_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_Contains__entry_for_objectFByteN_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_CopyTo__entry_for_objectFByteAY__Int32N_HelloWorld_r00iaxum_dll,
    (Void*) &Boolean_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_ICollectionGSystem_ByteC_Remove__entry_for_objectFByteN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_ByteC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Byte_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IListGSystem_ByteC_get_Item__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IListGSystem_ByteC_set_Item__entry_for_objectFInt32__ByteN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IListGSystem_ByteC_IndexOf__entry_for_objectFByteN_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IListGSystem_ByteC_Insert__entry_for_objectFInt32__ByteN_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IListGSystem_ByteC_RemoveAt__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_ByteC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_ArraySegmentGSystem_ByteC_vtable_System_Collections_Generic_IReadOnlyListGSystem_ByteC_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_Collections_IEnumerator_System_ArraySegmentGSystem_ByteC_System_Collections_IEnumerable_GetEnumerator__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_ByteC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Collections_Generic_IEnumeratorGSystem_ByteC_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IEnumerableGSystem_ByteC_GetEnumerator__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_ByteC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_ArraySegmentGSystem_ByteC_get_Count__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_ByteC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Byte_System_ArraySegmentGSystem_ByteC_System_Collections_Generic_IReadOnlyListGSystem_ByteC_get_Item__entry_for_objectFInt32N_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_ByteC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_ArraySegmentGSystem_ByteC_vtable_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_String_System_Object_ToStringFN,
    (Void*) &Boolean_System_ArraySegmentGSystem_ByteC_Equals__entry_for_objectFSystem_ObjectN_HelloWorld_r00iaxum_dll,
    (Void*) &Int32_System_ArraySegmentGSystem_ByteC_GetHashCode__entry_for_objectFN_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_Object_FinalizeFN,
    (Void*) &Int32_System_ArraySegmentGSystem_ByteC__getsizeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Type_System_ArraySegmentGSystem_ByteC__gettypeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_ByteC__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_ArraySegmentGSystem_ByteC_vtable_System_Collections_Generic_IListGSystem_ByteC_interface_implHelloWorld_r00iaxum_dll,
    (Void*) &System_ArraySegmentGSystem_ByteC_vtable_System_Collections_Generic_IReadOnlyListGSystem_ByteC_interface_implHelloWorld_r00iaxum_dll
};
const Void* System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator_vtable_System_Collections_Generic_IEnumeratorGSystem_ByteC_interface_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &Void_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator_DisposeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Boolean_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator_MoveNextFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator_System_Collections_IEnumerator_get_CurrentFN_HelloWorld_r00iaxum_dll,
    (Void*) &Void_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator_System_Collections_IEnumerator_ResetFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &Byte_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator_get_CurrentFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll
};
const Void* System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator_vtable_implHelloWorld_r00iaxum_dll[] = {
    (Void*) &System_String_System_Object_ToStringFN,
    (Void*) &Boolean_System_Object_EqualsFSystem_ObjectN,
    (Void*) &Int32_System_Object_GetHashCodeFN,
    (Void*) &Void_System_Object_FinalizeFN,
    (Void*) &Int32_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__getsizeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Type_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__gettypeFN_HelloWorld_r00iaxum_dll,
    (Void*) &System_Object_System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator__dynifaceFSystem_TypeN_HelloWorld_r00iaxum_dll,
    (Void*) &System_ArraySegmentGSystem_ByteC_ArraySegmentEnumerator_vtable_System_Collections_Generic_IEnumeratorGSystem_ByteC_interface_implHelloWorld_r00iaxum_dll
};

Void _gctors_for_HelloWorld_r00iaxum_dll() {
}
static const struct { Byte* vtable;Int32 len; Char data[30]; } _s93955032137_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 29, { 85, 110, 104, 97, 110, 100, 108, 101, 100, 32, 101, 120, 99, 101, 112, 116, 105, 111, 110, 58, 32, 123, 48, 125, 58, 32, 123, 49, 125, 0 } };
static const struct { Byte* vtable;Int32 len; Char data[8]; } _s133527850108_ = { 
(Byte*) (Void**) &System_String_vtable_impl
, 6, { 60, 110, 111, 110, 101, 62, 0, 0 } };

Int32 main(Int32 count, char** parameters) {
    Int32 local0;
    System_Exception* local1;
    System_StringAY* local2;
    SByte** _dup24;
    System_String* _dup91;
    try
    {
        _gctors_for_CoreLib();
        _gctors_for_HelloWorld_r00iaxum_dll();
        System_StringAY* _newarr11;
        _newarr11 = System_StringAY_System_StringAY__newFInt32N_HelloWorld_r00iaxum_dll(count);
        Void_System_StringAY__ctorFInt32N_HelloWorld_r00iaxum_dll(_newarr11, count);
        local2 = _newarr11;
        local0 = 0;
        goto a45;
    a21:
        System_String* _new35;
        _new35 = System_String_System_String_CtorSBytePtrFSBytePN((*((SByte**)_dup24)));
        (local2)->data[local0] = _new35;
        local0 = (local0 + 1);
    a45:
        if (local0 < count) goto a21;
        Void_System_Environment_set_ExitCodeFInt32N(Int32_HelloWorld_MainFSystem_StringAYN(local2));
        goto a107;
    }
    catch (Void* _ex0)
    {
        System_Exception* _case62;
        if ((_case62 = ((System_Exception*)System_Object_System_Object__dyncastFSystem_Object__System_TypeN((System_Object*) (_ex0), System_Type_System_Exception__sgettypeFN()))) == 0) goto eh62_45;
        Void_System_Environment_set_ExitCodeFInt32N(-1);
        local1 = _case62;
        System_Type* __expr75;
        __expr75 = System_Type_System_Object_GetTypeFN((System_Object*) (local1));
        _dup91 = ((System_Exception__vtbl*) (local1)->base.__vtbl)->System_String_System_Exception_get_MessageFN(local1);
        System_String* _phi91;
        ;
        _phi91 = _dup91;
        if (_dup91) goto a100;
        // pop
        _phi91;
        _phi91 = ((System_String*) &_s133527850108_);
    a100:
        Void_System_Console_WriteLineFSystem_String__System_Object__System_ObjectN(((System_String*) &_s93955032137_), (System_Object*) (((System_Type__vtbl*) (__expr75)->base.base.__vtbl)->System_String_System_Type_get_FullNameFN(__expr75)), (System_Object*) (_phi91));
        goto a107;
    eh62_45:
        throw;
    }
a107:
    return Int32_System_Environment_get_ExitCodeFN();
}
