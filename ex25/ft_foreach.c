/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:40:05 by amanet            #+#    #+#             */
/*   Updated: 2026/10/20 15:48:09 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
// void ft_printnumber(int n)
// {
// 	printf("%d\n", n);
// }

// int	main(void)
// {
// 	int	tab[] = {0, 1, 2, 42};

// 	ft_foreach(tab, 4, ft_printnumber);
// 	return (0);
// }
