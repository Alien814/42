/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spernet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:00:28 by spernet           #+#    #+#             */
/*   Updated: 2024/09/15 14:12:22 by spernet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			(str[i] = str[i] -32);
		i++;
	}
	return (str);
}
/* 
int main(void)
{
	char str[] ="geyfygd6y";

	 ft_strupcase(str);
	 return(0);
}
*/
