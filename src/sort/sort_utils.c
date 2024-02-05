/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:19 by mel-yand          #+#    #+#             */
/*   Updated: 2024/02/05 16:54:17 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	set_index(t_stack **stack)
{
	t_stack	*tmp;
	int		i;
	int		len;

	tmp = *stack;
	i = 0;
	len = stack_len(*stack);
	while (tmp)
	{
		tmp->index = i;
		tmp->cheap = 0;
		if (i < (len / 2))
			tmp->above = 0;
		else
			tmp->above = 1;
		tmp = tmp->next;
		i++;
	}
}

t_stack	*get_highest(t_stack *stack)
{
	t_stack	*highest;

	highest = stack;
	while (stack)
	{
		if (highest->nb < stack->nb)
			highest = stack;
		stack = stack->next;
	}
	return (highest);
}

t_stack	*get_lowest(t_stack *stack)
{
	t_stack	*lowest;

	lowest = stack;
	while (stack)
	{
		if (lowest->nb > stack->nb)
			lowest = stack;
		stack = stack->next;
	}
	return (lowest);
}

t_stack	*find_cheapest(t_stack *a)
{
	while (a)
	{
		if (a->cheap == 1)
			return (a);
		a = a->next;
	}
	return (NULL);
}
