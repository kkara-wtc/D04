/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkara <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 08:14:31 by kkara             #+#    #+#             */
/*   Updated: 2020/07/13 11:45:40 by kkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;

	i = 1;
	if (nb < 0)
	{	
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	while (nb > 0)
	{
		i *= nb --;
	}
	return (i);
}


