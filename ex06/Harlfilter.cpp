#include "Harl.hpp"

Harl::Harl( void ){
	return; 
}

Harl::~Harl( void ){

	return;
}

void Harl::complain( std::string level ){

	void(Harl::*Fpointer[4])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; i++)
	{
		if(levels[i] == level)
		{
			for (int j = i; j < 4; j++)
				(this->*Fpointer[j])();
			break;
		}
	}

}

void Harl::debug( void ){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void Harl::info( void ){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning( void ){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month.\n"<< std::endl;
}

void Harl::error( void ){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}