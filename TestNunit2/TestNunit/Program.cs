using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using NUnitLite;

namespace TestNunit
{
    class Program
    {
        static void Main(string[] args)
        {
            new AutoRun().Execute(args);
            Console.ReadKey();
        }
    }
}
