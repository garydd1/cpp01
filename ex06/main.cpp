#include "Harl.hpp"

int str2int(char **argv)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == argv[1])
			return (i);
	}
	return  (-1);
} 

void go_switch(char **argv, Harl& harl)
{
	switch (str2int(argv))
	{
	case 0:
		harl.complain("DEBUG");
		break;
	case 1: 
		harl.complain("INFO");
		break;
	case 2: 
		harl.complain("WARNING");
		break;
	case 3:
		harl.complain("ERROR");
		break;
	default:
		std::cout << "[ Probably complaning about insignificant problems ]" << std::endl;
	}
}

int main (int argc, char **argv){
	
	Harl harl;

	if (argc != 2)
		std::cout << "[ problably complainin about insignificant problems ]" << std::endl;
	else 
		go_switch(argv, harl);
	return 0;


}