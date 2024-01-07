// new types for the compiler
typedef float float10; // we eventually want a real 10-bit float
typedef long pointer32; // only used for file headers we don't really care about
typedef long long longlong;

typedef unsigned char   undefined;

typedef pointer32 ImageBaseOffset32;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined6;
typedef unsigned long long    undefined7;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;

typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef unsigned short    wchar16;
typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG MSG;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef uint UINT;

typedef uint UINT_PTR;

typedef UINT_PTR WPARAM;

typedef long LONG_PTR;

typedef LONG_PTR LPARAM;

typedef ulong DWORD;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

typedef long LONG;

struct tagPOINT {
    LONG x;
    LONG y;
};

struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

struct HWND__ {
    int unused;
};

typedef struct tagWNDCLASSEXA tagWNDCLASSEXA, *PtagWNDCLASSEXA;

typedef struct tagWNDCLASSEXA WNDCLASSEXA;

typedef LONG_PTR LRESULT;

typedef LRESULT (*WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ *HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ *HBRUSH;

typedef char CHAR;

typedef CHAR *LPCSTR;

struct HBRUSH__ {
    int unused;
};

struct HICON__ {
    int unused;
};

struct tagWNDCLASSEXA {
    UINT cbSize;
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
    HICON hIconSm;
};

struct HINSTANCE__ {
    int unused;
};

typedef int INT_PTR;

typedef INT_PTR (*DLGPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct tagMSG *LPMSG;

typedef struct _cpinfo _cpinfo, *P_cpinfo;

typedef uchar BYTE;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo *LPCPINFO;

typedef DWORD LCTYPE;

typedef struct _GUID _GUID, *P_GUID;

typedef struct _GUID GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef GUID IID;

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulong ULONG_PTR;

typedef union _union_518 _union_518, *P_union_518;

typedef void *HANDLE;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void *PVOID;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void *LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _TIME_ZONE_INFORMATION _TIME_ZONE_INFORMATION, *P_TIME_ZONE_INFORMATION;

typedef struct _TIME_ZONE_INFORMATION *LPTIME_ZONE_INFORMATION;

typedef short WCHAR;

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

typedef struct _SYSTEMTIME SYSTEMTIME;

typedef ushort WORD;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

struct _TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[32];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[32];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
};

typedef struct _WIN32_FIND_DATAA _WIN32_FIND_DATAA, *P_WIN32_FIND_DATAA;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

struct _WIN32_FIND_DATAA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    CHAR cFileName[260];
    CHAR cAlternateFileName[14];
};

typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID);

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef CHAR *LPSTR;

typedef BYTE *LPBYTE;

struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;

typedef struct _STARTUPINFOA *LPSTARTUPINFOA;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _SYSTEMTIME *LPSYSTEMTIME;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

typedef long HRESULT;

typedef LONG *PLONG;

typedef CHAR *LPCH;

typedef WCHAR *LPWSTR;

typedef CONTEXT *PCONTEXT;

typedef WCHAR *PCNZWCH;

typedef WCHAR *LPWCH;

typedef DWORD ACCESS_MASK;

typedef WCHAR *LPCWSTR;

typedef DWORD LCID;

typedef CHAR *PCNZCH;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[144]; // Actual DOS program
};

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

typedef ULONG_PTR SIZE_T;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef DWORD ULONG;

typedef WCHAR OLECHAR;

typedef OLECHAR *LPOLESTR;

typedef struct HFONT__ HFONT__, *PHFONT__;

typedef struct HFONT__ *HFONT;

struct HFONT__ {
    int unused;
};

typedef struct tagPOINT *LPPOINT;

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef DWORD *LPDWORD;

typedef struct HDC__ HDC__, *PHDC__;

struct HDC__ {
    int unused;
};

typedef uint *PUINT;

typedef HINSTANCE HMODULE;

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ *HMENU;

struct HMENU__ {
    int unused;
};

typedef struct _FILETIME *LPFILETIME;

typedef int (*FARPROC)(void);

typedef struct HDC__ *HDC;

typedef struct tagRECT tagRECT, *PtagRECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef WORD *LPWORD;

typedef struct HKEY__ *HKEY;

typedef HKEY *PHKEY;

typedef WORD ATOM;

typedef struct tagRECT *LPRECT;

typedef BOOL *LPBOOL;

typedef void *HGDIOBJ;

typedef void *LPCVOID;

typedef DWORD COLORREF;

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef LONG LSTATUS;

typedef ACCESS_MASK REGSAM;

typedef uint size_t;

typedef struct IUnknownVtbl IUnknownVtbl, *PIUnknownVtbl;

typedef struct IUnknown IUnknown, *PIUnknown;

struct IUnknownVtbl {
    HRESULT (*QueryInterface)(struct IUnknown *, IID *, void **);
    ULONG (*AddRef)(struct IUnknown *);
    ULONG (*Release)(struct IUnknown *);
};

struct IUnknown {
    struct IUnknownVtbl *lpVtbl;
};

typedef struct IUnknown *LPUNKNOWN;




