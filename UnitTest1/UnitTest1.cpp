#include "pch.h"
#include "CppUnitTest.h"
#include "..//2Slab1.2/Student.h"
#include "..//2Slab1.2/Student.cpp"
#include "..//2Slab1.2/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		

            TEST_METHOD(TestCountUnsatisfactoryGrades)
            {
               
                Student student;
                student.Init("Petro", 123, 70, 51, 80); 

                
                int unsatisfactoryCount = student.countUnsatisfactoryGrades();

                Assert::AreEqual(1, unsatisfactoryCount);
            }
	};
}
