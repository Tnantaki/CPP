#include <iostream>
#include <vector>
#include <iterator>

template <typename T>
typename T::iterator easyfind(T& container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    return it;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 3};
    std::vector<int> vec(arr, arr + 6);

    int value_to_find = 3;
    
    std::vector<int>::iterator result = easyfind(vec, value_to_find);

    if (result != vec.end()) {
        std::cout << "Found " << value_to_find << " at index " << std::distance(vec.begin(), result) << std::endl;
    } else {
        std::cout << value_to_find << " not found in the vector." << std::endl;
    }

    return 0;
}