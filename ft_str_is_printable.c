/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spernet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 08:32:16 by spernet           #+#    #+#             */
/*   Updated: 2024/09/15 14:09:37 by spernet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 127))
			return (0);
		else
		{
			i++;
		}
	}
	return (1);
}
/*
int	main(void)
{
	char str[] ="toucher91";

	ft_str_is_printable(str);
	return(0);
}
*/
