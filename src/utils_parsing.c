/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:25:27 by mel-yand          #+#    #+#             */
/*   Updated: 2024/02/05 13:35:02 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ps_atoi(const char *str, int *error)
{
	int	n;
	int	value;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	n = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			n = -n;
		++str;
	}
	value = 0;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		if ((value >= __INT_MAX__ / 10)
			&& (((n == 1 && (*str - 48) > 7)
					|| (n == -1 && (*str - 48) > 8))))
			return (*error = 1, 0);
		value = value * 10 + (*str - 48);
		++str;
	}
	return (*error = 0, value * n);
}

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
	int	nbr;
	int	error;

	if (!ft_isnumeric(str))
		return (1);
	nbr = ps_atoi(str, &error);
	if (error == 1)
		return (1);
	if (!is_duplicate(*stack_a, nbr))
		return (1);
	if (!stackadd_back(stack_a, nbr))
		return (1);
	return (0);
}
