/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:55:38 by eschula           #+#    #+#             */
/*   Updated: 2024/08/28 17:04:46 by eschula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("emerson"));
	printf("%d\n", ft_str_is_lowercase("Hello World"));
	printf("%d\n", ft_str_is_lowercase("hello"));
	printf("%d\n", ft_str_is_lowercase("Hello"));
	printf("%d\n", ft_str_is_lowercase(""));
	printf("%d\n", ft_str_is_lowercase("123"));
	return (0);
}*/
