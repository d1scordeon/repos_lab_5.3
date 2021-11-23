#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\pr_5.3\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double tmp;
			tmp = z(0);
			Assert::AreEqual(1., tmp);
		}
	};
}
