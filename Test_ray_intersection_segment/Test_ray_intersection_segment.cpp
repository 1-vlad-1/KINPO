#include "pch.h"
#include "CppUnitTest.h"
#include "../kinpoNew/Header.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testrayintersectionsegment
{
	TEST_CLASS(Testrayintersectionsegment)
	{
	public:
		
		TEST_METHOD(the_ray_intersects_the_segment)
		{
			double x1 = 4;
			double y1 = 6;
			double x2 = 8;
			double y2 = 6;
			
			double x = 2;
			double y = 2;

			double k = 1.33;
			
			double b = -0.66;

			

			Assert::AreEqual(true, ray_intersection_segment(x1, y1, x2, y2, k, b, y, x));
		}

		TEST_METHOD(the_ray_not_intersects_the_segment)
		{
			double x1 = 4;
			double y1 = 6;
			double x2 = 8;
			double y2 = 6;

			double x = 2;
			double y = 2;

			double k = -2;

			double b = 6;



			Assert::AreEqual(false, ray_intersection_segment(x1, y1, x2, y2, k, b, y, x));
		}

		TEST_METHOD(segment_lies_below_the_desired_point)
		{
			double x1 = 0;
			double y1 = 1;
			double x2 = 8;
			double y2 = 1;

			double x = 2;
			double y = 2;

			double k = 1;

			double b = 0;



			Assert::AreEqual(false, ray_intersection_segment(x1, y1, x2, y2, k, b, y, x));
		}

		TEST_METHOD(ray_intersects_only_the_continuation_of_the_segment)
		{
			double x1 = 4;
			double y1 = 6;
			double x2 = 8;
			double y2 = 6;

			double x = 2;
			double y = 2;

			double k = 2.5;

			double b = -1;



			Assert::AreEqual(false, ray_intersection_segment(x1, y1, x2, y2, k, b, y, x));
		}
		
	};
}
