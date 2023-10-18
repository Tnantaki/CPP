#include "PmergeMe.hpp"

void	mergeSort()

std::vector<pair_t>	createPair(std::vector<unsigned int> & nums)
{
	std::vector<pair_t>	vec;
	for (std::size_t i = 0; i < nums.size(); i += 2)
			vec.push_back({nums[i], nums[i + 1]});
	return vec;
}

void	sortEachPair(std::vector<pair_t> & pairs)
{
	for (std::size_t i = 0; i < pairs.size(); i++) {
		if (pairs[i].first > pairs[i].second)
			std::swap(pairs[i].first, pairs[i].second);
	}
}

void	mergeInsertSort(std::vector<unsigned int> & nums)
{
	bool			staggler;
	unsigned int	lastEle;

// Catching staggler if number of element is old.
	staggler = nums.size() % 2;
	if (staggler) {
		lastEle = nums.back();
		nums.pop_back();
	}
	std::vector<pair_t>	pairs = createPair(nums);
	sortEachPair(pairs);
}

// ********************************************************** //
// --------------------- Utils Functions -------------------- //
// ********************************************************** //

void	prtArr(unsigned int* arr, size_t n)
{
	for (size_t i = 0; i < n; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

template<typename T>
void	displayNum(T const & nums)
{
	for (typename T::const_iterator it = nums.begin(); it != nums.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

bool	isdigitStr(char *str)
{
	for (size_t i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

bool	setInput(unsigned int* & arr, size_t size, char **av)
{
	long int	number;

	for (size_t i = 0; i < size; i++)
	{
		if (!isdigitStr(av[i + 1]))
			return std::cerr << "Invalid Input!!!" << std::endl, false;
		number = atol(av[i + 1]);
		if (strlen(av[i + 1]) > 10 || number > std::numeric_limits<unsigned int>::max())
			return std::cerr << "Number is over than unsigned int!!!" << std::endl, false;
		if (number < 0)
			return std::cerr << "Not a positive integer number!!!" << std::endl, false;
		arr[i] = static_cast<unsigned int>(number);
	}
	return true;
}

double	getExecTime(struct timeval & start)
{
	struct timeval	end;
	double			timeTaken;

	gettimeofday(&end, NULL);
	timeTaken = end.tv_sec - start.tv_sec;
	timeTaken += (end.tv_usec - start.tv_usec) * 1e-6;
	return timeTaken;
}
