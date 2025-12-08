/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sailmaster </var/spool/mail/sailmaster>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 20:49:05 by sailmaster        #+#    #+#             */
/*   Updated: 2025/12/08 10:03:57 by sailmaster       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	freememory(char **str)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return ;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	*get_new_word(const char **s, char c)
{
	size_t	len;
	char	*start;
	char	*word;

	while (**s == c)
		(*s)++;
	start = (char *)*s;
	len = 0;
	while (**s != c)
	{
		len++;
		(*s)++;
	}
	word = ft_substr(start, 0, len);
	return (word);
}

size_t	countwords(char const *s, char c)
{
	size_t	count;
	bool	insideword;

	count = 0;
	while (*s)
	{
		insideword = false;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			if (!insideword)
			{
				insideword = true;
				count++;
			}
			s++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	qywords;
	char	**arraystring;
	size_t	i;
	char	*temp;

	qywords = countwords(s, c);
	arraystring = (char **)malloc((qywords + 1) * sizeof(char *));
	if (!arraystring)
		return (NULL);
	i = 0;
	while (i < qywords)
	{
		temp = get_new_word((const char **)&s, c);
		if (temp != NULL)
			arraystring[i] = temp;
		else
		{
			freememory(arraystring);
			return (NULL);
		}
		i++;
	}
	arraystring[qywords] = '\0';
	return (arraystring);
}

int	main(void)
{
	char	*str;
	char	separador;
	char	**resultado;
	int		i;

	str = "__Hola_ soy un nuevo texto.";
	separador = ' ';
	printf("La cadena completa es %s\n", str);
	countwords(str, separador);
	resultado = ft_split(str, separador);
	i = 0;
	while (resultado[i] != NULL)
	{
		printf("%s\n", resultado[i]);
		i++;
	}
	freememory(resultado);
	return (0);
}
