#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\add\all.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(addTest)
		{
			// TODO: �ڴ�������Դ���
            Assert::AreEqual(50,Add(25,25),0.001);
		}

	};
}