/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:20:58 by amanet            #+#    #+#             */
/*   Updated: 2026/10/20 12:55:03 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_putchar(char c);
// void ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] - s2[i] < 0)
			return (-1);
		if (s1[i] - s2[i] > 0)
			return (1);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*swap;

	swap = *s1;
	*s1 = *s2;
	*s2 = swap;
}

int	main(int argv, char **argc)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (j < argv)
	{
		while (i < argv -1)
		{
			if (ft_strcmp(argc[i], argc[i + 1]) > 0)
				ft_swap(&argc[i], &argc[i + 1]);
			i++;
		}
		i = 1;
		j++;
	}
	i = 0;
	while (i < argv -1)
	{
		ft_putstr(argc[i + 1]);
		i++;
	}
	return (0);
}
