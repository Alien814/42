/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spernet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:40:32 by spernet           #+#    #+#             */
/*   Updated: 2024/09/12 09:20:31 by spernet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	{
		while (s1[i] && s2[i])
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
		return (0);
	}
}
/*
int	main(void)
{
	char	s1[] = "troll";
	char	s2[] = "troll";

	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d",strcmp(s1, s2));
	return (0);
}
*/
