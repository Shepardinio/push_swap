/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:51:45 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/20 11:18:14 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*tmp;
	
	if (!*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

void	sa(t_stack **stack_a)
{
	swap(stack_a);
	printf("sa\n");
}

void	sb(t_stack **stack_b)
{
	swap(stack_b);
	printf("sb\n");
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	printf("ss\n");
}