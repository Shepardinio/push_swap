/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:25:27 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/17 13:05:10 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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

void	check_error(t_stack **stack_a, char *str)
{
	long	nbr;

	if (!ft_isnumeric(str))
		error_exit(stack_a);
	nbr = ft_atol(str);
	if (nbr < INT_MIN || nbr > INT_MAX)
		error_exit(stack_a);
	if (!is_duplicate(*stack_a, nbr))
		error_exit(stack_a);
	stackadd_back(stack_a, nbr);
}
