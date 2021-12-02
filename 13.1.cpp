#include "pch.h"
#include "CppUnitTest.h"
#include "c:\users\marki\desktop\ап\yaryna visual studio\laba13.1\dod.cpp"
#include "c:\users\marki\desktop\ап\yaryna visual studio\laba13.1\dod.h"
#include "c:\users\marki\desktop\ап\yaryna visual studio\laba13.1\laba13.1.cpp"
#include "c:\users\marki\desktop\ап\yaryna visual studio\laba13.1\sum.cpp"
#include "c:\users\marki\desktop\ап\yaryna visual studio\laba13.1\sum.h"
#include "C:\Users\marki\Desktop\ап\Yaryna visual studio\laba13.1\var.cpp"
#include "c:\users\marki\desktop\ап\yaryna visual studio\laba13.1\var.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My131
{
	TEST_CLASS(My131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			n = 1;
			x= -1.;
			a = -x;
			
			nsDod::dod();

			Assert::IsTrue(a == 0);
		}
	};
}
