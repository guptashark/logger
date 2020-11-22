#include <iostream>
#include <fstream>

#include "logger.hpp"

int logger_test_02(void);

int main(void) {

	std::cout << "Logger Tests" << std::endl;

	logger_test_02();

	logger lg ( "tests/actual/logger_test_01_actual.txt");

	lg.println("Logger initialized");
	lg.set_fn_name("main");
	lg.trace_fn_begin();
	lg.trace_fn_end();

	return 0;
}

int logger_test_02(void) {

	logger lg ( "tests/actual/logger_test_02_actual.txt");

	// emulate calling foo, and foo calls bar.
	// bar exits, then foo calls baz.
	lg.set_fn_name("foo");
	lg.trace_fn_begin();

	lg.set_fn_name("bar");
	lg.trace_fn_begin();
	lg.trace_fn_end();

	lg.set_fn_name("baz");
	lg.trace_fn_begin();
	lg.trace_fn_end();

	lg.trace_fn_end();

	return 0;
}
