/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:57:34 by amanet            #+#    #+#             */
/*   Updated: 2026/10/20 13:40:31 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc(sizeof(char) * ft_strlen(src) + 1);
	dup[0] = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	src[i] = '\0';
	return (dup);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	str1[] = "toto";
// 	char	*str2 = ft_strdup(str1);

// 	printf("%s", str2);
// 	return (0);
// }
