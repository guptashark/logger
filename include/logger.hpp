#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <fstream>
#include <string>

#include <stack>

class logger {

private:
	// the location to output to.
	static std::ostream * output_log;

	std::stack<std::string> fn_names_stack;
	std::string src_file;

	// trace helper.
	void trace_base(void);

public:
	static void set_output_file (std::string output_file);

	logger(std::string src_file);

	void println(const std::string msg);

	/////////////////////////
	// tracing with functions

	// setting an fn name requires that we use
	// trace_fn_begin and trace_fn_end correctly,
	// since trace_fn_end will pop the name off the
	// stack.
	void set_fn_name(const std::string fn_name);
	void trace_fn_begin(void);
	void trace_println(std::string s);
	void trace_fn_end(void);
};

#endif
