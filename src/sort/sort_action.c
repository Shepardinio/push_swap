/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_action.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:20:13 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/28 18:43:23 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rotate_both(t_stack **a, t_stack **b, t_stack *cheap)
{
	while (*a != cheap && *b != cheap->target)
		rr(a, b);
	set_index(a);
	set_index(b);
}

void	reverse_both(t_stack **a, t_stack **b, t_stack *cheap)
{
	while (*a != cheap && *b != cheap->target)
		rrr(a, b);
	set_index(a);
	set_index(b);
}

void	node_top_a(t_stack **a, t_stack *cheap)
{
	while (*a != cheap)
	{
		if (cheap->above == 0)
			ra(a);
		else
			rra(a);
	}
}

void	node_top_b(t_stack **b, t_stack *cheap)
{
	while (*b != cheap)
	{
		if (cheap->above == 0)
			rb(b);
		else
			rrb(b);
	}
}

void	a_to_b(t_stack **a, t_stack **b)
{
	t_stack	*cheap;

	cheap = find_cheapest(*a);
	if	(cheap->above == 0 && cheap->target->above == 0)
		rotate_both(a, b, cheap);
	else if (cheap->above == 1 && cheap->target->above == 1)
		reverse_both(a, b, cheap);
	node_top_a(a, cheap);
	node_top_b(b, cheap->target);
	pb(b, a);
}