/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_b.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:55:04 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/29 19:37:27 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	find_target_b(t_stack *b, t_stack *a)
{
	t_stack		*target;
	t_stack		*tmp_a;
	long int	close;

	tmp_a = a;
	close = LONG_MAX;
	while (tmp_a)
	{
		if (tmp_a->nb > b->nb && tmp_a->nb < close)
		{
			close = tmp_a->nb;
			target = tmp_a;
		}
		tmp_a = tmp_a->next;
	}
	if (close == LONG_MAX)
		b->target = get_lowest(a);
	else
		b->target = target;
}

void	b_to_a(t_stack **b, t_stack **a)
{
	t_stack *target;
	set_index(a);
	set_index(b);
	find_target_b(*b, *a);
	target = (*b)->target;
	node_top_a(a, target);
	pa(a, b);
}