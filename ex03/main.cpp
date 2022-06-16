#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{ 
	{
		Weapon	club = Weapon("crude spiked club");

		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");
		HumanB	jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");
		HumanB	boy("Charlie");

		boy.attack();
	}
	// {
	// 	// compile error - no matching constuctors
	// 	HumanA	lazy;
	// 	HumanA	lazy2("Olaf");
	// }
	
	return 0;
}
