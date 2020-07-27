#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\subtract\sub.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest2
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(subTest)
		{
			
            Assert::AreEqual(0,Subtract(25,25),0.001);
		}

	};
}