#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

void	anotherTown(Zombie* visitor);

int	main(void) {
	Zombie	stackZombie;
	Zombie*	heapZombie = NULL;

	stackZombie.announce();
	// heapZombie->announce(); // seg faults
	randomChump("Charlie");

	stackZombie.setName("Alice");
	stackZombie.announce();

	heapZombie = newZombie("Bob");
	heapZombie->announce();

	anotherTown(heapZombie);
	delete heapZombie;
	anotherTown(&stackZombie);
	return 0;
}

void	anotherTown(Zombie* visitor) {
	std::cout << "Going to another town" << std::endl;
	visitor->announce();
	// visitor->setName("Visitor");
	// visitor->announce();

	Zombie	local = Zombie("Olaf");

	local.announce();
	std::cout << "Leaving the town" << std::endl;
}
