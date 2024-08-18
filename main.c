/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:10:12 by chtan             #+#    #+#             */
/*   Updated: 2024/08/18 15:11:56 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("text.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("error");
		return (1);
	}
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	close(fd);
	return (0);
}
