#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "ScavTrap default constructor called" << std::endl;
	setStats("ScavTrap", 100, 50, 20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "ScavTrap name constructor called" << std::endl;
	setStats(name, 100, 50, 20);
}

ScavTrap::ScavTrap(const ScavTrap& toCopy) : ClapTrap(toCopy){
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& original){
	std::cout << "ScavTrap assignation operator called" << std::endl;
	if (this != &original){
		ClapTrap::operator=(original);
	}
	return *this;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;
}