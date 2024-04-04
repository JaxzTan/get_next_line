/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:35:37 by chtan             #+#    #+#             */
/*   Updated: 2024/04/04 12:30:39 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strcpy(char *dest, char *src)
{
	size_t	i;

	i = 0;
	while (*(src + i++))
		*(dest + i - 1) = *(src + i - 1);
	*(dest + i - 1) = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	len = i + j + 1;
	result = (char *)malloc (len);
	if (!result)
		return (NULL);
	ft_strcpy(result, (char *)s1);
	ft_strcpy(result + i, (char *)s2);
	return (result);
}

void	*ft_memset(void *str, int c, size_t n)
{
	char	*s;
	size_t	i;

	i = 0;
	s = (char *)str;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (str);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	n;
	void	*p;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (count > 2147483647 / size)
		return (NULL);
	n = count * size;
	p = malloc(n);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, n);
	return (p);
}
