/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 09:03:00 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/13 09:10:11 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power){
	if(power < 0)
		return (0); 

	if(power == 0 && nb != 0)
		return 1;

	if(power == 1){
		return nb;
	}
	if(power > 1){
		return nb*ft_recursive_power(nb, power - 1);
	}
}
