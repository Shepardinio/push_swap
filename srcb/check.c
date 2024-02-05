/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:39:31 by mel-yand          #+#    #+#             */
/*   Updated: 2024/02/05 16:54:43 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap_bonus.h"

void	ft_check_input(t_stack **a, t_stack **b, char *input)
{
	if (ft_strncmp(input, "sa\n", 3) == 0 && input[3] == '\0')
		sa(a);
	else if (ft_strncmp(input, "sb\n", 3) == 0 && input[3] == '\0')
		sb(b);
	else if (ft_strncmp(input, "ss\n", 3) == 0 && input[3] == '\0')
		ss(a, b);
	else if (ft_strncmp(input, "pa\n", 3) == 0 && input[3] == '\0')
		pa(a, b);
	else if (ft_strncmp(input, "pb\n", 3) == 0 && input[3] == '\0')
		pb(b, a);
	else if (ft_strncmp(input, "ra\n", 3) == 0 && input[3] == '\0')
		ra(a);
	else if (ft_strncmp(input, "rb\n", 3) == 0 && input[3] == '\0')
		rb(b);
	else if (ft_strncmp(input, "rr\n", 3) == 0 && input[3] == '\0')
		rr(a, b);
	else if (ft_strncmp(input, "rra\n", 4) == 0 && input[4] == '\0')
		rra(a);
	else if (ft_strncmp(input, "rrb\n", 4) == 0 && input[4] == '\0')
		rrb(b);
	else if (ft_strncmp(input, "rrr\n", 4) == 0 && input[4] == '\0')
		rrr(a, b);
	else
		error_checker(a, b, input);
}

void	ft_check(t_stack **a, t_stack **b, char *input)
{
	char	*tmp;

	while (input)
	{
		tmp = input;
		ft_check_input(a, b, input);
		free(tmp);
		input = get_next_line(0);
	}
	if (*b || !is_sorted_stack(a))
		ft_putstr_fd("KO\n", 1);
	else
		ft_putstr_fd("OK\n", 1);
	free(input);
}
