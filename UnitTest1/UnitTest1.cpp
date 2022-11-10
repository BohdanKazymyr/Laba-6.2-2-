#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 6.2(2)/Laba 6.2(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 21;
			int i = 0;
			int a[size];
			int Low = 15;
			int High = 85;
			Create(a, size, Low, High, i);
			Print(a, size, i);
			Sum(a, size, i);
		}
	};
}
