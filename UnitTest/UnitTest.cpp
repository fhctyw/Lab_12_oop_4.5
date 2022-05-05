#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_12_oop_4.5\Norm.cpp"
#include "..\Lab_12_oop_4.5\Complex.cpp"
#include "..\Lab_12_oop_4.5\Vector3D.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Complex* complex = new Complex(3, 4);
			Assert::AreEqual((int)complex->norm(), 25);
		}
	};
}
