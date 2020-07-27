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
	cout<<"请输入两个数字，以回车结束:"<<endl;
	
	cin>>a;
	cin>>b;
	
	cout<<"请输入您需要的运算符号，以回车结束:"<<endl;
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
     cout<<"两个数的和是:"<<Add(a,b)<<endl;
      break;
   case '-' :
	   cout<<"两个数的差是:"<<Subtract(a,b)<<endl;
	   break;
   case '*' :
      cout<<"两个数的积是:"<<MUL<<endl;
      break;
   case '/' :
      if(b==0)
		cout<<"被除数不能是0!"<<endl;
	  else
		cout<<"两个数的商是:"<<divide(a,b)<<endl;
	  break;
  
   default :
      cout << "无效的输入" << endl;
   }
	return 0;
}

