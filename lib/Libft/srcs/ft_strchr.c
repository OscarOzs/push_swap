/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 14:42:27 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 14:47:44 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = 0;
	res = NULL;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
		{
			res = (char *)&s[i];
			return (res);
		}
		i++;
	}
	if (s[i] == (unsigned char)c)
	{
		res = (char *)&s[i];
		return (res);
	}
	return (NULL);
}
