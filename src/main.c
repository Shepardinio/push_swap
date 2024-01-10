/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <leongudin@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:32:30 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/10 21:13:05 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

int		check_error(char **argv)
{
	long	nbr;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (!ft_isnumeric(argv[i])
			fonction qui free + exit;
		nbr = ft_atol(argv[i]);
		if (nbr < INT_MIN || nbr > INT_MAX)
			fonction qui free + exit;
	}
}

void	arg_to_stack(t_list **stack, char **argv)
{
	check_error(&argv);
	
}

int	main(int argc, char **argv)
{
	t_list *stack_a;
	t_list *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc <= 1)
		return (0);
	if (argc == 2 && !argv[1][0])
		return (ft_putchar_fd("Error\n", 2));
	arg_to_stack(&stack_a, argv);
}