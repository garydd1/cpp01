#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{

public:

	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& toCopy);
	~FragTrap();
	FragTrap& operator=(const FragTrap& original);
	void guardGate();
	void highFivesGuys();

};

#endif