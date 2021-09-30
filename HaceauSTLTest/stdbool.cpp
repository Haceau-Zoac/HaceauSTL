#include "pch.h"
#include "CppUnitTest.h"
#include "../HaceauSTL/stdbool.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HaceauSTLTest
{
	TEST_CLASS(StdBoolTest)
	{
	public:
		
		TEST_METHOD(__bool_true_false_are_defined_ShouldBe1)
		{
			Assert::AreEqual(__bool_true_false_are_defined, 1);
		}
	};
}
