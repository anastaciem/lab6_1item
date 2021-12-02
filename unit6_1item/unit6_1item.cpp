#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit61item
{
	TEST_CLASS(unit61item)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int i = 2;
			int p = i % 2;
			Assert::AreEqual(p, 0);
		}
	};
}
