#include "pch.h"
#include "CppUnitTest.h"
#include "../HaceauSTL/stdalign.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HaceauSTLTest
{
	TEST_CLASS(StdAlignTest)
	{
	public:

		TEST_METHOD(__alignas_is_defined_ShouldBe1)
		{
			Assert::AreEqual(__alignas_is_defined, 1);
		}
	};
}
