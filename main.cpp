//#includes are ALWAYS at top of file
#include <iostream>	//iostream is where std::cout and std::endl are defined
#include <string.h>
#include "myfunc.h"

std::string func()
{
	return "hello world";
}

int main()
{
	std::string a = func();
	std::cout << a << std::endl;
	return 0;
}
