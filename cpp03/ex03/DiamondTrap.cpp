#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap(){
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name){
	std::cout << "DiamondTrap name constructor called" << std::endl;
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_attackDamage = FragTrap::_attackDamage;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
}

DiamondTrap::DiamondTrap(const DiamondTrap& toCopy) : FragTrap(toCopy), ScavTrap(toCopy){
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& original){
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	if (this != &original){
		operator=(original);
	}
	return *this;
}

void DiamondTrap::attack(std::string const & target){
	ScavTrap::attack(target);
}

int DiamondTrap::getEnergyPoints(){
	return _energyPoints;
}

void DiamondTrap::whoAmI(){
	std::cout << "My name is " << _name << " and my ClapTrap name is " <<  ClapTrap::_name << std::endl;
}