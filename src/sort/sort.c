/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:11:13 by mel-yand          #+#    #+#             */
/*   Updated: 2024/02/07 18:02:40 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort_low(t_stack **a, t_stack **b)
{
	if (stack_len(*a) == 4)
		sort_four(a, b);
	else if (stack_len(*a) == 5)
		sort_five(a, b);
}

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

void	sort_four(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	set_index(a);
	tmp = get_lowest(*a);
	node_top_a(a, tmp);
	pb(b, a);
	sort_three(a);
	pa(a, b);
}

void	sort_five(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	set_index(a);
	tmp = get_lowest(*a);
	node_top_a(a, tmp);
	pb(b, a);
	tmp = get_lowest(*a);
	node_top_a(a, tmp);
	pb(b, a);
	sort_three(a);
	pa(a, b);
	pa(a, b);
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
