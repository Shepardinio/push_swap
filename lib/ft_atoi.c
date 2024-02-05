/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:54:35 by mel-yand          #+#    #+#             */
/*   Updated: 2024/02/05 13:21:02 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	value;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	n = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = -n;
		i++;
	}
	value = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		value = value * 10 + (str[i] - 48);
		i++;
	}
	return (value * n);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
    char tab0[] = "           -42ad54";
    char tab1[] = "           +42475ad54";
    char tab2[] = "           -2147483647dskdj";
    char tab3[] = "           +0";
    char tab4[] = "           -2147483648dskdj";
    char tab5[] = "           --233";

    printf("%d:%d\n", ft_atoi(tab0), atoi(tab0));
    printf("%d:%d\n", ft_atoi(tab1), atoi(tab1));
    printf("%d:%d\n", ft_atoi(tab2), atoi(tab2));
    printf("%d:%d\n", ft_atoi(tab3), atoi(tab3));
    printf("%d:%d\n", ft_atoi(tab4), atoi(tab4));
    printf("%d:%d\n", ft_atoi(tab5), atoi(tab5));
    return (0);
}*/