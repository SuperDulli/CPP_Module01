# CPP_Module01
Memory allocation, pointers to members, references, switch statement

## usage

1. `cd` into the exercise directory
2. `make` the executable
3. run the executable

`make leaks` runs the programm and checks for memory leaks (on MacOs)

## ex00: BraiiiiiiinnnzzzZ

### Zombie class

private attribute:
- name

public member functions:
- a default constructor
- a constructor that takes as a parameter a string to initialze the name with
- `void announce(void)` that prints the name of the Zombie followed by "BraiiiiiiinnnzzzZ...".
- `void setName(std::string name)` that sets the name of the Zombie.

### use of the Zombie

- `Zombie* newZombie(std::string name)` that creates a zombie, names it and returns it so it can be used outside of this function
- `void randomChump(std::string name)` that creates a zombie, names it and then the zombie announces itself

## ex01: Moar brainz!

`Zombie* zombieHorde(int n, std::string name)`
- allocates n Zombie objects in a single allocation
- initialize them and giving each one of them the name passed as parameter
- returns a pointer to the first zombie

## ex02: HI THIS IS BRAIN

demystify references.

variables:
- a string
- a pointer to the string
- a refernce to the string

prints:
- the memory address of the sting
- the memory address held by the pointer
- the memory address held by the reference
- the value of the string
- the value pointed to by the pointer
- the value pointed to by the reference

## ex03: Unnecessary violence

Humans attacking with weapons to learn about when to use a reference and when a pointer.

### class Weapon

- private attribute type, as a string
- a `getType()` member function that returns a const reference to type
- a `setTpye()` member function that sets type using the new one passed as parameter

### class HumanA and HumanB

- private attribute name
- private attribute weapon
- an `attack()` member function that displays the name and the type of weapon

HumanA takes the Weapon in its Constructor, HumanB does not.
HumanB may **not always** have a Weapon, where as HumanA will always be **armed**.

## ex04: Sed is for losers

replaces every occurence of the string s1 in a file with the string s2 and saves the output in file ending in `.replace`.

usage: ./sed_is_for_losers filename s1 s2

## ex05: Harl 2.0

Harl has four private member function to comment on different levels: DEBUG, INFO, WARNING and ERROR.
The puplic member function `complain(std::string level)` can be used to call the right private member function by making use of **pointers to member functions**.

## ex06: Harl filter

only displays messages from the level passed as a parameter and above.

usage: `./harlFilter [level]`

example:

```
$> ./harlFilter "WARNING"
[ WARNING ] I think I deserve to have some extra bacon for free. I've been coming for years where as you started working here since last month.

[ ERROR ] This is unacceptable, I want to speak to the manager now.

$> ./harlFilter "I am not sure how tired I am today..."
[ Probably complaining about insignificant problems ]
```

Learn about the **switch** statement.
