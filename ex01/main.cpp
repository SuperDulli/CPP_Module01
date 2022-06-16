#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie*	zombieHorde(int n, std::string name);

void	annouceHorde(Zombie* horde, int n);

int	main(void) {
	std::string const	name = "Olaf";

	int const	zombieCount = 5;
	Zombie*		zHorde = zombieHorde(zombieCount, name);
	annouceHorde(zHorde, zombieCount);

	std::cout << std::string(80, '-') << std::endl;

	zHorde->announce();
	zHorde->setName("Chris");
	annouceHorde(zHorde, zombieCount);

	delete[] zHorde;

	std::cout << std::string(80, '-') << std::endl;

	int	const	n = -5;
	Zombie*		negative = zombieHorde(n, name);
	annouceHorde(negative, n);
	// delete[] negative; // not needed because no Zombie is allocated
	
	std::cout << std::string(80, '-') << std::endl;

	int	const	zero = 0;
	Zombie*		empty = zombieHorde(zero, name);
	annouceHorde(empty, zero);
	// delete[] empty; // not needed because no Zombie is allocated

	return 0;
}

// every Zombie in the Horde annonces itself starting with the last
void	annouceHorde(Zombie* horde, int n) {
	for (int i = n - 1; i >= 0; i--) {
		horde[i].announce();
	}
}
