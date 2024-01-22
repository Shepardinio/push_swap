/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:20:13 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/22 17:25:18 by mel-yand         ###   ########.fr       */
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
		if (i < (len / 2))
			tmp->above_or_not = 0;
		else
			tmp->above_or_not = 1;
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

void	cost_target(t_stack *a, t_stack *b)
{
	t_stack		*target;
	t_stack		*tmp_b;
	long int	hight;

	while (a)
	{
		tmp_b = b;
		while (b)
		{
			
		}
	}
}