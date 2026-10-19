/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:18:44 by amanet            #+#    #+#             */
/*   Updated: 2026/10/19 16:33:50 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (nb != i * i)
		return (0);
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d", ft_sqrt(25));
	return (0);
}*/
