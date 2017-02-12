using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using NUnit.Framework;
using Calculator;


namespace TestNunit
{
    [TestFixture]
    class CalculatorTest
    {
        [Test]
        public void TestAdd()
        {
            Class1 cal = new Class1();
            int expected = 5;
            int actual = cal.Add(2, 3);
            Assert.AreEqual(expected, actual);
        }

        [Test]
        public void TestSub()
        {
            Class1 cal = new Class1();
            int expected = 2;
            int actual = cal.Sub(9, 7);
            Assert.AreEqual(expected, actual);
        }

        [Test]
        public void TestMul()
        {
            Class1 cal = new Class1();
            int expected = 24;
            int actual = cal.Mul(3, 8);
            Assert.AreEqual(expected, actual);
        }

        [Test]
        public void TestDiv()
        {
            Class1 cal = new Class1();
            int expected = 2;
            int actual = cal.Div(15, 5);
            Assert.AreEqual(expected, actual);
        }

    }
}
