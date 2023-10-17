#include "pch.h"
#include "CppUnitTest.h"
#include "../5.0/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			c = h(1, 2);
			Assert::AreEqual(c, 1, 0.0001);
		}
	};
}
