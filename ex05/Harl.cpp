#include <string>
#include <iostream>
#include "Harl.hpp"

void	Harl::debug(void) const {
	std::cout
	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
	<< std::endl;
}
void	Harl::info(void) const {
	std::cout
	<< "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl;
}
void	Harl::warning(void) const {
	std::cout
	<< "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month."
	<< std::endl;
}
void	Harl::error(void) const {
	std::cout
	<< "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void	Harl::complain(std::string level) const {
	std::string const	levels[] = {
							"DEBUG",
							"INFO",
							"WARNING",
							"ERROR" };
	HarlMemFun const	complains[] = {
							&Harl::debug,
							&Harl::info,
							&Harl::warning,
							&Harl::error };
	size_t const		levelCount = 4;

	if (level.empty()) {
			std::cerr
		<< "Harl 2.0 doesn't know how to complain when no level is given."
		<< std::endl;
		return ;
	}
	for (size_t i = 0; i < levelCount; i++)
	{
		if (!level.compare(levels[i])) {
			(this->*complains[i])();
			return ;
		}
	}
	std::cerr
	<< "Harl 2.0 doesn't know how to complain at level "
	<< level << "." << std::endl;
}
