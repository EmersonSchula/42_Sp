/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:34:51 by eschula           #+#    #+#             */
/*   Updated: 2024/08/29 15:32:50 by eschula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			if (str[i] < 'A' || str[i] > 'Z')
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_alpha(""));
	printf("%d\n", ft_str_is_alpha("Hello42"));
	printf("%d\n", ft_str_is_alpha("Emerson"));
	printf("%d\n", ft_str_is_alpha("1234"));
	printf("%d\n", ft_str_is_alpha("AbCdEfGhIjKlMnOpQrStUvWxYz"));
	printf("%d\n", ft_str_is_alpha("Hello_World"));
	return (0);
}*/
