#include <iostream>
#include <fstream>

#include "logger.hpp"

int logger_test_01(void);

int main(void) {

	std::cout << "Logger Tests" << std::endl;

	logger::set_output_file("tests/actual/logger_test_01_actual.txt");

	logger_test_01();

	return 0;
}

int logger_test_01(void) {

	logger lg;

	// emulate calling foo, and foo calls bar, all in file: file_01
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
