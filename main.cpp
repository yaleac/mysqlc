#include <iostream>
#include "mysqlc.hpp"
int main(int argc, char const *argv[])
{
	std::cout << "hello world." << std::endl;
	mysqlc *c = new mysqlc() ;
	return 0;
}
