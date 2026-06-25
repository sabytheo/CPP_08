#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> vec;
	vec.push_back(4);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(2);
	vec.push_back(10);

	try
	{
		std::cout << *easyfind(vec, 2) << std::endl;
		std::cout << *easyfind(vec, 10) << std::endl; /* code */
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

// int main(void)
// {
// 	std::set<int> set;
// 	set.insert(1);
// 	set.insert(2);
// 	set.insert(3);
// 	set.insert(10);

// 	try
// 	{
// 		std::cout << *easyfind(set,1) << std::endl;
// 		std::cout << *easyfind(set,10) << std::endl;/* code */
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}

// }
