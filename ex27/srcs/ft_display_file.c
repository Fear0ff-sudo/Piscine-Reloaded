/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:02:45 by amanet            #+#    #+#             */
/*   Updated: 2026/10/20 16:40:02 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
}

int	ft_readfile(int fd)
{
	char	buffer[1024];
	ssize_t	bytes_read;

	bytes_read = read(fd, buffer, sizeof(buffer) - 1);
	if (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		ft_putstr(buffer);
	}
	else if (bytes_read == -1)
	{
		ft_putstr("Cannot read file.");
		return (1);
	}
	return (0);
}

int	main(int argv, char **argc)
{
	int	fd;

	if (argv <= 1)
		ft_putstr("File name missing.\n");
	else if (argv > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		fd = open(argc[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("Cannot read file.d\n");
			return (1);
		}
		if (ft_readfile(fd) == 1)
			return (1);
		close(fd);
		return (0);
	}
	return (1);
}
