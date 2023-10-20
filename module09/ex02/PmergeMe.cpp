#include "PmergeMe.hpp"

static int	jacobsthal(int n);

// ********************************************************** //
// -------------------- Vector Container -------------------- //
// ********************************************************** //

static std::vector<pair_t>	createOrderedPair(std::vector<unsigned int> & nums);
static void	mergeSort(std::vector<pair_t> & vec, int first, int end);
static void	insertionSort(std::vector<unsigned int> & S, std::vector<unsigned int> & pend);

void	mergeInsertSort(std::vector<unsigned int> & nums)
{
	bool			staggler;
	unsigned int	lastEle;

	// 1. Catching staggler if number of element is old.
	staggler = nums.size() % 2;
	if (staggler) {
		lastEle = nums.back();
		nums.pop_back();
	}

	// 2. Create Ordered Pairs
	std::vector<pair_t>	pairs = createOrderedPair(nums);

	// 3. Recursively sort pairs by Large value of element;
	mergeSort(pairs, 0, pairs.size() - 1);

	// 4. create S(main chain) and pend. 
	std::vector<unsigned int>	S(pairs.size());
	std::vector<unsigned int>	pend(pairs.size());
	for (int i = 0; i < pairs.size(); i++) {
		S[i] = pairs[i].second;
		pend[i] = pairs[i].first;
	}
	if (staggler)
		pend.push_back(lastEle);
	
	// 5. insertion sort
	insertionSort(S, pend);
	nums = S;
}

static std::vector<pair_t>	createOrderedPair(std::vector<unsigned int> & nums)
{
	int	size = nums.size() / 2;
	int	j;
	std::vector<pair_t>	vec(size);

	for (int i = 0, j = 0; i < size; i++, j += 2) {
		if (nums[j] < nums[j + 1])
			vec[i] = {nums[j], nums[j + 1]};
		else
			vec[i] = {nums[j + 1], nums[j]};
	}
	return vec;
}

static void	merge(std::vector<pair_t> & vec, int first, int end, int mid)
{
	int	n1 = mid - first + 1;
	int	n2 = end - mid;
	std::vector<pair_t>	left(n1);
	std::vector<pair_t>	right(n2);

	for (int i = 0; i < n1; i++)
		left[i] = vec[first + i];
	for (int i = 0; i < n2; i++)
		right[i] = vec[mid + 1 + i];

	int i = 0, j = 0, k = first;

	while (i < n1 && j < n2)
	{
		if (left[i].second < right[j].second)
			vec[k++] = left[i++];
		else
			vec[k++] = right[j++];
	}
	while (i < n1)
		vec[k++] = left[i++];
	while (j < n2)
		vec[k++] = right[j++];
}

// first : first index of array
// end   : last index of array
static void	mergeSort(std::vector<pair_t> & vec, int first, int end)
{
	if (first < end)
	{
		int	middle = first + (end - first) / 2; 

		mergeSort(vec, first, middle);
		mergeSort(vec, middle + 1, end);
		merge(vec, first, end, middle);
	}
}

// R is Last index area;
// L is first index;
static int	binarySearch(std::vector<unsigned int> & S, unsigned int & number, int L, int R)
{
	int	midPoint;
		
	midPoint = L + (R - L) / 2;
	while (L <= R)
	{
		if (number < S[midPoint])
		{
			R = midPoint - 1;
			midPoint = L + (R - L) / 2;
		}
		else
		{
			L = midPoint + 1;
			midPoint = L + (R - L) / 2;
		}
	}
	if (number < S[midPoint])
		return midPoint;
	else
		return midPoint + 1;
}

static void	insertionSort(std::vector<unsigned int> & S, std::vector<unsigned int> & pend)
{
	int	lastPendIndex = pend.size() - 1;
	int	insertIndex;
	int	insertPoint;
	int	insertArea;
	int	oldPoint;
	int	n = 3;

	insertPoint = 0;
	oldPoint = insertPoint;
	S.insert(S.begin(), pend[insertPoint]);
	while (oldPoint < lastPendIndex)
	{
		insertPoint = jacobsthal(n) - 1;
		if (insertPoint >= lastPendIndex)
			insertPoint = lastPendIndex;
		insertArea = oldPoint + insertPoint;
		while (insertPoint > oldPoint)
		{
			insertIndex = binarySearch(S, pend[insertPoint], 0, insertArea);
			S.insert(S.begin() + insertIndex, pend[insertPoint]);
			insertPoint--;
		}
		oldPoint = jacobsthal(n++) - 1;
	}
}

// ********************************************************** //
// --------------------- deque Container -------------------- //
// ********************************************************** //

static std::deque<pair_t>	createOrderedPair(std::deque<unsigned int> & nums);
static void	mergeSort(std::deque<pair_t> & vec, int first, int end);
static void	insertionSort(std::deque<unsigned int> & S, std::deque<unsigned int> & pend);

void	mergeInsertSort(std::deque<unsigned int> & nums)
{
	bool			staggler;
	unsigned int	lastEle;

	staggler = nums.size() % 2;
	if (staggler) {
		lastEle = nums.back();
		nums.pop_back();
	}
	std::deque<pair_t>	pairs = createOrderedPair(nums);
	mergeSort(pairs, 0, pairs.size() - 1);
	std::deque<unsigned int>	S(pairs.size());
	std::deque<unsigned int>	pend(pairs.size());
	for (int i = 0; i < pairs.size(); i++) {
		S[i] = pairs[i].second;
		pend[i] = pairs[i].first;
	}
	if (staggler)
		pend.push_back(lastEle);
	insertionSort(S, pend);
	nums = S;
}

