/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spernet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:37:34 by spernet           #+#    #+#             */
/*   Updated: 2024/09/24 14:37:37 by spernet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
	
int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0'))
	{	
		i++;
	}
	return (s1[i] - s2[i]);
}
void ft_putstr(char *str)
{
	int i;

	i = 0;
	while   (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int j;
	char *tmp;
	
	i = 0;
	j = 1;
	if (argc >= 2 && argv[j] != NULL)
	{
		while(j <= argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				tmp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = tmp;
				j++;
			}
			else
				j++;
		}
		j = 1;
		while (argc <= j)
		{
			ft_putstr(argv[j]);
			j++;
		}
	}
	return (0);
}