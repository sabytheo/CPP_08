#include <iostream>
#include <set>
#include "Span.hpp"

int main(void)
{

	srand(time(0));
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(686);
	sp.addNumber(255);
	sp.addNumber(455);
	sp.addNumber(172);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try
	{
		Span set(10000);
		set.addMultipleRamdomNumber(10000);
		std::cout << "shortest span [" << set.shortestSpan() << "]" << std::endl;
		std::cout << "longest span [" << set.longestSpan() << "]" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	return 0;
}
