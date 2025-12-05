/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masterg <masterg@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 09:40:03 by masterg           #+#    #+#             */
/*   Updated: 2025/12/05 09:54:37 by masterg          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *string;
	unsigned char *search_caracter;

	*string = str;
	*search_caracter = c;
	while (n > 0)
	{
		if (*string == *search_caracter)
			return ((void *)string);
		string++;
		n--;
	}
	return (NULL);
}