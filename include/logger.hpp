#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>

class logger {

private:

public:
	logger(void);

	void println(const std::string msg);

	void trace_fn_begin(std::string fn_name);
	void trace_fn_end(std::string fn_name);
};

#endif
