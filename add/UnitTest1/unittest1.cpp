#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\add\all.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NativeUnitTest_Namespace
{
    TEST_CLASS(TrivialCalculatorTest)
    {
    public:
        TrivialCalculatorTest()
        {
            test = new TrivialCalculator;
        }

        ~TrivialCalculatorTest()
        {
            delete test;
        }

        TEST_METHOD(AddTest)
        {
            //TrivialCalculator test;
            double actual = test->Add(1.0, 2.0);
            double expected = 3.0;

            Assert::AreEqual(expected, actual, 0.0001);
        }

	public:
        TrivialCalculator * test;

    };

}