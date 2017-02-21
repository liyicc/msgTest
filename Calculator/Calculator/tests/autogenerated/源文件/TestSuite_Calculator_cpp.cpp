#include "cpptest.h"

CPPTEST_CONTEXT("Calculator/Calculator/源文件/Calculator.cpp");
CPPTEST_TEST_SUITE_INCLUDED_TO("Calculator/Calculator/源文件/Calculator.cpp");

class TestSuite_Calculator_cpp_a3ed44a1 : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(TestSuite_Calculator_cpp_a3ed44a1);
        CPPTEST_TEST(test_add_1);
        CPPTEST_TEST(test_add_10);
        CPPTEST_TEST(test_add_2);
        CPPTEST_TEST(test_add_3);
        CPPTEST_TEST(test_add_4);
        CPPTEST_TEST(test_add_5);
        CPPTEST_TEST(test_add_6);
        CPPTEST_TEST(test_add_7);
        CPPTEST_TEST(test_add_8);
        CPPTEST_TEST(test_add_9);
        CPPTEST_TEST(test_divide_1);
        CPPTEST_TEST(test_divide_10);
        CPPTEST_TEST(test_divide_2);
        CPPTEST_TEST(test_divide_3);
        CPPTEST_TEST(test_divide_4);
        CPPTEST_TEST(test_divide_5);
        CPPTEST_TEST(test_divide_6);
        CPPTEST_TEST(test_divide_7);
        CPPTEST_TEST(test_divide_8);
        CPPTEST_TEST(test_divide_9);
        CPPTEST_TEST(test_minus_1);
        CPPTEST_TEST(test_minus_10);
        CPPTEST_TEST(test_minus_2);
        CPPTEST_TEST(test_minus_3);
        CPPTEST_TEST(test_minus_4);
        CPPTEST_TEST(test_minus_5);
        CPPTEST_TEST(test_minus_6);
        CPPTEST_TEST(test_minus_7);
        CPPTEST_TEST(test_minus_8);
        CPPTEST_TEST(test_minus_9);
        CPPTEST_TEST(test_multiply_1);
        CPPTEST_TEST(test_multiply_10);
        CPPTEST_TEST(test_multiply_2);
        CPPTEST_TEST(test_multiply_3);
        CPPTEST_TEST(test_multiply_4);
        CPPTEST_TEST(test_multiply_5);
        CPPTEST_TEST(test_multiply_6);
        CPPTEST_TEST(test_multiply_7);
        CPPTEST_TEST(test_multiply_8);
        CPPTEST_TEST(test_multiply_9);
        CPPTEST_TEST(test_wmain_1);
        CPPTEST_TEST(test_wmain_10);
        CPPTEST_TEST(test_wmain_2);
        CPPTEST_TEST(test_wmain_3);
        CPPTEST_TEST(test_wmain_4);
        CPPTEST_TEST(test_wmain_5);
        CPPTEST_TEST(test_wmain_6);
        CPPTEST_TEST(test_wmain_7);
        CPPTEST_TEST(test_wmain_8);
        CPPTEST_TEST(test_wmain_9);
        CPPTEST_TEST_SUITE_END();
        
        void setUp();
        void tearDown();

        void test_add_1();
        void test_add_10();
        void test_add_2();
        void test_add_3();
        void test_add_4();
        void test_add_5();
        void test_add_6();
        void test_add_7();
        void test_add_8();
        void test_add_9();
        void test_divide_1();
        void test_divide_10();
        void test_divide_2();
        void test_divide_3();
        void test_divide_4();
        void test_divide_5();
        void test_divide_6();
        void test_divide_7();
        void test_divide_8();
        void test_divide_9();
        void test_minus_1();
        void test_minus_10();
        void test_minus_2();
        void test_minus_3();
        void test_minus_4();
        void test_minus_5();
        void test_minus_6();
        void test_minus_7();
        void test_minus_8();
        void test_minus_9();
        void test_multiply_1();
        void test_multiply_10();
        void test_multiply_2();
        void test_multiply_3();
        void test_multiply_4();
        void test_multiply_5();
        void test_multiply_6();
        void test_multiply_7();
        void test_multiply_8();
        void test_multiply_9();
        void test_wmain_1();
        void test_wmain_10();
        void test_wmain_2();
        void test_wmain_3();
        void test_wmain_4();
        void test_wmain_5();
        void test_wmain_6();
        void test_wmain_7();
        void test_wmain_8();
        void test_wmain_9();
};

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_Calculator_cpp_a3ed44a1);

