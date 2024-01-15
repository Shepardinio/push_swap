/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:25:27 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/15 18:33:17 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	is_duplicate(t_stack **stack, long nbr)
{
	t_stack *tmp;

	tmp = *stack;
	while (tmp)
	{
		printf("%d\n", tmp->nb);
		if ((int)nbr == tmp->nb)
			error_exit(stack);
		tmp = tmp->next;
	}
}