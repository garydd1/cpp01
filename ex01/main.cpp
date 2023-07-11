#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	
	Zombie *zombie = new Zombie[N];

	for (int i = 0; i < N; i++) {
		zombie[i].setName(name);
	}	
	return (zombie);
}

int main( void ) {
	
	int N = 5;

	Zombie *zombie = zombieHorde(N, "Zambie");
	for (int i = 0; i < N; i++) {
		zombie[i].announce();
	}
	delete [] zombie;
	std::cout << "Zombies are yesdead" << std::endl;
	return (0);
}