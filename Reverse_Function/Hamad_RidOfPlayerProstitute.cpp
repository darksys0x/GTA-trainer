0661D30                             ; CTaskComplexProstituteSolicit *__cdecl CTaskComplexProstituteSolicit::GetRidOfPlayerProstitute()
.text:00661D30                             _ZN29CTaskComplexProstituteSolicit24GetRidOfPlayerProstituteEv proc near
.text:00661D30                                                                     ; CODE XREF: CRunningScript::ProcessCommands2600To2699(int):__linkproc__ opcode_0A43↑p
.text:00661D30 000 6A FF                                   push    0FFFFFFFFh      ; number
.text:00661D32 004 E8 D9 C4 F0 FF                          call    _Z13FindPlayerPedj ; FindPlayerPed(uint)
.text:00661D37 004 8B 80 80 04 00 00                       mov     eax, [eax+480h]
.text:00661D3D 004 8B 80 A4 00 00 00                       mov     eax, [eax+0A4h]
.text:00661D43 004 83 C4 04                                add     esp, 4
.text:00661D46 000 85 C0                                   test    eax, eax
.text:00661D48 000 74 20                                   jz      short locret_661D6A
.text:00661D4A 000 8B 80 7C 04 00 00                       mov     eax, [eax+47Ch]
.text:00661D50 000 68 1D 05 00 00                          push    51Dh            ; taskId
.text:00661D55 004 8B C8                                   mov     ecx, eax        ; this
.text:00661D57 004 E8 84 F1 F9 FF                          call    _ZNK16CPedIntelligence14FindTaskByTypeEi ; CPedIntelligence::FindTaskByType(int)
.text:00661D5C 000 85 C0                                   test    eax, eax   // you have create a new varible to get the return int "eax";
.text:00661D5E 000 74 0A                                   jz      short locret_661D6A
.text:00661D60 000 80 48 2C 04                             or      byte ptr [eax+2Ch], 4
.text:00661D64 000 66 C7 40 2A 00 00                       mov     word ptr [eax+2Ah], 0
.text:00661D6A
.text:00661D6A                             locret_661D6A:                          ; CODE XREF: CTaskComplexProstituteSolicit::GetRidOfPlayerProstitute(void)+18↑j
.text:00661D6A                                                                     ; CTaskComplexProstituteSolicit::GetRidOfPlayerProstitute(void)+2E↑j
.text:00661D6A 000 C3                                      retn


//



struct love{
	char padding[0x2a];
	int16_t love_2a;
	char love_2c;
}
class CPedIntelligence{

	love* FindTaskByType(int arg);
}


struct s3{
   char padding[0x47];
   CPedIntelligence* firstClass;


}


struct s2{
	char padding[s1_0xA4];
 	s3* member_0xA4;

}

struct s1
{
	char padding[0x480];
	s2* s1_0x480; //eax, [eax+480h]
	

	
};


s1* FindPlayerPed(int arg) {
	....
}

GetRidOfPlayerProstitute(){
	s2* hamad = FindPlayerPed(-1)->s1_0x480;//  eax, [eax+480h]
	s3* noHappy_Valentine_day = hamad->member_0xA4;
	// add     esp, 4 
	//remove last push in the stack, "-1"



	if(noHappy_Valentine_day == 0){
		//locret_661D6A	
		return;
	} 
	else {

		CPedIntelligence* the_fun_0 = noHappy_Valentine_day->firstClass;
		love* var = the_fun_0->FindTaskByType(0x51D);
		if(var == 0){
			//locret_661D6A

			return;
		}else{
			var->love_2a = 0; 
			var->love_2c = 4; 

		}


	}


}
