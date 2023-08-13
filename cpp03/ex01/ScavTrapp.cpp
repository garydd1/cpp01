#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/**
 * @brief Construct a new Scav Trap:: Scav Trap object
 * Fist call the parent constructor with no parameters
 * Then set the stats of the object 
 * 
 */
ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "ScavTrap default constructor called" << std::endl;
	setStats("ScavTrap", 100, 50, 20);
}

/**
 * @brief Construct a new Scav Trap:: Scav Trap object
 * Fist call the parent constructor with name parameter
 * Then set the stats of the object 
 * @param name 
 */
ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "ScavTrap name constructor called" << std::endl;
	setStats(name, 100, 50, 20);
}

/**
 * @brief Construct a new Scav Trap:: Scav Trap object
 * Fist call the parent constructor with copy parameter
 * Then set the stats of the object 
 * @param toCopy 
 */
ScavTrap::ScavTrap(const ScavTrap& toCopy) : ClapTrap(toCopy){
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

/**
 * @brief Destroy the Scav Trap:: Scav Trap object
 * 
 */
ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called" << std::endl;
}

/**
 * @brief Assignation operator overload
 * 
 * @param original 
 * @return ScavTrap& 
 */
ScavTrap& ScavTrap::operator=(const ScavTrap& original){
	std::cout << "ScavTrap assignation operator called" << std::endl;
	if (this != &original){
		ClapTrap::operator=(original);
	}
	return *this;
}

/**
 * @brief Sets the object in Gate keeper mode
 * 
 */
void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;
}