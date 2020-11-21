#include <iostream>

#include "logger.hpp"

logger::logger(void) {}

void logger::println(const std::string msg) {
	std::cout << msg << std::endl;
}
