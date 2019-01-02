#include <iostream>

using namespace std;

void recurse(int x, int y)
{
	if (y > 0)
	{
		x++;
		y--;
		std::cout << x << " " << y << std::endl;
		recurse(x, y);
		std::cout << x << " " << y << std::endl;
	}
}

//1. Execute the function with x = 5 and y = 3. Report the outcome.

int main()
{
	recurse(5, 3);
	return 0;
}
//Output after execution:
//6 2
//7 1
//8 0
//8 0
//8 0
//7 1
//6 2

//2. How is the output affected if x is a reference argument instead of a value argument?
//int main()
//{
	//int x = 5;
	//int y = 3;
	//recurse(x, y);
	//return 0;
//}
//int main()
//{
	//recurse(5, 3);
	//return 0;
//}

//The output is not affected either way. It remains the same.