/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reursive_factorial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 09:39:46 by kkara             #+#    #+#             */
/*   Updated: 2020/07/13 12:13:50 by kkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{	
		return (0);
	}
	else if (nb <= 1)
	{
		return (1);
	}
	else
	{	
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

