/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chguerre <chguerre@student.lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 21:30:45 by masterg           #+#    #+#             */
/*   Updated: 2025/12/09 19:12:02 by chguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, char c)
{
	char	*dernier_mach;

	dernier_mach = NULL;
	while (*str != '\0')
	{
		if (*str == c)
		{
			dernier_mach = (char *) str;
		}
		str++;
	}
	if (c == '\0')
		dernier_mach = (char *) str;
	return (dernier_mach);
}
