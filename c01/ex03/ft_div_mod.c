/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:30:51 by eschula           #+#    #+#             */
/*   Updated: 2024/08/24 12:33:53 by eschula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	x;
	int	y;
	int	result;
	int	rest;

	x = 10;
	y = 5;
	ft_div_mod(x, y, &result, &rest);
	printf("%d\n", result);
	printf("%d\n", rest);
	return (0);
}*/
