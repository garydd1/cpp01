#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "FragTrap default constructor called" << std::endl;
	setStats("FragTrap", 100, 100, 30);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "FragTrap name constructor called" << std::endl;
	setStats(name, 100, 100, 30);
}

FragTrap::FragTrap(const FragTrap& toCopy) : ClapTrap(toCopy){
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& original){
	std::cout << "FragTrap assignation operator called" << std::endl;
	if (this != &original){
		ClapTrap::operator=(original);
	}
	return *this;
}

void FragTrap::guardGate(){
	std::cout << "FragTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;
}

void FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << this->getName() << " positive high five request!" << std::endl;
}