#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\divide\div.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(divTest)
		{
			// TODO: �ڴ�������Դ���
			Assert::AreEqual(10.0, divide(50.0,5.0),0.0001);
		}

	};
}