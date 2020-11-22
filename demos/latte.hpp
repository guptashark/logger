#ifndef LATTE_HPP
#define LATTE_HPP

#include "coffee.hpp"

class latte : public coffee {

private:
public:
	latte(int percent_coffee);
	~latte(void);

	std::string get_taste(void) const override;
};

#endif
