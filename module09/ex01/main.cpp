/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:13:06 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 16:52:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	std::stack<int>	stk;
	std::string		str;

	if (ac != 2)
		return prtErrMsg("The program take 1 argument."), 1;
	std::istringstream	iss(av[1]);
	do {
		iss >> str;
		if (isNumbers(str))
			stk.push(atoi(str.c_str()));
		else if (isOperator(str))
			if (!operating(str[0], stk))
				return 1;
		else
			return prtErrMsg("Error : Numbers or Operator was wrong."), 1;
	} while (!iss.eof());
	if (stk.size() != 1)
		return prtErrMsg("Error : Wrong expression."), 1;
	std::cout << stk.top() << std::endl;
	return 0;
}