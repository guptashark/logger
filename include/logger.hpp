#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <fstream>
#include <string>

#include <stack>

class logger {

private:
	// the location to output to.
	std::ostream * output_log;

	std::stack<std::string> fn_names_stack;

public:
	logger(void);

	// file to output logs to, instead of stdout.
	logger(std::string output_file);

	void println(const std::string msg);

	/////////////////////////
	// tracing with functions

	// setting an fn name requires that we use
	// trace_fn_begin and trace_fn_end correctly,
	// since trace_fn_end will pop the name off the
	// stack.
	void set_fn_name(const std::string fn_name);
	void trace_fn_begin(void);
	void trace_fn_end(void);
};

#endif
