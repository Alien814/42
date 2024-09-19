/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spernet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:14:48 by spernet           #+#    #+#             */
/*   Updated: 2024/09/15 17:18:14 by spernet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 0;
	result = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str [i] == '\n'
		|| str[i] == '\v' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str [i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - '0');
	return (sign * result);
}
/*
#include <stdio.h>
int main()
{
	char *test_str = " ---+--+1234ab567";
	int result = ft_atoi(test_str);
	printf("ft_atoi(\"%s\") = %d\n", test_str, result);
	return (0);
}
*/