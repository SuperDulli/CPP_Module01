#ifndef HARL_H
#define HARL_H

#include <string>

class Harl {

	public:

		void	complain(std::string level) const;
		void	printLevel(std::string level) const;

	private:

		void	debug(void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;


};

#endif
