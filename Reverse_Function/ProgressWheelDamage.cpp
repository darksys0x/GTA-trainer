
t:006C2440                             _ZN14CDamageManager19ProgressWheelDamageEh proc near
.text:006C2440                                                                     ; CODE XREF: CDamageManager::ApplyDamage(CAutomobile,tComponent,float,float)+76↓p
.text:006C2440
.text:006C2440                             wheel           = byte ptr  4
.text:006C2440
.text:006C2440 000 0F B6 44 24 04                          movzx   eax, [esp+4]
.text:006C2445 000 8D 4C 08 05                             lea     ecx, [eax+ecx+5] 
.text:006C2449 000 8A 01                                   mov     al, [ecx]
.text:006C244B 000 3C 02                                   cmp     al, 2
.text:006C244D 000 75 05                                   jnz     short loc_6C2454
.text:006C244F 000 32 C0                                   xor     al, al
.text:006C2451 000 C2 04 00                                retn    4
.text:006C2454                             ; ---------------------------------------------------------------------------
.text:006C2454
.text:006C2454                             loc_6C2454:                             ; CODE XREF: CDamageManager::ProgressWheelDamage(uchar)+D↑j
.text:006C2454 000 FE C0                                   inc     al
.text:006C2456 000 88 01                                   mov     [ecx], al
.text:006C2458 000 B0 01                                   mov     al, 1
.text:006C245A 000 C2 04 00                                retn    4






// The caller function  will put the object pointer in  the ECX register

class CDamageManager
{
	char arr[5];
	char hamadArray[20];
};

bool CDamageManager::ProgressWheelDamage(char index) {
	int indx = index;
	char* p = &hamadArray[i]
	char value = *p;
	if (value == 2) {
		return 0;
	} else {
		//loc_6C2454
		value++;
		*p = value;
		return 1;

	}

}