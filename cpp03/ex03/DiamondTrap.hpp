#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

public:

	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& toCopy);
	int getEnergyPoints();
	void attack(std::string const & target);
	~DiamondTrap();
	DiamondTrap& operator=(const DiamondTrap& original);
	void whoAmI();

private:

	std::string _name;

};

#endif