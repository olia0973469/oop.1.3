#include "pch.h"
#include "CppUnitTest.h"
#include "../oop.1.3/Money.h"
#include "../oop.1.3/Money.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money m;
			m.Init(10, 50);
			Assert::AreEqual(10L, m.GetHr());
			Assert::AreEqual(50L, m.GetKop());
		}
	};
}
