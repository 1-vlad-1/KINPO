#include "pch.h"
#include "CppUnitTest.h"
#include "../kinpoNew/Header.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testintersect
{
	TEST_CLASS(Testintersect)
	{
	public:
		
		TEST_METHOD(the_segments_intersect)
		{
			int x1 = 2;
			int y1 = 1;
			int x2 = 2;
			int y2 = 5;

			int x3 = 1;
			int y3 = 3;
			int x4 = 5;
			int y4 = 3;

			Assert::AreEqual(true, intersect(x1, y1, x2, y2, x3, y3, x4, y4));
		}

		TEST_METHOD(the_segments_not_intersect)
		{
			int x1 = 1;
			int y1 = 1;
			int x2 = 1;
			int y2 = 4;

			int x3 = 3;
			int y3 = 6;
			int x4 = 5;
			int y4 = 4;

			Assert::AreEqual(false, intersect(x1, y1, x2, y2, x3, y3, x4, y4));
		}

		TEST_METHOD(only_the_continuation_of_the_segment_intersects)
		{
			int x1 = 7;
			int y1 = 1;
			int x2 = 7;
			int y2 = 5;

			int x3 = 1;
			int y3 = 3;
			int x4 = 5;
			int y4 = 3;

			Assert::AreEqual(false, intersect(x1, y1, x2, y2, x3, y3, x4, y4));
		}

		TEST_METHOD(the_segments_intersect_at_the_vertex_of_one_of_the_segments)
		{
			int x1 = 5;
			int y1 = 1;
			int x2 = 5;
			int y2 = 5;

			int x3 = 1;
			int y3 = 3;
			int x4 = 5;
			int y4 = 3;

			Assert::AreEqual(true, intersect(x1, y1, x2, y2, x3, y3, x4, y4));
		}

		TEST_METHOD(the_segments_are_parallel)
		{
			int x1 = 2;
			int y1 = 1;
			int x2 = 2;
			int y2 = 5;

			int x3 = 1;
			int y3 = 3;
			int x4 = 1;
			int y4 = 5;

			Assert::AreEqual(false, intersect(x1, y1, x2, y2, x3, y3, x4, y4));
		}
		
	};
}