void TestSuite_Calculator_cpp_a3ed44a1::setUp()
{
}

void TestSuite_Calculator_cpp_a3ed44a1::tearDown()
{
}

/* CPPTEST_TEST_CASE_BEGIN test_add_1 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::add(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_add_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    int _return  = _cpptest_TestObject.add(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_add_1 */

/* CPPTEST_TEST_CASE_BEGIN test_add_10 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::add(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_add_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = -1;
    /* Initializing argument 2 (y) */ 
    int _y  = 0;
    /* Tested function call */
    int _return  = _cpptest_TestObject.add(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_add_10 */

/* CPPTEST_TEST_CASE_BEGIN test_add_2 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::add(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_add_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    int _return  = _cpptest_TestObject.add(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_add_2 */

/* CPPTEST_TEST_CASE_BEGIN test_add_3 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::add(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_add_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = 1;
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    int _return  = _cpptest_TestObject.add(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_add_3 */

/* CPPTEST_TEST_CASE_BEGIN test_add_4 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::add(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_add_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMinInt();
    /* Tested function call */
    int _return  = _cpptest_TestObject.add(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_add_4 */

/* CPPTEST_TEST_CASE_BEGIN test_add_5 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::add(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_add_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = -1;
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMinInt();
    /* Tested function call */
    int _return  = _cpptest_TestObject.add(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_add_5 */

/* CPPTEST_TEST_CASE_BEGIN test_add_6 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::add(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_add_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (y) */ 
    int _y  = -1;
    /* Tested function call */
    int _return  = _cpptest_TestObject.add(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_add_6 */

/* CPPTEST_TEST_CASE_BEGIN test_add_7 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::add(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_add_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = 1;
    /* Initializing argument 2 (y) */ 
    int _y  = -1;
    /* Tested function call */
    int _return  = _cpptest_TestObject.add(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_add_7 */

/* CPPTEST_TEST_CASE_BEGIN test_add_8 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::add(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_add_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (y) */ 
    int _y  = 1;
    /* Tested function call */
    int _return  = _cpptest_TestObject.add(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_add_8 */

/* CPPTEST_TEST_CASE_BEGIN test_add_9 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::add(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_add_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = 0;
    /* Initializing argument 2 (y) */ 
    int _y  = 1;
    /* Tested function call */
    int _return  = _cpptest_TestObject.add(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_add_9 */

/* CPPTEST_TEST_CASE_BEGIN test_divide_1 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::divide(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_divide_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    int _return  = _cpptest_TestObject.divide(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_divide_1 */

/* CPPTEST_TEST_CASE_BEGIN test_divide_10 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::divide(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_divide_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = -1;
    /* Initializing argument 2 (y) */ 
    int _y  = 0;
    /* Tested function call */
    int _return  = _cpptest_TestObject.divide(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_divide_10 */

/* CPPTEST_TEST_CASE_BEGIN test_divide_2 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::divide(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_divide_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    int _return  = _cpptest_TestObject.divide(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_divide_2 */

/* CPPTEST_TEST_CASE_BEGIN test_divide_3 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::divide(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_divide_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = 1;
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    int _return  = _cpptest_TestObject.divide(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_divide_3 */

/* CPPTEST_TEST_CASE_BEGIN test_divide_4 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::divide(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_divide_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMinInt();
    /* Tested function call */
    int _return  = _cpptest_TestObject.divide(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_divide_4 */

/* CPPTEST_TEST_CASE_BEGIN test_divide_5 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::divide(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_divide_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = -1;
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMinInt();
    /* Tested function call */
    int _return  = _cpptest_TestObject.divide(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_divide_5 */

/* CPPTEST_TEST_CASE_BEGIN test_divide_6 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::divide(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_divide_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (y) */ 
    int _y  = -1;
    /* Tested function call */
    int _return  = _cpptest_TestObject.divide(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_divide_6 */

/* CPPTEST_TEST_CASE_BEGIN test_divide_7 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::divide(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_divide_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = 1;
    /* Initializing argument 2 (y) */ 
    int _y  = -1;
    /* Tested function call */
    int _return  = _cpptest_TestObject.divide(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_divide_7 */

/* CPPTEST_TEST_CASE_BEGIN test_divide_8 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::divide(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_divide_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (y) */ 
    int _y  = 1;
    /* Tested function call */
    int _return  = _cpptest_TestObject.divide(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_divide_8 */

/* CPPTEST_TEST_CASE_BEGIN test_divide_9 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::divide(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_divide_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = 0;
    /* Initializing argument 2 (y) */ 
    int _y  = 1;
    /* Tested function call */
    int _return  = _cpptest_TestObject.divide(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_divide_9 */

/* CPPTEST_TEST_CASE_BEGIN test_minus_1 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::minus(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_minus_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    int _return  = _cpptest_TestObject.minus(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_minus_1 */

/* CPPTEST_TEST_CASE_BEGIN test_minus_10 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::minus(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_minus_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = -1;
    /* Initializing argument 2 (y) */ 
    int _y  = 0;
    /* Tested function call */
    int _return  = _cpptest_TestObject.minus(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_minus_10 */

/* CPPTEST_TEST_CASE_BEGIN test_minus_2 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::minus(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_minus_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    int _return  = _cpptest_TestObject.minus(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_minus_2 */

/* CPPTEST_TEST_CASE_BEGIN test_minus_3 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::minus(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_minus_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = 1;
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    int _return  = _cpptest_TestObject.minus(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_minus_3 */

/* CPPTEST_TEST_CASE_BEGIN test_minus_4 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::minus(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_minus_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMinInt();
    /* Tested function call */
    int _return  = _cpptest_TestObject.minus(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_minus_4 */

/* CPPTEST_TEST_CASE_BEGIN test_minus_5 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::minus(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_minus_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = -1;
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMinInt();
    /* Tested function call */
    int _return  = _cpptest_TestObject.minus(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_minus_5 */

/* CPPTEST_TEST_CASE_BEGIN test_minus_6 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::minus(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_minus_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (y) */ 
    int _y  = -1;
    /* Tested function call */
    int _return  = _cpptest_TestObject.minus(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_minus_6 */

/* CPPTEST_TEST_CASE_BEGIN test_minus_7 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::minus(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_minus_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = 1;
    /* Initializing argument 2 (y) */ 
    int _y  = -1;
    /* Tested function call */
    int _return  = _cpptest_TestObject.minus(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_minus_7 */

/* CPPTEST_TEST_CASE_BEGIN test_minus_8 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::minus(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_minus_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (y) */ 
    int _y  = 1;
    /* Tested function call */
    int _return  = _cpptest_TestObject.minus(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_minus_8 */

/* CPPTEST_TEST_CASE_BEGIN test_minus_9 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::minus(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_minus_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = 0;
    /* Initializing argument 2 (y) */ 
    int _y  = 1;
    /* Tested function call */
    int _return  = _cpptest_TestObject.minus(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_minus_9 */

/* CPPTEST_TEST_CASE_BEGIN test_multiply_1 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::multiply(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_multiply_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    int _return  = _cpptest_TestObject.multiply(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_multiply_1 */

/* CPPTEST_TEST_CASE_BEGIN test_multiply_10 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::multiply(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_multiply_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = -1;
    /* Initializing argument 2 (y) */ 
    int _y  = 0;
    /* Tested function call */
    int _return  = _cpptest_TestObject.multiply(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_multiply_10 */

/* CPPTEST_TEST_CASE_BEGIN test_multiply_2 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::multiply(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_multiply_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    int _return  = _cpptest_TestObject.multiply(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_multiply_2 */

/* CPPTEST_TEST_CASE_BEGIN test_multiply_3 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::multiply(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_multiply_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = 1;
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    int _return  = _cpptest_TestObject.multiply(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_multiply_3 */

/* CPPTEST_TEST_CASE_BEGIN test_multiply_4 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::multiply(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_multiply_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMinInt();
    /* Tested function call */
    int _return  = _cpptest_TestObject.multiply(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_multiply_4 */

/* CPPTEST_TEST_CASE_BEGIN test_multiply_5 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::multiply(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_multiply_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = -1;
    /* Initializing argument 2 (y) */ 
    int _y  = cpptestLimitsGetMinInt();
    /* Tested function call */
    int _return  = _cpptest_TestObject.multiply(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_multiply_5 */

/* CPPTEST_TEST_CASE_BEGIN test_multiply_6 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::multiply(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_multiply_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (y) */ 
    int _y  = -1;
    /* Tested function call */
    int _return  = _cpptest_TestObject.multiply(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_multiply_6 */

/* CPPTEST_TEST_CASE_BEGIN test_multiply_7 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::multiply(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_multiply_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = 1;
    /* Initializing argument 2 (y) */ 
    int _y  = -1;
    /* Tested function call */
    int _return  = _cpptest_TestObject.multiply(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_multiply_7 */

/* CPPTEST_TEST_CASE_BEGIN test_multiply_8 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::multiply(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_multiply_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (y) */ 
    int _y  = 1;
    /* Tested function call */
    int _return  = _cpptest_TestObject.multiply(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_multiply_8 */

/* CPPTEST_TEST_CASE_BEGIN test_multiply_9 */
/* CPPTEST_TEST_CASE_CONTEXT int CalculatorProject::Calculator::multiply(int, int) */
void TestSuite_Calculator_cpp_a3ed44a1::test_multiply_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CalculatorProject::Calculator _cpptest_TestObject ;
    /* Initializing argument 1 (x) */ 
    int _x  = 0;
    /* Initializing argument 2 (y) */ 
    int _y  = 1;
    /* Tested function call */
    int _return  = _cpptest_TestObject.multiply(_x, _y);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
}
/* CPPTEST_TEST_CASE_END test_multiply_9 */

/* CPPTEST_TEST_CASE_BEGIN test_wmain_1 */
/* CPPTEST_TEST_CASE_CONTEXT int wmain(int, _TCHAR **) */
void TestSuite_Calculator_cpp_a3ed44a1::test_wmain_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = 0;
    /* Initializing argument 2 (argv) */ 
    ::_TCHAR ** _argv  = 0 ;
    /* Tested function call */
    int _return  = ::wmain(_argc, _argv);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_PTR("_TCHAR ** _argv ", ( _argv ));
}
/* CPPTEST_TEST_CASE_END test_wmain_1 */

/* CPPTEST_TEST_CASE_BEGIN test_wmain_10 */
/* CPPTEST_TEST_CASE_CONTEXT int wmain(int, _TCHAR **) */
void TestSuite_Calculator_cpp_a3ed44a1::test_wmain_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (argv) */ 
    ::_TCHAR _argv_0_1  = 0u;
    ::_TCHAR * _argv_0  = & _argv_0_1;
    ::_TCHAR ** _argv  = & _argv_0;
    /* Tested function call */
    int _return  = ::wmain(_argc, _argv);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_PTR("_TCHAR ** _argv ", ( _argv ));
}
/* CPPTEST_TEST_CASE_END test_wmain_10 */

/* CPPTEST_TEST_CASE_BEGIN test_wmain_2 */
/* CPPTEST_TEST_CASE_CONTEXT int wmain(int, _TCHAR **) */
void TestSuite_Calculator_cpp_a3ed44a1::test_wmain_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (argv) */ 
    ::_TCHAR ** _argv  = 0 ;
    /* Tested function call */
    int _return  = ::wmain(_argc, _argv);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_PTR("_TCHAR ** _argv ", ( _argv ));
}
/* CPPTEST_TEST_CASE_END test_wmain_2 */

/* CPPTEST_TEST_CASE_BEGIN test_wmain_3 */
/* CPPTEST_TEST_CASE_CONTEXT int wmain(int, _TCHAR **) */
void TestSuite_Calculator_cpp_a3ed44a1::test_wmain_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = 1;
    /* Initializing argument 2 (argv) */ 
    ::_TCHAR ** _argv  = 0 ;
    /* Tested function call */
    int _return  = ::wmain(_argc, _argv);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_PTR("_TCHAR ** _argv ", ( _argv ));
}
/* CPPTEST_TEST_CASE_END test_wmain_3 */

/* CPPTEST_TEST_CASE_BEGIN test_wmain_4 */
/* CPPTEST_TEST_CASE_CONTEXT int wmain(int, _TCHAR **) */
void TestSuite_Calculator_cpp_a3ed44a1::test_wmain_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (argv) */ 
    ::_TCHAR * _argv_0  = 0 ;
    ::_TCHAR ** _argv  = & _argv_0;
    /* Tested function call */
    int _return  = ::wmain(_argc, _argv);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_PTR("_TCHAR ** _argv ", ( _argv ));
}
/* CPPTEST_TEST_CASE_END test_wmain_4 */

/* CPPTEST_TEST_CASE_BEGIN test_wmain_5 */
/* CPPTEST_TEST_CASE_CONTEXT int wmain(int, _TCHAR **) */
void TestSuite_Calculator_cpp_a3ed44a1::test_wmain_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = 0;
    /* Initializing argument 2 (argv) */ 
    ::_TCHAR _argv_0_1  = 0;
    ::_TCHAR * _argv_0  = & _argv_0_1;
    ::_TCHAR ** _argv  = & _argv_0;
    /* Tested function call */
    int _return  = ::wmain(_argc, _argv);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_PTR("_TCHAR ** _argv ", ( _argv ));
}
/* CPPTEST_TEST_CASE_END test_wmain_5 */

/* CPPTEST_TEST_CASE_BEGIN test_wmain_6 */
/* CPPTEST_TEST_CASE_CONTEXT int wmain(int, _TCHAR **) */
void TestSuite_Calculator_cpp_a3ed44a1::test_wmain_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = 1;
    /* Initializing argument 2 (argv) */ 
    ::_TCHAR _argv_0_1  = 0;
    ::_TCHAR * _argv_0  = & _argv_0_1;
    ::_TCHAR ** _argv  = & _argv_0;
    /* Tested function call */
    int _return  = ::wmain(_argc, _argv);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_PTR("_TCHAR ** _argv ", ( _argv ));
}
/* CPPTEST_TEST_CASE_END test_wmain_6 */

/* CPPTEST_TEST_CASE_BEGIN test_wmain_7 */
/* CPPTEST_TEST_CASE_CONTEXT int wmain(int, _TCHAR **) */
void TestSuite_Calculator_cpp_a3ed44a1::test_wmain_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (argv) */ 
    ::_TCHAR _argv_0_1  = cpptestLimitsGetMaxUnsignedShort();
    ::_TCHAR * _argv_0  = & _argv_0_1;
    ::_TCHAR ** _argv  = & _argv_0;
    /* Tested function call */
    int _return  = ::wmain(_argc, _argv);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_PTR("_TCHAR ** _argv ", ( _argv ));
}
/* CPPTEST_TEST_CASE_END test_wmain_7 */

/* CPPTEST_TEST_CASE_BEGIN test_wmain_8 */
/* CPPTEST_TEST_CASE_CONTEXT int wmain(int, _TCHAR **) */
void TestSuite_Calculator_cpp_a3ed44a1::test_wmain_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = 0;
    /* Initializing argument 2 (argv) */ 
    ::_TCHAR _argv_0_1  = 1u;
    ::_TCHAR * _argv_0  = & _argv_0_1;
    ::_TCHAR ** _argv  = & _argv_0;
    /* Tested function call */
    int _return  = ::wmain(_argc, _argv);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_PTR("_TCHAR ** _argv ", ( _argv ));
}
/* CPPTEST_TEST_CASE_END test_wmain_8 */

/* CPPTEST_TEST_CASE_BEGIN test_wmain_9 */
/* CPPTEST_TEST_CASE_CONTEXT int wmain(int, _TCHAR **) */
void TestSuite_Calculator_cpp_a3ed44a1::test_wmain_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = 1;
    /* Initializing argument 2 (argv) */ 
    ::_TCHAR _argv_0_1  = 1u;
    ::_TCHAR * _argv_0  = & _argv_0_1;
    ::_TCHAR ** _argv  = & _argv_0;
    /* Tested function call */
    int _return  = ::wmain(_argc, _argv);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_PTR("_TCHAR ** _argv ", ( _argv ));
}
/* CPPTEST_TEST_CASE_END test_wmain_9 */
