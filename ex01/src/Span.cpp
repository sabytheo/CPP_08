#include "Span.hpp"
#include <limits>
#include <vector>
#include <algorithm>

Span::Span() : _size(0) , _containers()
{
}

Span::Span(unsigned int n) : _size(n) , _containers()
{
}

Span::Span(const Span &copy) : _size(copy.getSize())
{
	*this = copy;
}

void Span::addNumber(int number)
{
	if (this->getSize() >= this->_size)
		throw SpanIsFullException ();
	else
		this->_containers.insert(number);
}

unsigned int	Span::shortestSpan()
{
	if (this->_containers.empty())
		throw Span::NoNumberStoredException ();
	if (this->_containers.size() == 1)
		throw Span::OnlyOneNumberStoredException ();
	std::multiset<int>::iterator it = this->_containers.begin();
	std::multiset<int>::iterator next = ++(this->_containers.begin());
	unsigned int minSpan = std::numeric_limits<int>::max();
	for (; next != this->_containers.end() ; next++)
	{
		long tmp = static_cast<long>(*next) - static_cast<unsigned int>(*it);
		if (tmp < minSpan)
			minSpan = tmp;
		if (minSpan == 0)
			return (minSpan);
		it++;
	}
	return (minSpan);

}

unsigned int	Span::longestSpan()
{
	if (this->_containers.empty())
		throw Span::NoNumberStoredException ();
	if (this->_containers.size() == 1)
		throw Span::OnlyOneNumberStoredException ();
	long lower = *this->_containers.begin();
	long higher = *this->_containers.rbegin();

	return static_cast<unsigned int>(higher - lower);
}

unsigned int Span::getSize() const
{
	return (this->_containers.size());
}
Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->_containers = other._containers;
		this->_size = other.getSize();
	}
	return *this;
}

void Span::addMultipleRamdomNumber(unsigned int n)
{
	std::vector<int> numbersToAdd;
	for (unsigned int i = 0 ; i < n ; i++)
	{
		int randomint = rand();
		numbersToAdd.push_back(randomint);
		// std::cout << randomint << "\n";
	}
	this->addNumbers(numbersToAdd.begin(),numbersToAdd.end());
	// this->_containers.insert(numbersToAdd.begin(),numbersToAdd.end());
	std::cout << "These " << n << " numbers are now in the containers." << std::endl ;
}

const char* Span::SpanIsFullException ::what() const throw()
{
	return "The container has reached his full-size";
}

const char* Span::NoNumberStoredException ::what() const throw()
{
	return "The container is empty";
}

const char* Span::OnlyOneNumberStoredException ::what() const throw()
{
	return "Can't make the difference with only one number in the containers";
}

Span::~Span()
{
}
