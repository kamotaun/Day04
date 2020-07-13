/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 10:56:58 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/13 11:42:45 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_find_next_prime(int nb){
	int np = nb + 1;
	if(np < 2)
		return (2);

	if(nb == 2)
		return (3);

	if(np > 2){
		int i = np;
		while(i >= 2){
			if(np%i == 0)
				ft_find_next_prime(np);
				i--;
		}
	}
	return np;
}
