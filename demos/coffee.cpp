#include "logger.hpp"

#include "coffee.hpp"

static logger cof_lg("coffee.cpp");

coffee::coffee(int percent_coffee): percent_coffee(percent_coffee) {
	cof_lg.set_fn_name("coffee::coffee");
	cof_lg.trace_fn_begin();
	cof_lg.trace_fn_end();
}

coffee::~coffee(void) {
	cof_lg.set_fn_name("coffee::~coffee");
	cof_lg.trace_fn_begin();
	cof_lg.trace_fn_end();
}

int coffee::get_percent_coffee(void) const {
	cof_lg.set_fn_name("coffee::get_percent_coffee");
	cof_lg.trace_fn_begin();

	cof_lg.trace_printf("got percent coffee: %d", percent_coffee);

	cof_lg.trace_fn_end();

	return percent_coffee;
}
