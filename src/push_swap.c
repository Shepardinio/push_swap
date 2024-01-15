/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:51:28 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/15 18:12:01 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		arg_to_stack(t_stack **stack, char **argv)
{
	// long	nbr;
	int		i;

	i = 1;
	while (argv[i])
	{
		// if (argv[i][0] == '\"')
		ft_parsequote(stack, argv[i]);
		// else
		// {
		// 	printf("argv[%d][0] = %c\n", i, argv[i][0]);
		// 	if (!ft_isnumeric(argv[i]))
		// 		error_exit(stack);
		// 	nbr = ft_atol(argv[i]);
		// 	if (nbr < INT_MIN || nbr > INT_MAX)
		// 		error_exit(stack);
		// 	stackadd_back(stack, nbr);
		// }
		i++;	
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;

	if (argc <= 1)
		return (0);
	else if (argc == 1 || !argv[1][0])
		return (ft_putstr_fd("Error\n", 2), 1);
	stack_a = NULL;
	stack_b = NULL;
	arg_to_stack(&stack_a, argv);
	print_stack(stack_a, stack_b);
}