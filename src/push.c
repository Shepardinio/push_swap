/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:04:59 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/17 16:04:22 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *tmp;
	
	if (!*stack_a)
		return ;
	tmp = *stack_a;
	tmp->next = NULL;
	*stack_a = (*stack_a)->next;
	*stack_b = tmp;

	tmp->next = *stack_b;
}