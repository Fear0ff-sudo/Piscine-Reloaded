/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:46:18 by amanet            #+#    #+#             */
/*   Updated: 2026/10/20 11:06:06 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%d\n", ft_strcmp("Hella", "Hello"));
	printf("%d", strcmp("Hella", "Hello"));
	return (0);
}*/
