//#includes are ALWAYS at top of file
#include <iostream>	//iostream is where std::cout and std::endl are defined
#include "myfunc.h"

std::string func()
{
	return "hello";
}

int main()
{
	std::cout<<func()<<std::endl;
	return 0;
}
