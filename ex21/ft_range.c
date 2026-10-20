/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:43:19 by amanet            #+#    #+#             */
/*   Updated: 2026/10/20 13:57:41 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	j;

	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * ((max) - min));
	i = 0;
	j = min;
	while (i < (max) - min)
	{
		range[i] = j;
		i++;
		j++;
	}
	return (range);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	i;
// 	int	*range;

// 	min = 0;
// 	max = 5;
// 	i = 0;
// 	range = ft_range(min, max);
// 	while (i < (max) - min)
// 	{
// 		printf("%d\n", range[i]);
// 		i++;
// 	}
// 	return (0);
// }
