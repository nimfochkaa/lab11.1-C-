#include "pch.h"
#include "CppUnitTest.h"
#include "../11.1/11.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::fstream testFile("test_empty.txt", std::ios::out);
			testFile.close();

			std::fstream f;
			f.open("test_empty.txt", std::ios::in);
			Assert::IsFalse(ContainsPair(f));
			f.close();

			std::remove("test_empty.txt");
		}
	};
}
