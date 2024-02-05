/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:25:27 by mel-yand          #+#    #+#             */
/*   Updated: 2024/02/05 20:25:04 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long long	ft_atoll(const char *str)
{
	int			i;
	int			n;
	long long	value;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	n = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = n * (-1);
		i++;
	}
	value = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		value = value * 10 + (str[i] - 48);
		if ((value * n) > INT_MAX || (value * n) < INT_MIN)
			return (LLONG_MAX);
		i++;
	}
	return (value * n);
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
	long long	nbr;

	if (!ft_isnumeric(str))
		return (1);
	nbr = ft_atoll(str);
	if (nbr == LLONG_MAX)
		return (1);
	if (!is_duplicate(*stack_a, nbr))
		return (1);
	if (!stackadd_back(stack_a, nbr))
		return (1);
	return (0);
}
