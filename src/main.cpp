#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH:
            // Module loaded
            break;
        case DLL_PROCESS_DETACH:
            // Module unloaded
            break;
    }
    return TRUE;
}
