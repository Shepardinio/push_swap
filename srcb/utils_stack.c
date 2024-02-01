/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:56:37 by mel-yand          #+#    #+#             */
/*   Updated: 2024/02/01 19:36:01 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap_bonus.h"

int	is_sorted_stack(t_stack **stack)
{
	t_stack *tmp;

	tmp = *stack;
	while (tmp->next)
	{
		if (tmp->nb > tmp->next->nb)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	stack_len(t_stack *stack)
{
	t_stack *tmp;
	int		i;

	if (!stack)
		return (0);
	tmp = stack;
	i = 1;
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

t_stack	*stack_last(t_stack *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack->next)
	{
		stack = stack->next;
	}
	return (stack);
}

int	stackadd_back(t_stack **stack, int nbr)
{
	t_stack	*new;
	t_stack	*last;

	if (stack == NULL)
		return (0);
	new = malloc(sizeof(t_stack));
	if (new == NULL)
		return (0);
	new->nb = nbr;
	new->next = NULL;
	if (*stack == NULL)
		*stack = new;
	else
	{
		last = stack_last(*stack);
		last->next = new;
	}
	return (1);
}
