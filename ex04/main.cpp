#include <iostream>
#include <fstream>

// Write a program that takes three command-line arguments: a filename and two strings.
// it will open the file  and copy its contents to a new file <filename>.replace , not using the std::string replace function.
// Instead, it will replace all occurrences of the first string with the second string.
int main (int argc, char *argv[]) {
	
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments\n";
	}

	std::ifstream file(argv[1]);
	if (!file)
	{
		std::cout << "Error opening file\n";
		return 1;
	}
	std::string line;
	std::ofstream newFile(argv[1] + std::string(".replace"));
	if (!newFile)
	{
		std::cout << "Error opening file\n";
		return 1;
	}

	while (std::getline(file, line))
	{
		size_t pos = 0;
		while ((pos = line.find(argv[2], pos)) != std::string::npos)
		{
			line.replace(pos, std::string(argv[2]).length(), argv[3]);
			pos += std::string(argv[3]).length();
		}
		newFile << line << std::endl;
	}
	return 0;
}