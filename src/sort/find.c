/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:20:13 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/22 12:25:16 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	set_index(t_stack **stack)
{
	t_stack	*tmp;
	int		i;
	int		len;

	
}

t_stack	*get_highest(t_stack *stack)
{
	t_stack	*highest;

	highest = stack;
	while (stack->next)
	{
		if (highest->nb < stack->nb)
			highest = stack;
		stack = stack->next;
	}
	if (highest->nb < stack->nb)
		highest = stack;
	return (highest);
}