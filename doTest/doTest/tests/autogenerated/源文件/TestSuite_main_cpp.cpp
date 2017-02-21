#include "cpptest.h"

CPPTEST_CONTEXT("doTest/doTest/源文件/main.cpp");
CPPTEST_TEST_SUITE_INCLUDED_TO("doTest/doTest/源文件/main.cpp");

class TestSuite_main_cpp_50199427 : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(TestSuite_main_cpp_50199427);
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
        CPPTEST_TEST(test_main_1);
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
        void test_main_1();
};

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_main_cpp_50199427);

void TestSuite_main_cpp_50199427::setUp()
{
}

void TestSuite_main_cpp_50199427::tearDown()
{
}

/* CPPTEST_TEST_CASE_BEGIN test_add_1 */
/* CPPTEST_TEST_CASE_CONTEXT int CTest::add(int, int) */
void TestSuite_main_cpp_50199427::test_add_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CTest _cpptest_TestObject ;
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
/* CPPTEST_TEST_CASE_CONTEXT int CTest::add(int, int) */
void TestSuite_main_cpp_50199427::test_add_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CTest _cpptest_TestObject ;
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
/* CPPTEST_TEST_CASE_CONTEXT int CTest::add(int, int) */
void TestSuite_main_cpp_50199427::test_add_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CTest _cpptest_TestObject ;
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
/* CPPTEST_TEST_CASE_CONTEXT int CTest::add(int, int) */
void TestSuite_main_cpp_50199427::test_add_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CTest _cpptest_TestObject ;
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
/* CPPTEST_TEST_CASE_CONTEXT int CTest::add(int, int) */
void TestSuite_main_cpp_50199427::test_add_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CTest _cpptest_TestObject ;
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
/* CPPTEST_TEST_CASE_CONTEXT int CTest::add(int, int) */
void TestSuite_main_cpp_50199427::test_add_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CTest _cpptest_TestObject ;
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
/* CPPTEST_TEST_CASE_CONTEXT int CTest::add(int, int) */
void TestSuite_main_cpp_50199427::test_add_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CTest _cpptest_TestObject ;
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
/* CPPTEST_TEST_CASE_CONTEXT int CTest::add(int, int) */
void TestSuite_main_cpp_50199427::test_add_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CTest _cpptest_TestObject ;
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
/* CPPTEST_TEST_CASE_CONTEXT int CTest::add(int, int) */
void TestSuite_main_cpp_50199427::test_add_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CTest _cpptest_TestObject ;
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
/* CPPTEST_TEST_CASE_CONTEXT int CTest::add(int, int) */
void TestSuite_main_cpp_50199427::test_add_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::CTest _cpptest_TestObject ;
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

/* CPPTEST_TEST_CASE_BEGIN test_main_1 */
/* CPPTEST_TEST_CASE_CONTEXT void main(void) */
void TestSuite_main_cpp_50199427::test_main_1()
{
    /* Pre-condition initialization */
    /* Tested function call */
    ::main();
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_main_1 */
