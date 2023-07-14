#include <iostream>
#include <fstream>

// Write a program that takes three command-line arguments: a filename and two strings.
// it will open the file  and copy its contents to a new file <filename>.replace , not using the std::string replace function.
// Instead, it will replace all occurrences of the first string with the second string.
int main (int argc, char *argv[]) {
	
	std::string line;

	if (argc != 4)
	{
		std::cout << "Wrong number of arguments\n";
		return 1; 
	}

	std::ifstream file(argv[1]);
	if (!file)
	{
		std::cout << "Error opening file\n";
		return 1;
	}
	std::ofstream newFile(argv[1] + std::string(".replace"));
	if (!newFile)
	{
		std::cout << "Error opening file\n";
		return 1;
	}
	size_t pos = 0;
	while (std::getline(file, line))
	{
		pos = line.find(argv[2]);
		while (pos != std::string::npos)
		{
			line.erase(pos, std::string(argv[2]).length());
			line.insert(pos, argv[3], std::string(argv[3]).length());
			pos += std::string(argv[3]).length() - std::string(argv[2]).length();
			pos = line.find(argv[2], pos);
		}
		newFile << line << std::endl;
	}
	return 0;
}