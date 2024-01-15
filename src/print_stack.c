/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emauduit <emauduit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:06:34 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/15 15:28:29 by emauduit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print_stack(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*current_a;
	t_stack	*current_b;

	current_a = stack_a;
	current_b = stack_b;
	while (current_a || current_b)
	{
		if (current_a)
		{
			printf("%d ", current_a->nb);
			current_a = current_a->next;
		}
		else
			printf("_  ");
		printf("    ");
		if (current_b)
		{
			printf("%d", current_b->nb);
			current_b = current_b->next;
		}
		else
			printf("_");
		printf("\n");
	}
	printf("A      B\n");
}

// #include "./include/push_swap.h"

// int		arg_to_stack(t_stack **stack, char **argv)
// {
// 	long	nbr;
// 	int		i;

// 	i = 0;
// 	while (argv[i])
// 	{
// 		if (!ft_isnumeric(argv[i]))
// 			error_exit(stack);
// 		nbr = ft_atol(argv[i]);
// 		if (nbr < INT_MIN || nbr > INT_MAX)
// 			error_exit(stack);
// 		stackadd_back(stack, nbr);
// 	}
// 	return (0);
// }

// int	main(int argc, char **argv)
// {
// 	t_stack *stack_a;
// 	t_stack *stack_b;

// 	if (argc <= 1)
// 		return (0);
// 	else if (argc == 2 && !argv[1][0])
// 		return (ft_putstr_fd("Error\n", 2), 1);
// 	stack_a = NULL;
// 	stack_b = NULL;
// 	arg_to_stack(&stack_a, argv);
// 	print_stack(stack_a, stack_b);
// }