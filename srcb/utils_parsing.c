/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:25:27 by mel-yand          #+#    #+#             */
/*   Updated: 2024/02/01 19:35:56 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap_bonus.h"

int	is_duplicate(t_stack *stack, long nbr)
{
	if (!stack)
		return (1);
	while (stack)
	{
		if ((int)nbr == stack->nb)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	check_error(t_stack **stack_a, char *str)
{
	long long	nbr;

	if (!ft_isnumeric(str))
		return (1);
	nbr = ft_atol(str);
	if (nbr < INT_MIN || nbr > INT_MAX)
		return (1);
	if (!is_duplicate(*stack_a, nbr))
		return (1);
	if (!stackadd_back(stack_a, nbr))
		return (1);
		
	return (0);
}
