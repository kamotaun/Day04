/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 09:52:35 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/13 10:27:04 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index){
	if(index == 0)
		return 0;
	if(index == 1)
		return 1;
	else 
		if(index > 1)
			return ft_factorial(index - 1) + ft_fibonacci(index - 2);
}

