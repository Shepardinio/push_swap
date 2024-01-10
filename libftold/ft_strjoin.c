/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:37:43 by mel-yand          #+#    #+#             */
/*   Updated: 2023/11/27 17:01:06 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mal;
	size_t	size;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	mal = malloc(sizeof(char) * size);
	if (mal == NULL)
		return (NULL);
	ft_strlcpy(mal, s1, size);
	ft_strlcat(mal, s2, size);
	return (mal);
}

// int	main(void)
// {
//     const char *p;
// 	p = "hello";
// 	const char *s;
// 	s = "word";
//     char *tab = ft_strjoin(p, s);
//     if (tab == NULL)
//         return (printf("error alloction"));
//     printf("%s\n", tab);
//     free(tab);
//     return 0;
// }