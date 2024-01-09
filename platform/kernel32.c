#include "kernel32.h"

#ifndef _WIN32
HANDLE __stdcall GetStdHandle(DWORD nStdHandle) {
    return 0;
}
void __stdcall DebugBreak(void) {}
void __stdcall OutputDebugStringA(LPCSTR lpOutputString) {}
BOOL __stdcall SetConsoleTextAttribute(HANDLE hConsoleOutput, WORD wAttributes) {
    return 0;
}
BOOL __stdcall CreateDirectoryA(LPCSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes) {
    return 0;
}
BOOL __stdcall DeleteFileA(LPCSTR lpFileName) {
    return 0;
}
BOOL __stdcall FindNextFileA(HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData) {
    return 0;
}
BOOL __stdcall FindClose(HANDLE hFindFile) {
    return 0;
}
BOOL __stdcall RemoveDirectoryA(LPCSTR lpPathName) {
    return 0;
}
HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName) {
    return 0;
}
DWORD __stdcall WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds) {
    return 0;
}
BOOL __stdcall CloseHandle(HANDLE hObject) {
    return 0;
}
BOOL __stdcall TerminateThread(HANDLE hThread, DWORD dwExitCode) {
    return 0;
}
HANDLE __stdcall CreateEventA(LPSECURITY_ATTRIBUTES lpEventAttributes, BOOL bManualReset, BOOL bInitialState, LPCSTR lpName) {
    return 0;
}
HANDLE __stdcall CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId) {
    return 0;
}
BOOL __stdcall SetEvent(HANDLE hEvent) {
    return 0;
}
DWORD __stdcall SuspendThread(HANDLE hThread) {
    return 0;
}
DWORD __stdcall ResumeThread(HANDLE hThread) {
    return 0;
}
BOOL __stdcall SetFileAttributesA(LPCSTR lpFileName, DWORD dwFileAttributes) {
    return 0;
}
BOOL __stdcall GetComputerNameA(LPSTR lpBuffer, LPDWORD nSize) {
    return 0;
}
void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection) { }
HANDLE __stdcall FindFirstFileA(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData) {
    return 0;
}
DWORD __stdcall GetLastError(void) {
    return 0;
}
UINT __stdcall GetDriveTypeA(LPCSTR lpRootPathName) {
    return 0;
}
BOOL __stdcall GetVolumeInformationA(LPCSTR lpRootPathName, LPSTR lpVolumeNameBuffer, DWORD nVolumeNameSize, LPDWORD lpVolumeSerialNumber, LPDWORD lpMaximumComponentLength, LPDWORD lpFileSystemFlags, LPSTR lpFileSystemNameBuffer, DWORD nFileSystemNameSize) {
    return 0;
}
BOOL __stdcall WriteConsoleA(HANDLE hConsoleOutput, void * lpBuffer, DWORD nNumberOfCharsToWrite, LPDWORD lpNumberOfCharsWritten, LPVOID lpReserved) {
    return 0;
}
int __stdcall WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWSTR lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar) {
    return 0;
}
void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection) { }
LONG __stdcall InterlockedIncrement(LONG * lpAddend) {
    return 0;
}
LPVOID __stdcall VirtualAlloc(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect) {
    return 0;
}
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue) { }
BOOL __stdcall GetCPInfo(UINT CodePage, LPCPINFO lpCPInfo) {
    return 0;
}
LPWCH __stdcall GetEnvironmentStringsW(void) {
    return 0;
}
LPCH __stdcall GetEnvironmentStrings(void) {
    return 0;
}
BOOL __stdcall FreeEnvironmentStringsW(LPWCH param_1) {
    return 0;
}
BOOL __stdcall FreeEnvironmentStringsA(LPCH param_1) {
    return 0;
}
DWORD __stdcall GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize) {
    return 0;
}
LONG __stdcall UnhandledExceptionFilter(_EXCEPTION_POINTERS * ExceptionInfo) {
    return 0;
}
BOOL __stdcall SetEndOfFile(HANDLE hFile) {
    return 0;
}
BOOL __stdcall SetStdHandle(DWORD nStdHandle, HANDLE hHandle) {
    return 0;
}
BOOL __stdcall WriteFile(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped) {
    return 0;
}
BOOL __stdcall ReadFile(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped) {
    return 0;
}
DWORD __stdcall SetFilePointer(HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod) {
    return 0;
}
UINT __stdcall SetHandleCount(UINT uNumber) {
    return 0;
}
LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex) {
    return 0;
}
void __stdcall SetLastError(DWORD dwErrCode) { }
DWORD __stdcall TlsAlloc(void) {
    return 0;
}
BOOL __stdcall TlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue) {
    return 0;
}
DWORD __stdcall GetCurrentThreadId(void) {
    return 0;
}
BOOL __stdcall GetStringTypeW(DWORD dwInfoType, LPCWSTR lpSrcStr, int cchSrc, LPWORD lpCharType) {
    return 0;
}
void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection) { }
BOOL __stdcall SetEnvironmentVariableA(LPCSTR lpName, LPCSTR lpValue) {
    return 0;
}
int __stdcall CompareStringW(LCID Locale, DWORD dwCmpFlags, PCNZWCH lpString1, int cchCount1, PCNZWCH lpString2, int cchCount2) {
    return 0;
}
int __stdcall CompareStringA(LCID Locale, DWORD dwCmpFlags, PCNZCH lpString1, int cchCount1, PCNZCH lpString2, int cchCount2) {
    return 0;
}
int __stdcall GetLocaleInfoW(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData) {
    return 0;
}
BOOL __stdcall GetStringTypeA(LCID Locale, DWORD dwInfoType, LPCSTR lpSrcStr, int cchSrc, LPWORD lpCharType) {
    return 0;
}
BOOL __stdcall FileTimeToLocalFileTime(FILETIME * lpFileTime, LPFILETIME lpLocalFileTime) {
    return 0;
}
BOOL __stdcall VirtualFree(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType) {
    return 0;
}
HANDLE __stdcall HeapCreate(DWORD flOptions, SIZE_T dwInitialSize, SIZE_T dwMaximumSize) {
    return 0;
}
BOOL __stdcall HeapDestroy(HANDLE hHeap) {
    return 0;
}
DWORD __stdcall GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation) {
    return 0;
}
HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName) {
    return 0;
}
int __stdcall LCMapStringW(LCID Locale, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest) {
    return 0;
}
int __stdcall LCMapStringA(LCID Locale, DWORD dwMapFlags, LPCSTR lpSrcStr, int cchSrc, LPSTR lpDestStr, int cchDest) {
    return 0;
}
BOOL __stdcall FlushFileBuffers(HANDLE hFile) {
    return 0;
}
int __stdcall MultiByteToWideChar(UINT CodePage, DWORD dwFlags, LPCSTR lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar) {
    return 0;
}
FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName) {
    return 0;
}
void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection) { }
LPVOID __stdcall HeapReAlloc(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes) {
    return 0;
}
LONG __stdcall InterlockedDecrement(LONG * lpAddend) {
    return 0;
}
BOOL __stdcall FileTimeToSystemTime(FILETIME * lpFileTime, LPSYSTEMTIME lpSystemTime) {
    return 0;
}
int __stdcall GetLocaleInfoA(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData) {
    return 0;
}
BOOL __stdcall HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem) {
    return 0;
}
noreturn void __stdcall ExitProcess(UINT uExitCode) {}
BOOL __stdcall TerminateProcess(HANDLE hProcess, UINT uExitCode) {
    return 0;
}
HANDLE __stdcall GetCurrentProcess(void) {
    return 0;
}
DWORD __stdcall GetVersion(void) {
    return 0;
}
void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo) { }
LPVOID __stdcall HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes) {
    return 0;
}
DWORD __stdcall GetFileType(HANDLE hFile) {
    return 0;
}
HANDLE __stdcall CreateFileA(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile) {
    return 0;
}
LPSTR __stdcall GetCommandLineA(void) {
    return 0;
}
#endif
