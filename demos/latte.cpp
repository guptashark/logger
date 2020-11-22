#include "logger.hpp"

#include "latte.hpp"

static logger lat_lg("latte.cpp");

latte::latte(int percent_coffee): coffee(percent_coffee) {
	lat_lg.set_fn_name("latte::latte");
	lat_lg.trace_fn_begin();
	lat_lg.trace_fn_end();
}

latte::~latte(void) {
	lat_lg.set_fn_name("latte::~latte");
	lat_lg.trace_fn_begin();
	lat_lg.trace_fn_end();
}

std::string latte::get_taste(void) const {

	lat_lg.set_fn_name("latte::latte");
	lat_lg.trace_fn_begin();
	lat_lg.trace_fn_end();

	return "Smooth and milky with some sweetness.";
}
