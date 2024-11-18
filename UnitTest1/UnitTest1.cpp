#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			extern bool containsSQorQS(const char* fname);
			const char* testFile = "D:\\vs project\\11.1\\Contains.txt";
			Assert::IsTrue(containsSQorQS(testFile));
		}
	};
}
