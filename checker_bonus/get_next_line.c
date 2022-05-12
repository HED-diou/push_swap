/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:23:38 by hed-diou          #+#    #+#             */
/*   Updated: 2022/03/29 15:21:09 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

#define BUFFER_SIZE 1

int	is_new_line(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

static void	ft_free(char **s1, char **s2)
{
	free(*s1);
	free (*s2);
	*s1 = NULL;
	*s2 = NULL;
}

static void	free_one(char **s1)
{
	free(*s1);
	*s1 = NULL;
}

void	get_new_line(char **s, char **buff, char **line, int fd)
{
	char	*tmp;
	ssize_t	ret;

	ret = 1;
	while (ret && (is_new_line(*s) == -1))
	{
		ret = read(fd, *buff, BUFFER_SIZE);
		(*buff)[ret] = '\0';
		*s = ft_strjoin(*s, *buff);
	}
	free(*buff);
	if (ret == 0)
	{
		*line = ft_strdup(*s);
		free_one(s);
	}
	else
	{
		*line = ft_substr(*s, 0, is_new_line(*s) + 1);
		tmp = *s;
		*s = ft_strdup(*s + is_new_line(*s) + 1);
		free(tmp);
	}
	if (!(**line))
		ft_free(s, line);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*s;
	char		*buff;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	if (read(fd, buff, 0) == -1)
	{
		free(buff);
		buff = NULL;
		return (NULL);
	}
	if (!s)
		s = ft_strdup("");
	get_new_line(&s, &buff, &line, fd);
	return (line);
}
