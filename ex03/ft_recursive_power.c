/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:07:22 by kkara             #+#    #+#             */
/*   Updated: 2020/07/14 09:58:53 by kkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb,int power)
{
	if (power == 0)
	{
		return (1);
	}
	else if (power <= 0)
	{
		return (0);
	}
	else 
	{
		 return nb * ft_recursive_power(nb, power - 1);
	}
}

