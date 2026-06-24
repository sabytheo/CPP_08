#include <iostream>
#include <list>
#include "MutantStack.hpp"

void test_const(MutantStack<int> mstack)
{
	const MutantStack<int> const_mstack(mstack);

	std::cout << "--- const_iterator ---" << std::endl;

	MutantStack<int>::const_iterator cit = const_mstack.begin();
	MutantStack<int>::const_iterator cite = const_mstack.end();

	while (cit != cite)
	{
		std::cout << *cit << std::endl;
		++cit;
	}

	std::cout << "--- const_reverse_iterator ---" << std::endl;
	MutantStack<int>::const_reverse_iterator crit = const_mstack.rbegin();
	MutantStack<int>::const_reverse_iterator crite = const_mstack.rend();

	while (crit != crite)
	{
		std::cout << *crit << std::endl;
		++crit;
	}
}

void test_list()
{
	std::cout << "\n--- std::list ---" << std::endl;
	std::list<int> mlist;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << "Top (back): " << mlist.back() << std::endl;
	mlist.pop_back();
	std::cout << "Size: " << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);
	std::list<int>::iterator it_list = mlist.begin();
	std::list<int>::iterator ite_list = mlist.end();
	++it_list;
	--it_list;
	while (it_list != ite_list)
	{
		std::cout << *it_list << std::endl;
		++it_list;
	}
}

int main()
{
	std::cout << "--- MutantStack ---" << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	test_list();
	test_const(mstack);

	return 0;
}
