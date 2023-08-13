#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	// ClapTrap clapTrap("ClapTrap");
	// ClapTrap clapTrap2(clapTrap);
	// ClapTrap clapTrap3;
	// clapTrap3 = clapTrap2;
	// clapTrap.attack("target");
	// clapTrap.takeDamage(5);
	// clapTrap.beRepaired(5);
	// ScavTrap scavTrap("ScavTrap");
	// ScavTrap scavTrap2(scavTrap);
	// ScavTrap scavTrap3;
	// scavTrap3 = scavTrap2;
	// scavTrap.attack("target");
	// scavTrap.takeDamage(5);
	// scavTrap.beRepaired(5);
	// scavTrap.guardGate();
	// FragTrap fragTrap("FragTrap");
	// FragTrap fragTrap2(fragTrap);
	// FragTrap fragTrap3;
	// fragTrap3 = fragTrap2;
	// fragTrap.attack("target");
	// fragTrap.takeDamage(5);
	// fragTrap.beRepaired(5);
	// fragTrap.highFivesGuys();
	std::cout << "----------------------------------------" << std::endl;
	DiamondTrap diamondTrap("DiamondTrap");
	std::cout << "energy points: " << diamondTrap.getEnergyPoints() << std::endl;
	diamondTrap.whoAmI();
	

	return (0);
}