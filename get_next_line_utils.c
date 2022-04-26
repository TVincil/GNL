/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvincile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 12:18:45 by tvincile          #+#    #+#             */
/*   Updated: 2022/04/25 17:35:19 by tvincile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_find_index(char *str, int c)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == (char)c)
			return (i);	
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (s == '\0')
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}

char	*ft_gnl_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*line;
	
	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if(!s1 || !s2)
		return (NULL);
	line = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!line)
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		line[i] = s1[i];
	j = 0;
	while (s2[j] != '\0')
		line[i++] = s2[j];
	line[i++] = '\0';
	free(s1);
	return (line);
}
