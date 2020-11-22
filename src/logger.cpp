#include <iostream>

#include "logger.hpp"

logger::logger(void) {
	output_log =  & std::cout;
}

logger::logger(std::string output_file) {
	output_log = new std::ofstream(output_file);
}

void logger::println(const std::string msg) {

	* output_log << msg << std::endl;
}


void logger::set_fn_name(const std::string fn_name) {
	fn_names_stack.push ( fn_name );
}

void logger::trace_fn_begin(void) {
	* output_log << "[TRACE]";
	* output_log << "[" << fn_names_stack.top() << "]";
	* output_log << "[BEGIN]" << std::endl;
}

void logger::trace_fn_end(void) {
	* output_log << "[TRACE]";
	* output_log << "[" << fn_names_stack.top() << "]";
	* output_log << "[END]" << std::endl;

	fn_names_stack.pop();
}
