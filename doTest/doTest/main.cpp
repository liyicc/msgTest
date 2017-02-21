#include <iostream>

class CTest
{
public:
	int add(int x, int y)
	{
		return x+y;
	}
};

void main()
{
	CTest obj;

	for (int i = 0; i < 100; ++i)
	{
		for (int j = 0; j < 100; ++j)
		{
			
			std::cout<<obj.add(i, j)<<std::endl;
		}
	}

	system("pause");
}