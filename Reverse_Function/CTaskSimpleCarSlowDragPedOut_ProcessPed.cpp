// .text:0064E060 sub_64E060      proc near               ; DATA XREF: .rdata:0086EF04↓o
// .text:0064E060
// .text:0064E060 var_10          = dword ptr -10h
// .text:0064E060 var_4           = dword ptr -4
// .text:0064E060 arg_0           = dword ptr  4
// .text:0064E060
// .text:0064E060                 push    ecx
// .text:0064E061                 push    esi
// .text:0064E062                 mov     esi, ecx
// .text:0064E064                 mov     al, [esi+8]
// .text:0064E067                 test    al, al
// .text:0064E069                 jnz     short loc_64E097
// .text:0064E06B                 mov     eax, [esi+10h] 
// .text:0064E06E                 test    eax, eax 
// .text:0064E070                 jz      short loc_64E097
// .text:0064E072                 mov     eax, [eax+384h] //900
// .text:0064E078                 movzx   eax, byte ptr [eax+0DEh] //222
// .text:0064E07F                 add     eax, 58h ; 'X'
// .text:0064E082                 cmp     eax, 67h ; 'g'
// .text:0064E085                 jz      short loc_64E097
// .text:0064E087                 cmp     eax, 70h ; 'p'
// .text:0064E08A                 jz      short loc_64E097
// .text:0064E08C                 cmp     dword ptr [esi+14h], 8
// .text:0064E090                 jnz     short loc_64E09E
// .text:0064E092                 cmp     eax, 68h ; 'h'
// .text:0064E095                 jnz     short loc_64E09E
// .text:0064E097
// .text:0064E097 loc_64E097:                             ; CODE XREF: sub_64E060+9↑j
// .text:0064E097                                         ; sub_64E060+10↑j ...
// .text:0064E097                 mov     al, 1
// .text:0064E099                 pop     esi
// .text:0064E09A                 pop     ecx
// .text:0064E09B                 retn    4
// .text:0064E09E ; ---------------------------------------------------------------------------
// .text:0064E09E
// .text:0064E09E loc_64E09E:                             ; CODE XREF: sub_64E060+30↑j
// .text:0064E09E                                         ; sub_64E060+35↑j
// .text:0064E09E                 mov     eax, [esi+0Ch]
// .text:0064E0A1                 test    eax, eax
// .text:0064E0A3                 push    ebx
// .text:0064E0A4                 mov     ebx, [esp+0Ch+arg_0]
// .text:0064E0A8                 jnz     loc_64E142
// .text:0064E0AE                 push    ebx
// .text:0064E0AF                 mov     ecx, esi
// .text:0064E0B1                 call    sub_64C010
// .text:0064E0B6                 mov     eax, [esi+10h]
// .text:0064E0B9                 test    eax, eax
// .text:0064E0BB                 jz      loc_64E142
// .text:0064E0C1                 mov     ecx, [esi+14h]
// .text:0064E0C4                 cmp     ecx, 0Ah
// .text:0064E0C7                 push    edi
// .text:0064E0C8                 jnz     short loc_64E0D2
// .text:0064E0CA                 mov     edi, [eax+460h]
// .text:0064E0D0                 jmp     short loc_64E0E6
// .text:0064E0D2 ; ---------------------------------------------------------------------------
// .text:0064E0D2
// .text:0064E0D2 loc_64E0D2:                             ; CODE XREF: sub_64E060+68↑j
// .text:0064E0D2                 push    ecx
// .text:0064E0D3                 push    eax
// .text:0064E0D4                 call    sub_64F1E0
// .text:0064E0D9                 mov     ecx, [esi+10h]
// .text:0064E0DC                 mov     edi, [ecx+eax*4+464h]
// .text:0064E0E3                 add     esp, 8
// .text:0064E0E6
// .text:0064E0E6 loc_64E0E6:                             ; CODE XREF: sub_64E060+70↑j
// .text:0064E0E6                 test    edi, edi
// .text:0064E0E8                 jz      short loc_64E141
// .text:0064E0EA                 call    _rand
// .text:0064E0EF                 and     eax, 3FFh
// .text:0064E0F4                 cmp     eax, 200h
// .text:0064E0F9                 push    0
// .text:0064E0FB                 jle     short loc_64E120
// .text:0064E0FD                 mov     edx, [esi+10h]
// .text:0064E100                 push    edx
// .text:0064E101                 push    edi
// .text:0064E102                 push    ebx
// .text:0064E103                 call    sub_6497F0
// .text:0064E108                 add     esp, 10h
// .text:0064E10B                 test    al, al
// .text:0064E10D                 jnz     short loc_64E141
// .text:0064E10F                 mov     eax, [esi+10h]
// .text:0064E112                 push    0
// .text:0064E114                 push    eax
// .text:0064E115                 push    edi
// .text:0064E116                 call    sub_6497A0
// .text:0064E11B                 add     esp, 0Ch
// .text:0064E11E                 jmp     short loc_64E141
// .text:0064E120 ; ---------------------------------------------------------------------------
// .text:0064E120
// .text:0064E120 loc_64E120:                             ; CODE XREF: sub_64E060+9B↑j
// .text:0064E120                 mov     ecx, [esi+10h]
// .text:0064E123                 push    ecx
// .text:0064E124                 push    edi
// .text:0064E125                 call    sub_6497A0
// .text:0064E12A                 add     esp, 0Ch
// .text:0064E12D                 test    al, al
// .text:0064E12F                 jnz     short loc_64E141
// .text:0064E131                 mov     edx, [esi+10h]
// .text:0064E134                 push    0
// .text:0064E136                 push    edx
// .text:0064E137                 push    edi
// .text:0064E138                 push    ebx
// .text:0064E139                 call    sub_6497F0
// .text:0064E13E                 add     esp, 10h
// .text:0064E141
// .text:0064E141 loc_64E141:                             ; CODE XREF: sub_64E060+88↑j
// .text:0064E141                                         ; sub_64E060+AD↑j ...
// .text:0064E141                 pop     edi
// .text:0064E142
// .text:0064E142 loc_64E142:                             ; CODE XREF: sub_64E060+48↑j
// .text:0064E142                                         ; sub_64E060+5B↑j
// .text:0064E142                 lea     eax, [esp+0Ch+arg_0]
// .text:0064E146                 push    eax
// .text:0064E147                 lea     ecx, [esp+10h+var_4]
// .text:0064E14B                 push    ecx
// .text:0064E14C                 mov     ecx, esi
// .text:0064E14E                 call    sub_648100
// .text:0064E153                 mov     eax, [esi+0Ch]
// .text:0064E156                 fld     dword ptr [eax+20h]
// .text:0064E159                 mov     ecx, [esi+10h]
// .text:0064E15C                 mov     eax, [esp+0Ch+arg_0]
// .text:0064E160                 mov     edx, [ecx]
// .text:0064E162                 push    ecx
// .text:0064E163                 fstp    [esp+10h+var_10]
// .text:0064E166                 push    eax
// .text:0064E167                 mov     eax, [esp+14h+var_4]
// .text:0064E16B                 push    eax
// .text:0064E16C                 mov     eax, [esi+14h]
// .text:0064E16F                 push    eax
// .text:0064E170                 push    ebx
// .text:0064E171                 call    dword ptr [edx+70h]
// .text:0064E174                 pop     ebx
// .text:0064E175                 xor     al, al
// .text:0064E177                 pop     esi
// .text:0064E178                 pop     ecx
// .text:0064E179                 retn    4  
// .text:0064E179 sub_64E060      endp
 //----------------------------

 //The reverse Function:

