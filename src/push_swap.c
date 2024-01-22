/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:51:28 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/22 12:11:32 by mel-yand         ###   ########.fr       */
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

	t_stack *tmp;
	if (argc <= 1)
		return (0);
	else if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (ft_putstr_fd("Error\n", 2), 1);
	stack_a = NULL;
	stack_b = NULL;
	arg_to_stack(&stack_a, argv);
	print_stack(stack_a, stack_b);
	printf("%d\n", stack_len(stack_a));
	tmp = get_highest(stack_a);
	printf("highest->%d\n", tmp->nb);
	sort_three(&stack_a);
	print_stack(stack_a, stack_b);
	free_stack(&stack_a);
	return (0);
}
