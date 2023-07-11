#include "Zombie.hpp"

Zombie::Zombie() {
	return;
}

Zombie::~Zombie() {

	std::cout << this->_name << " is... no undead?" << std::endl;
	return;
}

void Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string name ) {
	this->_name = name;
}