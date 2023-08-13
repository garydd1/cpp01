#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& toCopy){
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->_name = toCopy._name;
	this->_hitPoints = toCopy._hitPoints;
	this->_energyPoints = toCopy._energyPoints;
	this->_attackDamage = toCopy._attackDamage;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& original){
	std::cout << "ClapTrap assignation operator called" << std::endl;
	this->_name = original._name;
	this->_hitPoints = original._hitPoints;
	this->_energyPoints = original._energyPoints;
	this->_attackDamage = original._attackDamage;
	return *this;
}

void ClapTrap::attack(const std::string& target){

	if (this->_energyPoints == 0){
		std::cout << "ClapTrap " << this->_name << " can't attack " << target << " because it has no energy points!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){
	
	if (this->_hitPoints == 0){
		std::cout << "ClapTrap " << this->_name << " can't take damage because it has no hit points!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
	this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
	
	std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points of damage!" << std::endl;
	this->_hitPoints += amount;
}

std::string ClapTrap::getName( void ) const{
	return this->_name;
}

/**
 * @brief Set the Stats object, so that we can use the same constructor for all the classes
 * and just set the stats after the constructor is called (in the derived class constructor)
 * @param name 
 * @param hitPoints 
 * @param energyPoints 
 * @param attackDamage 
 */
void ClapTrap::setStats(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage){
	this->_name = name;
	this->_hitPoints = hitPoints;
	this->_energyPoints = energyPoints;
	this->_attackDamage = attackDamage;
}