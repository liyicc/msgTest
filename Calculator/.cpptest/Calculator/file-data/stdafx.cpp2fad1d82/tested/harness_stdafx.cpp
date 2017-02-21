#line 1 "C:\\Users\\ruiking\\Documents\\Visual Studio 2010\\Projects\\Calculator\\Calculator\\stdafx.cpp"

#define CPPTEST_INSTRUMENTATION

#include "cpptest_coverage.h"
#include "cpptest_runtime_i.h"
#include "cpptest_i.h"
#include "C:\Users\ruiking\Documents\Visual Studio 2010\Projects\Calculator\.cpptest\Calculator\unit-data\current_tubf179707\cpptest_stubconfig.h"
#include "C:\Users\ruiking\Documents\Visual Studio 2010\Projects\Calculator\.cpptest\Calculator\unit-data\current_tubf179707\cpptest_stubconfig.h"


struct __CPTR_Dummy_Type {
    char nonEmpty;
};

CppTestTranslationUnitInfo __CPTR_tui_2226130702_5704_1519754277 = 
{
    0U, 
    "C:\\Users\\ruiking\\Documents\\Visual Studio 2010\\Projects\\Calculator\\.cpptest\\Calculator\\file-data\\stdafx.cpp2fad1d82\\tested\\harness_stdafx.ildb"
};

#define __CPTR_tui &__CPTR_tui_2226130702_5704_1519754277



#include "cpptest_runtime_i.h"

#ifdef __cplusplus
extern "C" void __CPTR_Initialize(void);
extern "C" void __CPTR_Finalize(void);

struct __CPTR_Initializer_2226130702_5704_1519754277 {
    __CPTR_Initializer_2226130702_5704_1519754277()
    {
        CPPTEST_INITIALIZE_RUNTIME();
    }
    ~__CPTR_Initializer_2226130702_5704_1519754277()
    {
        CPPTEST_FINALIZE_RUNTIME();
    }
};

#if CPPTEST_USE_GLOBAL_OBJECTS_TO_INIT_RUNTIME
static struct __CPTR_Initializer_2226130702_5704_1519754277 __CPTR_initializer_2226130702_5704_1519754277;
#endif

#define CPPTEST_ENTER_MAIN_ROUTINE() __CPTR_Initializer_2226130702_5704_1519754277 __CPTR_main_initializer

#define CPPTEST_EXIT_MAIN_ROUTINE()

#else
extern void __CPTR_Initialize(void);
extern void __CPTR_Finalize(void);

#define CPPTEST_ENTER_MAIN_ROUTINE() CPPTEST_INITIALIZE_RUNTIME()

#define CPPTEST_EXIT_MAIN_ROUTINE() CPPTEST_FINALIZE_RUNTIME()

#endif


#define _cpptest_strdata_var(id, bogus) _cpptest_strdata[id]
static 
const char* _cpptest_strdata[] = {
    0,
    "",
    0
};


#line 11 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.5\\engine\\runtime\\include\\cpptest_pre.h"
struct CppTest_Dummy_Type { 
char nonEmpty; 
}; 

struct CppTest_Safe_Dummy_Type { 
char nonEmpty; 
}; 

struct CppTest_Auto_Dummy_Type { 
char nonEmpty; 
}; 



typedef CppTest_Dummy_Type &CppTest_Dummy; 
static CppTest_Dummy_Type CppTest_Dummy_InstanceT; 
static CppTest_Dummy CppTest_Dummy_Instance = (CppTest_Dummy_InstanceT); 

typedef CppTest_Safe_Dummy_Type &CppTest_Safe_Dummy; 
static CppTest_Safe_Dummy_Type CppTest_Safe_Dummy_InstanceT; 
static CppTest_Safe_Dummy CppTest_Safe_Dummy_Instance = (CppTest_Safe_Dummy_InstanceT); 

typedef CppTest_Auto_Dummy_Type &CppTest_Auto_Dummy; 
static CppTest_Auto_Dummy_Type CppTest_Auto_Dummy_InstanceT; 
static CppTest_Auto_Dummy CppTest_Auto_Dummy_Instance = (CppTest_Auto_Dummy_InstanceT); 
#line 20 "c:\\Program Files\\Microsoft SDKs\\Windows\\v7.0A\\include\\SDKDDKVer.h"
/* Removed pragma: #pragma warning(push)*/

#pragma warning(disable: 4001) /* Removed pragma: #pragma warning(disable:4001)*/
#line 270
/* Removed pragma: #pragma warning(pop)*/
#line 29 "c:\\Program Files\\Microsoft Visual Studio 10.0\\VC\\include\\codeanalysis\\sourceannotations.h"
typedef unsigned __w64 size_t; 
#line 52
namespace vc_attributes { 



enum YesNoMaybe { 


No = 0xfff0001, 
Maybe = 0xfff0010, 
Yes = 0xfff0100
}; 

typedef YesNoMaybe YesNoMaybe; 

enum AccessType { 

NoAccess, 
Read, 
Write, 
ReadWrite
}; 

typedef AccessType AccessType; 



[repeatable, 
source_annotation_attribute ( Parameter )] 
struct PreAttribute { 


PreAttribute(); 


unsigned Deref; 
YesNoMaybe Valid; 
YesNoMaybe Null; 
YesNoMaybe Tainted; 
AccessType Access; 
size_t ValidElementsConst; 
size_t ValidBytesConst; 
const __wchar_t *ValidElements; 
const __wchar_t *ValidBytes; 
const __wchar_t *ValidElementsLength; 
const __wchar_t *ValidBytesLength; 
size_t WritableElementsConst; 
size_t WritableBytesConst; 
const __wchar_t *WritableElements; 
const __wchar_t *WritableBytes; 
const __wchar_t *WritableElementsLength; 
const __wchar_t *WritableBytesLength; 
size_t ElementSizeConst; 
const __wchar_t *ElementSize; 
YesNoMaybe NullTerminated; 
const __wchar_t *Condition; 
}; 

[repeatable, 
source_annotation_attribute ( Parameter | ReturnValue )] 
struct PostAttribute { 


PostAttribute(); 


unsigned Deref; 
YesNoMaybe Valid; 
YesNoMaybe Null; 
YesNoMaybe Tainted; 
AccessType Access; 
size_t ValidElementsConst; 
size_t ValidBytesConst; 
const __wchar_t *ValidElements; 
const __wchar_t *ValidBytes; 
const __wchar_t *ValidElementsLength; 
const __wchar_t *ValidBytesLength; 
size_t WritableElementsConst; 
size_t WritableBytesConst; 
const __wchar_t *WritableElements; 
const __wchar_t *WritableBytes; 
const __wchar_t *WritableElementsLength; 
const __wchar_t *WritableBytesLength; 
size_t ElementSizeConst; 
const __wchar_t *ElementSize; 
YesNoMaybe NullTerminated; 
YesNoMaybe MustCheck; 
const __wchar_t *Condition; 
}; 

[source_annotation_attribute ( Parameter )] 
struct FormatStringAttribute { 


FormatStringAttribute(); 


const __wchar_t *Style; 
const __wchar_t *UnformattedAlternative; 
}; 

[repeatable, 
source_annotation_attribute ( ReturnValue )] 
struct InvalidCheckAttribute { 


InvalidCheckAttribute(); 


long Value; 
}; 

[source_annotation_attribute ( Method )] 
struct SuccessAttribute { 


SuccessAttribute(); 


const __wchar_t *Condition; 
}; 

[repeatable, 
source_annotation_attribute ( Parameter )] 
struct PreBoundAttribute { 


PreBoundAttribute(); 

unsigned Deref; 
}; 

[repeatable, 
source_annotation_attribute ( Parameter | ReturnValue )] 
struct PostBoundAttribute { 


PostBoundAttribute(); 

unsigned Deref; 
}; 

[repeatable, 
source_annotation_attribute ( Parameter )] 
struct PreRangeAttribute { 


PreRangeAttribute(); 

unsigned Deref; 
const char *MinVal; 
const char *MaxVal; 
}; 

[repeatable, 
source_annotation_attribute ( Parameter | ReturnValue )] 
struct PostRangeAttribute { 


PostRangeAttribute(); 

unsigned Deref; 
const char *MinVal; 
const char *MaxVal; 
}; 




}
#line 244
typedef vc_attributes::YesNoMaybe SA_YesNoMaybe; 
const vc_attributes::YesNoMaybe SA_Yes = vc_attributes::Yes; 
const vc_attributes::YesNoMaybe SA_No = vc_attributes::No; 
const vc_attributes::YesNoMaybe SA_Maybe = vc_attributes::Maybe; 

typedef vc_attributes::AccessType SA_AccessType; 
const vc_attributes::AccessType SA_NoAccess = vc_attributes::NoAccess; 
const vc_attributes::AccessType SA_Read = vc_attributes::Read; 
const vc_attributes::AccessType SA_Write = vc_attributes::Write; 
const vc_attributes::AccessType SA_ReadWrite = vc_attributes::ReadWrite; 


typedef vc_attributes::PreAttribute SA_Pre; 
typedef vc_attributes::PostAttribute SA_Post; 
typedef vc_attributes::FormatStringAttribute SA_FormatString; 
typedef vc_attributes::InvalidCheckAttribute SA_InvalidCheck; 
typedef vc_attributes::SuccessAttribute SA_Success; 
typedef vc_attributes::PreBoundAttribute SA_PreBound; 
typedef vc_attributes::PostBoundAttribute SA_PostBound; 
typedef vc_attributes::PreRangeAttribute SA_PreRange; 
typedef vc_attributes::PostRangeAttribute SA_PostRange; 
#line 61 "c:\\Program Files\\Microsoft Visual Studio 10.0\\VC\\include\\crtdefs.h"
#pragma pack ( push, 8 )
#line 29 "c:\\Program Files\\Microsoft Visual Studio 10.0\\VC\\include\\vadefs.h"
#pragma pack ( push, 8 )
#line 48
extern "C" { typedef unsigned __w64 uintptr_t; }
#line 57
extern "C" { typedef char *va_list; }
#line 146
#pragma pack ( pop )
#line 409 "c:\\Program Files\\Microsoft Visual Studio 10.0\\VC\\include\\crtdefs.h"
extern "C" { typedef size_t rsize_t; }
#line 418
extern "C" { typedef int __w64 intptr_t; }
#line 436
extern "C" { typedef int __w64 ptrdiff_t; }
#line 447
extern "C" { typedef unsigned short wint_t; }
extern "C" { typedef unsigned short wctype_t; }
#line 469
extern "C" { typedef int errno_t; }



extern "C" { typedef long __w64 __time32_t; }




