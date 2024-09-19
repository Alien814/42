/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spernet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:43:02 by spernet           #+#    #+#             */
/*   Updated: 2024/09/12 09:16:10 by spernet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n && s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	{
		return (0);
	}
}
/*
int main(void)
{   
	char    s1[] = "troll";
	char    s2[] = "troel";
	unsigned n;

	n = 4;
	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d",strncmp(s1, s2, n));

    return (0);
}
*/