static std::deque<pair_t>	createOrderedPair(std::deque<unsigned int> & nums)
{
	int	size = nums.size() / 2;
	int	j;
	std::deque<pair_t>	vec(size);

	for (int i = 0, j = 0; i < size; i++, j += 2) {
		if (nums[j] < nums[j + 1])
			vec[i] = {nums[j], nums[j + 1]};
		else
			vec[i] = {nums[j + 1], nums[j]};
	}
	return vec;
}

static void	merge(std::deque<pair_t> & vec, int first, int end, int mid)
{
	int	n1 = mid - first + 1;
	int	n2 = end - mid;
	std::deque<pair_t>	left(n1);
	std::deque<pair_t>	right(n2);

	for (int i = 0; i < n1; i++)
		left[i] = vec[first + i];
	for (int i = 0; i < n2; i++)
		right[i] = vec[mid + 1 + i];

	int i = 0, j = 0, k = first;

	while (i < n1 && j < n2)
	{
		if (left[i].second < right[j].second)
			vec[k++] = left[i++];
		else
			vec[k++] = right[j++];
	}
	while (i < n1)
		vec[k++] = left[i++];
	while (j < n2)
		vec[k++] = right[j++];
}

static void	mergeSort(std::deque<pair_t> & vec, int first, int end)
{
	if (first < end)
	{
		int	middle = first + (end - first) / 2; 

		mergeSort(vec, first, middle);
		mergeSort(vec, middle + 1, end);
		merge(vec, first, end, middle);
	}
}

static int	binarySearch(std::deque<unsigned int> & S, unsigned int & number, int L, int R)
{
	int	midPoint;
		
	midPoint = L + (R - L) / 2;
	while (L <= R)
	{
		if (number < S[midPoint])
		{
			R = midPoint - 1;
			midPoint = L + (R - L) / 2;
		}
		else
		{
			L = midPoint + 1;
			midPoint = L + (R - L) / 2;
		}
	}
	if (number < S[midPoint])
		return midPoint;
	else
		return midPoint + 1;
}

static void	insertionSort(std::deque<unsigned int> & S, std::deque<unsigned int> & pend)
{
	int	lastPendIndex = pend.size() - 1;
	int	insertIndex;
	int	insertPoint;
	int	insertArea;
	int	oldPoint;
	int	n = 3;

	insertPoint = 0;
	oldPoint = insertPoint;
	S.insert(S.begin(), pend[insertPoint]);
	while (oldPoint < lastPendIndex)
	{
		insertPoint = jacobsthal(n) - 1;
		if (insertPoint >= lastPendIndex)
			insertPoint = lastPendIndex;
		insertArea = oldPoint + insertPoint;
		while (insertPoint > oldPoint)
		{
			insertIndex = binarySearch(S, pend[insertPoint], 0, insertArea);
			S.insert(S.begin() + insertIndex, pend[insertPoint]);
			insertPoint--;
		}
		oldPoint = jacobsthal(n++) - 1;
	}
}


// ********************************************************** //
// --------------------- Utils Functions -------------------- //
// ********************************************************** //

static int	jacobsthal(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

static bool	isdigitStr(char *str)
{
	for (size_t i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

// ********************************************************** //
// -------------------- Library Functions ------------------- //
// ********************************************************** //


void	prtErrMsg(const std::string msg)
{
	std::cerr << RED << msg << RESET << std::endl;
}

void	prtArr(unsigned int* arr, size_t n)
{
	for (size_t i = 0; i < n; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

bool	setInput(unsigned int* & arr, size_t size, char **av)
{
	long int	number;

	for (size_t i = 0; i < size; i++)
	{
		if (!isdigitStr(av[i + 1]))
			return prtErrMsg("Invalid Input!!!"), false;
		number = atol(av[i + 1]);
		if (strlen(av[i + 1]) > 10 || number > std::numeric_limits<unsigned int>::max())
			return prtErrMsg("Number is over than unsigned int!!!"), false;
		if (number < 0)
			return prtErrMsg("Not a positive integer number!!!"), false;
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

void	displayNum(std::vector<unsigned int> const & nums, std::string const & str)
{
	std::cout << YELLOW << str << RESET;
	for (std::vector<unsigned int>::const_iterator it = nums.begin(); it != nums.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	displayNum(std::deque<unsigned int> const & nums, std::string const & str)
{
	std::cout << YELLOW << str << RESET;
	for (std::deque<unsigned int>::const_iterator it = nums.begin(); it != nums.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	checkAscending(std::vector<unsigned int> const & nums, std::string str)
{
	for (std::vector<unsigned int>::const_iterator it = nums.begin(); it + 1 != nums.end(); it++)
	{
		if (*it > *(it + 1)) {
			return prtErrMsg(str + "No, number is not asceding order !!!");
		}
	}
	std::cerr << GREEN << str + "OK,number is ascending Order." << RESET << std::endl;
}

void	checkAscending(std::deque<unsigned int> const & nums, std::string str)
{
	for (std::deque<unsigned int>::const_iterator it = nums.begin(); it + 1 != nums.end(); it++)
	{
		if (*it > *(it + 1)) {
			return prtErrMsg(str + "No, number is not asceding order !!!");
		}
	}
	std::cerr << GREEN << str + "OK,number is ascending Order." << RESET << std::endl;
}
