/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 21:21:37 by elfetoua          #+#    #+#             */
/*   Updated: 2019/04/14 21:21:39 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_strclr(char *s)
{
	int i;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
			s[i++] = '\0';
	}
}
