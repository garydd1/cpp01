#include "Zombie.hpp"

void randomChump( std::string name ) {
	
	Zombie zombie;
	zombie.setName(name);
	zombie.announce();
}

Zombie* newZombie( std::string name ) {
	
	Zombie *zombie = new Zombie();
	zombie->setName(name);
	return (zombie);
}

int main( void ) {
	
	Zombie *zombie = newZombie("Zombie");
	zombie->announce();
	delete zombie;
	randomChump("Zombie");
	return (0);
}