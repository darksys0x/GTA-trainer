// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <stdio.h>


void DisplayConsole()
{
    if (AllocConsole())
    {
        freopen("CONIN$", "r", stdin);
        freopen("CONOUT$", "w", stdout);
        freopen("CONOUT$", "w", stderr);
    }
}

void runCheat() {
//1. get exe base address.HMODULE GetModuleHandleA(
   // [in, optional] LPCSTR lpModuleName
   //     );
    DWORD exeBaseAddress = (DWORD)GetModuleHandle(L"gta_sa_compact.exe");
    //int arr[9] = { 0x0076F3B8, 0x1CC , 0xB4, 0x8, 0x4, 0x0, 0xB0, 0x4, 0x0 };
    //DWORD obj = exeBaseAddress;
    //printf("obj + offset = address (value)\n");
    //for (int i = 0; i < 9; i++) {
    //    printf("%#.8x + %#.8x = %#.8x ", obj, arr[i], obj + arr[i]);
    //    DWORD value = *(DWORD*)(obj + arr[i]);//derfrencing
    //    printf("(%#.8x)\n", value);
    //    obj = value;
    //}
    //float health = *(float*)(obj+0x540);
    //printf("the health %f\n", health);


    DWORD obj1 = *(DWORD*)(exeBaseAddress + 0x0076F3B8);
    DWORD obj2 = *(DWORD*)(obj1 + 0x1CC);
    DWORD obj3 = *(DWORD*)(obj2 + 0x0B4);
    DWORD obj4 = *(DWORD*)(obj3 + 0x8);
    DWORD obj5 = *(DWORD*)(obj4 + 0x4);
    DWORD obj6 = *(DWORD*)(obj5 + 0x0);
    DWORD obj7 = *(DWORD*)(obj6 + 0xB0);
    DWORD obj8 = *(DWORD*)(obj7 + 0x4);
    DWORD obj9 = *(DWORD*)(obj8 + 0x0);
    float health = *(float*)(obj9 + 0x540);
    printf("the health is = %f", health);



}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {
        DisplayConsole();
        runCheat();
        break;


    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

