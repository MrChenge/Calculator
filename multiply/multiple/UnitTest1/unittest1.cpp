#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\multiple\mul.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(mulTest)
		{
			Assert::AreEqual(50,multiply(2,25),0.0001);
			// TODO: �ڴ�������Դ���
		}

	};
}