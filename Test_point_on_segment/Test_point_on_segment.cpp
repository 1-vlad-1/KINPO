#include "pch.h"
#include "CppUnitTest.h"
#include "../kinpoNew/Header.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testpointonsegment
{
	TEST_CLASS(Testpointonsegment)
	{
	public:
		
		TEST_METHOD(point_lies_on_segment)
		{
			int x1 = 1;
			int y1 = 1;
			int x2 = 5;
			int y2 = 5;
			int x = 3;
			int y = 3;
			Assert::AreEqual(true, point_on_segment(x1, y1, x2, y2, x, y));
		}

		TEST_METHOD(point_not_lies_on_segment)
		{
			int x1 = 1;
			int y1 = 1;
			int x2 = 5;
			int y2 = 5;
			int x = 7;
			int y = 2;
			Assert::AreEqual(false, point_on_segment(x1, y1, x2, y2, x, y));
		}

		TEST_METHOD(point_lies_on_the_continuation_of_the_segment)
		{
			int x1 = 1;
			int y1 = 1;
			int x2 = 5;
			int y2 = 5;
			int x = 7;
			int y = 7;
			Assert::AreEqual(false, point_on_segment(x1, y1, x2, y2, x, y));
		}

		TEST_METHOD(point_coincides_with_the_beginning_of_the_segment)
		{
			int x1 = 1;
			int y1 = 1;
			int x2 = 5;
			int y2 = 5;
			int x = 1;
			int y = 1;
			Assert::AreEqual(true, point_on_segment(x1, y1, x2, y2, x, y));
		}

		TEST_METHOD(point_coincides_with_the_end_of_the_segment)
		{
			int x1 = 1;
			int y1 = 1;
			int x2 = 5;
			int y2 = 5;
			int x = 5;
			int y = 5;
			Assert::AreEqual(true, point_on_segment(x1, y1, x2, y2, x, y));
		}
	};
}
