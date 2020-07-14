/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:32:17 by kkara             #+#    #+#             */
/*   Updated: 2020/07/13 16:04:45 by kkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int		i;

	i = nb;
	if (nb < 0) 
	 {
		 return (0);
	 }
	if (nb == 0)
	{
		return (1);
	}
	while(power > 1)
	{
		i *= nb;
		power--;
	}
	return (i);
}

