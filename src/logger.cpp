#include <iostream>

#include "logger.hpp"

logger::logger(void) {}

void logger::println(const std::string msg) {
	std::cout << msg << std::endl;
}

void logger::trace_fn_begin(std::string fn_name) {
	std::cout << "[TRACE]";
	std::cout << "[" << fn_name << "]";
	std::cout << "[BEGIN]" << std::endl;
}

void logger::trace_fn_end(std::string fn_name) {
	std::cout << "[TRACE]";
	std::cout << "[" << fn_name << "]";
	std::cout << "[END]" << std::endl;
}
