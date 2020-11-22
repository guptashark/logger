#include <iostream>

#include "logger.hpp"

std::ostream * logger::output_log = & std::cout;

void logger::set_output_file(std::string output_file) {
	output_log = new std::ofstream(output_file);
}

logger::logger(std::string src_file): src_file(src_file) {}

void logger::println(const std::string msg) {
	* output_log << msg << std::endl;
}


void logger::set_fn_name(const std::string fn_name) {
	fn_names_stack.push ( fn_name );
}

void logger::trace_base(void) {
	* output_log << "[TRACE]";
	* output_log << "[" << src_file << "]";
	* output_log << "[" << fn_names_stack.top() << "]";
}

void logger::trace_fn_begin(void) {
	trace_base();
	* output_log << "[BEGIN]" << std::endl;
}

void logger::trace_println(std::string s) {
	trace_base();
	* output_log << " " << s;
	* output_log << std::endl;
}

void logger::trace_fn_end(void) {
	trace_base();
	* output_log << "[END]" << std::endl;

	fn_names_stack.pop();
}
