/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:20:13 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/23 20:35:24 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	get_cost(t_stack *a, t_stack *b)
{
	
}

void	cost_target(t_stack *a, t_stack *b)
{
	t_stack		*target;
	t_stack		*tmp_b;
	t_stack		*s_hight;
	t_stack		*s_low;
	long int	close;

	while (a)
	{
		tmp_b = b;
		close = LONG_MIN;
		s_hight = get_highest(b);
		s_low = get_lowest(b);
		while (tmp_b)
		{
			if (tmp_b->nb < a->nb && tmp_b->nb > close)
			{
				close = tmp_b->nb;
				target = tmp_b;
			}
			tmp_b = tmp_b->next;
		}
		if ((a->nb < s_low->nb) || (a->nb > s_hight->nb))
			a->target = s_hight;
		else
			a->target = target;
		a = a->next;
	}
	get_cost(a, b);
}
