/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:42:04 by eschula           #+#    #+#             */
/*   Updated: 2024/08/24 12:43:09 by eschula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	rest;

	result = *a / *b;
	rest = *a % *b;
	*a = result;
	*b = rest;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 5;
	ft_ultimate_div_mod(&x, &y);
	printf("%d\n", x);
	printf("%d\n", y);
	return (0);
}*/
