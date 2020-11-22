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

void logger::trace_fn_begin(std::string fn_name) {
	* output_log << "[TRACE]";
	* output_log << "[" << fn_name << "]";
	* output_log << "[BEGIN]" << std::endl;
}

void logger::trace_fn_end(std::string fn_name) {
	* output_log << "[TRACE]";
	* output_log << "[" << fn_name << "]";
	* output_log << "[END]" << std::endl;
}
