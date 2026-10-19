/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:01:20 by amanet            #+#    #+#             */
/*   Updated: 2026/10/19 16:12:52 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 1)
		return (nb);
	return (nb * ft_recursive_factorial(nb -1));
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d", ft_recursive_factorial(13));
	return (0);
}*/
