#include <iostream>
using namespace std;
int main() {
011617F0  push        ebp  
011617F1  mov         ebp,esp  
011617F3  sub         esp,0E4h  
011617F9  push        ebx  
011617FA  push        esi  
011617FB  push        edi  
011617FC  lea         edi,[ebp-0E4h]  
01161802  mov         ecx,39h  
01161807  mov         eax,0CCCCCCCCh  
0116180C  rep stos    dword ptr es:[edi]  
	int a, x, y;
	a = 5;
0116180E  mov         dword ptr [a],5  
	cin >> x;
01161815  mov         esi,esp  
01161817  lea         eax,[x]  
0116181A  push        eax  
0116181B  mov         ecx,dword ptr [_imp_?cin@std@@3V?$basic_istream@DU?$char_traits@D@std@@@1@A (0116A09Ch)]  
01161821  call        dword ptr [__imp_std::basic_istream<char,std::char_traits<char> >::operator>> (0116A0A0h)]  
01161827  cmp         esi,esp  
01161829  call        __RTC_CheckEsp (01161127h)  
	if (x > a) {
0116182E  mov         eax,dword ptr [x]  
01161831  cmp         eax,dword ptr [a]  
01161834  jle         main+51h (01161841h)  
		y = a + x;
01161836  mov         eax,dword ptr [a]  
01161839  add         eax,dword ptr [x]  
0116183C  mov         dword ptr [y],eax  
	}
	else {
0116183F  jmp         main+5Ch (0116184Ch)  
		y = 2 * a - x;
01161841  mov         eax,dword ptr [a]  
01161844  shl         eax,1  
01161846  sub         eax,dword ptr [x]  
01161849  mov         dword ptr [y],eax  
	}

	cout << y << endl;
0116184C  mov         esi,esp  
	}

	cout << y << endl;
0116184E  push        offset std::endl<char,std::char_traits<char> > (0116106Eh)  
01161853  mov         edi,esp  
01161855  mov         eax,dword ptr [y]  
01161858  push        eax  
01161859  mov         ecx,dword ptr [_imp_?cout@std@@3V?$basic_ostream@DU?$char_traits@D@std@@@1@A (0116A098h)]  
0116185F  call        dword ptr [__imp_std::basic_ostream<char,std::char_traits<char> >::operator<< (0116A0ACh)]  
01161865  cmp         edi,esp  
01161867  call        __RTC_CheckEsp (01161127h)  
0116186C  mov         ecx,eax  
0116186E  call        dword ptr [__imp_std::basic_ostream<char,std::char_traits<char> >::operator<< (0116A0B0h)]  
01161874  cmp         esi,esp  
01161876  call        __RTC_CheckEsp (01161127h)  

	return 0;
0116187B  xor         eax,eax  
}
0116187D  push        edx  
0116187E  mov         ecx,ebp  
01161880  push        eax  
01161881  lea         edx,ds:[11618A4h]  
01161887  call        @_RTC_CheckStackVars@8 (01161271h)  
0116188C  pop         eax  
0116188D  pop         edx  
0116188E  pop         edi  
0116188F  pop         esi  
01161890  pop         ebx  
01161891  add         esp,0E4h  
01161897  cmp         ebp,esp  
01161899  call        __RTC_CheckEsp (01161127h)  
0116189E  mov         esp,ebp  
011618A0  pop         ebp  
011618A1  ret  
011618A2  xchg        ax,ax  
011618A4  add         dword ptr [eax],eax  
011618A6  add         byte ptr [eax],al  
011618A8  lods        byte ptr [esi]  
011618A9  sbb         byte ptr [esi],dl  
011618AB  add         esp,ebp  
011618AD  ?? ?? 
011618AE  ?? ?? 
011618AF  inc         dword ptr [eax+eax]  
011618B2  add         byte ptr [eax],al  
011618B4  mov         eax,78011618h  
011618B9  add         ah,cl  
