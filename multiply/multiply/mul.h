#ifndef  TestDll_H_
#define TestDll_H_


#ifdef MYLIBDLL
#define MYLIBDLL extern "C" _declspec(dllexport) 
#else
#define MYLIBDLL extern "C" _declspec(dllimport) 
#endif


MYLIBDLL  double multiply(double a,double b) ;
#endif
