#include <iostream>

#include "logger.hpp"

int main(void) {

	std::cout << "Logger Tests" << std::endl;

	logger lg;

	lg.println("Logger initialized");
	lg.trace_fn_begin("main");
	lg.trace_fn_end("main");

	return 0;
}
