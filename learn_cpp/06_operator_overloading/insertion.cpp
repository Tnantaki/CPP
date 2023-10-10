#include <iostream>
#include <string>

// using namespace std;

struct YtChannel
{
	std::string	name;
	int			subCount;

	YtChannel(std::string name, int subCount)
	{
		this->name = name;
		this->subCount = subCount;
	}
};

// void	operator<<(std::ostream& COUT, YtChannel& yt)
// {
// 	std::cout << "name: " << yt.name << std::endl;
// 	std::cout << "subCount: " << yt.subCount << std::endl;
// }

std::ostream&	operator<<(std::ostream& COUT, YtChannel& yt)
{
	std::cout << "name: " << yt.name << std::endl;
	std::cout << "subCount: " << yt.subCount << std::endl;
	return (std::cout);
}

int	main(void)
{
	YtChannel	yt1("9Arm", 100);
	YtChannel	yt2 = YtChannel("The Codex", 200);

	std::cout << yt1 << yt2;
	std::cout << "--------------------" << std::endl;
	operator<<(std::cout, yt2);
	return (0);
}