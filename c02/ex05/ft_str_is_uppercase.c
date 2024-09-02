/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:55:11 by eschula           #+#    #+#             */
/*   Updated: 2024/08/28 17:05:37 by eschula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*int main(void)
{
    printf("%d\n", ft_str_is_uppercase("ABC"));
    printf("%d\n", ft_str_is_uppercase("abc"));
    printf("%d\n", ft_str_is_uppercase("EMERSON"));
    printf("%d\n", ft_str_is_uppercase("42"));
    printf("%d\n", ft_str_is_uppercase(""));
    printf("%d\n", ft_str_is_uppercase("HELLO WORLD"));
    return (0);
}*/
