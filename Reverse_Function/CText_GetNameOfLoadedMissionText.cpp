
	.text:0069FBD0                             arg_0           = dword ptr  4
	.text:0069FBD0
	.text:0069FBD0 000 8B 54 24 04                             mov     edx, [esp+4]
	.text:0069FBD4 000 8D 41 24                                lea     eax, [ecx+24h]
	.text:0069FBD7 000 2B D0                                   sub     edx, eax
	.text:0069FBD9 000 8D A4 24 00 00 00 00                    lea     esp, [esp+0] // IGNORE THIS INSTRUCTION
	.text:0069FBE0
	.text:0069FBE0                             loc_69FBE0:                             ; CODE XREF: CText::GetNameOfLoadedMissionText(char *)+18↓j
	.text:0069FBE0 000 8A 08                                   mov     cl, [eax]
	.text:0069FBE2 000 88 0C 02                                mov     [edx+eax], cl
	.text:0069FBE5 000 40                                      inc     eax
	.text:0069FBE6 000 84 C9                                   test    cl, cl
	.text:0069FBE8 000 75 F6                                   jnz     short loc_69FBE0
	.text:0069FBEA 000 C2 04 00                                retn    4 // 
	.text:0069FBEA                             _ZN5CText26GetNameOfLoadedMissionTextEPc endp


	//edx = arg_0;


	class CText{
		char padding[0x24];
		int mem_0x24;


		void GetNameOfLoadedMissionText(int arg);

	}




	void GetNameOfLoadedMissionText(char* arg){
		//access the arrgmunet in stack;
		int the_edx = arg;

		char* the_eax = &this->mem_0x24;// lea     esp, [esp+0]



			int i =0;
			//looping
			while(true){
				arg[i] = the_eax[i];

					if(the_eax[i] == '\0' ){
						brea	;
					}
				
			}
			}

			return;





	}
	//// The caller function  will put  thgeobject pointer in E C X "ecx" ECX ECX ECX ECX register 