struct manar{
	char padding[0x20];
	float manar_20;

}

struct darksys0x1{
	char padding[0x0DE];
	char darksys0x1_DE;
}

struct darksys0x
{	int darksys0x_0;
	char padding[0x380];
	darksys0x1* darksys0x_384;
	char paddin2[0xd8];
	int filed_460;
	int arr_464[20];//size unkinwen; 

	
};


class Hamad {
	char* padding[2];
	bool Hamad_8;
	manar* element_c;
	darksys0x* Hamad_10;
	int Hamad_14;


	void fun1(int arg1);
	void sub_648100(int* arg01, int* arg02);
}

void Hamad::fun1(int arg1){
	if(this->Hamad_8 != 0){ return 1;}   //test    al, al
	darksys0x* newEelment = Hamad_10; //eax, [esi+10h] 
	if(newEelment == 0){return 1;}
	darksys0x1* secandElemnt = newEelment->darksys0x_384; //mov     eax, [eax+384h]
	int malik = secandElemnt->darksys0x1_DE; // movzx   eax, byte ptr [eax+0DEh]
	malk+='X';
	if(malk == 'g'){return 1;}
	if(malk == 'p'){return 1;}
	if(this->Hamad_14 == 8){
		if(malk == 'h'){
			return 1;
		}
	}


	// loc_64E09E
	int malk_2 = this->element_c;
	int malk_3 = arg1;
	if(malk_2 == 0){
		this->sub_64C010(malik_3);
		darksys0x* cr7 = Hamad_10;
		if(cr7 != 0){
			int dan = this->Hamad_14;
			if(dan != 0xA){ 
				//loc_64E0D2
				sub_64F1E0(cr7, dan); //eax = dan =offcite  || ecx = cr7 basAdrr
				charcr7->arr_464[dan]


			} else {
				// .text:0064E0CA
				int dan_2 = cr7->filed_460; //dan2 = edi
				// loc_64E0E6 || jmp     short loc_64E0E6
				if(dan_2 == 0){
					//loc_64E141
					int var1 =2; 
					sub_648100(&var1, &arg1);
					manar* happy = element_c;// mov     eax, [esi+0Ch]
					float aa = happy->manar_20;	// fld     dword ptr [eax+20h]
					darksys0x* bb = this->Hamad_10;//push last arrg;
					int dd = arg1;
					int kk = bb->darksys0x_0; 









				}


			}

		} else {
 			// loc_64E142
		}





	}






















	

}






















	

}

