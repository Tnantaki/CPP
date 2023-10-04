/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:13:06 by marvin            #+#    #+#             */
/*   Updated: 2023/10/04 10:04:28by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

template<typename Container>
static void	prtConEle(Container& ctn)
{
	typename Container::iterator	it = ctn.begin();
	typename Container::iterator	ite = ctn.end();

	while (it != ite)
		std::cout << *it++ << ", ";
	std::cout << std::endl;
}

void	testCano()
{
	MutantStack<int>	mstk1;

	mstk1.push(10);
	mstk1.push(20);
	mstk1.push(30);
	mstk1.push(40);
	mstk1.push(50);
	std::cout << "### Mutant Stack 1" << std::endl;
	prtConEle(mstk1);

	MutantStack<int>	mstk2(mstk1);
	std::cout << "### Mutant Stack 2" << std::endl;
	prtConEle(mstk2);

	MutantStack<int>	mstk3;
	mstk3.push(5);
	mstk3.push(15);
	mstk3.push(25);
	mstk3 = mstk1;
	std::cout << "### Mutant Stack 3" << std::endl;
	std::cout << "Size: " << mstk3.size() << std::endl;
	prtConEle(mstk3);

	std::list<int>	lst;
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);
	lst.push_back(50);
	std::cout << "### List" << std::endl;
	prtConEle(lst);
}

int main()
{
	// testCano();
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

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
	return 0;
}