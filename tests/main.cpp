#include <iostream>

#include "logger.hpp"

int main(void) {

	std::cout << "Logger Tests" << std::endl;

	logger lg;

	lg.println("Logger initialized");

	return 0;
}
