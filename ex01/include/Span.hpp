#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <cstdlib>
#include <set>

class Span
{
	private:
		unsigned int _size;
		std::multiset<int> _containers;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &copy);
		~Span();

		class SpanIsFullException : public std::exception {
			public:
			virtual const char * what() const throw() ;
		};

		class NoNumberStoredException  : public std::exception {
			public:
				virtual const char * what() const throw() ;
		};

		class OnlyOneNumberStoredException  : public std::exception {
			public:
				virtual const char * what() const throw() ;
		};

		Span &operator=(const Span &other);

		template <typename	Iterator>
		void addNumbers(Iterator begin, Iterator end)
		{
			unsigned int nbElementToAdd = std::distance(begin,end);
			if (this->_containers.size() + nbElementToAdd > this->_size)
				throw SpanIsFullException();
			this->_containers.insert(begin,end);
		}

		void addNumber(int number);
		unsigned int getSize() const;
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		void addMultipleRamdomNumber(unsigned int n);
};

#endif
