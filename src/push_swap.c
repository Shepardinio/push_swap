/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:51:28 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/23 19:34:24 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int		arg_to_stack(t_stack **stack_a, char **argv)
{
	int		i;
	int		j;
	char	**arr;

	i = 1;
	while (argv[i])
	{
		j = 0;
		arr = ft_split(argv[i], ' ');
		while (arr[j])
		{
			if (check_error(stack_a, arr[j]))
			{
				free_split(arr);
				error_exit(stack_a);
			}
			j++;
		}
		free_split(arr);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;
	// t_stack *tmp;

	if (argc <= 1)
		return (0);
	else if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (ft_putstr_fd("Error\n", 2), 1);
	stack_a = NULL;
	stack_b = NULL;
	arg_to_stack(&stack_a, argv);
	// pb(&stack_b, &stack_a);
	// pb(&stack_b, &stack_a);
	// pb(&stack_b, &stack_a);
	// pb(&stack_b, &stack_a);
	// pb(&stack_b, &stack_a);
	// pb(&stack_b, &stack_a);
	// pb(&stack_b, &stack_a);
	// pb(&stack_b, &stack_a);
	if (!is_sorted_stack(&stack_a))
	{
		if (stack_len(stack_a) == 2)
			sa(&stack_a);
		else if (stack_len(stack_a) == 3)
			sort_three(&stack_a);
		else
			sort(&stack_a, &stack_b);
	}

	// print_stack(stack_a, stack_b);
	// tmp = stack_a;
	// while (tmp)
	// {
	// 	printf("index->%d nb->%d target->%d aon->%d\n", tmp->index, tmp->nb, tmp->target->nb, tmp->above_or_not);
	// 	tmp = tmp->next;
	// }
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
