#include <iostream>

#include "logger.hpp"

#include "coffee.hpp"
#include "latte.hpp"

static logger main_lg ("main.cpp");

int main(void) {

	main_lg.set_fn_name("main");
	main_lg.trace_fn_begin();

	main_lg.trace_printf("Logger Demo Application");
	main_lg.trace_printf("Instantiating coffee obj");

	{
		coffee c(100);
		int val = c.get_percent_coffee();
		main_lg.trace_printf("Get percent coffee: %d", val);

		std::string taste = c.get_taste();
		main_lg.trace_println(taste);
	}

	main_lg.trace_printf("==================================");

	{
		latte l(30);
		int val = l.get_percent_coffee();
		main_lg.trace_printf("Get pct coffee from latte: %d", val);

		std::string taste = l.get_taste();
		main_lg.trace_println(taste);
	}

	main_lg.trace_fn_end();

	return 0;
}
