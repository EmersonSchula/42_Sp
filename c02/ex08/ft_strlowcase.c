/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:31:21 by eschula           #+#    #+#             */
/*   Updated: 2024/08/29 11:08:12 by eschula          ###   ########.fr       */
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

/*int	main(int argc, char **argv)
{
	if (argc != 2)
        {
                char    *e = "insira 1 argumento!";
                printf("%s\n", e);
		return (0);
        }
	char	*a = argv[1];
	char	*r = ft_strlowcase(a);

	printf("%s\n", r);
	return (0);
}*/
