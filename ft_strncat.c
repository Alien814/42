/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spernet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 08:49:51 by spernet           #+#    #+#             */
/*   Updated: 2024/09/12 09:31:51 by spernet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				a;
	int				b;
	unsigned int	i;

	a = 0;
	b = 0;
	i = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while ((src[b] != '\0') && (i < nb))
	{
		dest[a] = src[b];
		b++;
		a++;
		i++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
	int	main(void)
{
	char dest[10] = "cou";
	char *src = "cou";
	printf("%s", ft_strncat(dest, src, 1));
	return (0);
}
*/