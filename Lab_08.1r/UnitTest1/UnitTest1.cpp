#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08.1r/Lab_08.1r.cpp"
#define _CRT_SECURE_NO_WARNINGS

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char str[101] = "whilewhile";  
			int i = 1;
			int len = 10;
			int count = Count(str,i,len);       
			Assert::AreEqual(count, 2);    
		}
	};
}
