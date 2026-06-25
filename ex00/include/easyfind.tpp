#include "easyfind.hpp"

const char *noOccurenceFoundException::what() const throw()
{
	return "No occurence found in the containers";
}

template <typename T>
typename T::const_iterator easyfind(const T &container, int n)
{
	typename T::const_iterator find;
	find = std::find(container.begin(), container.end(), n);
	if (find == container.end())
		throw ::noOccurenceFoundException();
	return (find);
}
