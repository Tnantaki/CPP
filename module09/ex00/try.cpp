#include <string>
#include <limits>
#include <iostream>
#include <map>

void	ft_strtirm(std::string& str, char const* set)
{
	std::size_t	pos;

	pos = str.find_first_not_of(set);
	str = str.substr(pos);
	pos = str.find_last_not_of(set);
	str = str.substr(0, pos + 1);
}

bool	ft_isdigit_str(std::string const& str)
{
	size_t	i = 0;

	if (str[i] == '-')
		i++;
	while (isdigit(str[i]))
		i++;
	if (str[i] == '\0')
		return true;
	return false;
}

int	main(void)
{
	int	max = std::numeric_limits<int>::max();
	std::string	str = 	"2009-01-02";
	std::string	date = "2009-1-01";
	if (date < str)
		std::cout << "worng" << std::endl;
	else
		std::cout << "right" << std::endl;



}