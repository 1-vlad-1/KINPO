#include "pch.h"
#include "CppUnitTest.h"
#include "../kinpoNew/Header.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testcheck
{
	TEST_CLASS(Testcheck)
	{
	public:
		
		TEST_METHOD(string_with_numbers)
		{
			char str[100] = " 1 2 4 5 53 ";

			Assert::AreEqual(true, check(str));
		}

		TEST_METHOD(string_with_an_extra_character)
		{
			char str[100] = " 1 2 4 5 $ ";

			Assert::AreEqual(false, check(str));
		}

		TEST_METHOD(empty_string)
		{
			char str[100] = "";

			Assert::AreEqual(true, check(str));
		}

		TEST_METHOD(large_numbers)
		{
			char str[100] = "124512 51325241 ";

			Assert::AreEqual(true, check(str));
		}
	};
}
