/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:17:51 by amanet            #+#    #+#             */
/*   Updated: 2026/10/19 15:32:28 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	if (nb == 0)
		return (0);
	res = nb;
	i = 1;
	while (nb != i)
	{
		res = res * (nb - i);
		i++;
	}
	return (res);
}
/*
#include <stdio.h>

int main()
{
	int a;

	a = ft_iterative_factorial(3);
	printf("%d", a);
	return (0);
}*/
