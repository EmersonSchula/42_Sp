/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:21:21 by eschula           #+#    #+#             */
/*   Updated: 2024/08/28 17:01:53 by eschula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_numeric("12345"));
	printf("%d\n", ft_str_is_numeric("1.2345"));
	printf("%d\n", ft_str_is_numeric("42"));
	printf("%d\n", ft_str_is_numeric("12_3"));
	printf("%d\n", ft_str_is_numeric(""));
	printf("%d\n", ft_str_is_numeric("Emerson"));
	printf("%d\n", ft_str_is_numeric("42sp"));
	return (0);
}*/
