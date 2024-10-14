#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.3 pek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			int b[] = { -2, -1, 0, 1, 2, 3 };

			int sum = SumEven(b, 6);
			Assert::AreEqual(sum, 0);

		}
	};
}
