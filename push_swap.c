/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:32:30 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/11 21:11:53 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

int		arg_to_stack(t_list **stack, char **argv)
{
	long	nbr;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (!ft_isnumeric(argv[i]))
			error_exit(&stack);
		nbr = ft_atol(argv[i]);
		if (nbr < INT_MIN || nbr > INT_MAX)
			error_exit(&stack);
		
	}
}

int	main(int argc, char **argv)
{
	t_list *stack_a;
	t_list *stack_b;

	if (argc <= 1)
		return (0);
	else if (argc == 2 && !argv[1][0])
		return (ft_putstr_fd("Error\n", 2), 1);
	arg_to_stack(&stack_a, *argv);
	stack_a = NULL;
	stack_b = NULL;
}