#include <iostream>
/*
int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}

int func(int a = 10, int b = 20)
{
	return a + b;
}

int main()
{
	func();
	func(5);
	func(5, 10);

	return 0;
}

int Adder(int num1 = 1, int num2 = 2);

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}

int Adder(int num1, int num2)
{
	return num1 + num2;
}
*/
int BoxVolume(int length, int width=1, int height=1);

int main(void)
{
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
	// std::cout << "[D, D, D] : " << BoxVolume() << std::endl;
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length*width*height;
}
