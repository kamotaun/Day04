/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 08:39:42 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/13 08:47:24 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb){
	if (nb == 0 || nb == 1)
		return 1;
	else
		if(nb < 0)
			return 0;

	if(nb > 1){
		return ((nb)*(ft_recursive_factorial(nb - 1));
				}
	}
