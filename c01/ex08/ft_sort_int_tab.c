/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:01:22 by eschula           #+#    #+#             */
/*   Updated: 2024/08/25 16:31:33 by eschula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	j = 0;
	while (j < size - 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}

/*int	main(void)
{
	int	num[8] = {8,6,4,2,7,5,3,1};
	ft_sort_int_tab(num, 8);
	
	int i;
       
	i = 0;
	while (i < 8)
	{
		printf("%d", num[i]);
		i++;
	}
	return 0;
}*/
