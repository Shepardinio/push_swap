/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:11:13 by mel-yand          #+#    #+#             */
/*   Updated: 2024/02/05 16:53:38 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_three(t_stack **stack)
{
	t_stack	*highest;

	highest = get_highest(*stack);
	if (highest->nb == (*stack)->nb)
		ra(stack);
	else if (highest->nb == (*stack)->next->nb)
		rra(stack);
	if ((*stack)->nb > (*stack)->next->nb)
		sa(stack);
}

void	sort(t_stack **a, t_stack **b)
{
	if (!is_sorted_stack(a) && stack_len(*a) > 3)
		pb(b, a);
	if (!is_sorted_stack(a) && stack_len(*a) > 3)
		pb(b, a);
	while (!is_sorted_stack(a) && stack_len(*a) > 3)
	{
		get_cost_a(a, b);
		a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
		b_to_a(b, a);
	node_top_a(a, get_lowest(*a));
}
