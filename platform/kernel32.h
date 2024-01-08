#ifndef PLATFORM_KERNEL32_H
#define PLATFORM_KERNEL32_H

// this is used for functions required from KERNEL32.DLL
// This is the windows core OS functions

#include "types.h"

HANDLE __stdcall GetStdHandle(DWORD nStdHandle);
void __stdcall DebugBreak(void);
void __stdcall OutputDebugStringA(LPCSTR lpOutputString);
BOOL __stdcall SetConsoleTextAttribute(HANDLE hConsoleOutput, WORD wAttributes);
BOOL __stdcall CreateDirectoryA(LPCSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes);
BOOL __stdcall DeleteFileA(LPCSTR lpFileName);
BOOL __stdcall FindNextFileA(HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData);
BOOL __stdcall FindClose(HANDLE hFindFile);
BOOL __stdcall RemoveDirectoryA(LPCSTR lpPathName);
HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName);
DWORD __stdcall WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds);
BOOL __stdcall CloseHandle(HANDLE hObject);
BOOL __stdcall TerminateThread(HANDLE hThread, DWORD dwExitCode);
HANDLE __stdcall CreateEventA(LPSECURITY_ATTRIBUTES lpEventAttributes, BOOL bManualReset, BOOL bInitialState, LPCSTR lpName);
HANDLE __stdcall CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId);
BOOL __stdcall SetEvent(HANDLE hEvent);
DWORD __stdcall SuspendThread(HANDLE hThread);
DWORD __stdcall ResumeThread(HANDLE hThread);
BOOL __stdcall SetFileAttributesA(LPCSTR lpFileName, DWORD dwFileAttributes);
BOOL __stdcall GetComputerNameA(LPSTR lpBuffer, LPDWORD nSize);
void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
HANDLE __stdcall FindFirstFileA(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData);
DWORD __stdcall GetLastError(void);
UINT __stdcall GetDriveTypeA(LPCSTR lpRootPathName);
BOOL __stdcall GetVolumeInformationA(LPCSTR lpRootPathName, LPSTR lpVolumeNameBuffer, DWORD nVolumeNameSize, LPDWORD lpVolumeSerialNumber, LPDWORD lpMaximumComponentLength, LPDWORD lpFileSystemFlags, LPSTR lpFileSystemNameBuffer, DWORD nFileSystemNameSize);
BOOL __stdcall WriteConsoleA(HANDLE hConsoleOutput, void * lpBuffer, DWORD nNumberOfCharsToWrite, LPDWORD lpNumberOfCharsWritten, LPVOID lpReserved);
int __stdcall WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWSTR lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar);
void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
LONG __stdcall InterlockedIncrement(LONG * lpAddend);
LPVOID __stdcall VirtualAlloc(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect);
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue);
BOOL __stdcall GetCPInfo(UINT CodePage, LPCPINFO lpCPInfo);
LPWCH __stdcall GetEnvironmentStringsW(void);
LPCH __stdcall GetEnvironmentStrings(void);
BOOL __stdcall FreeEnvironmentStringsW(LPWCH param_1);
BOOL __stdcall FreeEnvironmentStringsA(LPCH param_1);
DWORD __stdcall GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize);
LONG __stdcall UnhandledExceptionFilter(_EXCEPTION_POINTERS * ExceptionInfo);
BOOL __stdcall SetEndOfFile(HANDLE hFile);
BOOL __stdcall SetStdHandle(DWORD nStdHandle, HANDLE hHandle);
BOOL __stdcall WriteFile(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);
BOOL __stdcall ReadFile(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped);
DWORD __stdcall SetFilePointer(HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod);
UINT __stdcall SetHandleCount(UINT uNumber);
LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex);
void __stdcall SetLastError(DWORD dwErrCode);
DWORD __stdcall TlsAlloc(void);
BOOL __stdcall TlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue);
DWORD __stdcall GetCurrentThreadId(void);
BOOL __stdcall GetStringTypeW(DWORD dwInfoType, LPCWSTR lpSrcStr, int cchSrc, LPWORD lpCharType);
void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
BOOL __stdcall SetEnvironmentVariableA(LPCSTR lpName, LPCSTR lpValue);
int __stdcall CompareStringW(LCID Locale, DWORD dwCmpFlags, PCNZWCH lpString1, int cchCount1, PCNZWCH lpString2, int cchCount2);
int __stdcall CompareStringA(LCID Locale, DWORD dwCmpFlags, PCNZCH lpString1, int cchCount1, PCNZCH lpString2, int cchCount2);
int __stdcall GetLocaleInfoW(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData);
BOOL __stdcall GetStringTypeA(LCID Locale, DWORD dwInfoType, LPCSTR lpSrcStr, int cchSrc, LPWORD lpCharType);
BOOL __stdcall FileTimeToLocalFileTime(FILETIME * lpFileTime, LPFILETIME lpLocalFileTime);
BOOL __stdcall VirtualFree(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType);
HANDLE __stdcall HeapCreate(DWORD flOptions, SIZE_T dwInitialSize, SIZE_T dwMaximumSize);
BOOL __stdcall HeapDestroy(HANDLE hHeap);
DWORD __stdcall GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation);
HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName);
int __stdcall LCMapStringW(LCID Locale, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest);
int __stdcall LCMapStringA(LCID Locale, DWORD dwMapFlags, LPCSTR lpSrcStr, int cchSrc, LPSTR lpDestStr, int cchDest);
BOOL __stdcall FlushFileBuffers(HANDLE hFile);
int __stdcall MultiByteToWideChar(UINT CodePage, DWORD dwFlags, LPCSTR lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar);
FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName);
void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
LPVOID __stdcall HeapReAlloc(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes);
LONG __stdcall InterlockedDecrement(LONG * lpAddend);
BOOL __stdcall FileTimeToSystemTime(FILETIME * lpFileTime, LPSYSTEMTIME lpSystemTime);
int __stdcall GetLocaleInfoA(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData);
BOOL __stdcall HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem);
noreturn void __stdcall ExitProcess(UINT uExitCode);
BOOL __stdcall TerminateProcess(HANDLE hProcess, UINT uExitCode);
HANDLE __stdcall GetCurrentProcess(void);
DWORD __stdcall GetVersion(void);
void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo);
LPVOID __stdcall HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes);
DWORD __stdcall GetFileType(HANDLE hFile);
HANDLE __stdcall CreateFileA(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
LPSTR __stdcall GetCommandLineA(void);

#endif
