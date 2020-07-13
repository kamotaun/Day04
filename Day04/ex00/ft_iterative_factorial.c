/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 08:21:13 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/13 08:36:37 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb){
	
	if(nb == 0)
		return (1);
	else
	if(nb >= 1)
	{
		int i = nb;
		while(i > 1)
			{
				nb *= i - 1;
				i--;
			}

	}else
		return (0);

	return (nb); //factorial of legal inputs
}

