#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <fstream>
#include <string>

class logger {

private:
	// the location to output to.
	std::ostream * output_log;

public:
	logger(void);

	// file to output logs to, instead of stdout.
	logger(std::string output_file);

	void println(const std::string msg);

	void trace_fn_begin(std::string fn_name);
	void trace_fn_end(std::string fn_name);
};

#endif
