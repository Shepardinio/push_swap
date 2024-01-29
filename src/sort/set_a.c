/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:22:48 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/29 10:32:07 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	cost_a(t_stack *a, t_stack *b)
{
	int	len_a;
	int	len_b;
	int	cost;

	len_a = stack_len(a);
	len_b = stack_len(b);
	while (a)
	{
		cost = 0;
		if (a->index < len_a / 2)
			cost += a->index;
		else
			cost += len_a - a->index;
		if (a->target->index < len_b / 2)
			cost += a->target->index;
		else
			cost += len_b - a->target->index;
		a->cost = cost;
		a = a->next;
	}
}

void	find_target_a(t_stack *a, t_stack *b)
{
	t_stack		*target;
	t_stack		*tmp_b;
	long int	close;

	while (a)
	{
		tmp_b = b;
		close = LONG_MIN;
		while (tmp_b)
		{
			if (tmp_b->nb < a->nb && tmp_b->nb > close)
			{
				close = tmp_b->nb;
				target = tmp_b;
			}
			tmp_b = tmp_b->next;
		}
		if (close == LONG_MIN)
			a->target = get_highest(b);
		else
			a->target = target;
		a = a->next;
	}
}

void	set_cheapest(t_stack *a)
{
	long int	cost;
	t_stack		*tmp;
	t_stack		*cheapest;

	tmp = a;
	cost = LONG_MAX;
	while (tmp)
	{
		if (tmp->cost < cost)
		{
			cheapest = tmp;
			cost = tmp->cost;
		}
		tmp = tmp->next;
	}
	cheapest->cheap = 1;
}

void	get_cost_a(t_stack **a, t_stack **b)
{
	set_index(a);
	set_index(b);
	find_target_a(*a, *b);
	cost_a(*a, *b);
	set_cheapest(*a);
}