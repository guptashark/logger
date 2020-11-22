#ifndef COFFEE_HPP
#define COFFEE_HPP

#include <string>

class coffee {

private:
	int percent_coffee;
public:
	coffee(int percent_coffee);
	~coffee(void);

	int get_percent_coffee(void) const;
};

#endif
