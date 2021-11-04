#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.1r/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { -6, 0, 6, 12 };
			int S = Sum(A, 12);
			Assert::AreEqual(1361543359, S);

		}
	};
}
