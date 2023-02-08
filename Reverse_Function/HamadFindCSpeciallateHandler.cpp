// 06F2D30                             carGenId        = dword ptr  8
// .text:006F2D30                             outText         = dword ptr  0Ch
// .text:006F2D30
// .text:006F2D30 000 56                                      push    esi
// .text:006F2D31 004 8B 74 24 0C                             mov     esi, [esp+outText]
// .text:006F2D35 004 C6 06 00                                mov     byte ptr [esi], 0
// .text:006F2D38 004 8B 81 F0 00 00 00                       mov     eax, [ecx+0F0h]
// .text:006F2D3E 004 85 C0                                   test    eax, eax
// .text:006F2D40 004 75 07                                   jnz     short loc_6F2D49
// .text:006F2D42 004 83 C8 FF                                or      eax, 0FFFFFFFFh
// .text:006F2D45 004 5E                                      pop     esi
// .text:006F2D46 000 C2 08 00                                retn    8
// .text:006F2D49                             ; ---------------------------------------------------------------------------
// .text:006F2D49
// .text:006F2D49                             loc_6F2D49:                             ; CODE XREF: CSpecialPlateHandler::Find(int,char *)+10↑j
// .text:006F2D49 004 57                                      push    edi
// .text:006F2D4A 008 8B 7C 24 0C                             mov     edi, [esp+4+carGenId]
// .text:006F2D4E 008 33 C0                                   xor     eax, eax
// .text:006F2D50 008 8B D1                                   mov     edx, ecx
// .text:006F2D52
// .text:006F2D52                             loc_6F2D52:                             ; CODE XREF: CSpecialPlateHandler::Find(int,char *)+2D↓j
// .text:006F2D52 008 39 3A                                   cmp     [edx], edi
// .text:006F2D54 008 74 11                                   jz      short loc_6F2D67
// .text:006F2D56 008 40                                      inc     eax
// .text:006F2D57 008 83 C2 10                                add     edx, 10h
// .text:006F2D5A 008 83 F8 0F                                cmp     eax, 0Fh
// .text:006F2D5D 008 7C F3                                   jl      short loc_6F2D52
// .text:006F2D5F 008 5F                                      pop     edi
// .text:006F2D60 004 83 C8 FF                                or      eax, 0FFFFFFFFh
// .text:006F2D63 004 5E                                      pop     esi
// .text:006F2D64 000 C2 08 00                                retn    8

// .text:006F2D67                             ; ---------------------------------------------------------------------------
// .text:006F2D67
// .text:006F2D67                             loc_6F2D67:                             ; CODE XREF: CSpecialPlateHandler::Find(int,char *)+24↑j
// .text:006F2D67 008 8B D0                                   mov     edx, eax
// .text:006F2D69 008 C1 E2 04                                shl     edx, 4
// .text:006F2D6C 008 8D 4C 0A 04                             lea     ecx, [edx+ecx+4]
// .text:006F2D70 008 2B F1                                   sub     esi, ecx
// .text:006F2D72
// .text:006F2D72                             loc_6F2D72:                             ; CODE XREF: CSpecialPlateHandler::Find(int,char *)+4A↓j
// .text:006F2D72 008 8A 11                                   mov     dl, [ecx]
// .text:006F2D74 008 88 14 0E                                mov     [esi+ecx], dl
// .text:006F2D77 008 41                                      inc     ecx
// .text:006F2D78 008 84 D2                                   test    dl, dl
// .text:006F2D7A 008 75 F6                                   jnz     short loc_6F2D72
// .text:006F2D7C 008 5F                                      pop     edi
// .text:006F2D7D 004 5E                                      pop     esi
// .text:006F2D7E 000 C2 08 00                                retn    8
// .text:006F2D7E                             _ZN20CSpecialPlateHandler4FindEiPc endp



class Hamad_9{
	int ali_0
	int padding[0xEC];
	int member_f0;

	void fun1(int arg1, int arg2);
}

void Hamad::fun1(int arg1, int arg2){
	int the_esi = arg2;   //mov     esi, [esp+outText]
	*(char*) the_esi = 0;
	int the_eax = this->member_f0; //mov     eax, [ecx+0F0h]
	the_eax = 0; //test    eax, eax
	if(the_eax == 0){
		return -1;

	}else{
		//loc_6F2D49
		int the_edi = arg1; //mov     edi, [esp+4+carGenId]
		the_eax = 0;  //xor     eax, eax
		int the_edx = this-
	}

}