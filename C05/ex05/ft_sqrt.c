/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 21:09:11 by nrubin            #+#    #+#             */
/*   Updated: 2020/09/22 12:27:46 by nrubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	n;

	n = nb;
	i = 0;
	while (i * i <= n)
	{
		if ((i * i) == n)
			return (i);
		i++;
	}
	return (0);
}
