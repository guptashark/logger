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

void logger::trace_printf(const char * fmt_str, ...) {
	trace_base();
	* output_log << " ";

	va_list valist;
	va_start ( valist, fmt_str );

	// process the format string.
	std::string s(fmt_str);

	for ( unsigned int i = 0; i < s.size(); i++) {
		if ( s[i] != '%' ) {
			std::string current_char;
			current_char.push_back(s[i]);
			* output_log << current_char;
		} else {

			if ( s[i+1] == 'd' ) {
				// write an int.
				int val = va_arg(valist, int);
				* output_log << val;
			} else if ( s[i+1] == 's' ) {
				// write a string.
				const char * str_val = va_arg(valist, char *);
				std::string val(str_val);
				* output_log << val;
			}

			i++;
		}
	}

	va_end(valist);

	* output_log << std::endl;
}

void logger::trace_fn_end(void) {
	trace_base();
	* output_log << "[END]" << std::endl;

	fn_names_stack.pop();
}

void logger::error_log(std::string s) {
	* output_log << "[ERROR]";
	* output_log << "[" << src_file << "]";
	* output_log << "[" << fn_names_stack.top() << "]";
	* output_log << " " << s;
	* output_log << std::endl;
}
