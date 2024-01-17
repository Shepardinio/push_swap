/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:49:01 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/17 21:31:30 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*stack)
		return ;
	tmp = *stack;
	tmp->next = NULL;
	*stack = (*stack)->next;
	last = stack_last(*stack);
	last->next = tmp;
}