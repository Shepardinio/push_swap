/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:11:13 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/22 12:10:40 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_three(t_stack **stack)
{
	t_stack *highest;

	highest = get_highest(*stack);
	if (highest->nb == (*stack)->nb)
		ra(stack);
	else if (highest->nb == (*stack)->next->nb)
		rra(stack);
	if ((*stack)->nb > (*stack)->next->nb)
		sa(stack);
}