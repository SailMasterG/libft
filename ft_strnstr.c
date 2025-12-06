/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sailmaster </var/spool/mail/sailmaster>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 10:24:39 by sailmaster        #+#    #+#             */
/*   Updated: 2025/12/06 11:47:22 by sailmaster       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (*little == '\0')
		return ((char *)&big[i]);
	while (i < len && big[i] != '\0')
	{
		while (little[k] == big[k + i] && (k + i < len))
		{
			k++;
		}
		if (little[k] == '\0')
			return ((char *)&big[i]);
		k = 0;
		i++;
	}
	return (NULL);
}
