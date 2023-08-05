#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>

// #define FILENAME "notexit.txt"
#define FILENAME "perfile.txt"
// #define FILENAME "infile.txt"

int	main(void)
{
	std::ifstream	inFile;

	inFile.open(FILENAME);
	if (!inFile.is_open())
	{
		if (!std::filesystem::exists(FILENAME))
			std::cout << FILENAME << " : File does not exist." << std::endl;
	}
	else
		std::cout << "There is a " << FILENAME << std::endl;
}