extern "C" { typedef __int64 __time64_t; }
#line 486
extern "C" { typedef __time64_t time_t; }
#line 543
extern "C" { __declspec(dllimport) void __cdecl _invalid_parameter(const __wchar_t *, const __wchar_t *, const __wchar_t *, unsigned, uintptr_t); } 
#line 550
extern "C" { __declspec(dllimport) __declspec(noreturn) void __cdecl _invoke_watson(const __wchar_t *, const __wchar_t *, const __wchar_t *, unsigned, uintptr_t); } 
#line 1953
struct threadlocaleinfostruct; 
struct threadmbcinfostruct; 
extern "C" { typedef threadlocaleinfostruct *pthreadlocinfo; }
extern "C" { typedef threadmbcinfostruct *pthreadmbcinfo; }
struct __lc_time_data; 
#line 1963
extern "C" { typedef 
#line 1959
struct localeinfo_struct { 

pthreadlocinfo locinfo; 
pthreadmbcinfo mbcinfo; 
} _locale_tstruct, *_locale_t; }
#line 1970
extern "C" { typedef 
#line 1966
struct tagLC_ID { 
unsigned short wLanguage; 
unsigned short wCountry; 
unsigned short wCodePage; 
} LC_ID, *LPLC_ID; }
#line 1999
extern "C" { typedef 
#line 1975
struct threadlocaleinfostruct { 
int refcount; 
unsigned lc_codepage; 
unsigned lc_collate_cp; 
unsigned long lc_handle[6]; 
LC_ID lc_id[6]; 
struct { 
char *locale; 
__wchar_t *wlocale; 
int *refcount; 
int *wrefcount; 
} lc_category[6]; 
int lc_clike; 
int mb_cur_max; 
int *lconv_intl_refcount; 
int *lconv_num_refcount; 
int *lconv_mon_refcount; 
struct lconv *lconv; 
int *ctype1_refcount; 
unsigned short *ctype1; 
const unsigned short *pctype; 
const unsigned char *pclmap; 
const unsigned char *pcumap; 
__lc_time_data *lc_time_curr; 
} threadlocinfo; }
#line 2036
#pragma pack ( pop )
#line 26 "c:\\Program Files\\Microsoft Visual Studio 10.0\\VC\\include\\stdio.h"
#pragma pack ( push, 8 )
#line 56
extern "C" { struct _iobuf { 
char *_ptr; 
int _cnt; 
char *_base; 
int _flag; 
int _file; 
int _charbuf; 
int _bufsiz; 
char *_tmpfname; 
}; }
extern "C" { typedef _iobuf FILE; }
#line 129
extern "C" { __declspec(dllimport) FILE *__cdecl __iob_func(); } 
#line 145
extern "C" { typedef __int64 fpos_t; }
#line 186
extern "C" { __declspec(dllimport) int __cdecl _filbuf(FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl _flsbuf(int _Ch, FILE * _File); } 




extern "C" { __declspec(dllimport) FILE *__cdecl _fsopen(const char * _Filename, const char * _Mode, int _ShFlag); } 


extern "C" { __declspec(dllimport) void __cdecl clearerr(FILE * _File); } 

extern "C" { __declspec(dllimport) errno_t __cdecl clearerr_s(FILE * _File); } 

extern "C" { __declspec(dllimport) int __cdecl fclose(FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl _fcloseall(); } 




extern "C" { __declspec(dllimport) FILE *__cdecl _fdopen(int _FileHandle, const char * _Mode); } 


extern "C" { __declspec(dllimport) int __cdecl feof(FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl ferror(FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl fflush(FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl fgetc(FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl _fgetchar(); } 
extern "C" { __declspec(dllimport) int __cdecl fgetpos(FILE * _File, fpos_t * _Pos); } 
extern "C" { __declspec(dllimport) char *__cdecl fgets(char * _Buf, int _MaxCount, FILE * _File); } 




extern "C" { __declspec(dllimport) int __cdecl _fileno(FILE * _File); } 
#line 227
extern "C" { __declspec(dllimport) char *__cdecl _tempnam(const char * _DirName, const char * _FilePrefix); } 
#line 233
extern "C" { __declspec(dllimport) int __cdecl _flushall(); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using fopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) FILE *__cdecl fopen(const char * _Filename, const char * _Mode); } 

extern "C" { __declspec(dllimport) errno_t __cdecl fopen_s(FILE ** _File, const char * _Filename, const char * _Mode); } 

extern "C" { __declspec(dllimport) int __cdecl fprintf(FILE * _File, const char * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl fprintf_s(FILE * _File, const char * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl fputc(int _Ch, FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl _fputchar(int _Ch); } 
extern "C" { __declspec(dllimport) int __cdecl fputs(const char * _Str, FILE * _File); } 
extern "C" { __declspec(dllimport) size_t __cdecl fread(void * _DstBuf, size_t _ElementSize, size_t _Count, FILE * _File); } 

extern "C" { __declspec(dllimport) size_t __cdecl fread_s(void * _DstBuf, size_t _DstSize, size_t _ElementSize, size_t _Count, FILE * _File); } 

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using freopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) FILE *__cdecl freopen(const char * _Filename, const char * _Mode, FILE * _File); } 

extern "C" { __declspec(dllimport) errno_t __cdecl freopen_s(FILE ** _File, const char * _Filename, const char * _Mode, FILE * _OldFile); } 

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) int __cdecl fscanf(FILE * _File, const char * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _fscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) int __cdecl _fscanf_l(FILE * _File, const char * _Format, _locale_t _Locale, ...); } 
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 6530) /* Removed pragma: #pragma warning(disable:6530)*/

extern "C" { __declspec(dllimport) int __cdecl fscanf_s(FILE * _File, const char * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl _fscanf_s_l(FILE * _File, const char * _Format, _locale_t _Locale, ...); } 
/* Removed pragma: #pragma warning(pop)*/
extern "C" { __declspec(dllimport) int __cdecl fsetpos(FILE * _File, const fpos_t * _Pos); } 
extern "C" { __declspec(dllimport) int __cdecl fseek(FILE * _File, long _Offset, int _Origin); } 
extern "C" { __declspec(dllimport) long __cdecl ftell(FILE * _File); } 

extern "C" { __declspec(dllimport) int __cdecl _fseeki64(FILE * _File, __int64 _Offset, int _Origin); } 
extern "C" { __declspec(dllimport) __int64 __cdecl _ftelli64(FILE * _File); } 

extern "C" { __declspec(dllimport) size_t __cdecl fwrite(const void * _Str, size_t _Size, size_t _Count, FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl getc(FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl getchar(); } 
extern "C" { __declspec(dllimport) int __cdecl _getmaxstdio(); } 

extern "C" { __declspec(dllimport) char *__cdecl gets_s(char * _Buf, rsize_t _Size); } 

template < size_t _Size > inline char * __cdecl gets_s ( char ( & _Buffer ) [ _Size ] ) throw ( ) { return gets_s ( _Buffer, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using gets_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See" " online help for details.")) __declspec(dllimport) char *__cdecl gets(char * _Buffer); } 
extern "C" { int __cdecl _getw(FILE * _File); } 


extern "C" { __declspec(dllimport) void __cdecl perror(const char * _ErrMsg); } 

extern "C" { __declspec(dllimport) int __cdecl _pclose(FILE * _File); } 
extern "C" { __declspec(dllimport) FILE *__cdecl _popen(const char * _Command, const char * _Mode); } 
extern "C" { __declspec(dllimport) int __cdecl printf(const char * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl printf_s(const char * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl putc(int _Ch, FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl putchar(int _Ch); } 
extern "C" { __declspec(dllimport) int __cdecl puts(const char * _Str); } 
extern "C" { __declspec(dllimport) int __cdecl _putw(int _Word, FILE * _File); } 


extern "C" { __declspec(dllimport) int __cdecl remove(const char * _Filename); } 
extern "C" { __declspec(dllimport) int __cdecl rename(const char * _OldFilename, const char * _NewFilename); } 
extern "C" { __declspec(dllimport) int __cdecl _unlink(const char * _Filename); } 

extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _unlink. See online help for details.")) __declspec(dllimport) int __cdecl unlink(const char * _Filename); } 


extern "C" { __declspec(dllimport) void __cdecl rewind(FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl _rmtmp(); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) int __cdecl scanf(const char * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _scanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) int __cdecl _scanf_l(const char * _Format, _locale_t _Locale, ...); } 
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 6530) /* Removed pragma: #pragma warning(disable:6530)*/

extern "C" { __declspec(dllimport) int __cdecl scanf_s(const char * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl _scanf_s_l(const char * _Format, _locale_t _Locale, ...); } 
/* Removed pragma: #pragma warning(pop)*/
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using setvbuf instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) void __cdecl setbuf(FILE * _File, char * _Buffer); } 
extern "C" { __declspec(dllimport) int __cdecl _setmaxstdio(int _Max); } 
extern "C" { __declspec(dllimport) unsigned __cdecl _set_output_format(unsigned _Format); } 
extern "C" { __declspec(dllimport) unsigned __cdecl _get_output_format(); } 
extern "C" { __declspec(dllimport) int __cdecl setvbuf(FILE * _File, char * _Buf, int _Mode, size_t _Size); } 
extern "C" { __declspec(dllimport) int __cdecl _snprintf_s(char * _DstBuf, size_t _SizeInBytes, size_t _MaxCount, const char * _Format, ...); } 
/* Removed pragma: __pragma( warning(push)) */__pragma(warning(disable: 4793) )/* Removed pragma: __pragma( warning(disable: 4793)) */template < size_t _Size > inline int __cdecl _snprintf_s ( char ( & _Dest ) [ _Size ], size_t _MaxCount, const char * _Format, ... ) throw ( ) { va_list _ArgList; ( _ArgList = ( va_list ) ( & reinterpret_cast < const char & > ( _Format ) ) + ( ( sizeof ( _Format ) + sizeof ( int ) - 1 ) & ~ ( sizeof ( int ) - 1 ) ) ); return _vsnprintf_s ( _Dest, _Size, _MaxCount, _Format, _ArgList ); }/* Removed pragma: __pragma( warning(pop)) */

extern "C" { __declspec(dllimport) int __cdecl sprintf_s(char * _DstBuf, size_t _SizeInBytes, const char * _Format, ...); } 

/* Removed pragma: __pragma( warning(push)) */__pragma(warning(disable: 4793) )/* Removed pragma: __pragma( warning(disable: 4793)) */template < size_t _Size > inline int __cdecl sprintf_s ( char ( & _Dest ) [ _Size ], const char * _Format, ... ) throw ( ) { va_list _ArgList; ( _ArgList = ( va_list ) ( & reinterpret_cast < const char & > ( _Format ) ) + ( ( sizeof ( _Format ) + sizeof ( int ) - 1 ) & ~ ( sizeof ( int ) - 1 ) ) ); return vsprintf_s ( _Dest, _Size, _Format, _ArgList ); }/* Removed pragma: __pragma( warning(pop)) */
extern "C" { __declspec(dllimport) int __cdecl _scprintf(const char * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) int __cdecl sscanf(const char * _Src, const char * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _sscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) int __cdecl _sscanf_l(const char * _Src, const char * _Format, _locale_t _Locale, ...); } 
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 6530) /* Removed pragma: #pragma warning(disable:6530)*/

extern "C" { __declspec(dllimport) int __cdecl sscanf_s(const char * _Src, const char * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl _sscanf_s_l(const char * _Src, const char * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _snscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) int __cdecl _snscanf(const char * _Src, size_t _MaxCount, const char * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _snscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) int __cdecl _snscanf_l(const char * _Src, size_t _MaxCount, const char * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _snscanf_s(const char * _Src, size_t _MaxCount, const char * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _snscanf_s_l(const char * _Src, size_t _MaxCount, const char * _Format, _locale_t _Locale, ...); } 
/* Removed pragma: #pragma warning(pop)*/
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using tmpfile_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) FILE *__cdecl tmpfile(); } 

extern "C" { __declspec(dllimport) errno_t __cdecl tmpfile_s(FILE ** _File); } 
extern "C" { __declspec(dllimport) errno_t __cdecl tmpnam_s(char * _Buf, rsize_t _Size); } 

template < size_t _Size > inline errno_t __cdecl tmpnam_s ( char ( & _Buf ) [ _Size ] ) throw ( ) { return tmpnam_s ( _Buf, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using tmpnam_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) char *__cdecl tmpnam(char * _Buffer); } 
extern "C" { __declspec(dllimport) int __cdecl ungetc(int _Ch, FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl vfprintf(FILE * _File, const char * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl vfprintf_s(FILE * _File, const char * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl vprintf(const char * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl vprintf_s(const char * _Format, va_list _ArgList); } 

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using vsnprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) int __cdecl vsnprintf(char * _DstBuf, size_t _MaxCount, const char * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl vsnprintf_s(char * _DstBuf, size_t _DstSize, size_t _MaxCount, const char * _Format, va_list _ArgList); } 
template < size_t _Size > inline int __cdecl vsnprintf_s ( char ( & _Dest ) [ _Size ], size_t _MaxCount, const char * _Format, va_list _Args ) throw ( ) { return vsnprintf_s ( _Dest, _Size, _MaxCount, _Format, _Args ); }

extern "C" { __declspec(dllimport) int __cdecl _vsnprintf_s(char * _DstBuf, size_t _SizeInBytes, size_t _MaxCount, const char * _Format, va_list _ArgList); } 
template < size_t _Size > inline int __cdecl _vsnprintf_s ( char ( & _Dest ) [ _Size ], size_t _MaxCount, const char * _Format, va_list _Args ) throw ( ) { return _vsnprintf_s ( _Dest, _Size, _MaxCount, _Format, _Args ); }
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4793) /* Removed pragma: #pragma warning(disable:4793)*/
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _snprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) int __cdecl _snprintf(char * _Dest, size_t _Count, const char * _Format, ...); } extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _vsnprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) int __cdecl _vsnprintf(char * _Dest, size_t _Count, const char * _Format, va_list _Args); } 
/* Removed pragma: #pragma warning(pop)*/

extern "C" { __declspec(dllimport) int __cdecl vsprintf_s(char * _DstBuf, size_t _SizeInBytes, const char * _Format, va_list _ArgList); } 
template < size_t _Size > inline int __cdecl vsprintf_s ( char ( & _Dest ) [ _Size ], const char * _Format, va_list _Args ) throw ( ) { return vsprintf_s ( _Dest, _Size, _Format, _Args ); }

/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4793) /* Removed pragma: #pragma warning(disable:4793)*/
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using sprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) int __cdecl sprintf(char * _Dest, const char * _Format, ...); } extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using vsprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) int __cdecl vsprintf(char * _Dest, const char * _Format, va_list _Args); } 
/* Removed pragma: #pragma warning(pop)*/
extern "C" { __declspec(dllimport) int __cdecl _vscprintf(const char * _Format, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _snprintf_c(char * _DstBuf, size_t _MaxCount, const char * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vsnprintf_c(char * _DstBuf, size_t _MaxCount, const char * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl _fprintf_p(FILE * _File, const char * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _printf_p(const char * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _sprintf_p(char * _Dst, size_t _MaxCount, const char * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vfprintf_p(FILE * _File, const char * _Format, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vprintf_p(const char * _Format, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vsprintf_p(char * _Dst, size_t _MaxCount, const char * _Format, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _scprintf_p(const char * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vscprintf_p(const char * _Format, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _set_printf_count_output(int _Value); } 
extern "C" { __declspec(dllimport) int __cdecl _get_printf_count_output(); } 

extern "C" { __declspec(dllimport) int __cdecl _printf_l(const char * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _printf_p_l(const char * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _printf_s_l(const char * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vprintf_l(const char * _Format, _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vprintf_p_l(const char * _Format, _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vprintf_s_l(const char * _Format, _locale_t _Locale, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl _fprintf_l(FILE * _File, const char * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _fprintf_p_l(FILE * _File, const char * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _fprintf_s_l(FILE * _File, const char * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vfprintf_l(FILE * _File, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vfprintf_p_l(FILE * _File, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vfprintf_s_l(FILE * _File, const char * _Format, _locale_t _Locale, va_list _ArgList); } 

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _sprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) int __cdecl _sprintf_l(char * _DstBuf, const char * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _sprintf_p_l(char * _DstBuf, size_t _MaxCount, const char * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _sprintf_s_l(char * _DstBuf, size_t _DstSize, const char * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _vsprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __declspec(dllimport) int __cdecl _vsprintf_l(char * _DstBuf, const char * _Format, _locale_t, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vsprintf_p_l(char * _DstBuf, size_t _MaxCount, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vsprintf_s_l(char * _DstBuf, size_t _DstSize, const char * _Format, _locale_t _Locale, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl _scprintf_l(const char * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _scprintf_p_l(const char * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vscprintf_l(const char * _Format, _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vscprintf_p_l(const char * _Format, _locale_t _Locale, va_list _ArgList); } 

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _snprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __declspec(dllimport) int __cdecl _snprintf_l(char * _DstBuf, size_t _MaxCount, const char * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _snprintf_c_l(char * _DstBuf, size_t _MaxCount, const char * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _snprintf_s_l(char * _DstBuf, size_t _DstSize, size_t _MaxCount, const char * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _vsnprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNI" "NGS. See online help for details.")) __declspec(dllimport) int __cdecl _vsnprintf_l(char * _DstBuf, size_t _MaxCount, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vsnprintf_c_l(char * _DstBuf, size_t _MaxCount, const char *, _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vsnprintf_s_l(char * _DstBuf, size_t _DstSize, size_t _MaxCount, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 432
extern "C" { __declspec(dllimport) FILE *__cdecl _wfsopen(const __wchar_t * _Filename, const __wchar_t * _Mode, int _ShFlag); } 


extern "C" { __declspec(dllimport) wint_t __cdecl fgetwc(FILE * _File); } 
extern "C" { __declspec(dllimport) wint_t __cdecl _fgetwchar(); } 
extern "C" { __declspec(dllimport) wint_t __cdecl fputwc(__wchar_t _Ch, FILE * _File); } 
extern "C" { __declspec(dllimport) wint_t __cdecl _fputwchar(__wchar_t _Ch); } 
extern "C" { __declspec(dllimport) wint_t __cdecl getwc(FILE * _File); } 
extern "C" { __declspec(dllimport) inline wint_t __cdecl getwchar(); } 
extern "C" { __declspec(dllimport) wint_t __cdecl putwc(__wchar_t _Ch, FILE * _File); } 
extern "C" { __declspec(dllimport) inline wint_t __cdecl putwchar(__wchar_t _Ch); } 
extern "C" { __declspec(dllimport) wint_t __cdecl ungetwc(wint_t _Ch, FILE * _File); } 

extern "C" { __declspec(dllimport) __wchar_t *__cdecl fgetws(__wchar_t * _Dst, int _SizeInWords, FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl fputws(const __wchar_t * _Str, FILE * _File); } 
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _getws_s(__wchar_t * _Str, size_t _SizeInWords); } 
template < size_t _Size > inline wchar_t * __cdecl _getws_s ( wchar_t ( & _String ) [ _Size ] ) throw ( ) { return _getws_s ( _String, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _getws_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _getws(__wchar_t * _String); } 
extern "C" { __declspec(dllimport) int __cdecl _putws(const __wchar_t * _Str); } 

extern "C" { __declspec(dllimport) int __cdecl fwprintf(FILE * _File, const __wchar_t * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl fwprintf_s(FILE * _File, const __wchar_t * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl wprintf(const __wchar_t * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl wprintf_s(const __wchar_t * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl _scwprintf(const __wchar_t * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl vfwprintf(FILE * _File, const __wchar_t * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl vfwprintf_s(FILE * _File, const __wchar_t * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl vwprintf(const __wchar_t * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl vwprintf_s(const __wchar_t * _Format, va_list _ArgList); } 



extern "C" { __declspec(dllimport) int __cdecl swprintf_s(__wchar_t * _Dst, size_t _SizeInWords, const __wchar_t * _Format, ...); } 

/* Removed pragma: __pragma( warning(push)) */__pragma(warning(disable: 4793) )/* Removed pragma: __pragma( warning(disable: 4793)) */template < size_t _Size > inline int __cdecl swprintf_s ( wchar_t ( & _Dest ) [ _Size ], const wchar_t * _Format, ... ) throw ( ) { va_list _ArgList; ( _ArgList = ( va_list ) ( & reinterpret_cast < const char & > ( _Format ) ) + ( ( sizeof ( _Format ) + sizeof ( int ) - 1 ) & ~ ( sizeof ( int ) - 1 ) ) ); return vswprintf_s ( _Dest, _Size, _Format, _ArgList ); }/* Removed pragma: __pragma( warning(pop)) */

extern "C" { __declspec(dllimport) int __cdecl vswprintf_s(__wchar_t * _Dst, size_t _SizeInWords, const __wchar_t * _Format, va_list _ArgList); } 

template < size_t _Size > inline int __cdecl vswprintf_s ( wchar_t ( & _Dest ) [ _Size ], const wchar_t * _Format, va_list _Args ) throw ( ) { return vswprintf_s ( _Dest, _Size, _Format, _Args ); }

extern "C" { __declspec(dllimport) int __cdecl _swprintf_c(__wchar_t * _DstBuf, size_t _SizeInWords, const __wchar_t * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vswprintf_c(__wchar_t * _DstBuf, size_t _SizeInWords, const __wchar_t * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl _snwprintf_s(__wchar_t * _DstBuf, size_t _SizeInWords, size_t _MaxCount, const __wchar_t * _Format, ...); } 
/* Removed pragma: __pragma( warning(push)) */__pragma(warning(disable: 4793) )/* Removed pragma: __pragma( warning(disable: 4793)) */template < size_t _Size > inline int __cdecl _snwprintf_s ( wchar_t ( & _Dest ) [ _Size ], size_t _Count, const wchar_t * _Format, ... ) throw ( ) { va_list _ArgList; ( _ArgList = ( va_list ) ( & reinterpret_cast < const char & > ( _Format ) ) + ( ( sizeof ( _Format ) + sizeof ( int ) - 1 ) & ~ ( sizeof ( int ) - 1 ) ) ); return _vsnwprintf_s ( _Dest, _Size, _Count, _Format, _ArgList ); }/* Removed pragma: __pragma( warning(pop)) */
extern "C" { __declspec(dllimport) int __cdecl _vsnwprintf_s(__wchar_t * _DstBuf, size_t _SizeInWords, size_t _MaxCount, const __wchar_t * _Format, va_list _ArgList); } 
template < size_t _Size > inline int __cdecl _vsnwprintf_s ( wchar_t ( & _Dest ) [ _Size ], size_t _Count, const wchar_t * _Format, va_list _Args ) throw ( ) { return _vsnwprintf_s ( _Dest, _Size, _Count, _Format, _Args ); }
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4793) /* Removed pragma: #pragma warning(disable:4793)*/
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _snwprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) int __cdecl _snwprintf(__wchar_t * _Dest, size_t _Count, const __wchar_t * _Format, ...); } extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _vsnwprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __declspec(dllimport) int __cdecl _vsnwprintf(__wchar_t * _Dest, size_t _Count, const __wchar_t * _Format, va_list _Args); } 
/* Removed pragma: #pragma warning(pop)*/

extern "C" { __declspec(dllimport) int __cdecl _fwprintf_p(FILE * _File, const __wchar_t * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _wprintf_p(const __wchar_t * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vfwprintf_p(FILE * _File, const __wchar_t * _Format, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vwprintf_p(const __wchar_t * _Format, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _swprintf_p(__wchar_t * _DstBuf, size_t _MaxCount, const __wchar_t * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vswprintf_p(__wchar_t * _DstBuf, size_t _MaxCount, const __wchar_t * _Format, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _scwprintf_p(const __wchar_t * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vscwprintf_p(const __wchar_t * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl _wprintf_l(const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _wprintf_p_l(const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _wprintf_s_l(const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vwprintf_l(const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vwprintf_p_l(const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vwprintf_s_l(const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl _fwprintf_l(FILE * _File, const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _fwprintf_p_l(FILE * _File, const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _fwprintf_s_l(FILE * _File, const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vfwprintf_l(FILE * _File, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vfwprintf_p_l(FILE * _File, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vfwprintf_s_l(FILE * _File, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl _swprintf_c_l(__wchar_t * _DstBuf, size_t _MaxCount, const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _swprintf_p_l(__wchar_t * _DstBuf, size_t _MaxCount, const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _swprintf_s_l(__wchar_t * _DstBuf, size_t _DstSize, const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vswprintf_c_l(__wchar_t * _DstBuf, size_t _MaxCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vswprintf_p_l(__wchar_t * _DstBuf, size_t _MaxCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vswprintf_s_l(__wchar_t * _DstBuf, size_t _DstSize, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl _scwprintf_l(const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _scwprintf_p_l(const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vscwprintf_p_l(const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _snwprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNI" "NGS. See online help for details.")) __declspec(dllimport) int __cdecl _snwprintf_l(__wchar_t * _DstBuf, size_t _MaxCount, const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _snwprintf_s_l(__wchar_t * _DstBuf, size_t _DstSize, size_t _MaxCount, const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _vsnwprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARN" "INGS. See online help for details.")) __declspec(dllimport) int __cdecl _vsnwprintf_l(__wchar_t * _DstBuf, size_t _MaxCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vsnwprintf_s_l(__wchar_t * _DstBuf, size_t _DstSize, size_t _MaxCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 542
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4141 4996 4793) /* Removed pragma: #pragma warning(disable:4141 4996 4793)*/
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _swprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Micr" "osoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(dllimport) int __cdecl _swprintf(__wchar_t * _Dest, const __wchar_t * _Format, ...); } extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using vswprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Micr" "osoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(dllimport) int __cdecl _vswprintf(__wchar_t * _Dest, const __wchar_t * _Format, va_list _Args); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using __swprintf_l_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNI" "NGS. See online help for details.")) __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Micr" "osoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(dllimport) int __cdecl __swprintf_l(__wchar_t * _Dest, const __wchar_t * _Format, _locale_t _Plocinfo, ...); } extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _vswprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNI" "NGS. See online help for details.")) __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Micr" "osoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(dllimport) int __cdecl __vswprintf_l(__wchar_t * _Dest, const __wchar_t * _Format, _locale_t _Plocinfo, va_list _Args); } 
/* Removed pragma: #pragma warning(pop)*/
#line 34 "c:\\Program Files\\Microsoft Visual Studio 10.0\\VC\\include\\swprintf.inl"
/* Removed pragma: #pragma warning( push )*/
#pragma warning(disable: 4793 4412) /* Removed pragma: #pragma warning( disable : 4793 4412 )*/
extern "C" { static __inline int swprintf(__wchar_t *_String, size_t _Count, const __wchar_t *_Format, ...) 
{ 
va_list _Arglist; 
int _Ret; 
(_Arglist = (va_list)(&(reinterpret_cast< const char &>(_Format))) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1))); 
_Ret = _vswprintf_c_l(_String, _Count, _Format, 0, _Arglist); 
(_Arglist = (va_list)0); 
return _Ret; 
} } 
/* Removed pragma: #pragma warning( pop )*/

/* Removed pragma: #pragma warning( push )*/
#pragma warning(disable: 4412) /* Removed pragma: #pragma warning( disable : 4412 )*/
extern "C" { static __inline int __cdecl vswprintf(__wchar_t *_String, size_t _Count, const __wchar_t *_Format, va_list _Ap) 
{ 
return _vswprintf_c_l(_String, _Count, _Format, 0, _Ap); 
} } 
/* Removed pragma: #pragma warning( pop )*/




/* Removed pragma: #pragma warning( push )*/
#pragma warning(disable: 4793 4412) /* Removed pragma: #pragma warning( disable : 4793 4412 )*/
extern "C" { static __inline int _swprintf_l(__wchar_t *_String, size_t _Count, const __wchar_t *_Format, _locale_t _Plocinfo, ...) 
{ 
va_list _Arglist; 
int _Ret; 
(_Arglist = (va_list)(&(reinterpret_cast< const char &>(_Plocinfo))) + (((sizeof (_Plocinfo) + sizeof(int)) - 1) & ~(sizeof(int) - 1))); 
_Ret = _vswprintf_c_l(_String, _Count, _Format, _Plocinfo, _Arglist); 
(_Arglist = (va_list)0); 
return _Ret; 
} } 
/* Removed pragma: #pragma warning( pop )*/

/* Removed pragma: #pragma warning( push )*/
#pragma warning(disable: 4412) /* Removed pragma: #pragma warning( disable : 4412 )*/
extern "C" { static __inline int __cdecl _vswprintf_l(__wchar_t *_String, size_t _Count, const __wchar_t *_Format, _locale_t _Plocinfo, va_list _Ap) 
{ 
return _vswprintf_c_l(_String, _Count, _Format, _Plocinfo, _Ap); 
} } 
/* Removed pragma: #pragma warning( pop )*/


/* Removed pragma: #pragma warning( push )*/
#pragma warning(disable: 4996) /* Removed pragma: #pragma warning( disable : 4996 )*/

/* Removed pragma: #pragma warning( push )*/
#pragma warning(disable: 4793 4141) /* Removed pragma: #pragma warning( disable : 4793 4141 )*/
__declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Micr" "osoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using swprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __inline int swprintf(__wchar_t *_String, const __wchar_t *_Format, ...) 
{ 
va_list _Arglist; 
(_Arglist = (va_list)(&(reinterpret_cast< const char &>(_Format))) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1))); 
int _Ret = _vswprintf(_String, _Format, _Arglist); 
(_Arglist = (va_list)0); 
return _Ret; 
} 
/* Removed pragma: #pragma warning( pop )*/

/* Removed pragma: #pragma warning( push )*/
#pragma warning(disable: 4141) /* Removed pragma: #pragma warning( disable : 4141 )*/
__declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Micr" "osoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using vswprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __inline int __cdecl vswprintf(__wchar_t *_String, const __wchar_t *_Format, va_list _Ap) 
{ 
return _vswprintf(_String, _Format, _Ap); 
} 
/* Removed pragma: #pragma warning( pop )*/

/* Removed pragma: #pragma warning( push )*/
#pragma warning(disable: 4793 4141) /* Removed pragma: #pragma warning( disable : 4793 4141 )*/
__declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Micr" "osoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _swprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __inline int _swprintf_l(__wchar_t *_String, const __wchar_t *_Format, _locale_t _Plocinfo, ...) 
{ 
va_list _Arglist; 
(_Arglist = (va_list)(&(reinterpret_cast< const char &>(_Plocinfo))) + (((sizeof (_Plocinfo) + sizeof(int)) - 1) & ~(sizeof(int) - 1))); 
int _Ret = __vswprintf_l(_String, _Format, _Plocinfo, _Arglist); 
(_Arglist = (va_list)0); 
return _Ret; 
} 
/* Removed pragma: #pragma warning( pop )*/

/* Removed pragma: #pragma warning( push )*/
#pragma warning(disable: 4141) /* Removed pragma: #pragma warning( disable : 4141 )*/
__declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Micr" "osoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _vswprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNI" "NGS. See online help for details.")) __inline int __cdecl _vswprintf_l(__wchar_t *_String, const __wchar_t *_Format, _locale_t _Plocinfo, va_list _Ap) 
{ 
return __vswprintf_l(_String, _Format, _Plocinfo, _Ap); 
} 
/* Removed pragma: #pragma warning( pop )*/

/* Removed pragma: #pragma warning( pop )*/
#line 566 "c:\\Program Files\\Microsoft Visual Studio 10.0\\VC\\include\\stdio.h"
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wtempnam(const __wchar_t * _Directory, const __wchar_t * _FilePrefix); } 
#line 572
extern "C" { __declspec(dllimport) int __cdecl _vscwprintf(const __wchar_t * _Format, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vscwprintf_l(const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using fwscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) int __cdecl fwscanf(FILE * _File, const __wchar_t * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _fwscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) int __cdecl _fwscanf_l(FILE * _File, const __wchar_t * _Format, _locale_t _Locale, ...); } 
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 6530) /* Removed pragma: #pragma warning(disable:6530)*/

extern "C" { __declspec(dllimport) int __cdecl fwscanf_s(FILE * _File, const __wchar_t * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl _fwscanf_s_l(FILE * _File, const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using swscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) int __cdecl swscanf(const __wchar_t * _Src, const __wchar_t * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _swscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) int __cdecl _swscanf_l(const __wchar_t * _Src, const __wchar_t * _Format, _locale_t _Locale, ...); } 

extern "C" { __declspec(dllimport) int __cdecl swscanf_s(const __wchar_t * _Src, const __wchar_t * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl _swscanf_s_l(const __wchar_t * _Src, const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _snwscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) int __cdecl _snwscanf(const __wchar_t * _Src, size_t _MaxCount, const __wchar_t * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _snwscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __declspec(dllimport) int __cdecl _snwscanf_l(const __wchar_t * _Src, size_t _MaxCount, const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _snwscanf_s(const __wchar_t * _Src, size_t _MaxCount, const __wchar_t * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _snwscanf_s_l(const __wchar_t * _Src, size_t _MaxCount, const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using wscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) int __cdecl wscanf(const __wchar_t * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) int __cdecl _wscanf_l(const __wchar_t * _Format, _locale_t _Locale, ...); } 

extern "C" { __declspec(dllimport) int __cdecl wscanf_s(const __wchar_t * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl _wscanf_s_l(const __wchar_t * _Format, _locale_t _Locale, ...); } 
/* Removed pragma: #pragma warning(pop)*/

extern "C" { __declspec(dllimport) FILE *__cdecl _wfdopen(int _FileHandle, const __wchar_t * _Mode); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wfopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) FILE *__cdecl _wfopen(const __wchar_t * _Filename, const __wchar_t * _Mode); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wfopen_s(FILE ** _File, const __wchar_t * _Filename, const __wchar_t * _Mode); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wfreopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) FILE *__cdecl _wfreopen(const __wchar_t * _Filename, const __wchar_t * _Mode, FILE * _OldFile); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wfreopen_s(FILE ** _File, const __wchar_t * _Filename, const __wchar_t * _Mode, FILE * _OldFile); } 



extern "C" { __declspec(dllimport) void __cdecl _wperror(const __wchar_t * _ErrMsg); } 

extern "C" { __declspec(dllimport) FILE *__cdecl _wpopen(const __wchar_t * _Command, const __wchar_t * _Mode); } 
extern "C" { __declspec(dllimport) int __cdecl _wremove(const __wchar_t * _Filename); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wtmpnam_s(__wchar_t * _DstBuf, size_t _SizeInWords); } 
template < size_t _Size > inline errno_t __cdecl _wtmpnam_s ( wchar_t ( & _Buffer ) [ _Size ] ) throw ( ) { return _wtmpnam_s ( _Buffer, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wtmpnam_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wtmpnam(__wchar_t * _Buffer); } 

extern "C" { __declspec(dllimport) wint_t __cdecl _fgetwc_nolock(FILE * _File); } 
extern "C" { __declspec(dllimport) wint_t __cdecl _fputwc_nolock(__wchar_t _Ch, FILE * _File); } 
extern "C" { __declspec(dllimport) wint_t __cdecl _ungetwc_nolock(wint_t _Ch, FILE * _File); } 
#line 626
extern "C" { inline wint_t __cdecl getwchar() 
{ return (fgetwc((&(__iob_func()[0])))); } } 
extern "C" { inline wint_t __cdecl putwchar(__wchar_t _C) 
{ return (fputwc(_C, (&(__iob_func()[1])))); } } 
#line 675
extern "C" { __declspec(dllimport) void __cdecl _lock_file(FILE * _File); } 
extern "C" { __declspec(dllimport) void __cdecl _unlock_file(FILE * _File); } 

extern "C" { __declspec(dllimport) int __cdecl _fclose_nolock(FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl _fflush_nolock(FILE * _File); } 
extern "C" { __declspec(dllimport) size_t __cdecl _fread_nolock(void * _DstBuf, size_t _ElementSize, size_t _Count, FILE * _File); } 
extern "C" { __declspec(dllimport) size_t __cdecl _fread_nolock_s(void * _DstBuf, size_t _DstSize, size_t _ElementSize, size_t _Count, FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl _fseek_nolock(FILE * _File, long _Offset, int _Origin); } 
extern "C" { __declspec(dllimport) long __cdecl _ftell_nolock(FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl _fseeki64_nolock(FILE * _File, __int64 _Offset, int _Origin); } 
extern "C" { __declspec(dllimport) __int64 __cdecl _ftelli64_nolock(FILE * _File); } 
extern "C" { __declspec(dllimport) size_t __cdecl _fwrite_nolock(const void * _DstBuf, size_t _Size, size_t _Count, FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl _ungetc_nolock(int _Ch, FILE * _File); } 
#line 714
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _tempnam. See online help for details.")) __declspec(dllimport) char *__cdecl tempnam(const char * _Directory, const char * _FilePrefix); } 
#line 720
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _fcloseall. See online help for details.")) __declspec(dllimport) int __cdecl fcloseall(); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _fdopen. See online help for details.")) __declspec(dllimport) FILE *__cdecl fdopen(int _FileHandle, const char * _Format); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _fgetchar. See online help for details.")) __declspec(dllimport) int __cdecl fgetchar(); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _fileno. See online help for details.")) __declspec(dllimport) int __cdecl fileno(FILE * _File); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _flushall. See online help for details.")) __declspec(dllimport) int __cdecl flushall(); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _fputchar. See online help for details.")) __declspec(dllimport) int __cdecl fputchar(int _Ch); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _getw. See online help for details.")) __declspec(dllimport) int __cdecl getw(FILE * _File); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _putw. See online help for details.")) __declspec(dllimport) int __cdecl putw(int _Ch, FILE * _File); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _rmtmp. See online help for details.")) __declspec(dllimport) int __cdecl rmtmp(); } 
#line 27 "c:\\Program Files\\Microsoft Visual Studio 10.0\\VC\\include\\tchar.h"
#pragma warning(disable: 4514) /* Removed pragma: #pragma warning(disable:4514)*/
#line 56
#pragma deprecated("_ftcscat")
#pragma deprecated("_ftcschr")
#pragma deprecated("_ftcscpy")
#pragma deprecated("_ftcscspn")
#pragma deprecated("_ftcslen")
#pragma deprecated("_ftcsncat")
#pragma deprecated("_ftcsncpy")
#pragma deprecated("_ftcspbrk")
#pragma deprecated("_ftcsrchr")
#pragma deprecated("_ftcsspn")
#pragma deprecated("_ftcsstr")
#pragma deprecated("_ftcstok")
#pragma deprecated("_ftcsdup")
#pragma deprecated("_ftcsnset")
#pragma deprecated("_ftcsrev")
#pragma deprecated("_ftcsset")
#pragma deprecated("_ftcscmp")
#pragma deprecated("_ftcsicmp")
#pragma deprecated("_ftcsnccmp")
#pragma deprecated("_ftcsncmp")
#pragma deprecated("_ftcsncicmp")
#pragma deprecated("_ftcsnicmp")
#pragma deprecated("_ftcscoll")
#pragma deprecated("_ftcsicoll")
#pragma deprecated("_ftcsnccoll")
#pragma deprecated("_ftcsncoll")
#pragma deprecated("_ftcsncicoll")
#pragma deprecated("_ftcsnicoll")
#pragma deprecated("_ftcsclen")
#pragma deprecated("_ftcsnccat")
#pragma deprecated("_ftcsnccpy")
#pragma deprecated("_ftcsncset")
#pragma deprecated("_ftcsdec")
#pragma deprecated("_ftcsinc")
#pragma deprecated("_ftcsnbcnt")
#pragma deprecated("_ftcsnccnt")
#pragma deprecated("_ftcsnextc")
#pragma deprecated("_ftcsninc")
#pragma deprecated("_ftcsspnp")
#pragma deprecated("_ftcslwr")
#pragma deprecated("_ftcsupr")
#pragma deprecated("_ftclen")
#pragma deprecated("_ftccpy")
#pragma deprecated("_ftccmp")
#line 736 "c:\\Program Files\\Microsoft Visual Studio 10.0\\VC\\include\\stdio.h"
#pragma pack ( pop )
#line 25 "c:\\Program Files\\Microsoft Visual Studio 10.0\\VC\\include\\wchar.h"
#pragma pack ( push, 8 )
#line 83
extern "C" { typedef unsigned long _fsize_t; }
#line 89
extern "C" { struct _wfinddata32_t { 
unsigned attrib; 
__time32_t time_create; 
__time32_t time_access; 
__time32_t time_write; 
_fsize_t size; 
__wchar_t name[260]; 
}; }

extern "C" { struct _wfinddata32i64_t { 
unsigned attrib; 
__time32_t time_create; 
__time32_t time_access; 
__time32_t time_write; 
__int64 size; 
__wchar_t name[260]; 
}; }

extern "C" { struct _wfinddata64i32_t { 
unsigned attrib; 
__time64_t time_create; 
__time64_t time_access; 
__time64_t time_write; 
_fsize_t size; 
__wchar_t name[260]; 
}; }

extern "C" { struct _wfinddata64_t { 
unsigned attrib; 
__time64_t time_create; 
__time64_t time_access; 
__time64_t time_write; 
__int64 size; 
__wchar_t name[260]; 
}; }
#line 182
extern "C" { __declspec(dllimport) const unsigned short *__cdecl __pctype_func(); } 

extern "C" __declspec(dllimport) const unsigned short *_pctype; 
#line 195
extern "C" __declspec(dllimport) const unsigned short _wctype[]; 


extern "C" { __declspec(dllimport) const wctype_t *__cdecl __pwctype_func(); } 

extern "C" __declspec(dllimport) const wctype_t *_pwctype; 
#line 230
extern "C" { __declspec(dllimport) int __cdecl iswalpha(wint_t _C); } 
extern "C" { __declspec(dllimport) int __cdecl _iswalpha_l(wint_t _C, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl iswupper(wint_t _C); } 
extern "C" { __declspec(dllimport) int __cdecl _iswupper_l(wint_t _C, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl iswlower(wint_t _C); } 
extern "C" { __declspec(dllimport) int __cdecl _iswlower_l(wint_t _C, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl iswdigit(wint_t _C); } 
extern "C" { __declspec(dllimport) int __cdecl _iswdigit_l(wint_t _C, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl iswxdigit(wint_t _C); } 
extern "C" { __declspec(dllimport) int __cdecl _iswxdigit_l(wint_t _C, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl iswspace(wint_t _C); } 
extern "C" { __declspec(dllimport) int __cdecl _iswspace_l(wint_t _C, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl iswpunct(wint_t _C); } 
extern "C" { __declspec(dllimport) int __cdecl _iswpunct_l(wint_t _C, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl iswalnum(wint_t _C); } 
extern "C" { __declspec(dllimport) int __cdecl _iswalnum_l(wint_t _C, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl iswprint(wint_t _C); } 
extern "C" { __declspec(dllimport) int __cdecl _iswprint_l(wint_t _C, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl iswgraph(wint_t _C); } 
extern "C" { __declspec(dllimport) int __cdecl _iswgraph_l(wint_t _C, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl iswcntrl(wint_t _C); } 
extern "C" { __declspec(dllimport) int __cdecl _iswcntrl_l(wint_t _C, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl iswascii(wint_t _C); } 
extern "C" { __declspec(dllimport) int __cdecl isleadbyte(int _C); } 
extern "C" { __declspec(dllimport) int __cdecl _isleadbyte_l(int _C, _locale_t _Locale); } 

extern "C" { __declspec(dllimport) wint_t __cdecl towupper(wint_t _C); } 
extern "C" { __declspec(dllimport) wint_t __cdecl _towupper_l(wint_t _C, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) wint_t __cdecl towlower(wint_t _C); } 
extern "C" { __declspec(dllimport) wint_t __cdecl _towlower_l(wint_t _C, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl iswctype(wint_t _C, wctype_t _Type); } 
extern "C" { __declspec(dllimport) int __cdecl _iswctype_l(wint_t _C, wctype_t _Type, _locale_t _Locale); } 

extern "C" { __declspec(dllimport) int __cdecl __iswcsymf(wint_t _C); } 
extern "C" { __declspec(dllimport) int __cdecl _iswcsymf_l(wint_t _C, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl __iswcsym(wint_t _C); } 
extern "C" { __declspec(dllimport) int __cdecl _iswcsym_l(wint_t _C, _locale_t _Locale); } 

extern "C" { __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using iswctype instea" "d. See online help for details.")) __declspec(dllimport) int __cdecl is_wctype(wint_t _C, wctype_t _Type); } 
#line 286
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wgetcwd(__wchar_t * _DstBuf, int _SizeInWords); } 
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wgetdcwd(int _Drive, __wchar_t * _DstBuf, int _SizeInWords); } 
extern "C" { __wchar_t *__cdecl _wgetdcwd_nolock(int _Drive, __wchar_t * _DstBuf, int _SizeInWords); } 
#line 296
extern "C" { __declspec(dllimport) int __cdecl _wchdir(const __wchar_t * _Path); } 
extern "C" { __declspec(dllimport) int __cdecl _wmkdir(const __wchar_t * _Path); } 
extern "C" { __declspec(dllimport) int __cdecl _wrmdir(const __wchar_t * _Path); } 
#line 305
extern "C" { __declspec(dllimport) int __cdecl _waccess(const __wchar_t * _Filename, int _AccessMode); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _waccess_s(const __wchar_t * _Filename, int _AccessMode); } 
extern "C" { __declspec(dllimport) int __cdecl _wchmod(const __wchar_t * _Filename, int _Mode); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wsopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) int __cdecl _wcreat(const __wchar_t * _Filename, int _PermissionMode); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wfindfirst32(const __wchar_t * _Filename, _wfinddata32_t * _FindData); } 
extern "C" { __declspec(dllimport) int __cdecl _wfindnext32(intptr_t _FindHandle, _wfinddata32_t * _FindData); } 
extern "C" { __declspec(dllimport) int __cdecl _wunlink(const __wchar_t * _Filename); } 
extern "C" { __declspec(dllimport) int __cdecl _wrename(const __wchar_t * _OldFilename, const __wchar_t * _NewFilename); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wmktemp_s(__wchar_t * _TemplateName, size_t _SizeInWords); } 
template < size_t _Size > inline errno_t __cdecl _wmktemp_s ( wchar_t ( & _TemplateName ) [ _Size ] ) throw ( ) { return _wmktemp_s ( _TemplateName, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wmktemp_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wmktemp(__wchar_t * _TemplateName); } 

extern "C" { __declspec(dllimport) intptr_t __cdecl _wfindfirst32i64(const __wchar_t * _Filename, _wfinddata32i64_t * _FindData); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wfindfirst64i32(const __wchar_t * _Filename, _wfinddata64i32_t * _FindData); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wfindfirst64(const __wchar_t * _Filename, _wfinddata64_t * _FindData); } 
extern "C" { __declspec(dllimport) int __cdecl _wfindnext32i64(intptr_t _FindHandle, _wfinddata32i64_t * _FindData); } 
extern "C" { __declspec(dllimport) int __cdecl _wfindnext64i32(intptr_t _FindHandle, _wfinddata64i32_t * _FindData); } 
extern "C" { __declspec(dllimport) int __cdecl _wfindnext64(intptr_t _FindHandle, _wfinddata64_t * _FindData); } 

extern "C" { __declspec(dllimport) errno_t __cdecl _wsopen_s(int * _FileHandle, const __wchar_t * _Filename, int _OpenFlag, int _ShareFlag, int _PermissionFlag); } 
#line 334
__declspec(deprecated("This function or variable may be unsafe. Consider using _wsopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) int __cdecl _wopen(const __wchar_t * _Filename, int _OpenFlag, int _PermissionMode = 0); 
__declspec(deprecated("This function or variable may be unsafe. Consider using _wsopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) int __cdecl _wsopen(const __wchar_t * _Filename, int _OpenFlag, int _ShareFlag, int _PermissionMode = 0); 
#line 346
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wsetlocale(int _Category, const __wchar_t * _Locale); } 
#line 355
extern "C" { __declspec(dllimport) intptr_t __cdecl _wexecl(const __wchar_t * _Filename, const __wchar_t * _ArgList, ...); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wexecle(const __wchar_t * _Filename, const __wchar_t * _ArgList, ...); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wexeclp(const __wchar_t * _Filename, const __wchar_t * _ArgList, ...); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wexeclpe(const __wchar_t * _Filename, const __wchar_t * _ArgList, ...); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wexecv(const __wchar_t * _Filename, const __wchar_t *const * _ArgList); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wexecve(const __wchar_t * _Filename, const __wchar_t *const * _ArgList, const __wchar_t *const * _Env); } 

extern "C" { __declspec(dllimport) intptr_t __cdecl _wexecvp(const __wchar_t * _Filename, const __wchar_t *const * _ArgList); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wexecvpe(const __wchar_t * _Filename, const __wchar_t *const * _ArgList, const __wchar_t *const * _Env); } 

extern "C" { __declspec(dllimport) intptr_t __cdecl _wspawnl(int _Mode, const __wchar_t * _Filename, const __wchar_t * _ArgList, ...); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wspawnle(int _Mode, const __wchar_t * _Filename, const __wchar_t * _ArgList, ...); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wspawnlp(int _Mode, const __wchar_t * _Filename, const __wchar_t * _ArgList, ...); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wspawnlpe(int _Mode, const __wchar_t * _Filename, const __wchar_t * _ArgList, ...); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wspawnv(int _Mode, const __wchar_t * _Filename, const __wchar_t *const * _ArgList); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wspawnve(int _Mode, const __wchar_t * _Filename, const __wchar_t *const * _ArgList, const __wchar_t *const * _Env); } 

extern "C" { __declspec(dllimport) intptr_t __cdecl _wspawnvp(int _Mode, const __wchar_t * _Filename, const __wchar_t *const * _ArgList); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wspawnvpe(int _Mode, const __wchar_t * _Filename, const __wchar_t *const * _ArgList, const __wchar_t *const * _Env); } 



extern "C" { __declspec(dllimport) int __cdecl _wsystem(const __wchar_t * _Command); } 
#line 453
extern "C" { typedef unsigned short _ino_t; }


extern "C" { typedef unsigned short ino_t; }
#line 462
extern "C" { typedef unsigned _dev_t; }


extern "C" { typedef unsigned dev_t; }
#line 471
extern "C" { typedef long _off_t; }


extern "C" { typedef long off_t; }
#line 481
extern "C" { struct _stat32 { 
_dev_t st_dev; 
_ino_t st_ino; 
unsigned short st_mode; 
short st_nlink; 
short st_uid; 
short st_gid; 
_dev_t st_rdev; 
_off_t st_size; 
__time32_t st_atime; 
__time32_t st_mtime; 
__time32_t st_ctime; 
}; }



extern "C" { struct stat { 
_dev_t st_dev; 
_ino_t st_ino; 
unsigned short st_mode; 
short st_nlink; 
short st_uid; 
short st_gid; 
_dev_t st_rdev; 
_off_t st_size; 
time_t st_atime; 
time_t st_mtime; 
time_t st_ctime; 
}; }



extern "C" { struct _stat32i64 { 
_dev_t st_dev; 
_ino_t st_ino; 
unsigned short st_mode; 
short st_nlink; 
short st_uid; 
short st_gid; 
_dev_t st_rdev; 
__int64 st_size; 
__time32_t st_atime; 
__time32_t st_mtime; 
__time32_t st_ctime; 
}; }

extern "C" { struct _stat64i32 { 
_dev_t st_dev; 
_ino_t st_ino; 
unsigned short st_mode; 
short st_nlink; 
short st_uid; 
short st_gid; 
_dev_t st_rdev; 
_off_t st_size; 
__time64_t st_atime; 
__time64_t st_mtime; 
__time64_t st_ctime; 
}; }

extern "C" { struct _stat64 { 
_dev_t st_dev; 
_ino_t st_ino; 
unsigned short st_mode; 
short st_nlink; 
short st_uid; 
short st_gid; 
_dev_t st_rdev; 
__int64 st_size; 
__time64_t st_atime; 
__time64_t st_mtime; 
__time64_t st_ctime; 
}; }
#line 587
extern "C" { __declspec(dllimport) int __cdecl _wstat32(const __wchar_t * _Name, _stat32 * _Stat); } 

extern "C" { __declspec(dllimport) int __cdecl _wstat32i64(const __wchar_t * _Name, _stat32i64 * _Stat); } 
extern "C" { __declspec(dllimport) int __cdecl _wstat64i32(const __wchar_t * _Name, _stat64i32 * _Stat); } 
extern "C" { __declspec(dllimport) int __cdecl _wstat64(const __wchar_t * _Name, _stat64 * _Stat); } 
#line 607
extern "C" { __declspec(dllimport) errno_t __cdecl _cgetws_s(__wchar_t * _Buffer, size_t _SizeInWords, size_t * _SizeRead); } 
template < size_t _Size > inline errno_t __cdecl _cgetws_s ( wchar_t ( & _Buffer ) [ _Size ], size_t * _SizeRead ) throw ( ) { return _cgetws_s ( _Buffer, _Size, _SizeRead ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _cgetws_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _cgetws(__wchar_t * _Buffer); } 
extern "C" { __declspec(dllimport) wint_t __cdecl _getwch(); } 
extern "C" { __declspec(dllimport) wint_t __cdecl _getwche(); } 
extern "C" { __declspec(dllimport) wint_t __cdecl _putwch(__wchar_t _WCh); } 
extern "C" { __declspec(dllimport) wint_t __cdecl _ungetwch(wint_t _WCh); } 
extern "C" { __declspec(dllimport) int __cdecl _cputws(const __wchar_t * _String); } 
extern "C" { __declspec(dllimport) int __cdecl _cwprintf(const __wchar_t * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _cwprintf_s(const __wchar_t * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _cwscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) int __cdecl _cwscanf(const __wchar_t * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _cwscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) int __cdecl _cwscanf_l(const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _cwscanf_s(const __wchar_t * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _cwscanf_s_l(const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vcwprintf(const __wchar_t * _Format, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vcwprintf_s(const __wchar_t * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl _cwprintf_p(const __wchar_t * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vcwprintf_p(const __wchar_t * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl _cwprintf_l(const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _cwprintf_s_l(const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vcwprintf_l(const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vcwprintf_s_l(const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _cwprintf_p_l(const __wchar_t * _Format, _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vcwprintf_p_l(const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 

extern "C" { wint_t __cdecl _putwch_nolock(__wchar_t _WCh); } 
extern "C" { wint_t __cdecl _getwch_nolock(); } 
extern "C" { wint_t __cdecl _getwche_nolock(); } 
extern "C" { wint_t __cdecl _ungetwch_nolock(wint_t _WCh); } 
#line 864
extern "C" { __declspec(dllimport) errno_t __cdecl _itow_s(int _Val, __wchar_t * _DstBuf, size_t _SizeInWords, int _Radix); } 
template < size_t _Size > inline errno_t __cdecl _itow_s ( int _Value, wchar_t ( & _Dest ) [ _Size ], int _Radix ) throw ( ) { return _itow_s ( _Value, _Dest, _Size, _Radix ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _itow_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _itow(int _Value, __wchar_t * _Dest, int _Radix); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _ltow_s(long _Val, __wchar_t * _DstBuf, size_t _SizeInWords, int _Radix); } 
template < size_t _Size > inline errno_t __cdecl _ltow_s ( long _Value, wchar_t ( & _Dest ) [ _Size ], int _Radix ) throw ( ) { return _ltow_s ( _Value, _Dest, _Size, _Radix ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _ltow_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _ltow(long _Value, __wchar_t * _Dest, int _Radix); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _ultow_s(unsigned long _Val, __wchar_t * _DstBuf, size_t _SizeInWords, int _Radix); } 
template < size_t _Size > inline errno_t __cdecl _ultow_s ( unsigned long _Value, wchar_t ( & _Dest ) [ _Size ], int _Radix ) throw ( ) { return _ultow_s ( _Value, _Dest, _Size, _Radix ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _ultow_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _ultow(unsigned long _Value, __wchar_t * _Dest, int _Radix); } 
extern "C" { __declspec(dllimport) double __cdecl wcstod(const __wchar_t * _Str, __wchar_t ** _EndPtr); } 
extern "C" { __declspec(dllimport) double __cdecl _wcstod_l(const __wchar_t * _Str, __wchar_t ** _EndPtr, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) long __cdecl wcstol(const __wchar_t * _Str, __wchar_t ** _EndPtr, int _Radix); } 
extern "C" { __declspec(dllimport) long __cdecl _wcstol_l(const __wchar_t * _Str, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) unsigned long __cdecl wcstoul(const __wchar_t * _Str, __wchar_t ** _EndPtr, int _Radix); } 
extern "C" { __declspec(dllimport) unsigned long __cdecl _wcstoul_l(const __wchar_t * _Str, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using _wdupenv_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __wchar_t *__cdecl _wgetenv(const __wchar_t * _VarName); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wgetenv_s(size_t * _ReturnSize, __wchar_t * _DstBuf, size_t _DstSizeInWords, const __wchar_t * _VarName); } 
template < size_t _Size > inline errno_t __cdecl _wgetenv_s ( size_t * _ReturnSize, wchar_t ( & _Dest ) [ _Size ], const wchar_t * _VarName ) throw ( ) { return _wgetenv_s ( _ReturnSize, _Dest, _Size, _VarName ); }
#line 888
extern "C" { __declspec(dllimport) errno_t __cdecl _wdupenv_s(__wchar_t ** _Buffer, size_t * _BufferSizeInWords, const __wchar_t * _VarName); } 
#line 897
extern "C" { __declspec(dllimport) double __cdecl _wtof(const __wchar_t * _Str); } 
extern "C" { __declspec(dllimport) double __cdecl _wtof_l(const __wchar_t * _Str, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl _wtoi(const __wchar_t * _Str); } 
extern "C" { __declspec(dllimport) int __cdecl _wtoi_l(const __wchar_t * _Str, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) long __cdecl _wtol(const __wchar_t * _Str); } 
extern "C" { __declspec(dllimport) long __cdecl _wtol_l(const __wchar_t * _Str, _locale_t _Locale); } 

extern "C" { __declspec(dllimport) errno_t __cdecl _i64tow_s(__int64 _Val, __wchar_t * _DstBuf, size_t _SizeInWords, int _Radix); } 
extern "C" { __declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using _i64tow_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __wchar_t *__cdecl _i64tow(__int64 _Val, __wchar_t * _DstBuf, int _Radix); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _ui64tow_s(unsigned __int64 _Val, __wchar_t * _DstBuf, size_t _SizeInWords, int _Radix); } 
extern "C" { __declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using _ui64tow_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __wchar_t *__cdecl _ui64tow(unsigned __int64 _Val, __wchar_t * _DstBuf, int _Radix); } 
extern "C" { __declspec(dllimport) __int64 __cdecl _wtoi64(const __wchar_t * _Str); } 
extern "C" { __declspec(dllimport) __int64 __cdecl _wtoi64_l(const __wchar_t * _Str, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) __int64 __cdecl _wcstoi64(const __wchar_t * _Str, __wchar_t ** _EndPtr, int _Radix); } 
extern "C" { __declspec(dllimport) __int64 __cdecl _wcstoi64_l(const __wchar_t * _Str, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) unsigned __int64 __cdecl _wcstoui64(const __wchar_t * _Str, __wchar_t ** _EndPtr, int _Radix); } 
extern "C" { __declspec(dllimport) unsigned __int64 __cdecl _wcstoui64_l(const __wchar_t * _Str, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 929
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wfullpath(__wchar_t * _FullPath, const __wchar_t * _Path, size_t _SizeInWords); } 
#line 935
extern "C" { __declspec(dllimport) errno_t __cdecl _wmakepath_s(__wchar_t * _PathResult, size_t _SizeInBytes, const __wchar_t * _Drive, const __wchar_t * _Dir, const __wchar_t * _Filename, const __wchar_t * _Ext); } 

template < size_t _Size > inline errno_t __cdecl _wmakepath_s ( wchar_t ( & _ResultPath ) [ _Size ], const wchar_t * _Drive, const wchar_t * _Dir, const wchar_t * _Filename, const wchar_t * _Ext ) throw ( ) { return _wmakepath_s ( _ResultPath, _Size, _Drive, _Dir, _Filename, _Ext ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wmakepath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) void __cdecl _wmakepath(__wchar_t * _ResultPath, const __wchar_t * _Drive, const __wchar_t * _Dir, const __wchar_t * _Filename, const __wchar_t * _Ext); } 




extern "C" { __declspec(dllimport) int __cdecl _wputenv(const __wchar_t * _EnvString); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wputenv_s(const __wchar_t * _Name, const __wchar_t * _Value); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wsearchenv_s(const __wchar_t * _Filename, const __wchar_t * _EnvVar, __wchar_t * _ResultPath, size_t _SizeInWords); } 
template < size_t _Size > inline errno_t __cdecl _wsearchenv_s ( const wchar_t * _Filename, const wchar_t * _EnvVar, wchar_t ( & _ResultPath ) [ _Size ] ) throw ( ) { return _wsearchenv_s ( _Filename, _EnvVar, _ResultPath, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wsearchenv_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __declspec(dllimport) void __cdecl _wsearchenv(const __wchar_t * _Filename, const __wchar_t * _EnvVar, __wchar_t * _ResultPath); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wsplitpath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __declspec(dllimport) void __cdecl _wsplitpath(const __wchar_t * _FullPath, __wchar_t * _Drive, __wchar_t * _Dir, __wchar_t * _Filename, __wchar_t * _Ext); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wsplitpath_s(const __wchar_t * _FullPath, __wchar_t * _Drive, size_t _DriveSize, __wchar_t * _Dir, size_t _DirSize, __wchar_t * _Filename, size_t _FilenameSize, __wchar_t * _Ext, size_t _ExtSize); } 




template < size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize > inline errno_t __cdecl _wsplitpath_s ( const wchar_t * _Path, wchar_t ( & _Drive ) [ _DriveSize ], wchar_t ( & _Dir ) [ _DirSize ], wchar_t ( & _Name ) [ _NameSize ], wchar_t ( & _Ext ) [ _ExtSize ] ) throw ( ) { return _wsplitpath_s ( _Path, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize ); }
#line 971
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wcsdup(const __wchar_t * _Str); } 
#line 978
extern "C" { __declspec(dllimport) errno_t __cdecl wcscat_s(__wchar_t * _Dst, rsize_t _DstSize, const __wchar_t * _Src); } 

template < size_t _Size > inline errno_t __cdecl wcscat_s ( wchar_t ( & _Dest ) [ _Size ], const wchar_t * _Source ) throw ( ) { return wcscat_s ( _Dest, _Size, _Source ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using wcscat_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcscat(__wchar_t * _Dest, const __wchar_t * _Source); } 
extern "C" { __declspec(dllimport) const __wchar_t *__cdecl wcschr(const __wchar_t * _Str, __wchar_t _Ch); } 
extern "C" { __declspec(dllimport) int __cdecl wcscmp(const __wchar_t * _Str1, const __wchar_t * _Str2); } 

extern "C" { __declspec(dllimport) errno_t __cdecl wcscpy_s(__wchar_t * _Dst, rsize_t _DstSize, const __wchar_t * _Src); } 

template < size_t _Size > inline errno_t __cdecl wcscpy_s ( wchar_t ( & _Dest ) [ _Size ], const wchar_t * _Source ) throw ( ) { return wcscpy_s ( _Dest, _Size, _Source ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using wcscpy_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcscpy(__wchar_t * _Dest, const __wchar_t * _Source); } 
extern "C" { __declspec(dllimport) size_t __cdecl wcscspn(const __wchar_t * _Str, const __wchar_t * _Control); } 
extern "C" { __declspec(dllimport) size_t __cdecl wcslen(const __wchar_t * _Str); } 
extern "C" { __declspec(dllimport) size_t __cdecl wcsnlen(const __wchar_t * _Src, size_t _MaxCount); } 

extern "C" { static __inline size_t __cdecl wcsnlen_s(const __wchar_t *_Src, size_t _MaxCount) 
{ 
return (_Src == 0) ? 0 : (wcsnlen(_Src, _MaxCount)); 
} } 


extern "C" { __declspec(dllimport) errno_t __cdecl wcsncat_s(__wchar_t * _Dst, rsize_t _DstSize, const __wchar_t * _Src, rsize_t _MaxCount); } 

template < size_t _Size > inline errno_t __cdecl wcsncat_s ( wchar_t ( & _Dest ) [ _Size ], const wchar_t * _Source, size_t _Count ) throw ( ) { return wcsncat_s ( _Dest, _Size, _Source, _Count ); }

/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 6059) /* Removed pragma: #pragma warning(disable:6059)*/
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using wcsncat_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcsncat(__wchar_t * _Dest, const __wchar_t * _Source, size_t _Count); } 
/* Removed pragma: #pragma warning(pop)*/

extern "C" { __declspec(dllimport) int __cdecl wcsncmp(const __wchar_t * _Str1, const __wchar_t * _Str2, size_t _MaxCount); } 

extern "C" { __declspec(dllimport) errno_t __cdecl wcsncpy_s(__wchar_t * _Dst, rsize_t _DstSize, const __wchar_t * _Src, rsize_t _MaxCount); } 

template < size_t _Size > inline errno_t __cdecl wcsncpy_s ( wchar_t ( & _Dest ) [ _Size ], const wchar_t * _Source, size_t _Count ) throw ( ) { return wcsncpy_s ( _Dest, _Size, _Source, _Count ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using wcsncpy_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcsncpy(__wchar_t * _Dest, const __wchar_t * _Source, size_t _Count); } 
extern "C" { __declspec(dllimport) const __wchar_t *__cdecl wcspbrk(const __wchar_t * _Str, const __wchar_t * _Control); } 
extern "C" { __declspec(dllimport) const __wchar_t *__cdecl wcsrchr(const __wchar_t * _Str, __wchar_t _Ch); } 
extern "C" { __declspec(dllimport) size_t __cdecl wcsspn(const __wchar_t * _Str, const __wchar_t * _Control); } 
extern "C" { __declspec(dllimport) const __wchar_t *__cdecl wcsstr(const __wchar_t * _Str, const __wchar_t * _SubStr); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using wcstok_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcstok(__wchar_t * _Str, const __wchar_t * _Delim); } 
extern "C" { __declspec(dllimport) __wchar_t *__cdecl wcstok_s(__wchar_t * _Str, const __wchar_t * _Delim, __wchar_t ** _Context); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcserror_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wcserror(int _ErrNum); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wcserror_s(__wchar_t * _Buf, size_t _SizeInWords, int _ErrNum); } 
template < size_t _Size > inline errno_t __cdecl _wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], int _Error ) throw ( ) { return _wcserror_s ( _Buffer, _Size, _Error ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using __wcserror_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl __wcserror(const __wchar_t * _Str); } 
extern "C" { __declspec(dllimport) errno_t __cdecl __wcserror_s(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _ErrMsg); } 
template < size_t _Size > inline errno_t __cdecl __wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], const wchar_t * _ErrorMessage ) throw ( ) { return __wcserror_s ( _Buffer, _Size, _ErrorMessage ); }

extern "C" { __declspec(dllimport) int __cdecl _wcsicmp(const __wchar_t * _Str1, const __wchar_t * _Str2); } 
extern "C" { __declspec(dllimport) int __cdecl _wcsicmp_l(const __wchar_t * _Str1, const __wchar_t * _Str2, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl _wcsnicmp(const __wchar_t * _Str1, const __wchar_t * _Str2, size_t _MaxCount); } 
extern "C" { __declspec(dllimport) int __cdecl _wcsnicmp_l(const __wchar_t * _Str1, const __wchar_t * _Str2, size_t _MaxCount, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wcsnset_s(__wchar_t * _Dst, size_t _DstSizeInWords, __wchar_t _Val, size_t _MaxCount); } 
template < size_t _Size > inline errno_t __cdecl _wcsnset_s ( wchar_t ( & _Dst ) [ _Size ], wchar_t _Val, size_t _MaxCount ) throw ( ) { return _wcsnset_s ( _Dst, _Size, _Val, _MaxCount ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcsnset_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wcsnset(__wchar_t * _Str, __wchar_t _Val, size_t _MaxCount); } 
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wcsrev(__wchar_t * _Str); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wcsset_s(__wchar_t * _Str, size_t _SizeInWords, __wchar_t _Val); } 
template < size_t _Size > inline errno_t __cdecl _wcsset_s ( wchar_t ( & _Str ) [ _Size ], wchar_t _Val ) throw ( ) { return _wcsset_s ( _Str, _Size, _Val ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcsset_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wcsset(__wchar_t * _Str, __wchar_t _Val); } 

extern "C" { __declspec(dllimport) errno_t __cdecl _wcslwr_s(__wchar_t * _Str, size_t _SizeInWords); } 
template < size_t _Size > inline errno_t __cdecl _wcslwr_s ( wchar_t ( & _String ) [ _Size ] ) throw ( ) { return _wcslwr_s ( _String, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcslwr_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wcslwr(__wchar_t * _String); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wcslwr_s_l(__wchar_t * _Str, size_t _SizeInWords, _locale_t _Locale); } 
template < size_t _Size > inline errno_t __cdecl _wcslwr_s_l ( wchar_t ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _wcslwr_s_l ( _String, _Size, _Locale ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcslwr_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wcslwr_l(__wchar_t * _String, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wcsupr_s(__wchar_t * _Str, size_t _Size); } 
template < size_t _Size > inline errno_t __cdecl _wcsupr_s ( wchar_t ( & _String ) [ _Size ] ) throw ( ) { return _wcsupr_s ( _String, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcsupr_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wcsupr(__wchar_t * _String); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wcsupr_s_l(__wchar_t * _Str, size_t _Size, _locale_t _Locale); } 
template < size_t _Size > inline errno_t __cdecl _wcsupr_s_l ( wchar_t ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _wcsupr_s_l ( _String, _Size, _Locale ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcsupr_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wcsupr_l(__wchar_t * _String, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) size_t __cdecl wcsxfrm(__wchar_t * _Dst, const __wchar_t * _Src, size_t _MaxCount); } 
extern "C" { __declspec(dllimport) size_t __cdecl _wcsxfrm_l(__wchar_t * _Dst, const __wchar_t * _Src, size_t _MaxCount, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl wcscoll(const __wchar_t * _Str1, const __wchar_t * _Str2); } 
extern "C" { __declspec(dllimport) int __cdecl _wcscoll_l(const __wchar_t * _Str1, const __wchar_t * _Str2, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl _wcsicoll(const __wchar_t * _Str1, const __wchar_t * _Str2); } 
extern "C" { __declspec(dllimport) int __cdecl _wcsicoll_l(const __wchar_t * _Str1, const __wchar_t * _Str2, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl _wcsncoll(const __wchar_t * _Str1, const __wchar_t * _Str2, size_t _MaxCount); } 
extern "C" { __declspec(dllimport) int __cdecl _wcsncoll_l(const __wchar_t * _Str1, const __wchar_t * _Str2, size_t _MaxCount, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl _wcsnicoll(const __wchar_t * _Str1, const __wchar_t * _Str2, size_t _MaxCount); } 
extern "C" { __declspec(dllimport) int __cdecl _wcsnicoll_l(const __wchar_t * _Str1, const __wchar_t * _Str2, size_t _MaxCount, _locale_t _Locale); } 
#line 1066
inline __wchar_t *__cdecl wcschr(__wchar_t *_Str, __wchar_t _Ch) 
{ return ((__wchar_t *)wcschr((const __wchar_t *)_Str, _Ch)); } 
inline __wchar_t *__cdecl wcspbrk(__wchar_t *_Str, const __wchar_t *_Control) 
{ return ((__wchar_t *)wcspbrk((const __wchar_t *)_Str, _Control)); } 
inline __wchar_t *__cdecl wcsrchr(__wchar_t *_Str, __wchar_t _Ch) 
{ return ((__wchar_t *)wcsrchr((const __wchar_t *)_Str, _Ch)); } 
inline __wchar_t *__cdecl wcsstr(__wchar_t *_Str, const __wchar_t *_SubStr) 
{ return ((__wchar_t *)wcsstr((const __wchar_t *)_Str, _SubStr)); } 
#line 1085
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _wcsdup. See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcsdup(const __wchar_t * _Str); } 
#line 1095
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _wcsicmp. See online help for details.")) __declspec(dllimport) int __cdecl wcsicmp(const __wchar_t * _Str1, const __wchar_t * _Str2); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _wcsnicmp. See online help for details.")) __declspec(dllimport) int __cdecl wcsnicmp(const __wchar_t * _Str1, const __wchar_t * _Str2, size_t _MaxCount); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _wcsnset. See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcsnset(__wchar_t * _Str, __wchar_t _Val, size_t _MaxCount); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _wcsrev. See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcsrev(__wchar_t * _Str); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _wcsset. See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcsset(__wchar_t * _Str, __wchar_t _Val); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _wcslwr. See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcslwr(__wchar_t * _Str); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _wcsupr. See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcsupr(__wchar_t * _Str); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _wcsicoll. See online help for details.")) __declspec(dllimport) int __cdecl wcsicoll(const __wchar_t * _Str1, const __wchar_t * _Str2); } 
#line 1110
extern "C" { struct tm { 
int tm_sec; 
int tm_min; 
int tm_hour; 
int tm_mday; 
int tm_mon; 
int tm_year; 
int tm_wday; 
int tm_yday; 
int tm_isdst; 
}; }
#line 1128
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wasctime_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wasctime(const tm * _Tm); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wasctime_s(__wchar_t * _Buf, size_t _SizeInWords, const tm * _Tm); } 
template < size_t _Size > inline errno_t __cdecl _wasctime_s ( wchar_t ( & _Buffer ) [ _Size ], const struct tm * _Time ) throw ( ) { return _wasctime_s ( _Buffer, _Size, _Time ); }

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wctime32_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wctime32(const __time32_t * _Time); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wctime32_s(__wchar_t * _Buf, size_t _SizeInWords, const __time32_t * _Time); } 
template < size_t _Size > inline errno_t __cdecl _wctime32_s ( wchar_t ( & _Buffer ) [ _Size ], const __time32_t * _Time ) throw ( ) { return _wctime32_s ( _Buffer, _Size, _Time ); }

extern "C" { __declspec(dllimport) size_t __cdecl wcsftime(__wchar_t * _Buf, size_t _SizeInWords, const __wchar_t * _Format, const tm * _Tm); } 
extern "C" { __declspec(dllimport) size_t __cdecl _wcsftime_l(__wchar_t * _Buf, size_t _SizeInWords, const __wchar_t * _Format, const tm * _Tm, _locale_t _Locale); } 

extern "C" { __declspec(dllimport) errno_t __cdecl _wstrdate_s(__wchar_t * _Buf, size_t _SizeInWords); } 
template < size_t _Size > inline errno_t __cdecl _wstrdate_s ( wchar_t ( & _Buffer ) [ _Size ] ) throw ( ) { return _wstrdate_s ( _Buffer, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wstrdate_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wstrdate(__wchar_t * _Buffer); } 

extern "C" { __declspec(dllimport) errno_t __cdecl _wstrtime_s(__wchar_t * _Buf, size_t _SizeInWords); } 
template < size_t _Size > inline errno_t __cdecl _wstrtime_s ( wchar_t ( & _Buffer ) [ _Size ] ) throw ( ) { return _wstrtime_s ( _Buffer, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wstrtime_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wstrtime(__wchar_t * _Buffer); } 

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wctime64_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wctime64(const __time64_t * _Time); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wctime64_s(__wchar_t * _Buf, size_t _SizeInWords, const __time64_t * _Time); } 
template < size_t _Size > inline errno_t __cdecl _wctime64_s ( wchar_t ( & _Buffer ) [ _Size ], const __time64_t * _Time ) throw ( ) { return _wctime64_s ( _Buffer, _Size, _Time ); }
#line 27 "c:\\Program Files\\Microsoft Visual Studio 10.0\\VC\\include\\wtime.inl"
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4996) /* Removed pragma: #pragma warning(disable:4996)*/
#line 44
extern "C" { static __inline __wchar_t *__cdecl _wctime(const time_t *_Time) 
{ 
/* Removed pragma: #pragma warning( push )*/
#pragma warning(disable: 4996) /* Removed pragma: #pragma warning( disable : 4996 )*/
return _wctime64(_Time); 
/* Removed pragma: #pragma warning( pop )*/
} } 

extern "C" { static __inline errno_t __cdecl _wctime_s(__wchar_t *_Buffer, size_t _SizeInWords, const time_t *_Time) 
{ 
return _wctime64_s(_Buffer, _SizeInWords, _Time); 
} } 


/* Removed pragma: #pragma warning(pop)*/
#line 1159 "c:\\Program Files\\Microsoft Visual Studio 10.0\\VC\\include\\wchar.h"
extern "C" { typedef int mbstate_t; }
extern "C" { typedef __wchar_t _Wint_t; }

extern "C" { __declspec(dllimport) wint_t __cdecl btowc(int); } 
extern "C" { __declspec(dllimport) size_t __cdecl mbrlen(const char * _Ch, size_t _SizeInBytes, mbstate_t * _State); } 

extern "C" { __declspec(dllimport) size_t __cdecl mbrtowc(__wchar_t * _DstCh, const char * _SrcCh, size_t _SizeInBytes, mbstate_t * _State); } 

extern "C" { __declspec(dllimport) errno_t __cdecl mbsrtowcs_s(size_t * _Retval, __wchar_t * _Dst, size_t _Size, const char ** _PSrc, size_t _N, mbstate_t * _State); } 
template < size_t _Size > inline errno_t __cdecl mbsrtowcs_s ( size_t * _Retval, wchar_t ( & _Dest ) [ _Size ], const char * * _PSource, size_t _Count, mbstate_t * _State ) throw ( ) { return mbsrtowcs_s ( _Retval, _Dest, _Size, _PSource, _Count, _State ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using mbsrtowcs_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) size_t __cdecl mbsrtowcs(__wchar_t * _Dest, const char ** _PSrc, size_t _Count, mbstate_t * _State); } 

extern "C" { __declspec(dllimport) errno_t __cdecl wcrtomb_s(size_t * _Retval, char * _Dst, size_t _SizeInBytes, __wchar_t _Ch, mbstate_t * _State); } 

template < size_t _Size > inline errno_t __cdecl wcrtomb_s ( size_t * _Retval, char ( & _Dest ) [ _Size ], wchar_t _Source, mbstate_t * _State ) throw ( ) { return wcrtomb_s ( _Retval, _Dest, _Size, _Source, _State ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using wcrtomb_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) size_t __cdecl wcrtomb(char * _Dest, __wchar_t _Source, mbstate_t * _State); } 
extern "C" { __declspec(dllimport) errno_t __cdecl wcsrtombs_s(size_t * _Retval, char * _Dst, size_t _SizeInBytes, const __wchar_t ** _Src, size_t _Size, mbstate_t * _State); } 

template < size_t _Size > inline errno_t __cdecl wcsrtombs_s ( size_t * _Retval, char ( & _Dest ) [ _Size ], const wchar_t * * _PSrc, size_t _Count, mbstate_t * _State ) throw ( ) { return wcsrtombs_s ( _Retval, _Dest, _Size, _PSrc, _Count, _State ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using wcsrtombs_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) size_t __cdecl wcsrtombs(char * _Dest, const __wchar_t ** _PSource, size_t _Count, mbstate_t * _State); } 
extern "C" { __declspec(dllimport) int __cdecl wctob(wint_t _WCh); } 
#line 1187
extern "C" { __declspec(dllimport) void *__cdecl memmove(void * _Dst, const void * _Src, size_t _Size); } 

extern "C" { void *__cdecl memcpy(void * _Dst, const void * _Src, size_t _Size); } 

extern "C" { __declspec(dllimport) errno_t __cdecl memcpy_s(void * _Dst, rsize_t _DstSize, const void * _Src, rsize_t _MaxCount); } 
extern "C" { __declspec(dllimport) errno_t __cdecl memmove_s(void * _Dst, rsize_t _DstSize, const void * _Src, rsize_t _MaxCount); } 

extern "C" { __inline int __cdecl fwide(FILE *_F, int _M) 
{ (void)_F; return (_M); } } 
extern "C" { __inline int __cdecl mbsinit(const mbstate_t *_P) 
{ return (_P == 0 || *_P == 0); } } 
extern "C" { __inline const __wchar_t *__cdecl wmemchr(const __wchar_t *_S, __wchar_t _C, size_t _N) 
{ for (; 0 < _N; (++_S), (--_N)) 
if (*_S == _C) 
return (_S);     
return (0); } } 
extern "C" { __inline int __cdecl wmemcmp(const __wchar_t *_S1, const __wchar_t *_S2, size_t _N) 
{ for (; 0 < _N; ((++_S1), (++_S2)), (--_N)) 
if (*_S1 != *_S2) 
return ((*_S1 < *_S2) ? -1 : (+1));     
return (0); } } 

extern "C" { __inline __wchar_t *__cdecl wmemcpy(__wchar_t *_S1, const __wchar_t *_S2, size_t _N) 
{ 
/* Removed pragma: #pragma warning( push )*/
#pragma warning(disable: 4996 6386) /* Removed pragma: #pragma warning( disable : 4996 6386 )*/
return (__wchar_t *)memcpy(_S1, _S2, _N * sizeof(__wchar_t)); 
/* Removed pragma: #pragma warning( pop )*/
} } 

extern "C" { __inline __wchar_t *__cdecl wmemmove(__wchar_t *_S1, const __wchar_t *_S2, size_t _N) 
{ 
/* Removed pragma: #pragma warning( push )*/
#pragma warning(disable: 4996 6386) /* Removed pragma: #pragma warning( disable : 4996 6386 )*/
#pragma warning(disable: 6387) /* Removed pragma: #pragma warning( disable : 6387)*/

return (__wchar_t *)memmove(_S1, _S2, _N * sizeof(__wchar_t)); 
/* Removed pragma: #pragma warning( pop )*/
} } 


extern "C" { errno_t __cdecl wmemcpy_s(__wchar_t * _S1, rsize_t _N1, const __wchar_t * _S2, rsize_t _N); } 
extern "C" { errno_t __cdecl wmemmove_s(__wchar_t * _S1, rsize_t _N1, const __wchar_t * _S2, rsize_t _N); } 


extern "C" { __inline __wchar_t *__cdecl wmemset(__wchar_t *_S, __wchar_t _C, size_t _N) 
{ 
__wchar_t *_Su = _S; 
for (; 0 < _N; (++_Su), (--_N)) 
{ 
*_Su = _C; 
}  
return (_S); 
} } 



inline __wchar_t *__cdecl wmemchr(__wchar_t *_S, __wchar_t _C, size_t _N) 
{ return (__wchar_t *)wmemchr((const __wchar_t *)_S, _C, _N); } 
#line 1254
#pragma pack ( pop )
#line 189 "c:\\Program Files\\Microsoft Visual Studio 10.0\\VC\\include\\tchar.h"
extern "C" { typedef __wchar_t _TCHAR; }
extern "C" { typedef __wchar_t _TSCHAR; }
extern "C" { typedef __wchar_t _TUCHAR; }
extern "C" { typedef __wchar_t _TXCHAR; }
extern "C" { typedef wint_t _TINT; }
#line 199
extern "C" { typedef __wchar_t TCHAR; }
#line 643
extern "C" { __inline size_t __cdecl _tclen(const __wchar_t *_Cpc) 
{ 

(void *)_Cpc; 
return 1; 
} } 
extern "C" { __inline void __cdecl _tccpy(__wchar_t *_Pc1, const __wchar_t *_Cpc2) { *_Pc1 = (__wchar_t)(*_Cpc2); } } 
extern "C" { __inline void __cdecl _tccpy_l(__wchar_t *_Pc1, const __wchar_t *_Cpc2, _locale_t _Locale) 
{ 
(void)_Locale; 
_tccpy(_Pc1, _Cpc2); 
} } 
extern "C" { __inline int __cdecl _tccmp(const __wchar_t *_Cpc1, const __wchar_t *_Cpc2) { return (int)((*_Cpc1) - (*_Cpc2)); } } 
#line 718
extern "C" { __inline __wchar_t *__cdecl _wcsdec(const __wchar_t *_Cpc1, const __wchar_t *_Cpc2) { return (__wchar_t *)(((_Cpc1) >= (_Cpc2)) ? 0 : ((_Cpc2) - 1)); } } 
extern "C" { __inline __wchar_t *__cdecl _wcsinc(const __wchar_t *_Pc) { return (__wchar_t *)(_Pc + 1); } } 
extern "C" { __inline unsigned __cdecl _wcsnextc(const __wchar_t *_Cpc) { return (unsigned)(*_Cpc); } } 
extern "C" { __inline __wchar_t *__cdecl _wcsninc(const __wchar_t *_Pc, size_t _Sz) { return (__wchar_t *)(_Pc + _Sz); } } 
extern "C" { __inline size_t __cdecl _wcsncnt(const __wchar_t *_String, size_t _Cnt) 
{ 
size_t n = _Cnt; 
__wchar_t *cp = (__wchar_t *)_String; 
while (n-- && *cp) 
cp++;   
return _Cnt - n - 1; 
} } 
extern "C" { __inline __wchar_t *__cdecl _wcsspnp(const __wchar_t *

_Cpc1, const __wchar_t *
_Cpc2) 

{ 
return (_Cpc1 == 0) ? 0 : ((*(_Cpc1 += wcsspn(_Cpc1, _Cpc2)) != '\000') ? (__wchar_t *)_Cpc1 : (0)); 
} } 


extern "C" { __inline errno_t __cdecl _wcsncpy_s_l(__wchar_t *_Destination, size_t _Destination_size_chars, const __wchar_t *_Source, size_t _Count, _locale_t _Locale) 
{ 
(void)_Locale; 
return wcsncpy_s(_Destination, _Destination_size_chars, _Source, _Count); 
} } 


template < size_t _Size > inline errno_t __cdecl _wcsncpy_s_l ( wchar_t ( & _Dest ) [ _Size ], const wchar_t * _Source, size_t _Count, _locale_t _Locale ) throw ( ) { return _wcsncpy_s_l ( _Dest, _Size, _Source, _Count, _Locale ); }

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcsncpy_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __inline __wchar_t *__cdecl _wcsncpy_l(__wchar_t *_Dst, const __wchar_t *_Source, size_t _Count, _locale_t _Locale) 
{ 
(void)_Locale; 
/* Removed pragma: #pragma warning( push )*/
#pragma warning(disable: 4996 6054) /* Removed pragma: #pragma warning( disable : 4996 6054)*/
return wcsncpy(_Dst, _Source, _Count); 
/* Removed pragma: #pragma warning( pop )*/
} } 




extern "C" { __inline errno_t __cdecl _wcsncat_s_l(__wchar_t *_Destination, size_t _Destination_size_chars, const __wchar_t *_Source, size_t _Count, _locale_t _Locale) 
{ 
(void)_Locale; 
return wcsncat_s(_Destination, _Destination_size_chars, _Source, _Count); 
} } 


template < size_t _Size > inline errno_t __cdecl _wcsncat_s_l ( wchar_t ( & _Dest ) [ _Size ], const wchar_t * _Source, size_t _Count, _locale_t _Locale ) throw ( ) { return _wcsncat_s_l ( _Dest, _Size, _Source, _Count, _Locale ); }

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcsncat_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __inline __wchar_t *__cdecl _wcsncat_l(__wchar_t *_Dst, const __wchar_t *_Source, size_t _Count, _locale_t _Locale) 
{ 
(void)_Locale; 
/* Removed pragma: #pragma warning( push )*/
#pragma warning(disable: 4996 6054 6059) /* Removed pragma: #pragma warning( disable : 4996 6054 6059)*/

return wcsncat(_Dst, _Source, _Count); 
/* Removed pragma: #pragma warning( pop )*/
} } 



extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcstok_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __inline __wchar_t *_wcstok_l(__wchar_t *_String, const __wchar_t *_Delimiters, _locale_t _Locale) 
{ 
(void)_Locale; 
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4996) /* Removed pragma: #pragma warning(disable:4996)*/
return wcstok(_String, _Delimiters); 
/* Removed pragma: #pragma warning(pop)*/
} } 

extern "C" { __inline __wchar_t *_wcstok_s_l(__wchar_t *_String, const __wchar_t *_Delimiters, __wchar_t **_Current_position, _locale_t _Locale) 
{ 
(void)_Locale; 
return wcstok_s(_String, _Delimiters, _Current_position); 
} } 

extern "C" { __inline errno_t _wcsnset_s_l(__wchar_t *_Destination, size_t _Destination_size_chars, __wchar_t _Value, size_t _Count, _locale_t _Locale) 
{ 
(void)_Locale; 
return _wcsnset_s(_Destination, _Destination_size_chars, _Value, _Count); 
} } 

template < size_t _Size > inline errno_t __cdecl _wcsnset_s_l ( wchar_t ( & _Dest ) [ _Size ], wchar_t _Value, size_t _Count, _locale_t _Locale ) throw ( ) { return _wcsnset_s_l ( _Dest, _Size, _Value, _Count, _Locale ); }

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcsnset_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __inline __wchar_t *__cdecl _wcsnset_l(__wchar_t *_Dst, __wchar_t _Value, size_t _MaxCount, _locale_t _Locale) 
{ 
(void)_Locale; 
/* Removed pragma: #pragma warning( push )*/
#pragma warning(disable: 4996) /* Removed pragma: #pragma warning( disable : 4996 )*/
return _wcsnset(_Dst, _Value, _MaxCount); 
/* Removed pragma: #pragma warning( pop )*/
} } 



extern "C" { __inline errno_t _wcsset_s_l(__wchar_t *_Destination, size_t _Destination_size_chars, __wchar_t _Value, _locale_t _Locale) 
{ 
(void)_Locale; 
return _wcsset_s(_Destination, _Destination_size_chars, _Value); 
} } 

template < size_t _Size > inline errno_t __cdecl _wcsset_s_l ( wchar_t ( & _Dest ) [ _Size ], wchar_t _Value, _locale_t _Locale ) throw ( ) { return _wcsset_s_l ( _Dest, _Size, _Value, _Locale ); }

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcsset_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __inline __wchar_t *__cdecl _wcsset_l(__wchar_t *_Dst, __wchar_t _Value, _locale_t _Locale) 
{ 
(void)_Locale; 
/* Removed pragma: #pragma warning( push )*/
#pragma warning(disable: 4996) /* Removed pragma: #pragma warning( disable : 4996 )*/
return _wcsset(_Dst, _Value); 
/* Removed pragma: #pragma warning( pop )*/
} } 
#line 1 "__TEST_HARNESS__"
;

