#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include "../8.1(string)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestCount)
		{
			string input = "A+B-C+D+E-F";
			int expected_count = 0;

			int actual_count = Count(input);

			Assert::AreEqual(expected_count, actual_count);
		}
	};
}
