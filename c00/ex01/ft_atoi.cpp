/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:18:15 by mokhalil          #+#    #+#             */
/*   Updated: 2023/11/11 03:08:46 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int	ft_atoi(std::string str)
{
	unsigned long long	n;
	int					s;
	int					i;

	n = 0;
	s = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			return(-1);
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		n = (n * 10) + str[i] - '0';
		if (n > LLONG_MAX && s == 1)
			return (-1);
		if (n > LLONG_MAX && s == -1)
			return (-1);
		i++;
	}
	if (str[i])
		return (-1);
	return (n * s);
}
