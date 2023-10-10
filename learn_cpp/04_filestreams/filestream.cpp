#include <iostream>
#include <fstream>
#include <string>

int	main(void)
{
	std::ifstream	inFile;
	std::ofstream	outFile;
	char	ch;

	inFile.open("infile");
	outFile.open("outfile");

	std::cout << "Copy content infile >> outfile" << std::endl;
	while (inFile.get(ch))
		outFile.put(ch);
	inFile.close();
	outFile.close();
	return (0);
}