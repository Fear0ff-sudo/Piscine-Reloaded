/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:41:13 by amanet            #+#    #+#             */
/*   Updated: 2026/10/19 14:46:55 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else if (n < 0)
		ft_putchar('N');
}
/*
int	main(void)
{
	ft_is_negative(42);
	ft_is_negative(0);
	ft_is_negative(-42);
}*/
