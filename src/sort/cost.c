/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:23:52 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/31 19:58:57 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// void	redefine_cost(t_stack *a, t_stack *b, int len_a, int len_b)
// {
// 	int	tmp_cost;
// 	int	cheap;

// 	tmp_cost = 0;
// 	if (a->above == 0 && a->target->above == 0)
// 	{
// 		if (a->index >= a->target->index)
// 			a->cost -= a->target->index;
// 		else
// 			a->cost -= a->index;
// 	}
// 	if (a->above == 1 && a->target->above == 1)
// 	{
// 		if (a->index <= a->target->index)
// 			a->cost -= (len_b - a->target->index);
// 		else
// 			a->cost -= (len_a - a->index);
// 	}
// }
