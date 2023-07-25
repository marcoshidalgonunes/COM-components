#include "pch.h"
#include "CppUnitTest.h"
#include "..\CppCOMLibrary\BeepEmitter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppCOMLibraryTest
{
	TEST_CLASS(CppCOMLibraryTest)
	{
	public:
		
		TEST_METHOD(TestBeeped)
		{
			BOOL* retval = false;
			CBeepEmitter beepEmitter = CBeepEmitter();
			beepEmitter.get_Beeped(retval);

			Assert::IsTrue(retval);
		}
	};
}
