#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template <typename T>
typename T::const_iterator easyfind(const T& container, int n);

class noOccurenceFoundException : public std::exception {
	public:
		virtual const char * what() const throw();
};

#include "easyfind.tpp"

#endif
