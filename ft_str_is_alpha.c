/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spernet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:42:07 by spernet           #+#    #+#             */
/*   Updated: 2024/09/10 11:37:15 by spernet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 97 && str[i] <= 122)
				|| (str[i] >= 65 && str[i] <= 90)))
			return (0);
		else
		{
			i++;
		}
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] ="toucher00";
	printf("%d",ft_str_is_alpha(str) );
	return(0);
}
*/