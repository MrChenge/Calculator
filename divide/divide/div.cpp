#include <iostream>
#include <windows.h>
#include "D:\C\add\add\all.h"
#include "sub.h"
#include "div.h"

using namespace std;
double divide(double x,double y){
	return x/y;	
}

int main()
{
	double a;
	double b;
	char sign;
	cout<<"�������������֣��Իس�����:"<<endl;
	
	cin>>a;
	cin>>b;
	
	cout<<"����������Ҫ��������ţ��Իس�����:"<<endl;
	cin>>sign;
	
    HMODULE hmod = LoadLibrary(L"D:\\C\\multiply\\Debug\\multiply.dll");
    if(hmod == NULL)
    {
        FreeLibrary(hmod);
        cout<<"Dll loaded is fail..."<<endl;
        getchar();
        return -1;
    }
	typedef double (*LoadProc)(double,double); 
    LoadProc unrser=(LoadProc)GetProcAddress(hmod,"multiply");
    double MUL=unrser(a,b);
    FreeLibrary(hmod);
	
switch(sign)
   {
   case '+' :
     cout<<"�������ĺ���:"<<Add(a,b)<<endl;
      break;
   case '-' :
	   cout<<"�������Ĳ���:"<<Subtract(a,b)<<endl;
	   break;
   case '*' :
      cout<<"�������Ļ���:"<<MUL<<endl;
      break;
   case '/' :
      if(b==0)
		cout<<"������������0!"<<endl;
	  else
		cout<<"������������:"<<divide(a,b)<<endl;
	  break;
  
   default :
      cout << "��Ч������" << endl;
   }
	return 0;
}

