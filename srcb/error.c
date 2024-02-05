/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:57:04 by mel-yand          #+#    #+#             */
/*   Updated: 2024/02/05 16:54:53 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap_bonus.h"

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	while (*stack)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
}

void	free_split(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	free(arr);
}

void	error_exit(t_stack **stack)
{
	free_stack(stack);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	error_checker(t_stack **a, t_stack **b, char *input)
{
	ft_putstr_fd("Error\n", 2);
	free(input);
	free_stack(a);
	free_stack(b);
	exit(1);
}