undefined4 FUN_00401000(undefined4 param_1,uint param_2,int param_3);
void FUN_00403e10(undefined *param_1);
void FUN_00403f00(int param_1);
undefined4 FUN_00403f30(undefined4 *param_1,int param_2);
int FUN_00403fd0(int param_1);
int FUN_00404040(int param_1);
undefined4 FUN_004040a0(int *param_1,undefined4 param_2,undefined4 param_3);
int FUN_00404190(int param_1,undefined4 param_2);
undefined4 FUN_004041c0(int *param_1,int param_2);
undefined4 FUN_00404230(int *param_1);
undefined4 FUN_00404280(int *param_1);
int FUN_004042f0(int param_1);
undefined4 FUN_00404330(int *param_1,int param_2,int param_3);
uint FUN_004043d0(int param_1);
undefined4 FUN_00404400(int *param_1,int param_2,int param_3);
uint FUN_004044a0(int param_1);
undefined4 FUN_004044e0(int *param_1,int param_2,int param_3);
bool FUN_00404590(int param_1,uint param_2,undefined4 *param_3,int param_4);
int ** FUN_00404640(int param_1,undefined4 param_2);
undefined4 FUN_00404670(undefined4 param_1);
void FUN_004046e0(int param_1);
void FUN_00404760(undefined4 param_1);
undefined4 FUN_004047b0(int param_1,int param_2);
undefined4 FUN_00404880(int param_1);
int FUN_00404960(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_004049e0(void);
int FUN_00404a20(int param_1);
undefined4 FUN_00404b10(void);
undefined4 FUN_00404da0(void);
void FUN_00404dd0(void);
void FUN_00405cf0(int param_1);
uint FUN_00405dd0(int param_1,int param_2);
void FUN_00405ea0(undefined4 *param_1);
undefined4 FUN_00406080(undefined4 param_1);
undefined4 FUN_00406470(undefined1 *param_1,byte *param_2,int param_3);
int FUN_00406a50(int param_1,int param_2,byte *param_3,byte param_4,int param_5,undefined4 param_6,int *param_7);
byte FUN_00406cc0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
int FUN_00407500(byte *param_1,undefined4 param_2,int param_3,int param_4,int param_5);
void FUN_00407630(int param_1);
int FUN_00407700(int param_1,undefined4 *param_2);
void FUN_00407800(int param_1);
void FUN_004078a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
undefined4 FUN_004078e0(undefined1 *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int param_6);
undefined4 FUN_004079f0(byte *param_1,int param_2,int param_3,byte *param_4);
int FUN_00407a90(undefined4 param_1,int *param_2);
undefined * FUN_00407b00(uint param_1,uint *param_2);
undefined4 FUN_00407cd0(byte *param_1,undefined4 param_2,int param_3);
undefined * FUN_00407d90(int param_1,char param_2);
void FUN_00407de0(void);
undefined4 FUN_00407ea0(int param_1);
undefined4 FUN_00407f80(int param_1);
undefined4 FUN_00408020(int param_1);
undefined4 FUN_00408040(int param_1,int param_2,float param_3,float param_4);
void FUN_004080c0(undefined4 param_1,undefined2 param_2,undefined param_3);
void FUN_00408120(void);
undefined4 FUN_004081c0(void);
void FUN_004081e0(int param_1);
bool FUN_00408200(void);
void FUN_00408210(undefined4 param_1);
void FUN_00408220(void);
undefined4 FUN_004082e0(int *param_1,int *param_2);
void FUN_00408360(int param_1,int param_2);
void FUN_004083c1(void);
void FUN_004083d0(void);
void FUN_00408510(void);
void FUN_00408620(void);
void FUN_00408640(void);
void FUN_00408800(void);
void FUN_00408820(void);
undefined4 FUN_00408880(undefined4 param_1);
undefined4 FUN_00408b60(undefined4 param_1);
void FUN_00408e40(undefined4 param_1);
undefined4 FUN_00408e60(undefined4 param_1,undefined4 param_2);
void FUN_00408eb0(int param_1);
void FUN_00408f70(int param_1);
void FUN_00408f90(void);
void FUN_00408fb0(undefined4 param_1,int param_2);
int FUN_00409040(undefined4 param_1);
int FUN_00409230(undefined4 param_1);
void FUN_00409270(void);
void FUN_00409290(uint param_1);
void FUN_00409380(short param_1);
void FUN_00409450(short param_1,short param_2,short param_3,short param_4);
void FUN_004094e0(int param_1);
void FUN_00409510(int param_1,int param_2);
void FUN_00409600(int param_1,short param_2,short param_3,short param_4,short param_5,short param_6,short param_7,short param_8,short param_9,short param_10);
void FUN_00409700(short param_1);
void FUN_00409750(int param_1,short param_2,short param_3,short param_4,short param_5,short param_6,short param_7);
undefined4 FUN_00409800(int param_1);
void FUN_00409af0(void);
bool FUN_00409b10(int *param_1);
void FUN_00409cf1(void);
void FUN_00409d00(void);
undefined4 FUN_00409d70(uint param_1);
undefined4 FUN_00409ee0(float param_1,int param_2,int param_3,int param_4);
undefined4 FUN_0040a0b0(int param_1);
void FUN_0040a120(int param_1);
int FUN_0040a160(uint param_1);
int FUN_0040a190(int param_1,uint param_2);
undefined4 FUN_0040a240(int param_1,int param_2);
int FUN_0040a330(int param_1,int param_2);
int FUN_0040a500(int param_1,int param_2);
void FUN_0040a680(void);
void FUN_0040ab60(void);
undefined4 FUN_0040ab80(undefined4 param_1);
undefined4 FUN_0040ae40(undefined4 param_1);
void FUN_0040b110(int param_1);
void FUN_0040b150(undefined4 param_1,undefined4 param_2);
void FUN_0040b1c0(void);
void FUN_0040b3d0(void);
void FUN_0040b5e0(void);
void FUN_0040b731(void);
void FUN_0040b740(int param_1,undefined4 param_2);
void FUN_0040bbf0(undefined4 param_1);
void FUN_0040bc80(undefined4 param_1);
void FUN_0040c100(undefined4 param_1);
void FUN_0040c260(undefined4 param_1);
void FUN_0040c4e0(undefined4 param_1);
void FUN_0040c670(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void FUN_0040c7a0(undefined4 param_1);
void FUN_0040d2c0(undefined4 param_1);
void FUN_0040dd10(undefined4 param_1);
void FUN_0040e6a0(undefined4 param_1);
void FUN_0040ea70(undefined4 param_1);
void FUN_0040ef40(undefined4 param_1);
void FUN_0040fb50(undefined4 param_1);
void FUN_0040ffe0(undefined4 param_1);
void FUN_00410230(undefined4 param_1);
void FUN_00410430(void);
void FUN_00410480(undefined4 param_1);
void FUN_004104f0(void);
undefined4 FUN_00410fd0(void);
void FUN_00411120(undefined4 param_1,undefined4 param_2);
undefined4 FUN_00411140(int param_1,int param_2);
void FUN_00411170(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5);
void FUN_00411210(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_00411270(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_004112e1(void);
void FUN_004112f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_00411361(void);
void FUN_00411370(void);
void FUN_00411390(int param_1,int param_2,uint param_3);
void FUN_00411440(int param_1,int param_2,int param_3);
undefined * FUN_00411480(void);
void FUN_00411490(int param_1);
void FUN_004114b0(int param_1);
undefined4 FUN_004114d0(int param_1,undefined4 param_2);
undefined4 FUN_00411720(void);
void FUN_00411730(undefined4 param_1);
void FUN_00411740(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00411770(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_004117b0(int param_1);
void FUN_004117e0(void);
undefined4 FUN_00411800(void);
undefined4 FUN_00411810(void);
void FUN_00411820(int param_1);
void FUN_004118b0(void);
void FUN_00411910(int param_1,int param_2);
undefined4 FUN_00411950(void);
void FUN_004121f0(void);
void FUN_00412630(void);
void FUN_00412640(undefined4 param_1);
void FUN_00412650(void);
void FUN_00412e20(void);
void FUN_00412e40(void);
undefined4 FUN_00412e90(undefined4 param_1,int param_2);
int FUN_00412f20(undefined4 param_1);
void FUN_00412f60(int param_1);
void FUN_00412fb0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,uint param_6);
void FUN_00413090(int param_1,int param_2,undefined param_3,undefined param_4,undefined param_5,undefined param_6);
void FUN_004130e0(int param_1,int param_2,int param_3);
int FUN_00413130(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4);
int FUN_004131c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6,undefined4 param_7,undefined4 param_8);
int FUN_004132a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,uint param_9,undefined4 param_10);
int FUN_00413340(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,uint param_11,undefined4 param_12);
int FUN_00413430(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,uint param_5,undefined4 param_6);
void FUN_00413500(int param_1,undefined4 param_2);
int FUN_00413520(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_00413610(int param_1,int param_2);
int FUN_004136f0(int param_1,int param_2);
int FUN_00413740(int param_1);
int FUN_00413770(int param_1,int param_2);
int FUN_004137a0(int param_1);
int FUN_004137d0(int param_1);
void FUN_00413800(int param_1);
void FUN_00413870(int param_1);
void FUN_004138b0(int param_1,undefined param_2,undefined param_3,undefined param_4,undefined param_5);
int FUN_004138f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
int FUN_00413a30(int param_1,int param_2);
int FUN_00413a90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
undefined4 FUN_00413b10(int param_1);
void FUN_00413b30(int param_1,undefined4 param_2);
void FUN_00413b60(int param_1,undefined4 param_2);
int FUN_00413b90(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
int FUN_00413c50(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,uint param_7,undefined4 param_8,uint param_9,uint param_10);
undefined4 FUN_00413fa0(int param_1);
int FUN_00413fc0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11);
void FUN_00414420(int param_1,uint param_2);
void FUN_00414590(int param_1);
undefined4 FUN_004145b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9);
int FUN_004146c0(undefined4 param_1,int param_2,int param_3,uint param_4,undefined4 param_5,int param_6,int param_7,int param_8,undefined4 param_9);
void FUN_00414ab0(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_00414ae0(int param_1,undefined4 param_2);
char * FUN_00414af0(int param_1,char *param_2,int param_3);
void FUN_00414b30(int param_1,undefined4 param_2);
void FUN_00414b40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_00414b60(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_00414b80(undefined4 param_1,undefined4 param_2,undefined4 param_3);
char * FUN_00414ba0(int param_1,char *param_2,int param_3);
void FUN_00414be0(int param_1,undefined param_2,undefined param_3,undefined param_4,undefined param_5);
void FUN_00414c10(int param_1,undefined param_2,undefined param_3,undefined param_4,undefined param_5);
void FUN_00414c40(int param_1,undefined param_2,undefined param_3,undefined param_4,undefined param_5);
void FUN_00414c70(int param_1,undefined param_2,undefined param_3,undefined param_4,undefined param_5);
void FUN_00414ca0(int param_1,undefined param_2,undefined param_3,undefined param_4,undefined param_5);
undefined4 FUN_00414cd0(int param_1,int param_2,undefined4 param_3);
undefined4 FUN_00414cf0(int param_1,int param_2);
void FUN_00414d00(undefined *param_1);
int FUN_00414d60(int param_1,int param_2);
undefined * FUN_00414d90(undefined *param_1,int param_2);
void FUN_00414df0(undefined4 *param_1);
void FUN_00414e10(int param_1);
void FUN_00414e30(int param_1,int param_2);
void FUN_00414e60(undefined4 param_1,undefined4 param_2);
undefined4 FUN_00414e80(int param_1);
void FUN_00414eb0(int param_1);
void FUN_00414f00(undefined4 param_1);
void FUN_00414f10(int param_1,int param_2);
void FUN_00414f70(int param_1);
undefined4 FUN_00414fe0(void);
undefined4 FUN_00414ff0(void);
undefined4 FUN_00415000(void);
void FUN_00415010(void);
void FUN_00415020(undefined *param_1);
undefined * FUN_004150e0(undefined *param_1,undefined4 param_2,undefined4 param_3);
int FUN_004151a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_004151f0(int param_1);
void FUN_00415400(void);
void FUN_00415640(undefined4 param_1,int param_2);
void FUN_004156a0(uint param_1,int param_2);
undefined4 FUN_004157d0(int param_1,undefined4 param_2);
undefined4 FUN_004157f0(int param_1,undefined4 param_2);
void FUN_00415810(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_00415850(int param_1,undefined4 param_2,uint param_3,int param_4);
void FUN_00416840(undefined *param_1,int *param_2);
void FUN_00416890(int *param_1);
void FUN_004168f0(int param_1);
undefined4 FUN_00416930(int param_1);
void FUN_00416a40(int param_1,int param_2);
void FUN_00416bd0(void);
void FUN_00416cc0(float param_1,float param_2,undefined4 *param_3,undefined4 *param_4);
void FUN_00416d70(undefined4 param_1,undefined4 param_2);
undefined4 *FUN_00416d90(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,int param_7,code *param_8,undefined4 param_9);
void FUN_00416f20(int param_1,int param_2,int param_3);
void FUN_00416f50(int param_1,int param_2,int param_3);
void FUN_00416fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_00417010(int param_1);
int FUN_00417040(void);
void FUN_00417060(int param_1);
void FUN_00417090(void);
void FUN_00417120(undefined4 param_1,int *param_2,int *param_3);
void FUN_00417150(undefined4 param_1,undefined4 *param_2);
void FUN_004171a0(int param_1,int param_2,int *param_3);
void FUN_004172a0(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_004172c0(int *param_1,int param_2,int param_3);
void FUN_004172f0(int param_1);
void FUN_004173c0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,char *param_8,undefined4 param_9,undefined4 param_10,int param_11);
char * FUN_004174e0(int param_1,char *param_2);
void FUN_00417540(int param_1,int param_2,int *param_3,uint param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11);
undefined4 FUN_00417670(int param_1);
void FUN_00417690(int param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_004176f0(undefined4 *param_1,undefined4 param_2,int param_3);
void FUN_00417740(undefined4 *param_1,undefined4 param_2,int param_3);
uint FUN_004177b0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_00417900(int *param_1,int param_2,int param_3);
void FUN_00417be0(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void FUN_00417ca0(int param_1);
void FUN_00417f00(int *param_1,int *param_2);
void FUN_00417fe0(int param_1,char *param_2,int param_3);
void FUN_004180c0(void);
void FUN_00418120(int param_1,int param_2);
void FUN_004184d0(void);
char * FUN_00418680(char *param_1,int param_2,uint param_3,int param_4);
undefined4 FUN_00418700(undefined4 param_1,undefined4 *param_2,int param_3,int param_4);
short * FUN_004188b0(short *param_1,undefined4 param_2);
undefined4 *FUN_00418a80(undefined2 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
void FUN_00418b70(int **param_1);
void FUN_00418bc0(int param_1);
void FUN_00418cb0(int param_1,int param_2);
void FUN_00419030(int param_1,int param_2,undefined4 param_3,undefined4 param_4);
void FUN_00419070(uint param_1,undefined4 param_2,undefined4 param_3);
void FUN_00419140(int param_1);
void FUN_004197f0(undefined4 *param_1,int param_2);
void FUN_00419830(int param_1,int param_2,int param_3);
void FUN_00419db0(uint param_1,int param_2);
void FUN_0041a640(int param_1,UINT param_2);
void FUN_0041a750(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_0041a9a0(int *param_1,int *param_2,int param_3,int param_4);
void FUN_0041aa10(int *param_1,int param_2,int param_3);
void FUN_0041aa40(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_0041aa90(int param_1,int param_2,int *param_3);
int FUN_0041abb0(undefined4 param_1);
void FUN_0041ac00(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
void FUN_0041ac30(int param_1);
int FUN_0041af00(uint param_1,int param_2,uint param_3,int param_4,int *param_5);
int FUN_0041b260(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4);
void FUN_0041b300(int param_1);
undefined4 FUN_0041b380(int param_1);
int FUN_0041b3c0(int param_1);
int * FUN_0041b3f0(int *param_1);
void FUN_0041b420(int param_1);
void FUN_0041b470(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_0041b4d0(int param_1);
int ** FUN_0041b590(int **param_1);
int ** FUN_0041b5e0(int **param_1,int *param_2);
void FUN_0041b630(int param_1);
void FUN_0041b690(void);
undefined4 FUN_0041b700(void);
void FUN_0041b750(int param_1,undefined4 param_2);
undefined4 FUN_0041b760(int param_1,undefined4 param_2,uint param_3,int param_4);
int FUN_0041b7f0(void);
undefined4 FUN_0041b8f0(int param_1);
void FUN_0041b920(void);
undefined4 FUN_0041b940(void);
void FUN_0041b950(int param_1);
void FUN_0041b960(undefined4 param_1,undefined2 param_2);
undefined4 FUN_0041b9a0(int param_1,int param_2);
void FUN_0041ba00(void);
undefined * FUN_0041bc20(void);
undefined * FUN_0041bcc0(int param_1);
undefined * FUN_0041bce0(int param_1);
undefined * FUN_0041bd10(void);
void FUN_0041bd50(undefined4 param_1);
void FUN_0041bd60(void);
void FUN_0041bd90(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_0041bdd0(void);
void FUN_0041be80(int param_1);
void FUN_0041c130(undefined4 param_1);
void FUN_0041c190(char *param_1);
void FUN_0041c1d0(void);
void FUN_0041c260(void);
void FUN_0041c2a0(void);
undefined4 FUN_0041c330(int param_1);
void FUN_0041c390(void);
void FUN_0041c3f0(undefined4 param_1);
void FUN_0041c450(void);
undefined4 FUN_0041c4d0(int param_1);
undefined4 FUN_0041c4e0(void);
undefined4 FUN_0041c4f0(void);
void FUN_0041c570(void);
int FUN_0041c5c0(int param_1,undefined4 *param_2,undefined4 param_3,char *param_4,undefined4 param_5);
void FUN_0041c760(void);
void FUN_0041c780(int param_1);
void FUN_0041c870(uint param_1);
void FUN_0041c8e0(void);
void FUN_0041c940(void);
void FUN_0041c990(int param_1);
void FUN_0041c9e0(undefined4 param_1);
void FUN_0041ca50(undefined4 param_1);
void FUN_0041cae0(int param_1);
void FUN_0041cb20(undefined4 param_1,int param_2,undefined4 param_3);
void FUN_0041cbd0(undefined4 param_1,undefined4 param_2);
void FUN_0041cde0(undefined4 param_1);
void FUN_0041d060(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_0041d0c0(char *param_1,undefined4 param_2,undefined4 param_3);
void FUN_0041d270(undefined4 param_1);
void FUN_0041d2a0(undefined4 param_1);
uint FUN_0041d350(int param_1);
undefined4 FUN_0041d380(uint param_1);
void FUN_0041d3b0(int param_1);
void FUN_0041d420(int param_1,int param_2);
void FUN_0041d4e0(int param_1,int param_2);
undefined4 FUN_0041d640(int param_1);
void FUN_0041d690(int param_1);
undefined4 FUN_0041d6b0(void);
undefined4 FUN_0041d6c0(void);
void FUN_0041d6d0(void);
undefined4 FUN_0041d6f0(int param_1);
void FUN_0041d8d0(int param_1);
void FUN_0041d930(int param_1);
void FUN_0041da00(void);
void FUN_0041dc30(undefined4 param_1);
void FUN_0041dd50(int param_1,undefined4 *param_2);
void FUN_0041de50(int param_1,undefined4 param_2);
void FUN_0041df10(undefined4 param_1,undefined4 param_2,int param_3,int param_4,float param_5,float param_6_00,double param_6,undefined4 *param_7,undefined4 *param_8,undefined4 param_9);
void FUN_0041e5a0(void);
void FUN_0041e660(void);
void FUN_0041e700(int param_1);
void FUN_0041e7c0(int param_1);
void FUN_0041e800(undefined4 *param_1);
void FUN_0041e880(void);
void FUN_0041e920(void);
void FUN_0041e9b0(void);
bool FUN_0041e9d0(void);
undefined4 FUN_0041ea20(void);
undefined4 FUN_0041eb80(void);
undefined4 FUN_0041f0e0(void);
undefined4 FUN_0041f940(void);
undefined4 FUN_00420600(void);
undefined4 FUN_00420730(undefined4 param_1,int param_2,int param_3,int param_4);
undefined4 FUN_004207e0(void);
undefined4 FUN_00420810(void);
undefined4 FUN_00420830(void);
void FUN_004208c0(void);
void FUN_004208e0(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_00420930(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_00420960(undefined4 param_1,undefined4 param_2);
void FUN_00420990(int param_1,int param_2);
void FUN_00420a90(undefined4 param_1);
void FUN_00420b00(int param_1);
void FUN_00420b80(undefined4 param_1);
void FUN_00420c20(undefined4 param_1);
void FUN_00420c40(undefined4 param_1,int *param_2);
void FUN_00420c60(undefined4 param_1);
void FUN_00420cc0(void);
void FUN_00420d10(void);
void FUN_00420d90(undefined4 param_1);
uint FUN_00420f70(int param_1);
int FUN_00420f90(void);
undefined4 FUN_00420fc0(void);
void FUN_00420ff0(int param_1);
undefined4 FUN_00421020(int param_1,undefined4 param_2);
void FUN_00421070(int param_1);
void FUN_004210e0(uint param_1);
undefined4 FUN_00421120(int param_1);
void FUN_00421330(void);
char * FUN_00421360(char *param_1);
char * FUN_00421470(char *param_1);
int FUN_004214c0(byte *param_1,byte *param_2);
void FUN_00421810(void);
bool FUN_00421850(undefined4 param_1);
bool FUN_004219d0(undefined4 param_1);
undefined4 FUN_00421b20(int param_1);
bool FUN_00421b90(void);
bool FUN_00421c90(void);
bool FUN_00421d80(void);
undefined4 FUN_00421d90(void);
undefined4 FUN_00421eb0(int param_1);
undefined4 __fastcall FUN_00421f30(int param_1);
undefined4 FUN_00422060(void);
void FUN_004220b0(void);
undefined4 FUN_00422140(undefined4 param_1);
undefined4 FUN_00422440(undefined4 param_1);
void FUN_004226c0(void);
undefined4 FUN_00422770(int param_1);
undefined4 * FUN_004227e0(byte *param_1,int param_2);
int FUN_00422a90(int param_1);
undefined4 FUN_00422ac0(int param_1);
undefined4 FUN_00422c0d(void);
undefined4 FUN_00422d10(int param_1);
void FUN_00422da0(void);
int FUN_00422e30(int param_1,undefined4 param_2,int *param_3);
bool FUN_00422f00(undefined4 param_1,int param_2);
uint FUN_00422f60(uint param_1);
int FUN_00423050(int param_1);
bool FUN_00423190(int param_1);
void FUN_004231b0(undefined4 param_1);
void FUN_004231d0(undefined4 param_1);
void FUN_004231f0(undefined4 param_1);
undefined4 FUN_00423210(void);
undefined4 FUN_004232c0(void);
void FUN_00423350(void);
uint FUN_004233a0(int param_1,undefined4 param_2,uint param_3);
bool FUN_00423840(int param_1,int param_2,int param_3);
undefined4 FUN_004238a0(void);
undefined4 FUN_004238d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00423aa0(undefined4 param_1,undefined4 param_2);
void FUN_00423ac0(undefined4 param_1,int param_2);
void FUN_00423ae0(HWND param_1,int param_2);
void FUN_00423b90(HWND param_1,undefined4 param_2,int *param_3);
void FUN_00423c80(void);
void FUN_00423cb0(void);
undefined4 FUN_00423cc0(undefined4 param_1);
undefined4 FUN_00423efd(void);
void FUN_004240d0(void);
void thunk_FUN_00423cb0(void);
void FUN_00424150(void);
void FUN_00424180(uint *param_1,uint *param_2);
uint FUN_004243c0(undefined4 param_1,int param_2,int param_3);
undefined4 FUN_00424430(undefined4 param_1);
void FUN_004246c0(undefined4 param_1);
void FUN_004246d0(HWND param_1,LPARAM param_2);
undefined4 FUN_00424760(HWND param_1,undefined4 param_2,UINT *param_3);
void FUN_00424a90(HWND param_1,int param_2,undefined4 param_3,int param_4);
void FUN_00424e50(HWND param_1,int param_2);
undefined4 FUN_004252a0(undefined4 param_1);
undefined4 FUN_00425500(void);
undefined4 FUN_00425820(HWND param_1);
void FUN_004258e0(void);
void FUN_00425900(int param_1);
float10 FUN_00425980(int param_1,float param_2,int param_3);
void FUN_004259b0(float *param_1,int param_2,float param_3,int param_4);
void FUN_00425a60(float *param_1,int param_2,float param_3,int param_4);
void FUN_00425ba0(undefined4 *param_1,int param_2,float param_3,int param_4);
void FUN_00425d10(int param_1);
void FUN_00425de0(int param_1);
void FUN_00425f00(int param_1);
void FUN_00426080(int param_1);
void FUN_004260f0(float param_1,int param_2);
int FUN_00426220(int param_1);
void FUN_00426290(int param_1,float param_2,undefined4 param_3);
void FUN_00426330(float param_1);
void FUN_00426660(void);
int FUN_00426740(int param_1,uint param_2);
void FUN_004267a0(int param_1,float param_2,float param_3);
void FUN_00426810(int param_1,uint param_2);
void FUN_00426820(int param_1,uint param_2);
void FUN_00426840(int param_1,undefined4 param_2);
void FUN_00426880(int param_1,undefined4 param_2);
void FUN_00426890(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_00426900(int param_1,undefined4 param_2);
void FUN_00426910(void);
void FUN_00426920(void);
void thunk_FUN_00449d60(void);
void thunk_FUN_00449e30(void);
bool FUN_004269c0(int param_1);
void FUN_004269f0(undefined param_1);
void FUN_00426a00(int param_1,short param_2,float param_3,float param_4,short param_5,int param_6,int param_7,undefined4 *param_8);
void FUN_00426c80(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,undefined4 param_5);
void FUN_00426cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,undefined4 param_5);
void FUN_00426d10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9);
void FUN_00426d80(int param_1,undefined4 param_2,undefined4 param_3,float param_4,float *param_5,int param_6,uint param_7);
void FUN_004270c0(void);
void FUN_004270d0(void);
void FUN_004270f0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_00427110(int param_1,int param_2,uint param_3);
undefined4 FUN_00427360(int param_1,int param_2);
int FUN_004273b0(undefined2 param_1);
undefined4 FUN_004273e0(int param_1);
void FUN_00427410(int param_1,undefined4 param_2,int param_3,int param_4);
void FUN_00427530(int param_1,int param_2,undefined4 param_3,int param_4);
int FUN_00427590(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,int param_7,undefined4 param_8);
uint FUN_00427670(int param_1,uint param_2);
void FUN_00427690(int param_1,uint param_2);
void FUN_004276a0(int param_1,uint param_2);
void FUN_004276c0(void);
void FUN_004277b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_004277f0(undefined4 param_1);
void FUN_00427880(void);
uint FUN_00427ad0(uint param_1);
void FUN_00427b20(int param_1,int param_2,float *param_3);
void FUN_00427d70(void);
void FUN_00427d90(float *param_1,int param_2);
void FUN_00427ea0(int param_1,int param_2,int param_3);
void FUN_00427f10(void);
void FUN_00427fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_00428030(int param_1,uint param_2,float param_3,float param_4);
void FUN_00428270(int param_1);
void FUN_004282f0(short param_1,undefined4 param_2);
void FUN_00428370(void);
void FUN_004283b0(int param_1);
void FUN_004285d0(short param_1,int param_2);
void FUN_00428660(short param_1,short param_2,short param_3);
void FUN_004286c0(short param_1,undefined2 param_2,undefined2 param_3);
void FUN_004286f0(short param_1,undefined4 param_2,undefined4 param_3);
void FUN_00428720(short param_1,undefined4 param_2);
void FUN_00428740(short param_1,undefined param_2,undefined param_3,undefined param_4,undefined param_5);
void FUN_004287e0(short param_1,uint param_2);
void FUN_00428800(short param_1,uint param_2);
void FUN_00428820(undefined4 param_1);
void FUN_00428830(void);
void FUN_00428a40(int param_1,uint param_2);
void FUN_00428a60(short param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4);
void FUN_00428aa0(short param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void FUN_00428b10(short param_1,undefined4 param_2,undefined2 param_3);
void FUN_00428b40(short param_1,int param_2);
void FUN_00428bd0(short param_1);
void FUN_00428c40(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_00428cd0(undefined4 param_1);
void FUN_004292b0(undefined4 param_1);
void FUN_00429330(int param_1,float *param_2);
undefined4 FUN_004294e0(int param_1);
void FUN_00429540(void);
void FUN_00429cd0(int param_1);
void FUN_00429d10(void);
void FUN_00429d50(float *param_1,float param_2,float param_3,float param_4,float param_5);
void FUN_00429d90(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5);
undefined4 FUN_00429dc0(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined4 *param_4,float *param_5);
void FUN_0042a110(undefined4 param_1,float param_2);
undefined4 FUN_0042a580(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined4 *param_4,float *param_5);
undefined4 FUN_0042a840(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined4 *param_4,undefined4 *param_5);
void FUN_0042a9f0(undefined4 param_1,undefined4 param_2);
void FUN_0042ab60(int param_1);
void FUN_0042ab80(int param_1);
undefined4 FUN_0042ac70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_0042acf0(undefined4 param_1,undefined4 param_2);
void FUN_0042ad30(undefined4 param_1);
void FUN_0042ad60(void);
undefined4 FUN_0042adf0(void);
void FUN_0042ae00(void);
int FUN_0042b560(int param_1);
void FUN_0042b5e0(int param_1,short param_2,short param_3,short param_4,short param_5,short param_6,short param_7);
void FUN_0042b640(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void FUN_0042b710(int param_1,float *param_2,float *param_3,float *param_4,float *param_5,float *param_6,int param_7);
void FUN_0042ba20(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,undefined4 param_5,float param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9);
void FUN_0042bb00(undefined4 param_1);
void FUN_0042bb50(int param_1,int param_2,int param_3);
void FUN_0042be60(void);
void FUN_0042c1a0(undefined4 param_1);
void FUN_0042c2d0(int param_1,undefined param_2);
void FUN_0042c2e0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined param_5,undefined param_6,undefined param_7,undefined param_8);
void FUN_0042c380(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined param_6,undefined param_7,undefined param_8);
void FUN_0042c3e0(void);
void FUN_0042c400(void);
void FUN_0042c420(int param_1,undefined4 *param_2,undefined4 param_3);
void FUN_0042c460(void);
void FUN_0042c490(int param_1,undefined4 *param_2);
void FUN_0042c4e0(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_0042c500(void);
void FUN_0042c510(undefined4 param_1,float param_2);
void FUN_0042c7a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void FUN_0042c800(undefined4 param_1);
void FUN_0042cb00(undefined4 param_1);
void FUN_0042cca0(float param_1);
void FUN_0042d330(undefined4 param_1);
void FUN_0042d380(void);
void FUN_0042d3c0(undefined4 param_1,undefined4 param_2);
void FUN_0042d3e0(undefined param_1,undefined param_2,undefined param_3,undefined param_4);
void FUN_0042d410(int param_1);
void FUN_0042d430(undefined4 param_1);
void FUN_0042d440(void);
void FUN_0042d450(void);
void FUN_0042d460(int param_1,undefined4 param_2);
void FUN_0042d470(void);
void FUN_0042d490(undefined4 param_1,undefined4 param_2);
void thunk_FUN_0042be60(void);
void FUN_0042d500(void);
void FUN_0042d510(void);
void FUN_0042d520(char *param_1,char *param_2);
undefined * FUN_0042d600(undefined4 param_1);
void FUN_0042d640(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_0042d680(undefined *param_1);
void FUN_0042d6f0(undefined4 param_1);
void FUN_0042d720(void);
void FUN_0042d8d0(short param_1);
void FUN_0042d900(undefined4 param_1);
void FUN_0042d910(undefined2 param_1,undefined2 param_2);
void FUN_0042d930(undefined2 *param_1,undefined2 *param_2);
void FUN_0042d950(undefined param_1,undefined param_2,undefined param_3,undefined param_4);
void FUN_0042d990(short param_1,short param_2,short param_3,short param_4,short param_5,short param_6,short param_7,short param_8);
void FUN_0042ddf0(int param_1,int param_2);
void FUN_0042de10(undefined4 param_1,int param_2);
int FUN_0042de30(int param_1,uint param_2);
int FUN_0042df70(int param_1,uint param_2);
void FUN_0042e0e0(int param_1,int param_2,int *param_3,int *param_4);
void FUN_0042e150(char *param_1,int *param_2,short param_3);
void FUN_0042ec50(char *param_1);
void FUN_0042edc0(char param_1);
void FUN_0042eeb0(int param_1,int param_2,char param_3);
void FUN_0042f380(float param_1,float *param_2,float *param_3);
float10 FUN_0042f3b0(float param_1);
float10 FUN_0042f3e0(float param_1);
float10 FUN_0042f540(undefined4 param_1);
float10 FUN_0042f560(float param_1,float param_2);
void FUN_0042f6e0(float *param_1,float *param_2,float *param_3);
void FUN_0042f700(float *param_1,float param_2,float *param_3);
void FUN_0042f720(float *param_1,float *param_2,float param_3,float *param_4);
void FUN_0042f750(float *param_1);
void FUN_0042f780(float *param_1);
void FUN_0042f7b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_0042f7d0(undefined4 *param_1,undefined4 *param_2);
undefined4 FUN_0042f7f0(float *param_1,float *param_2);
void FUN_0042f830(float *param_1,float *param_2,float *param_3);
void FUN_0042f860(float *param_1,float *param_2,float *param_3);
float10 FUN_0042f890(float *param_1,float *param_2);
void FUN_0042f8c0(float *param_1);
float10 FUN_0042f910(float *param_1,float *param_2);
void FUN_0042f950(float *param_1,float *param_2);
void FUN_0042f9b0(float *param_1);
void FUN_0042f9f0(float *param_1,float *param_2,float *param_3);
void FUN_0042fa50(float *param_1,float param_2,float *param_3);
void FUN_0042fa80(float *param_1,float *param_2,float param_3,float *param_4);
void FUN_0042fac0(float *param_1,float param_2,float *param_3,float param_4,float *param_5);
void FUN_0042fb10(int param_1,int param_2,undefined4 *param_3);
void FUN_0042fb40(int param_1,int param_2,undefined4 *param_3);
void FUN_0042fb70(float *param_1,float *param_2,float *param_3);
void FUN_0042ff80(float *param_1,float *param_2);
void FUN_00430310(float *param_1,float *param_2);
undefined4 FUN_004304c0(float *param_1,float *param_2,float *param_3);
void FUN_00430730(int param_1,int param_2,float *param_3);
void FUN_00430810(float *param_1,int param_2);
void FUN_00430980(float *param_1,float *param_2,float *param_3);
void FUN_00430a00(float *param_1,float *param_2,float *param_3);
void FUN_00430a90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_00430ab0(float *param_1,float *param_2,float *param_3);
void FUN_00430b80(float *param_1,float *param_2);
void FUN_00430e00(float *param_1,float param_2,undefined4 param_3,undefined4 param_4);
void FUN_00430f10(float *param_1,float param_2,undefined4 param_3,undefined4 param_4);
void FUN_00431020(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00431060(int param_1,undefined4 *param_2);
void FUN_004310b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00431100(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00431150(float *param_1,float param_2,float param_3,float param_4,float param_5);
void FUN_00431390(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_004313d0(undefined4 *param_1);
void FUN_00431410(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_00431450(float *param_1,float param_2,float param_3,float param_4,float *param_5);
void FUN_004314f0(float *param_1,float *param_2,float *param_3,float *param_4);
void FUN_004315a0(float *param_1,float *param_2,float *param_3);
void FUN_004315f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00431620(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00431640(int param_1,undefined4 *param_2);
void FUN_004316a0(int param_1,undefined4 *param_2);
void FUN_00431710(undefined4 param_1,undefined4 param_2);
void FUN_00431740(int param_1,undefined4 param_2);
void FUN_00431750(int param_1,int param_2,undefined4 param_3);
undefined4 FUN_00431770(undefined4 *param_1);
undefined4 FUN_00431780(int param_1);
int FUN_00431790(int param_1,int param_2);
int FUN_004317b0(int param_1);
int FUN_004317c0(int param_1);
undefined4 FUN_004317d0(int param_1);
void FUN_004317e0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
void FUN_00431820(int param_1,undefined4 *param_2);
undefined4 FUN_00431850(int param_1,int param_2);
void FUN_00431860(int param_1,int param_2,undefined4 param_3);
uint FUN_00431880(uint *param_1,int param_2);
undefined4 FUN_004318b0(int param_1);
undefined4 FUN_004318c0(void);
undefined1 * FUN_004318d0(int param_1);
void FUN_00431900(int param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_00431950(int param_1,undefined4 *param_2);
void FUN_00431a00(int param_1,undefined4 param_2);
void FUN_00431a10(int param_1,int param_2,undefined4 param_3);
uint * FUN_00431a50(int param_1,int param_2,uint param_3,uint param_4,int param_5);
undefined4 FUN_00431b00(int param_1,int param_2);
void FUN_00431b20(uint *param_1,uint param_2);
void FUN_00431b90(int param_1,undefined4 param_2);
void FUN_00431ba0(void);
void FUN_00431c40(void);
void FUN_00431cd0(void);
void FUN_00431cf0(char *param_1);
void FUN_00431df0(char *param_1);
void FUN_00431ef0(char *param_1);
void FUN_00431fd0(char *param_1);
void FUN_004320b0(char *param_1);
void FUN_00432190(undefined4 param_1);
void FUN_004321b0(short param_1,short param_2,short param_3,short param_4,float param_5,float param_6,int param_7,int param_8,float param_9);
void FUN_00432580(int param_1);
void FUN_004325b0(short param_1,short param_2,short param_3,short param_4,float param_5,float param_6,int param_7,int param_8);
void FUN_004327e0(short param_1,short param_2,short param_3,short param_4,short param_5,short param_6,short param_7,short param_8);
void FUN_004329c0(short param_1,short param_2,short param_3,short param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
void FUN_00432b80(int param_1,byte **param_2);
void FUN_00432d30(void);
void FUN_00433680(int param_1);
void FUN_004336a0(void);
void FUN_004336d0(undefined4 param_1);
void FUN_004336f0(undefined4 param_1);
void FUN_00433700(void);
void FUN_00433720(void);
void FUN_00433740(void);
void FUN_00433760(void);
void FUN_004337d0(void);
void FUN_004337e0(int *param_1,undefined4 param_2,int param_3,float param_4,float param_5,float param_6,float param_7,int param_8,undefined4 param_9,undefined4 param_10);
void FUN_00434ea0(int param_1);
void FUN_00434ec0(int param_1);
void FUN_00435240(int param_1);
void FUN_00435700(int param_1);
void FUN_004360e0(int param_1,char param_2);
void FUN_004367c0(int param_1);
void FUN_00436860(int param_1);
void FUN_004368a0(int param_1);
void FUN_00436fa0(int param_1);
undefined4 FUN_004376b0(void);
void FUN_004376c0(int param_1);
void FUN_00437ea0(int param_1);
void FUN_00437f70(int param_1);
void FUN_00438d20(uint *param_1);
void FUN_004396d0(int param_1);
void FUN_00439c70(void);
void FUN_00439ce0(int param_1);
void FUN_0043abc0(int param_1);
void FUN_0043b0b0(int param_1);
void FUN_0043b1d0(int param_1);
void FUN_0043b240(void);
void FUN_0043b880(int param_1);
void FUN_0043c6f0(int param_1);
void FUN_0043ca30(int param_1);
void FUN_0043ceb0(int **param_1);
void FUN_0043d4e0(void);
void FUN_0043d720(void);
void FUN_0043d970(void);
void FUN_0043d9a0(void);
void FUN_0043da10(int param_1);
undefined4 FUN_0043da90(int param_1,int param_2,int param_3);
void FUN_0043dba0(int param_1);
void FUN_0043e210(void);
undefined4 FUN_0043e330(int param_1);
undefined4 FUN_0043e490(void);
void FUN_0043e5b0(float param_1);
void FUN_0043e620(int param_1);
void FUN_0043e6f0(void);
void FUN_0043e840(int param_1);
void FUN_0043ea00(int param_1,int param_2);
void FUN_0043eb50(void);
void FUN_0043ec10(undefined4 param_1);
void FUN_0043f380(int param_1);
void FUN_0043f770(int param_1);
void FUN_0043f8e0(int param_1,int param_2,int param_3);
void FUN_0043fbc0(int param_1,int param_2);
void FUN_0043fce0(int param_1,undefined4 param_2,int param_3,int param_4,float param_5,float param_6,undefined4 param_7);
void FUN_0043fe90(int param_1,int param_2,int param_3);
void FUN_00440150(undefined4 param_1,int param_2);
void FUN_004403e0(int param_1,int param_2,int param_3,undefined4 param_4,char param_5);
void FUN_00440550(undefined4 param_1);
undefined4 FUN_00440620(undefined4 param_1);
void FUN_00440800(int param_1);
undefined4 FUN_00440990(char *param_1,char *param_2);
undefined4 FUN_004409d0(char *param_1,char *param_2);
undefined FUN_00440a00(char param_1,char param_2);
undefined4 FUN_00440a20(undefined4 param_1,undefined4 param_2);
bool FUN_00440aa0(int param_1,char param_2,byte param_3);
int FUN_00440af0(int param_1,int param_2);
undefined4 FUN_00440b50(int param_1);
undefined4 FUN_00440bc0(int param_1);
void FUN_00440c10(int param_1);
void FUN_00440d50(undefined4 param_1,undefined4 param_2);
undefined2 * FUN_00440d90(void);
undefined4 FUN_00440de0(int param_1);
void FUN_00440df0(void);
void FUN_00441010(undefined4 param_1);
void FUN_00441020(void);
undefined4 FUN_00441030(void);
undefined4 FUN_00441040(float *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void FUN_00441390(float param_1,float *param_2,float *param_3,float *param_4);
void FUN_004414e0(undefined4 param_1,float *param_2,float *param_3,float *param_4,float *param_5,undefined4 param_6);
void FUN_00441710(float *param_1,float *param_2,float *param_3,float *param_4,float param_5);
void FUN_00441810(float *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void FUN_00442090(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5);
float10 FUN_00442470(float *param_1,float *param_2,float *param_3);
void FUN_00442550(float *param_1,float *param_2,float *param_3,float *param_4,int param_5);
undefined4 FUN_00443110(float *param_1,float *param_2,float *param_3,float *param_4);
undefined4 FUN_00443380(float *param_1,float *param_2,float *param_3);
float10 FUN_004439f0(int param_1);
void FUN_00443c50(byte param_1,float *param_2,float *param_3,float *param_4,float *param_5);
void FUN_00443e70(byte param_1);
void FUN_00443f10(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_004440e0(int param_1,undefined4 param_2,uint param_3);
void FUN_00444200(float *param_1,float param_2,float *param_3,float param_4,float param_5);
undefined4 FUN_00444300(float *param_1,float param_2,float *param_3,float param_4,float param_5,float *param_6,float *param_7,float *param_8);
undefined4 FUN_00444740(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9);
void FUN_004447b0(byte param_1,int param_2,int param_3,int param_4);
void FUN_00444910(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_00444bf0(int param_1,undefined4 param_2,uint param_3);
float10 FUN_00444d10(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 FUN_00444e40(int param_1,undefined4 *param_2);
float10 FUN_00444f10(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
void FUN_00445150(void);
void FUN_00445200(float *param_1);
void FUN_00445500(undefined4 *param_1);
void FUN_00445630(void);
void FUN_00445640(int param_1,undefined4 param_2);
undefined4 FUN_00445660(int param_1);
void FUN_00445680(void);
undefined4 FUN_00445690(void);
float10 FUN_004456a0(void);
void FUN_004456b0(void);
void FUN_00445730(void);
void FUN_00445780(void);
void FUN_004457b0(void);
void FUN_004457d0(void);
void FUN_00445860(void);
void FUN_00445960(void);
void FUN_00445980(short param_1,short param_2);
void FUN_00445a50(void);
void FUN_00445aa0(int param_1);
void FUN_00445b20(undefined4 param_1);
undefined4 FUN_00445b40(void);
bool FUN_00445b50(uint param_1);
int FUN_00445b60(uint param_1);
void FUN_00445b90(void);
int FUN_00445bf0(void);
void FUN_00445c00(void);
int FUN_00445c90(uint param_1);
void FUN_00445cd0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int *param_6,undefined4 param_7);
void FUN_00445e50(int param_1,int param_2,int param_3,byte *param_4,int param_5,undefined4 *param_6);
void FUN_00445ee0(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,uint **param_7,int *param_8,char param_9,byte param_10);
void FUN_00446a20(short *param_1);
void FUN_00446b60(int param_1,short *param_2);
void FUN_00446c20(int *param_1,undefined4 param_2);
undefined2 * FUN_00446ca0(int param_1);
void FUN_00446fb0(undefined4 param_1);
void FUN_00446fc0(int param_1,int *param_2);
undefined4 FUN_004472e0(undefined4 param_1);
void FUN_00447300(undefined4 param_1,undefined4 param_2);
void FUN_00447350(undefined4 param_1);
void FUN_00447370(int *param_1,uint *param_2,uint *param_3);
void FUN_00447420(void);
void FUN_00447490(int param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_004475d0(uint param_1);
undefined4 FUN_004475f0(int param_1);
undefined4 FUN_00447630(int param_1);
undefined4 FUN_00447670(int param_1);
void FUN_004476b0(uint *param_1);
void FUN_00448180(int param_1);
void FUN_004485d0(uint *param_1);
uint * FUN_00448780(int param_1);
uint * FUN_00448bd0(int *param_1);
void FUN_00448c70(int *param_1,int *param_2);
void FUN_00448d10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_00448d40(void);
void FUN_00448d60(void);
void FUN_00448d90(void);
void FUN_00448f40(void);
void FUN_00449000(void);
void FUN_00449040(void);
void FUN_00449090(void);
void FUN_004490a0(void);
void FUN_004491f0(undefined4 param_1,undefined4 param_2);
void FUN_00449260(void);
void FUN_00449270(void);
void FUN_00449330(float *param_1,float *param_2);
void FUN_004493f0(float *param_1,undefined4 param_2,int param_3,float param_4);
void FUN_00449d00(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4);
void FUN_00449d60(void);
void FUN_00449d70(void);
void FUN_00449da0(int param_1);
void FUN_00449e00(undefined4 *param_1);
void FUN_00449e30(void);
void FUN_00449e50(void);
void FUN_00449ea0(void);
void FUN_00449ef0(void);
int FUN_0044a930(undefined4 param_1);
void FUN_0044a970(int param_1,float param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_0044abc0(float *param_1,float *param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_0044acb0(float *param_1,float *param_2,undefined4 param_3,float *param_4);
void FUN_0044ae40(float *param_1,float *param_2,float param_3,float param_4,float param_5,float param_6);
void FUN_0044af50(float *param_1,float param_2,undefined4 param_3,float param_4,float param_5);
void FUN_0044afb0(int *param_1,undefined4 *param_2);
void FUN_0044b180(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_0044b270(int *param_1,undefined4 param_2);
void FUN_0044b330(int *param_1,undefined4 param_2);
void FUN_0044b360(int *param_1,float param_2,undefined4 param_3,undefined4 param_4,int param_5,float param_6,float param_7);
float10 FUN_0044b470(int *param_1);
float10 FUN_0044b4a0(int param_1,int *param_2);
void FUN_0044b530(void);
void FUN_0044b5e0(void);
undefined * FUN_0044b660(void);
void FUN_0044b690(undefined4 *param_1,undefined4 *param_2);
void FUN_0044b750(undefined4 *param_1);
void FUN_0044b7e0(float *param_1);
void FUN_0044b9b0(undefined4 *param_1);
void FUN_0044bab0(void);
void FUN_0044bad0(undefined4 *param_1,undefined4 *param_2);
void FUN_0044bb10(undefined4 *param_1,int param_2);
void FUN_0044bb40(void);
void FUN_0044bbe0(void);
void FUN_0044bc20(void);
void FUN_0044bfb0(int param_1,undefined4 param_2);
void FUN_0044c3b0(int param_1,int param_2,undefined4 param_3);
uint FUN_0044c440(byte param_1,short param_2);
void FUN_0044c4c0(byte param_1);
uint FUN_0044c510(float *param_1,int param_2);
undefined4 FUN_0044c9d0(int param_1);
void FUN_0044ca00(undefined4 *param_1);
void FUN_0044ceb0(undefined4 *param_1);
void FUN_0044d1e0(int param_1,int param_2,float *param_3);
void FUN_0044d240(undefined4 param_1,undefined4 param_2,int param_3);
void FUN_0044d310(int param_1);
int FUN_0044d740(int param_1);
void FUN_0044d7c0(int param_1);
void FUN_0044dae0(int param_1);
void FUN_0044db70(undefined4 *param_1,int param_2);
void FUN_0044de10(int param_1);
void FUN_0044e000(undefined4 *param_1);
void FUN_0044e0c0(int param_1);
void FUN_0044e0e0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void FUN_0044e140(undefined2 *param_1,undefined2 *param_2,short *param_3);
void FUN_0044e190(int param_1,undefined2 *param_2,undefined2 *param_3,short *param_4);
void FUN_0044e1f0(int param_1);
void FUN_0044e220(int param_1,int param_2,undefined2 *param_3,short *param_4);
void FUN_0044e290(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6);
void FUN_0044e320(undefined4 *param_1);
void FUN_0044e440(int param_1);
uint FUN_0044e460(byte *param_1,int param_2);
void FUN_0044e4a0(void);
void FUN_0044e4e0(void);
void FUN_0044e500(int param_1,int param_2);
void FUN_0044e530(int param_1,int param_2);
void FUN_0044e560(void);
void FUN_0044e5a0(int param_1,int param_2,undefined4 *param_3);
int FUN_0044e5e0(int param_1,int param_2,int param_3);
int FUN_0044e620(int *param_1,int param_2);
void FUN_0044e660(short *param_1,byte param_2,float param_3,int *param_4,float *param_5);
void FUN_0044eaa0(short *param_1,int param_2,int param_3);
void FUN_0044ec40(undefined4 *param_1,int param_2);
void FUN_0044ed80(undefined4 *param_1,int param_2);
void FUN_0044eeb0(float *param_1,undefined4 param_2,float param_3);
void FUN_0044eef0(short **param_1,short *param_2);
void FUN_0044ef70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_0044efa0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_0044f160(undefined4 *param_1,int param_2,short *param_3,float param_4,float param_5,float param_6,float param_7,int param_8,int param_9,undefined4 param_10,undefined4 param_11_00,int param_11,int param_12,uint param_13,short param_14,undefined4 param_15,undefined4 param_16,uint param_17);
void FUN_0044f5f0(void);
void FUN_0044f600(void);
void FUN_0044f630(uint param_1);
void FUN_0044f640(float *param_1,float *param_2);
void FUN_0044f670(short *param_1,short param_2,int param_3,float param_4,float param_5,int param_6,short param_7,short param_8,uint param_9,undefined4 param_10,int param_11,float param_12,int param_13);
void FUN_0044fc00(uint *param_1);
void FUN_0044fcc0(void);
void FUN_0044fce0(char *param_1,float param_2);
void FUN_0044fd50(void);
void FUN_0044fef0(undefined param_1,undefined2 param_2,undefined2 param_3);
void FUN_0044ff30(void);
void FUN_00450100(void);
void FUN_004501f0(void);
void FUN_00450280(void);
void FUN_004502b0(void);
void FUN_004502f0(void);
void FUN_00450310(int *param_1);
void FUN_004503e0(undefined2 param_1,undefined2 param_2,undefined param_3,undefined param_4,undefined param_5,undefined param_6,undefined4 param_7,int param_8,int param_9);
void FUN_00450530(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void FUN_00450560(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_00450590(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_004505c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void FUN_004505f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8);
void FUN_00450670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
void FUN_00450760(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
void FUN_00450850(int param_1);
void FUN_004508b0(void);
void FUN_00450930(void);
void FUN_004509b0(void);
void FUN_00450a30(void);
int FUN_00450aa0(int param_1,int param_2);
int * FUN_00450b00(int param_1);
int * FUN_00450b30(int param_1,int param_2);
void FUN_00450b90(undefined4 param_1,undefined4 param_2,int param_3);
void FUN_00450be0(undefined4 param_1,undefined4 param_2);
void FUN_00450c00(int *param_1,undefined4 param_2);
void FUN_00450c50(int param_1,undefined4 param_2);
int * FUN_00450ce0(int param_1,int param_2,int param_3);
int * FUN_00450d20(int param_1);
void FUN_00450db0(int param_1);
void FUN_00450e30(int param_1);
int FUN_00450e70(int param_1,float *param_2,float param_3,int param_4,int param_5,float *param_6,int param_7,int param_8);
void FUN_00451020(int param_1,float param_2);
void FUN_00451160(int param_1,int param_2);
void FUN_00451800(int param_1,undefined4 param_2,int param_3);
void FUN_00451a80(int param_1);
void FUN_00451d60(int param_1,undefined4 param_2);
void FUN_00451ec0(int param_1);
void FUN_00451ef0(int param_1);
void FUN_004525d0(int param_1);
void FUN_00452600(float param_1);
void FUN_004528b0(float param_1);
void FUN_00452aa0(int param_1);
void FUN_004533a0(int param_1);
void FUN_004535c0(int param_1);
void FUN_004538d0(float param_1);
void FUN_00453e00(int param_1);
void FUN_00454060(int param_1);
void FUN_004542e0(int param_1);
void FUN_00454bc0(undefined4 param_1,int param_2,int param_3,int param_4);
void FUN_00454c60(void);
void FUN_00454c90(void);
void FUN_00454cc0(void);
void FUN_00454d10(void);
void FUN_00454d40(int param_1,int param_2);
void FUN_004550d0(int param_1,undefined4 param_2,float param_3);
void FUN_004556c0(void);
void FUN_00455720(void);
void FUN_004557e0(float param_1,int param_2,int param_3,float param_4,undefined4 param_5,float param_6,float param_7);
void FUN_00455930(undefined4 param_1);
void FUN_00455dc0(void);
void FUN_00456200(void);
void FUN_004565e0(int param_1);
void FUN_00456800(undefined4 param_1,int param_2,float param_3);
void FUN_00456c70(undefined4 param_1,int param_2,float param_3);
void FUN_00457140(int param_1,float param_2,float param_3,float param_4);
void FUN_00457350(void);
void FUN_00457410(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_004575a0(void);
void FUN_004575d0(int param_1);
void FUN_00457620(int param_1);
void FUN_00457b00(int param_1);
void FUN_00457bd0(void);
void FUN_00457c20(void);
void FUN_00457cf0(void);
void FUN_00457ed0(void);
void FUN_00457fd0(void);
void FUN_004580e0(void);
void FUN_004584a0(uint param_1,uint param_2);
void FUN_004586e0(int param_1);
void FUN_00459150(int param_1);
void FUN_0045a3e0(void);
float10 FUN_0045a420(float param_1,float param_2);
void FUN_0045a460(int param_1);
void FUN_0045a7f0(int param_1,int param_2,uint param_3);
void FUN_0045a840(int param_1);
void FUN_0045ab50(int param_1);
void FUN_0045b210(int param_1);
void FUN_0045b290(int param_1,undefined4 param_2,int param_3);
void FUN_0045b5d0(int param_1);
undefined4 * FUN_0045b610(int param_1,int *param_2);
undefined4 * FUN_0045b7d0(int param_1,int *param_2);
int FUN_0045bab0(int param_1);
void FUN_0045bb60(void);
void FUN_0045bd90(int param_1);
void FUN_0045bde0(int param_1,short param_2,int param_3);
void FUN_0045bee0(int param_1,int param_2,int param_3,undefined4 param_4);
void FUN_0045bf20(undefined4 *param_1);
void FUN_0045c010(undefined4 param_1,undefined4 param_2,short param_3,int param_4,int param_5);
void FUN_0045c0b0(int param_1);
void FUN_0045c3c0(int param_1);
undefined4 FUN_0045c560(int param_1,float *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,float param_6);
void FUN_0045c810(int param_1);
void FUN_0045c9d0(int param_1,int param_2);
void FUN_0045cb80(int param_1,int param_2);
void FUN_0045cd50(void);
void FUN_0045ce10(undefined4 param_1,int param_2,int param_3,undefined4 param_4);
void FUN_0045ce90(undefined4 param_1);
float10 __fastcall FUN_0045cf00(undefined4 param_1);
void FUN_0045cf30(int param_1,int param_2);
void FUN_0045cf60(int param_1,int param_2,undefined param_3,undefined param_4);
void FUN_0045d0b0(int param_1,undefined4 param_2);
void FUN_0045d130(undefined4 param_1);
char FUN_0045d350(void);
float10 FUN_0045d390(void);
int FUN_0045d3d0(int param_1);
float10 FUN_0045d410(int param_1);
float10 FUN_0045d480(int param_1);
void FUN_0045d4a0(int param_1);
void FUN_0045dad0(int param_1,int param_2);
void FUN_0045dd80(int param_1,int param_2);
void FUN_0045dfe0(int param_1);
uint FUN_0045e120(uint param_1);
void FUN_0045e1a0(int param_1);
void FUN_0045e970(int param_1,int param_2);
void FUN_0045ef70(int param_1);
void FUN_0045f230(int param_1);
void FUN_0045fe70(int param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_00460320(void);
void __thiscall FUN_004603f0(undefined4 param_1_00,uint param_1);
void FUN_00460950(int param_1,int param_2);
void FUN_004610f0(void);
void FUN_00461150(int param_1);
void FUN_004611f0(int param_1,int param_2);
void FUN_00462320(int param_1,int param_2);
undefined4 FUN_00462a70(int param_1,int param_2);
void FUN_00462b20(int param_1,int param_2);
void FUN_00462cf0(void);
undefined4 FUN_00462d40(void);
void FUN_00462da0(int param_1);
void FUN_004634a0(int param_1);
void FUN_00463580(int param_1);
void FUN_00463ec0(undefined4 param_1,int param_2,float param_3);
void FUN_00463ff0(undefined4 param_1,undefined4 param_2);
void FUN_00464010(int param_1,int param_2);
void FUN_00464630(undefined4 param_1,undefined4 param_2,int param_3);
void FUN_00464b90(int param_1,int *param_2,int param_3);
void FUN_004651a0(void);
void FUN_004651f0(int param_1);
void FUN_00465230(void);
void FUN_00465310(void);
void FUN_004653f0(void);
void FUN_00465480(int *param_1);
undefined4 FUN_00465500(void);
void FUN_00465510(int param_1);
void FUN_00465820(int param_1,undefined4 param_2);
void FUN_00465840(int param_1,int param_2,int param_3);
void FUN_00465980(int param_1,int param_2,undefined4 param_3,int *param_4,undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8);
void FUN_00465cb0(int param_1);
void FUN_00465d00(int param_1);
void FUN_00465d50(int param_1);
void FUN_00466370(void);
void FUN_004663e0(int param_1,int param_2);
void FUN_004667e0(int param_1);
void FUN_00466bd0(int param_1,int param_2);
void FUN_00466e40(undefined4 param_1,byte param_2);
void FUN_00466ec0(float param_1,undefined4 param_2);
void FUN_00467c80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_00468570(int param_1);
void FUN_004686b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00468800(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_00468a30(int param_1,float *param_2,float *param_3);
void FUN_00468d00(int param_1);
void FUN_00468d50(float param_1);
void FUN_00468fe0(undefined4 param_1,undefined4 param_2);
void FUN_00469010(void);
void FUN_00469070(int param_1);
int FUN_004691c0(int param_1);
void FUN_00469200(int param_1,int param_2);
undefined4 FUN_00469230(int param_1);
void FUN_004692a0(int param_1);
void FUN_00469380(int param_1);
void FUN_00469b50(undefined4 param_1,int param_2,int param_3);
float10 FUN_00469b90(float param_1);
void FUN_00469bf0(void);
void FUN_00469c30(int param_1,float param_2,int param_3);
void FUN_0046a5e0(undefined4 param_1);
int FUN_0046a5f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5);
void FUN_0046a920(int param_1,undefined4 param_2);
void FUN_0046a940(int param_1,undefined4 param_2);
void FUN_0046a960(int param_1,undefined4 param_2);
void FUN_0046a970(int param_1,undefined4 param_2);
void FUN_0046a990(int param_1,int param_2);
uint FUN_0046a9c0(int param_1);
float10 FUN_0046a9f0(int param_1);
void FUN_0046aa30(int param_1);
void FUN_0046ab10(int param_1);
void FUN_0046aec0(int param_1,undefined4 param_2,int param_3,int param_4);
void FUN_0046af20(int param_1);
void FUN_0046b430(int param_1);
void FUN_0046b5a0(int param_1,float param_2);
void FUN_0046b670(int param_1);
void FUN_0046ba30(int param_1);
void FUN_0046bb30(undefined4 param_1);
void FUN_0046bb50(int param_1);
void FUN_0046bb70(int param_1);
void FUN_0046bc50(int param_1,undefined *param_2,undefined *param_3,float *param_4);
undefined4 FUN_0046bd20(int param_1);
void FUN_0046bec0(int param_1);
void FUN_0046ce30(int param_1);
void FUN_0046cf00(int param_1);
void FUN_0046d040(int param_1);
void FUN_0046d100(int param_1);
void FUN_0046d170(int param_1);
void FUN_0046d4c0(int param_1);
void FUN_0046d5c0(int *param_1,undefined4 param_2);
void FUN_0046d610(int *param_1);
int FUN_0046d650(int *param_1);
undefined4 FUN_0046d690(void);
void FUN_0046d6a0(int param_1);
float10 FUN_0046d730(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6);
void FUN_0046d7a0(float param_1,float param_2);
void FUN_0046dcd0(float param_1);
void FUN_0046dea0(float param_1);
void FUN_0046e150(int param_1);
void FUN_0046e2c0(float param_1);
void FUN_0046e750(int param_1);
void FUN_0046e850(int param_1);
void FUN_0046e910(undefined4 param_1,undefined4 param_2);
void FUN_0046e950(int param_1,undefined4 param_2,int param_3,float param_4);
void FUN_0046ebf0(int param_1);
void FUN_0046ecd0(float param_1,undefined4 *param_2,undefined4 param_3);
void FUN_0046ee20(int param_1);
void FUN_0046f0e0(int param_1,int param_2,float param_3,float param_4,int param_5,undefined4 param_6);
void FUN_0046f2c0(int param_1,int param_2,float param_3,float param_4);
void FUN_0046f9a0(int param_1);
void FUN_0046fd60(float param_1,float *param_2,float param_3,float param_4,float param_5,float param_6,int param_7);
void FUN_00470510(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6,undefined4 param_7,undefined4 param_8);
void FUN_004705d0(int param_1,int param_2,undefined4 param_3,float param_4);
void FUN_00470610(int param_1);
void FUN_004709a0(int param_1);
void FUN_00470a40(int param_1);
void FUN_00470ae0(int param_1);
void FUN_00471760(int param_1);
void FUN_00472750(int param_1,float param_2,float *param_3,float *param_4);
void FUN_00472a50(int param_1);
void FUN_00473e40(undefined4 *param_1,int param_2);
void FUN_00473f40(int param_1,float param_2);
void FUN_004741d0(int param_1,byte param_2);
void FUN_004744b0(int param_1,int param_2,int param_3);
void FUN_004746b0(int param_1);
void FUN_00474970(int param_1,undefined4 param_2);
void FUN_00474cd0(int param_1,int param_2,float param_3);
undefined4 FUN_00474d80(float param_1,int *param_2,int param_3);
void FUN_00475ad0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 *param_6,int param_7,undefined4 param_8,undefined4 param_9,int param_10);
void FUN_00476390(float *param_1,float *param_2,float *param_3,undefined4 *param_4);
void FUN_004764a0(int param_1);
void FUN_004764e0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,undefined4 param_5,float param_6,float param_7,float param_8,int param_9);
float10 FUN_00476740(int param_1,undefined4 param_2,undefined4 param_3,float param_4,float *param_5);
void FUN_00476ac0(int param_1,float *param_2);
void FUN_00476ea0(int param_1);
float10 FUN_004772f0(float param_1,undefined4 param_2,undefined4 *param_3);
void FUN_004774f0(float param_1,float *param_2,float param_3);
void FUN_00477850(int param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,float param_6);
void FUN_00477940(float param_1,undefined4 param_2,undefined4 param_3);
void FUN_00477ad0(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_00477c30(int param_1,undefined4 *param_2,undefined4 *param_3);
float10 FUN_004783e0(float param_1);
float10 FUN_004787f0(int param_1);
void FUN_004788c0(int param_1);
void FUN_00478a70(float param_1,float param_2,float *param_3,float *param_4);
void FUN_00478d80(float param_1,undefined4 param_2,float *param_3,undefined4 param_4);
void FUN_004791d0(int param_1,undefined4 param_2,undefined4 param_3,float param_4,float *param_5,float *param_6,undefined4 param_7);
void FUN_00479550(int param_1);
void FUN_00479920(int param_1,float *param_2,float *param_3);
void FUN_00479d40(int param_1);
float10 FUN_00479e10(int param_1,float *param_2,undefined4 param_3,undefined4 *param_4,int param_5);
float10 FUN_0047a200(int param_1,float *param_2,undefined4 param_3,undefined4 *param_4);
void FUN_0047a3a0(int param_1,undefined4 param_2);
void FUN_0047a610(int param_1,undefined4 param_2);
void FUN_0047a930(int param_1);
void FUN_0047ab40(int param_1);
float10 FUN_0047aee0(float *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,undefined4 param_6,float *param_7,float *param_8);
void FUN_0047b000(int param_1,float param_2,float param_3);
void FUN_0047b0c0(int param_1);
void FUN_0047b520(int param_1);
void FUN_0047b9e0(int param_1);
void FUN_0047bc40(undefined4 param_1,undefined param_2,undefined param_3,undefined param_4,int param_5,undefined4 param_6,undefined4 param_7);
void FUN_0047bcd0(undefined4 param_1);
int FUN_0047bce0(int param_1);
void FUN_0047bd80(int param_1,uint param_2,uint param_3,float param_4);
void FUN_0047bea0(int param_1);
void FUN_0047bee0(int param_1);
int FUN_0047bf20(int param_1);
void FUN_0047bf70(int param_1);
void FUN_0047c080(int param_1);
int FUN_0047c0f0(int param_1);
int FUN_0047c130(int param_1);
uint FUN_0047c7d0(int param_1);
void FUN_0047c920(int param_1,int param_2);
void FUN_0047ca90(int param_1,int param_2);
void FUN_0047cd90(int param_1,int param_2);
void FUN_0047ce60(int param_1,undefined4 param_2,byte param_3);
int FUN_0047d310(undefined4 param_1,uint param_2,int param_3);
void FUN_0047d380(float *param_1,undefined4 param_2);
void FUN_0047d890(void);
uint FUN_0047da10(int param_1);
uint __thiscall FUN_0047dc40(int param_1_00,uint param_1);
undefined * FUN_0047dd90(void);
undefined4 FUN_0047ddc0(int param_1,undefined4 param_2,int param_3);
void FUN_0047e450(int param_1);
void FUN_0047e580(int param_1,float param_2);
void FUN_0047e760(int param_1);
void FUN_0047e790(int param_1);
undefined4 FUN_0047e7c0(int param_1);
void FUN_0047e7e0(undefined4 param_1,int param_2);
void FUN_0047e830(int param_1,int param_2);
float10 FUN_0047e870(void);
undefined4 * FUN_0047e880(undefined4 *param_1,undefined4 param_2);
void FUN_0047e8b0(short **param_1,int param_2);
undefined4 FUN_0047eb50(undefined4 param_1,undefined4 *param_2);
void FUN_0047eb60(int param_1,float *param_2);
void FUN_0047ee20(short *param_1,float param_2,undefined4 param_3,undefined4 param_4,code *param_5);
void FUN_0047f060(undefined4 *param_1,float param_2,int param_3,short *param_4);
void FUN_0047f450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_0047f470(short *param_1,undefined4 param_2,undefined2 *param_3);
void FUN_0047f6c0(int param_1);
void FUN_0047f6f0(int param_1,undefined4 param_2);
float10 FUN_0047f800(void);
float10 FUN_0047f810(int param_1);
undefined4 FUN_0047f890(undefined4 param_1);
void FUN_0047f8e0(int param_1,float *param_2,int *param_3,undefined4 *param_4);
undefined4 FUN_0047fbb0(int param_1);
void FUN_0047fca0(int param_1);
bool FUN_0047fdd0(int param_1,int param_2);
void FUN_0047ffb0(int param_1,int param_2);
undefined4 FUN_004800c0(undefined4 *param_1);
int FUN_00480170(short *param_1,float *param_2,float param_3,int param_4,int param_5,float param_6);
void FUN_00480480(undefined4 param_1,undefined4 param_2);
void FUN_004804a0(void);
void FUN_004804b0(undefined4 param_1);
void FUN_004804c0(void);
void FUN_00480540(void);
float10 FUN_00480650(float param_1,float param_2);
float10 FUN_00480670(float param_1);
void FUN_00480690(float *param_1,float *param_2,float *param_3);
void FUN_00480730(float *param_1,float *param_2,float *param_3,float *param_4);
void FUN_00480850(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
void FUN_00480890(float *param_1,float *param_2,float *param_3);
void FUN_004808f0(float *param_1,float *param_2,float *param_3,float *param_4);
undefined4 FUN_00480a70(float *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
float10 FUN_00480dc0(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,float *param_6,float *param_7);
void FUN_00481100(float *param_1,float *param_2,float *param_3,float *param_4,float param_5);
void FUN_00481220(float *param_1,float *param_2,undefined4 param_3,float *param_4,float param_5);
void FUN_004813a0(float *param_1,float *param_2,float param_3,int param_4);
void FUN_00481520(float *param_1,float *param_2);
void FUN_00481620(float *param_1,float *param_2);
int FUN_004816b0(void);
void FUN_004816f0(int param_1,undefined4 *param_2,int param_3,undefined4 param_4);
void FUN_004819b0(int *param_1,undefined4 *param_2);
void FUN_00481b30(int param_1,float *param_2);
void FUN_00481be0(int param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_00481c30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,float param_6,float param_7,undefined4 param_8);
undefined4 FUN_00482000(int param_1,int param_2,uint param_3);
void FUN_00482120(short *param_1,short *param_2,short *param_3,undefined4 param_4,float *param_5,undefined4 param_6,undefined4 *param_7,undefined4 *param_8);
void FUN_00482320(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_00482690(int param_1,undefined4 param_2,int param_3,float *param_4,undefined4 param_5,undefined4 *param_6,undefined4 param_7);
int FUN_004827b0(int param_1);
void FUN_00482820(uint param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9);
void FUN_00482c40(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,undefined4 param_5,undefined4 *param_6,undefined4 *param_7);
void FUN_00482dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_00482e20(void);
void thunk_FUN_00426910(void);
float10 FUN_00482e60(float param_1);
void FUN_00482ee0(int param_1);
void FUN_00482f10(int param_1);
void FUN_004830e0(int param_1);
void FUN_004831d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_00483230(int param_1,int param_2);
void FUN_00483270(int param_1);
void FUN_004834b0(void);
void FUN_00483590(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6);
void FUN_00483690(float *param_1,float *param_2);
void FUN_00483750(int param_1);
void FUN_00483840(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_00483960(undefined4 param_1,int param_2,undefined4 param_3,int param_4);
void FUN_00483a40(int param_1);
void FUN_00483a60(undefined2 param_1,undefined2 param_2,undefined2 param_3);
void FUN_00483a90(int param_1);
void FUN_00483ba0(void);
void FUN_00483bb0(int param_1);
void FUN_00483be0(int param_1);
void FUN_00483ca0(void);
void FUN_00483cb0(void);
void FUN_00483fc0(undefined4 param_1);
void FUN_00483ff0(undefined4 param_1,undefined4 param_2);
void FUN_00484020(short param_1,short param_2,short param_3,short param_4);
void FUN_00484130(void);
int * FUN_00484140(undefined4 param_1,int param_2,char *param_3);
void FUN_004841e0(int param_1);
undefined4 FUN_00484220(int *param_1,undefined4 *param_2);
void FUN_00484310(LPCSTR param_1);
BOOL FUN_00484330(LPCSTR param_1);
char * FUN_004845b0(char *param_1);
char * FUN_004845e0(undefined4 param_1);
undefined4 FUN_00484600(char *param_1,char *param_2);
void FUN_00484670(undefined4 param_1);
char * FUN_00484690(char *param_1,char *param_2,int param_3);
void FUN_004846e0(char *param_1,int param_2,char *param_3,undefined4 param_4);
undefined2 FUN_00484720(undefined4 param_1);
void FUN_00484760(void);
undefined4 FUN_00484780(code *param_1,char *param_2,undefined4 param_3,undefined4 param_4);
char * FUN_00484860(char *param_1);
int FUN_00484880(int param_1);
undefined4 FUN_004848a0(void);
void FUN_00484a20(void);
void FUN_00484a80(undefined4 param_1);
int * FUN_00484aa0(int param_1);
uint FUN_00484bb0(uint param_1);
bool FUN_00484be0(int *param_1);
void FUN_00484c30(int *param_1,float param_2);
void FUN_00484d40(float param_1);
void FUN_00484d90(int *param_1,float param_2);
void FUN_00484dd0(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00484df0(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00484e10(int *param_1,undefined4 *param_2);
void FUN_00484e40(int *param_1,float *param_2);
void FUN_00484f10(undefined4 *param_1);
void FUN_00484f40(undefined4 *param_1);
void FUN_00484fa0(void);
void FUN_00484fb0(int *param_1,float param_2);
void FUN_00485020(int *param_1,undefined4 param_2);
int * FUN_00485040(int *param_1);
undefined4 FUN_00485070(int *param_1);
void FUN_004850a0(int *param_1);
undefined4 FUN_004850c0(int *param_1);
undefined4 * FUN_00485110(int *param_1,int param_2,int *param_3);
bool FUN_00485170(int *param_1,undefined4 param_2,undefined4 param_3);
uint FUN_004851a0(undefined4 param_1,undefined4 *param_2,int *param_3,uint *param_4,undefined4 *param_5);
uint FUN_00485340(void);
undefined4 FUN_00485360(void);
void FUN_00485460(void);
undefined4 FUN_00485570(void);
void FUN_004855a0(void);
void FUN_004855c0(void);
undefined4 FUN_004855f0(uint param_1);
void FUN_00485630(void);
float10 FUN_004856e0(int param_1);
float10 FUN_004857b0(int param_1);
undefined4 FUN_00485840(undefined4 param_1);
undefined4 FUN_00485880(int param_1,int *param_2);
void FUN_004858e0(undefined4 param_1,int param_2,int param_3);
void FUN_004859a0(float param_1,undefined4 *param_2);
void FUN_00485a30(int param_1);
void FUN_00485c40(void);
void FUN_00485f20(void);
void FUN_00486010(void);
void FUN_00486140(uint param_1);
void FUN_00486170(void);
void FUN_00486340(void);
void FUN_00486710(void);
void FUN_00486970(int param_1,int param_2,int param_3,float param_4);
undefined4 FUN_00486a10(undefined4 *param_1);
bool FUN_00486ad0(void);
void FUN_00486b40(void);
uint FUN_00486bc0(int param_1);
undefined4 FUN_00486c00(void);
int FUN_00486c10(uint param_1,undefined4 *param_2);
undefined4 FUN_00486c50(void);
undefined4 FUN_00486c60(uint param_1,undefined4 *param_2);
void FUN_00486ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
int FUN_00486cd0(int *param_1,undefined4 param_2,undefined4 param_3);
int FUN_00486d40(int param_1);
uint FUN_00486e60(void);
int FUN_00486f50(void);
undefined4 FUN_00486fc0(void);
int FUN_004870d0(int param_1,int param_2);
void FUN_00487180(void);
undefined4 FUN_004871b0(uint param_1);
void FUN_00487230(int param_1,int param_2);
undefined4 FUN_004872e0(undefined4 param_1);
void FUN_00487320(undefined4 param_1);
undefined4 FUN_00487340(void);
undefined4 FUN_00487350(int param_1);
int FUN_00487550(undefined4 *param_1,undefined4 *param_2);
void FUN_004876d0(int param_1,undefined4 *param_2);
void FUN_004877b0(undefined4 param_1);
undefined4 FUN_004877d0(char *param_1);
undefined4 FUN_00487830(byte *param_1,undefined4 param_2);
void FUN_00487900(void);
void FUN_00487960(void);
bool FUN_004879a0(char *param_1);
bool FUN_004879f0(int param_1);
undefined4 FUN_00487a50(undefined4 param_1);
undefined4 FUN_00487ae0(void);
undefined4 FUN_00487b20(void);
void FUN_00487c00(void);
void FUN_00487c90(void);
undefined4 FUN_00487d20(void);
void FUN_00487da0(void);
undefined4 FUN_00487e00(uint param_1);
void FUN_00487e80(void);
undefined4 FUN_00487f00(uint param_1,int param_2);
void FUN_00488030(void);
undefined4 FUN_00488070(void);
undefined4 FUN_00488080(uint param_1,undefined4 *param_2);
undefined4 FUN_004880c0(undefined4 *param_1);
void FUN_00488100(int param_1);
undefined4 * FUN_004881c0(int *param_1,int param_2,int param_3);
void FUN_00488310(int *param_1);
undefined4 FUN_00488370(int *param_1);
int FUN_004883c0(int *param_1);
bool FUN_00488410(int *param_1,undefined4 param_2,int *param_3);
int FUN_00488670(int *param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_004887c0(int param_1);
bool FUN_00488880(undefined4 param_1,undefined4 param_2);
undefined4 FUN_004888d0(undefined4 *param_1,int param_2);
undefined4 FUN_00488a80(void);
void FUN_00488a90(void);
bool FUN_00488b00(void);
void FUN_00488d10(void);
undefined4 FUN_00489260(void);
undefined4 FUN_00489270(undefined4 param_1,undefined4 *param_2);
undefined4 FUN_00489790(undefined4 param_1);
void FUN_004899a0(void);
int * FUN_00489a00(int **param_1);
undefined4 FUN_00489a60(int **param_1);
undefined4 FUN_00489ab0(void);
void FUN_00489bc0(void);
undefined4 FUN_00489bd0(int **param_1,undefined4 param_2,int *param_3);
void FUN_00489cd0(uint param_1,uint param_2,uint param_3,undefined4 param_4);
void FUN_00489d20(undefined4 param_1);
undefined4 FUN_00489d40(void);
undefined4 FUN_00489d50(uint param_1,undefined4 *param_2);
undefined4 FUN_00489d90(undefined4 *param_1);
undefined4 FUN_00489dc0(void);
void FUN_00489e40(void);
undefined4 FUN_00489ea0(void);
undefined4 * FUN_00489eb0(void);
undefined4 FUN_00489ec0(uint param_1);
undefined4 FUN_0048a140(void);
uint FUN_0048a1a0(void);
void FUN_0048a1c0(void);
void FUN_0048a230(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 FUN_0048a2d0(int param_1);
undefined4 FUN_0048a2f0(void);
void FUN_0048a300(void);
void FUN_0048a330(void);
void FUN_0048a350(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,undefined4 param_6);
void FUN_0048a3c0(void);
void FUN_0048a3f0(undefined4 param_1,uint param_2);
void FUN_0048a420(undefined4 param_1,uint param_2);
void FUN_0048a450(uint param_1);
void FUN_0048a5e0(undefined4 *param_1,int *param_2,uint param_3,int param_4);
void FUN_0048a9e0(uint param_1,uint param_2,uint *param_3,uint *param_4);
void FUN_0048aa40(undefined4 *param_1);
void FUN_0048aa80(undefined4 *param_1,int param_2);
void FUN_0048ac50(void);
void FUN_0048ace0(int param_1);
undefined4 FUN_0048ad10(uint param_1,undefined4 *param_2);
uint FUN_0048ad50(int *param_1);
uint FUN_0048add0(int *param_1);
bool FUN_0048aeb0(void);
void FUN_0048b1b0(void);
undefined4 FUN_0048b260(float param_1,float param_2,float param_3,float param_4);
void FUN_0048b340(undefined4 param_1);
bool FUN_0048b3c0(void);
void FUN_0048b4b0(undefined4 *param_1);
undefined4 FUN_0048b500(undefined4 *param_1,undefined4 *param_2);
void FUN_0048ba20(int param_1);
void FUN_0048ba90(int param_1);
bool FUN_0048bb50(uint param_1);
uint FUN_0048bc10(void);
void FUN_0048be20(uint *param_1);
int * FUN_0048bee0(undefined4 param_1);
int FUN_0048bf50(int param_1);
int FUN_0048bf90(int param_1);
undefined4 FUN_0048bfc0(int param_1);
void FUN_0048c000(int param_1);
void FUN_0048c020(int param_1);
void FUN_0048c050(int *param_1);
undefined4 FUN_0048c0a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_0048c160(undefined4 param_1,undefined4 param_2);
int FUN_0048c190(undefined4 *param_1,byte *param_2,int *param_3);
undefined4 FUN_0048c210(int param_1,int param_2);
char * FUN_0048c2d0(char *param_1,char *param_2,int param_3,char *param_4);
void FUN_0048c340(ushort *param_1,byte *param_2,int param_3);
void FUN_0048c380(undefined *param_1,ushort *param_2,int param_3);
void FUN_0048c3d0(undefined4 *param_1);
DWORD timeGetTime(void);
void FUN_0048c5f0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_0048c610(undefined4 param_1);
void FUN_0048c640(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_0048c6b0(undefined4 param_1);
void FUN_0048c6c0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_0048c770(undefined4 param_1);
undefined4 FUN_0048c780(void);
void FUN_0048c790(undefined4 param_1);
undefined4 FUN_0048c7a0(void);
void FUN_0048c7b0(undefined4 *param_1);
undefined * FUN_0048c7e0(void);
float10 FUN_0048c7f0(float param_1,int param_2);
float10 FUN_0048c830(float param_1);
float10 FUN_0048c8f0(float param_1);
float10 __thiscall FUN_0048c910(undefined4 param_1_00,undefined4 param_1);
void FUN_0048c950(undefined4 param_1,float *param_2,float *param_3);
int FUN_0048cd30(float param_1);
float10 FUN_0048cd50(undefined4 param_1);
float10 FUN_0048cff0(float param_1);
float10 FUN_0048d010(float param_1);
void FUN_0048d160(WORD param_1);
void FUN_0048d180(char *param_1,DWORD param_2);
void FUN_0048d1c0(byte **param_1,int param_2,byte **param_3,uint param_4,int param_5,int param_6,byte **param_7);
undefined4 FUN_0048d4a0(undefined4 param_1,int param_2);
void FUN_0048d790(int param_1,int *param_2);
void FUN_0048d7b0(int *param_1);
ushort * FUN_0048d7e0(uint param_1);
void FUN_0048d9a0(int param_1);
undefined4 * FUN_0048da80(undefined4 *param_1,uint param_2);
int * FUN_0048db10(int param_1);
void FUN_0048db40(void);
void FUN_0048db60(void);
undefined4 FUN_0048db80(void);
undefined4 FUN_0048db90(void);
undefined * FUN_0048dba0(void);
undefined * FUN_0048dc40(void);
void FUN_0048dce0(void);
void FUN_0048dd80(void);
undefined4 FUN_0048de10(float param_1,byte param_2);
undefined4 FUN_0048dea0(float param_1,byte param_2);
void FUN_0048df30(uint param_1,uint *param_2);
void FUN_0048e4c0(int param_1,int param_2);
void FUN_0048e5f0(int param_1,undefined4 param_2);
int FUN_0048e680(undefined4 param_1);
undefined4 FUN_0048e6d0(undefined4 param_1,undefined4 *param_2);
void FUN_0048eac0(undefined4 param_1);
void FUN_0048eb00(int param_1);
void FUN_0048eb60(float *param_1,float *param_2,float *param_3,float *param_4);
float10 FUN_0048ec50(float *param_1,float *param_2,float *param_3);
void FUN_0048ec90(float *param_1,float param_2);
undefined4 FUN_0048ed20(float *param_1,float *param_2,float *param_3);
void FUN_0048ee10(undefined4 *param_1);
void FUN_0048ee40(int param_1);
void FUN_0048ee70(int param_1);
undefined4 FUN_0048efe0(uint param_1,int param_2);
void FUN_0048f180(int param_1);
void FUN_0048f210(int param_1,uint param_2,undefined4 param_3,int param_4);
undefined4 FUN_0048f700(int param_1,int param_2,int param_3,uint param_4,uint param_5);
void FUN_0048fab0(int param_1);
uint FUN_0048fad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_0048fb20(int param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_0048fc10(int param_1);
void FUN_0048fc30(int param_1);
undefined4 FUN_0048fc50(int param_1,undefined4 param_2);
undefined4 FUN_0048fc70(int param_1);
undefined4 FUN_0048fc90(int *param_1,int param_2);
undefined4 FUN_0048fd10(int *param_1,float param_2);
undefined4 FUN_0048fdc0(int *param_1);
undefined4 FUN_0048ffc0(int param_1,int param_2,float param_3,float param_4);
void FUN_00490060(undefined4 *param_1);
void FUN_004903a0(int param_1,undefined4 *param_2);
void FUN_004903d0(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_00490450(int param_1,uint *param_2,undefined4 *param_3);
undefined4 FUN_004904f0(int param_1);
undefined4 FUN_00490510(int param_1);
void FUN_00490550(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,int param_7,int param_8,float param_9);
void FUN_00490750(int *param_1,float *param_2,int param_3,int param_4,float *param_5,int param_6,float param_7,float *param_8);
float10 FUN_00490930(float *param_1);
undefined4 FUN_00490950(undefined4 param_1);
void FUN_00490990(void);
undefined4 FUN_004909b0(void);
void FUN_00490a00(void);
void FUN_00490a20(undefined4 param_1);
void FUN_00490a30(undefined4 param_1);
void FUN_00490a40(undefined4 param_1);
int FUN_00490a50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
undefined4 FUN_00490aa0(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7);
void FUN_00490b50(int param_1);
uint FUN_00490b70(undefined4 param_1);
undefined4 FUN_00490ba0(undefined4 *param_1,undefined4 param_2);
void FUN_00490bf0(int param_1);
void FUN_00490c10(int *param_1);
undefined4 *FUN_00490c80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00490d10(int param_1,int param_2,undefined4 param_3);
undefined4 FUN_00490e10(int param_1,int param_2,int param_3,int param_4,int param_5,undefined2 param_6,uint param_7);
void FUN_004910a0(undefined4 param_1,undefined4 param_2,uint param_3,uint *param_4,undefined4 *param_5,float *param_6);
void FUN_00491ac0(undefined4 param_1,int param_2,uint *param_3,uint *param_4,float *param_5);
undefined4 FUN_004923c0(undefined4 *param_1);
void FUN_00492410(int param_1);
void FUN_00492440(float *param_1);
void FUN_004924b0(float *param_1,undefined4 *param_2,float *param_3);
void FUN_004925d0(float *param_1,float *param_2);
void FUN_00492680(float *param_1,float *param_2);
void FUN_00492810(float *param_1,undefined4 *param_2);
void FUN_00492930(undefined4 *param_1,undefined4 *param_2);
void FUN_00492960(float *param_1,float *param_2);
void FUN_00492b70(float *param_1,float *param_2,float *param_3);
void FUN_00492d50(float *param_1,float *param_2);
void FUN_00492f40(float *param_1,float *param_2);
void FUN_00493130(undefined4 param_1,undefined4 param_2);
void FUN_00493160(int param_1,float *param_2);
void FUN_00493190(float *param_1,float *param_2,float *param_3);
void FUN_00493200(float *param_1,float *param_2,float *param_3);
void FUN_00493270(float *param_1,float *param_2,float *param_3,int param_4);
void FUN_00493310(int param_1,undefined4 param_2);
void FUN_00493b80(undefined4 param_1,uint *param_2,int *param_3,float *param_4);
undefined4 FUN_00493df0(void);
void FUN_00493e10(void);
undefined4 FUN_00493e40(void);
void FUN_00493e60(void);
undefined4 FUN_00493e80(float param_1,float param_2);
void FUN_004941d0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4);
undefined4 FUN_00494330(uint param_1,int param_2);
undefined4 FUN_004945e0(int param_1,int param_2);
undefined4 FUN_00494980(float param_1,int *param_2,int *param_3,int *param_4,int *param_5);
uint FUN_00494c20(int param_1,int param_2,int param_3);
int FUN_00494c60(int *param_1,float *param_2,int param_3);
int FUN_00495600(int *param_1,float *param_2,int param_3);
int FUN_00495d50(int *param_1,float *param_2,int param_3);
int FUN_004966f0(int *param_1,float *param_2,int param_3);
int FUN_00496e40(int *param_1,float *param_2,float *param_3,float *param_4);
int FUN_00497da0(int *param_1,float *param_2,float *param_3,int param_4);
int FUN_00498a60(int *param_1,float *param_2,float *param_3,float *param_4);
int FUN_00499840(int *param_1,float *param_2,float *param_3,int param_4);
int FUN_0049a390(int *param_1,float *param_2,float *param_3,float *param_4,int param_5);
int FUN_0049b7d0(int *param_1,float *param_2,float *param_3,float *param_4,int param_5);
int FUN_0049c810(int *param_1,int *param_2);
void FUN_0049c9f0(int param_1,int *param_2,int param_3);
WPARAM FUN_0049cd40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_0049ce60(int param_1,int param_2);
void FUN_0049ce90(undefined4 param_1);
undefined4 FUN_0049cea0(HINSTANCE param_1,undefined4 param_2,LPCSTR param_3);
UINT FUN_0049cfd0(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
undefined4 FUN_0049d060(HKEY param_1,LPCSTR param_2);
void FUN_0049d0e0(void);
undefined4 FUN_0049d100(LPCSTR param_1);
undefined4 FUN_0049d180(LPCSTR param_1,undefined4 param_2);
void FUN_0049d210(undefined4 param_1,undefined4 param_2);
void FUN_0049d230(undefined4 param_1,undefined4 param_2);
undefined4 FUN_0049d250(LPCSTR param_1,BYTE *param_2);
undefined4 FUN_0049d2e0(LPCSTR param_1,LPBYTE param_2,DWORD param_3,char *param_4);
void DirectDrawEnumerateA(void);
void DirectDrawCreate(void);
void DirectInputCreateA(void);
BOOL VerQueryValueA(LPCVOID pBlock,LPCSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen);
BOOL GetFileVersionInfoA(LPCSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData);
DWORD GetFileVersionInfoSizeA(LPCSTR lptstrFilename,LPDWORD lpdwHandle);
undefined4 FUN_0049e750(void);
void FUN_0049e8e0(HKEY param_1,LPCSTR param_2,BYTE *param_3);
HRESULT FUN_0049e940(void);
void CoUninitialize(void);
HRESULT FUN_0049e970(int *param_1,int **param_2,LPUNKNOWN param_3,undefined4 param_4);
undefined * FUN_0049ea00(void);
void FUN_0049ea10(void);
void FUN_0049ea40(undefined4 param_1);
void __cdecl __exit(int _Code);
void FUN_0049ea80(UINT param_1,int param_2,int param_3);
void FUN_0049eb40(void);
void FUN_0049eb50(void);
void FUN_0049eb60(code **param_1,code **param_2);
undefined4 FUN_0049eb80(undefined *param_1,undefined4 param_2);
void __cdecl __fpmath(int param_1);
void FUN_0049ec10(void);
byte FUN_0049ec50(byte *param_1,byte *param_2);
longlong __ftol(void);
uint * FUN_0049ed50(uint *param_1,char *param_2);
undefined4 * FUN_0049edd0(undefined4 *param_1);
undefined4 * FUN_0049ef50(undefined4 *param_1,short *param_2,int param_3);
float10 FUN_0049ef90(byte *param_1);
int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount);
int FUN_0049f040(byte *param_1);
void FUN_0049f0e0(undefined4 param_1);
undefined4 FUN_0049f0f0(int param_1);
undefined4 FUN_0049f130(int param_1);
undefined4 FUN_0049f1a0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_0049f1e0(undefined4 param_1,undefined4 param_2);
void FUN_0049f200(LPVOID param_1);
void FUN_0049f270(undefined4 param_1);
int FUN_0049f290(uint param_1,int param_2);
LPVOID FUN_0049f2e0(int param_1);
char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count);
uint FUN_0049f440(int param_1,uint param_2);
undefined4 * FUN_0049f4e0(undefined4 *param_1,undefined4 *param_2,uint param_3);
uint FUN_0049f820(void);
undefined4 FUN_0049f850(undefined *param_1,int param_2,undefined4 param_3);
void FUN_0049f8c0(uint param_1,uint param_2,uint param_3,code *param_4);
void FUN_0049fa70(uint param_1,uint param_2,int param_3,code *param_4);
void FUN_0049fad0(undefined *param_1,undefined *param_2,int param_3);
uint * FUN_0049fb10(uint *param_1,char param_2);
undefined4 FUN_0049fbd0(undefined4 param_1);
int FUN_0049fc00(char **param_1);
uint FUN_0049fdb0(undefined4 param_1,uint param_2,uint param_3,int param_4,code *param_5);
int FUN_0049fe50(int param_1);
uint FUN_0049fee0(uint param_1);
undefined4 FUN_0049ffe0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
uint FUN_004a0020(undefined4 *param_1,uint param_2,uint param_3,int *param_4);
undefined4 FUN_004a0160(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
uint FUN_004a01a0(undefined4 *param_1,uint param_2,uint param_3,int *param_4);
uint FUN_004a02f0(byte *param_1,byte *param_2);
undefined4 FUN_004a03e0(uint param_1);
undefined4 FUN_004a0450(uint param_1);
int FUN_004a04e0(uint param_1);
void FUN_004a0590(undefined4 param_1,undefined4 param_2,undefined4 param_3);
uint FUN_004a05b0(LPCSTR param_1,uint param_2,uint param_3,undefined4 param_4);
undefined4 FUN_004a0950(undefined4 param_1,undefined4 param_2,undefined4 param_3);
int FUN_004a0990(int param_1,int param_2,int param_3);
void FUN_004a0a30(void);
void FUN_004a0a60(void);
void __cdecl __amsg_exit(int param_1);
void FUN_004a0c40(undefined4 param_1);
HANDLE FUN_004a0c70(LPCSTR param_1,uint *param_2);
undefined4 FUN_004a0da0(HANDLE param_1,uint *param_2);
undefined4 FUN_004a0ec0(HANDLE param_1);
undefined4 FUN_004a0ef0(FILETIME *param_1);
char * __cdecl _strrchr(char *_Str,int _Ch);
char * __cdecl _strncat(char *_Dest,char *_Source,size_t _Count);
undefined4 FUN_004a10e0(undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4);
int FUN_004a1150(short *param_1);
undefined4 FUN_004a1170(undefined *param_1,int param_2,undefined4 param_3);
uint FUN_004a1210(short *param_1,short param_2);
uint FUN_004a1250(short *param_1,short *param_2);
char * __cdecl _strpbrk(char *_Str,char *_Control);
size_t __cdecl _strspn(char *_Str,char *_Control);
undefined4 * FUN_004a1380(undefined4 *param_1,uint param_2);
char * FUN_004a1530(char *param_1,int param_2,byte **param_3);
short * FUN_004a15c0(short *param_1,int param_2,undefined4 param_3);
void FUN_004a1640(void);
void FUN_004a1670(int param_1);
void FUN_004a16f0(int param_1);
void FUN_004a1710(uint param_1);
void FUN_004a1750(int param_1,int param_2);
void FUN_004a1780(uint param_1);
void FUN_004a17c0(int param_1,int param_2);
uint FUN_004a17f0(uint param_1,int *param_2);
int FUN_004a1920(undefined4 param_1,char *param_2,undefined4 *param_3);
void FUN_004a22b0(uint param_1,int *param_2,int *param_3);
void FUN_004a2300(undefined4 param_1,int param_2,undefined4 param_3,int *param_4);
void FUN_004a2340(char *param_1,int param_2,undefined4 param_3,int *param_4);
undefined4 FUN_004a2380(undefined4 *param_1);
void __setdefaultprecision(void);
undefined4 FUN_004a23c0(void);
void FUN_004a2410(void);
void FUN_004a2440(char *param_1);
void FUN_004a24a0(char *param_1);
int FUN_004a2590(undefined4 *param_1,int param_2,int param_3,undefined4 param_4);
undefined * FUN_004a2610(undefined *param_1,int param_2,int param_3,int *param_4,char param_5);
int FUN_004a2710(undefined4 *param_1,int param_2,int param_3);
undefined * FUN_004a2780(undefined *param_1,uint param_2,int *param_3,char param_4);
void FUN_004a2840(undefined4 *param_1,int param_2,int param_3,undefined4 param_4);
void FUN_004a2900(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5);
void FUN_004a2970(char *param_1,int param_2);
int FUN_004a29a0(LCID param_1,uint param_2,LPCSTR param_3,LPCWSTR param_4,LPWSTR param_5,int param_6,UINT param_7,int param_8);
void FUN_004a2bd0(uint *param_1,int param_2);
void FUN_004a2cb0(undefined4 *param_1);
undefined4 FUN_004a2d30(int *param_1);
undefined4 * FUN_004a2e70(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 *param_4);
undefined4 * FUN_004a3040(void);
undefined4 FUN_004a3120(void);
undefined ** FUN_004a3160(void);
void FUN_004a32d0(undefined **param_1);
void FUN_004a3330(int param_1);
int FUN_004a3400(undefined *param_1,int **param_2,uint *param_3);
void FUN_004a3460(int param_1,int param_2,byte *param_3);
int * FUN_004a34c0(uint param_1);
int FUN_004a3700(int **param_1,int *param_2,int *param_3);
undefined4 FUN_004a3880(int param_1,int **param_2,int **param_3,uint param_4);
undefined4 FUN_004a3950(undefined4 param_1);
BOOL FUN_004a3970(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6);
BOOL FUN_004a3b00(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,int param_7);
undefined4 FUN_004a3c40(void);
void FUN_004a3ca0(int param_1);
DWORD * FUN_004a3cc0(void);
void FUN_004a3d40(uint param_1);
int FUN_004a3dc0(void);
int FUN_004a3dd0(void);
void FUN_004a3de0(void);
undefined4 FUN_004a3ff0(uint param_1,undefined4 param_2,undefined4 param_3);
DWORD FUN_004a4070(uint param_1,LONG param_2,DWORD param_3);
uint FUN_004a40f0(byte **param_1);
undefined4 FUN_004a41e0(uint param_1,undefined4 param_2,undefined4 param_3);
int FUN_004a4260(uint param_1,char *param_2,DWORD param_3);
undefined4 FUN_004a4490(uint param_1,undefined4 param_2,undefined4 param_3);
int FUN_004a4510(uint param_1,char *param_2,uint param_3);
int FUN_004a4720(void);
undefined4 FUN_004a4890(uint param_1,HANDLE param_2);
undefined4 FUN_004a4940(uint param_1);
undefined4 FUN_004a49e0(uint param_1);
void FUN_004a4a30(uint param_1);
void FUN_004a4aa0(uint param_1);
int FUN_004a4ad0(void);
LONG FUN_004a4c20(undefined4 param_1,_EXCEPTION_POINTERS *param_2);
int * FUN_004a4e30(int param_1,int *param_2);
void FUN_004a4e70(undefined4 param_1);
undefined4 FUN_004a4e90(uint param_1,uint param_2,byte param_3);
void FUN_004a4ed0(void);
void FUN_004a4fc0(void);
void FUN_004a5060(byte *param_1,byte **param_2,byte *param_3,int *param_4,int *param_5);
undefined4 * FUN_004a5270(void);
undefined4 FUN_004a53d0(undefined4 param_1);
int FUN_004a5600(int param_1);
undefined4 FUN_004a5650(undefined4 param_1);
void FUN_004a56b0(void);
void FUN_004a56f0(void);
void FUN_004a58d0(void);
void __global_unwind2(PVOID param_1);
void __local_unwind2(int param_1,int param_2);
void FUN_004a59b6(void);
void FUN_004a5a95(int param_1);
void FUN_004a5ab0(void);
void FUN_004a5af0(int param_1);
int FUN_004a5cd0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);
int FUN_004a5dc0(undefined4 param_1,ushort *param_2,undefined4 *param_3);
void FUN_004a6720(undefined4 param_1,undefined4 param_2,int *param_3);
void FUN_004a6750(undefined4 param_1,int param_2,undefined4 param_3,int *param_4);
void FUN_004a6790(undefined2 *param_1,int param_2,undefined4 param_3,int *param_4);
undefined4 FUN_004a67d0(int *param_1);
undefined8 FUN_004a67f0(int *param_1);
uint __thiscall FUN_004a6810(undefined4 param_1_00,ushort **param_1);
void FUN_004a6a10(int *param_1);
byte FUN_004a6a70(uint param_1);
undefined4 FUN_004a6aa0(undefined4 param_1,undefined4 param_2);
LPSTR FUN_004a6b10(LPSTR param_1,WCHAR param_2);
undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4);
uint FUN_004a6c80(uint param_1,uint param_2);
void FUN_004a6cc0(undefined4 param_1,uint param_2);
uint FUN_004a6ce0(uint param_1);
void FUN_004a6d80(void);
undefined4 FUN_004a6e10(int param_1,int param_2);
void FUN_004a6e80(int param_1,int param_2);
undefined4 FUN_004a6ef0(int param_1,int param_2);
void FUN_004a6f90(int param_1,undefined4 *param_2);
void FUN_004a6fb0(undefined4 *param_1);
undefined4 FUN_004a6fc0(int *param_1);
void FUN_004a6fe0(uint *param_1,int param_2);
undefined4 FUN_004a70a0(ushort *param_1,uint *param_2,int *param_3);
void FUN_004a7270(undefined4 param_1,undefined4 param_2);
void FUN_004a7290(undefined4 param_1,undefined4 param_2);
void FUN_004a72b0(undefined4 param_1,undefined4 param_2);
void FUN_004a72f0(undefined4 param_1,undefined4 param_2);
void FUN_004a7330(undefined4 *param_1,int param_2,int param_3);
int * FUN_004a73d0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4);
void FUN_004a7460(uint *param_1,uint *param_2);
uint FUN_004a75e0(int param_1);
void FUN_004a7960(undefined4 *param_1);
uint FUN_004a7ba0(char *param_1,int param_2);
uint FUN_004a7f90(int param_1);
void FUN_004a80e0(char *param_1);
void FUN_004a8120(int param_1);
size_t __cdecl _strcspn(char *_Str,char *_Control);
undefined4 FUN_004a8490(ushort *param_1,byte **param_2,byte *param_3,undefined4 param_4,int param_5,int param_6,int param_7);
undefined4 * FUN_004a8cc0(int param_1,int param_2);
int FUN_004a8d70(uint param_1,int param_2);
int FUN_004a8de0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_004a8e70(void);
void FUN_004a8eb0(void);
int __cdecl __isindst(tm *_Time);
bool FUN_004a91c0(int *param_1);
void FUN_004a9430(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11);
undefined4 FUN_004a95d0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
uint FUN_004a9650(LPWSTR param_1,byte *param_2,uint param_3);
uint FUN_004a9750(uint param_1,byte **param_2);
undefined2 FUN_004a98c0(undefined4 *param_1);
undefined4 FUN_004a99c0(undefined4 param_1,undefined4 param_2);
uint FUN_004a99f0(uint param_1,char **param_2);
undefined4 FUN_004a9b40(uint param_1,uint param_2,uint *param_3);
void FUN_004a9b70(undefined4 *param_1,undefined4 *param_2);
void FUN_004a9be0(uint *param_1);
void FUN_004a9c10(uint *param_1);
void FUN_004a9c40(char *param_1,int param_2,uint *param_3);
undefined4 FUN_004a9d40(int param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6);
undefined4 FUN_004aa0d0(int param_1,undefined4 param_2,undefined4 param_3,char **param_4);
int FUN_004aa280(byte *param_1,char *param_2,int param_3);
void FUN_004aa390(int *param_1,int *param_2);
void FUN_004aa650(undefined2 *param_1,uint param_2,int param_3);
undefined4 FUN_004aa6e0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
uint FUN_004aa760(LPSTR param_1,LPCWSTR param_2,uint param_3);
int FUN_004aa950(short *param_1,int param_2);
char * FUN_004aa990(char *param_1);
uint FUN_004aaa20(uint param_1,int *param_2);
int FUN_004aab70(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5);
int FUN_004aaca0(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5);
int FUN_004aade0(undefined4 param_1,undefined4 param_2,int param_3);
LPCWSTR FUN_004aae20(void);
int FUN_004aaea0(LCID param_1,DWORD param_2,byte *param_3,LPWSTR param_4,byte *param_5,int param_6,UINT param_7);
int FUN_004ab170(char *param_1,int param_2);
undefined4 FUN_004ab1a0(char *param_1,int param_2);
int FUN_004ab3b0(undefined4 param_1,int param_2);
undefined4 * FUN_004ab430(int *param_1);
byte * FUN_004ab4a0(byte *param_1,uint param_2);
undefined4 * FUN_004ab570(char *param_1);
void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue);
undefined4 * FUN_004ab5d0(undefined4 *param_1);

