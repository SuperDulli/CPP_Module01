#include <string>
#include <iostream>
#include "Harl.hpp"

void	Harl::printLevel(std::string level) const {
	std::cout << "[ " << level << " ]" << std::endl;
}

void	Harl::debug(void) const {
	this->printLevel("DEBUG");
	std::cout
	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
	<< std::endl << std::endl;
}
void	Harl::info(void) const {
	this->printLevel("INFO");
	std::cout
	<< "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl << std::endl;
}
void	Harl::warning(void) const {
	this->printLevel("WARNING");
	std::cout
	<< "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month."
	<< std::endl << std::endl;
}
void	Harl::error(void) const {
	this->printLevel("ERROR");
	std::cout
	<< "This is unacceptable! I want to speak to the manager now."
	<< std::endl << std::endl;
}

void	Harl::complain(std::string level) const {
	std::string const	levels[] = {
							"DEBUG",
							"INFO",
							"WARNING",
							"ERROR" };
	size_t const		levelCount = 4;

	int	complainLevel = -1;
	for (size_t i = 0; i < levelCount; i++)
	{
		if (!level.compare(levels[i])) {
			complainLevel = i;
			break ;
		}
	}

	switch (complainLevel)
	{
	case 0:
		this->debug();
		// fall through
	case 1:
		this->info();
		// fall through
	case 2:
		this->warning();
		// fall through
	case 3:
		this->error();
		break ;
	default:
		printLevel("probably complaining about insignificant problems");
		break ;
	}
}
