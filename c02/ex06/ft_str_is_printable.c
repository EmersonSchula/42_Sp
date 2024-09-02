/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:10:42 by eschula           #+#    #+#             */
/*   Updated: 2024/08/28 17:06:46 by eschula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_printable("Emerson"));
	printf("%d\n", ft_str_is_printable("émerson"));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("42 São Paulo"));
	printf("%d\n", ft_str_is_printable("42 Sp"));
	return (0);
}*/
