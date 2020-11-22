#include <iostream>
#include <fstream>

#include "logger.hpp"

int main(void) {

	std::cout << "Logger Tests" << std::endl;

	logger lg ( "tests/logger_test_01_actual.txt");

	lg.println("Logger initialized");
	lg.trace_fn_begin("main");
	lg.trace_fn_end("main");

	return 0;
}
