#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1/5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethodF)
		{
			double expected = 1.0;
			double actual = f(0.0);
			Assert::AreEqual(expected, actual, 0.00001);
		}
	};
}
