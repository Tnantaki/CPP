#include <iostream>
#include <map>
#include <string>
#include <list>// for using std::list
#include <utility>// for using std::pair

int	main(void)
{
	std::map<std::string, std::list<std::string>>	pokedex;

	std::list<std::string>	PikachuAtt = {"thunder shock", "tail whip", "quick attack"};
	std::list<std::string>	CharmanderAtt = {"flame throwe", "scary face"};
	std::list<std::string>	ChikoritaAtt {"razor leaf", "poison powder"};

	pokedex.insert(std::pair<std::string, std::list<std::string>>("Pikachu", PikachuAtt));
	pokedex.insert(std::pair<std::string, std::list<std::string>>("Charmander", CharmanderAtt));
	pokedex.insert(std::pair<std::string, std::list<std::string>>("Chikorita", ChikoritaAtt));

	for (auto pair : pokedex)
	{
		std::cout << pair.first << " - ";
		for (auto attack : pair.second)
			std::cout << attack << ", ";
		std::cout << std::endl;
	}
}
