#include <iostream>

#include "logger.hpp"

static logger main_lg ("main.cpp");

int main(void) {

	main_lg.set_fn_name("main");
	main_lg.trace_fn_begin();

	main_lg.trace_printf("Logger Demo Application");

	main_lg.trace_fn_end();

	return 0;
}
