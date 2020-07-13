/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 08:49:32 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/13 08:59:00 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power){
	if( power < 0){
		return 0;
	}

	if(power == 0)
		return nb;

	if(power >= 1){
		int hold = nb;
		while(power > 1){
			nb *= hold;
			power--;
		}
	}
	return nb; //default return prior to the last if statement
	}
