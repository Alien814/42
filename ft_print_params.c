/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spernet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:58:51 by spernet           #+#    #+#             */
/*   Updated: 2024/09/17 09:58:56 by spernet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
/*void	ft_putchar(char c)
{
	write (1, &c, 1);
}*/

int	main(int argc, char **argv)
{
	int	i;
	int j;
	
	i = 0;
	j = 1;
	while (j <= argc - 1)
	{
		if (argv[j][i] == '\0')
		{
			ft_putstr(argv[j]);
			j++;
		}
			i++;
		
	}
	return (0);
}