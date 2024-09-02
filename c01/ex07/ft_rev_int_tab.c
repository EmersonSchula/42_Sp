/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:07:42 by eschula           #+#    #+#             */
/*   Updated: 2024/08/25 13:43:01 by eschula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size -1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

/*int	main(void)
{
	int	num[8] = {8,7,6,5,4,3,2,1};
	ft_rev_int_tab(num, 8);
	int	i = 0;
	while(i < 8)
	{
	printf("%d", num[i]);
	i++;
	}
	return 0;
}*/
