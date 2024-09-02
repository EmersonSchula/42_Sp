/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:17:40 by eschula           #+#    #+#             */
/*   Updated: 2024/08/29 11:08:38 by eschula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	ft_strlowcase(str);
	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && j == 1)
		{
			str[i] = str[i] - 32;
			j = 0;
		}
		else if ((str[i] < 'a' || str[i] > 'z')
			&& (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
			j = 1;
		else
			j = 0;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	a[80] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char	*r = ft_strcapitalize(a);

	printf("%s\n", r);
	return (0);
}*/
