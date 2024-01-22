/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:04:59 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/22 16:20:00 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	pb(t_stack **stack_b, t_stack **stack_a)
{
	t_stack	*tmp;
	
	if (!*stack_a)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = NULL;
	if (*stack_b)
		tmp->next = *stack_b;
	*stack_b = tmp;
	printf("pb\n");
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (!stack_b)
		return ;
	
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = NULL;
	if (*stack_a)
		tmp->next = *stack_a;
	*stack_a = tmp;
	printf("pa\n");
}