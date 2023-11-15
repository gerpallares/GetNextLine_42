/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpallare <gpallare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:18:14 by gpallare          #+#    #+#             */
/*   Updated: 2023/11/09 11:04:38 by gpallare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int d)
{
	int		i;
	char	c;

	i = 0;
	c = (char)d;
	if (!str)
		return (NULL);
	while (str[i] != c && str[i] != '\0')
		i++;
	if (str[i] == c)
		return ((char *)&str[i]);
	else
		return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	if (!str)
		return (count);
	while (str[count] != '\0')
		count ++;
	return (count);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*r;
	size_t	i;
	size_t	j;
	size_t	cont;
	size_t	cont2;

	cont = 0;
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	r = malloc((i + j + 1) * sizeof(char));
	if (!r)
		return (ft_free(&s1));
	while (i > cont)
	{
		r[cont] = s1[cont];
		cont++;
	}
	cont2 = 0;
	while ((i + j) > cont)
		r[cont++] = s2[cont2++];
	r[i + j] = '\0';
	free(s1);
	return (r);
}

char	*ft_calloc(size_t count, size_t size)
{
	char	*mem;
	size_t	char_size;
	size_t	i;

	i = 0;
	char_size = count * size;
	mem = malloc(char_size);
	if (!mem)
		return (NULL);
	while ((i < char_size) && char_size > 0)
		mem[i++] = 0;
	return (mem);
}
