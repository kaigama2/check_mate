/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utill_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadikwu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:46:16 by kadikwu           #+#    #+#             */
/*   Updated: 2022/02/21 13:49:05 by kadikwu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (ft_isdigit(str[i]))
	{
		result = result * 10;
		result = result + str[i] - 48;
		i++;
	}
	return (result);
}

int	len_num(long long n)
{
	int	result;

	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	result = 0;
	if (n < 0)
		result = 1;
	while (n)
	{
		result++;
		n /= 10;
	}
	return (result);
}

int	len_num_hex(unsigned long n)
{
	int	result;

	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	result = 0;
	while (n)
	{
		result++;
		n /= 16;
	}
	return (result);
}
