/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:56:37 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/15 18:33:59 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_parsequote(t_stack **stack, char *argv)
{
	int		i;
	int		count;
	long	nbr;

	i = 0;
	count = 0;
	int j = 0;
	if (!argv[i])
		return ;
	while (argv[i] == ' ')
	{
		if (!argv[i + 1])
			return ;
		i++;
	}
	while (argv[j] && (ft_isdigit(argv[j])))
	{
		count++;
		j++;
	}
	nbr = ft_atol(argv + i, count);
	if (nbr < INT_MIN || nbr > INT_MAX)
		error_exit(stack);
	stackadd_back(stack, nbr);
	count = 0;
	while (argv[i] && (ft_isdigit(argv[i]) || argv[i] == ' '))
	{
		count++;
		// printf("count = %d\n", count);
		if (argv[i + 1] == ' ')
		{	
			i++;
			// printf("argv + i = %s\n", argv + i - count);
			nbr = ft_atol(argv + i, count);
			if (nbr < INT_MIN || nbr > INT_MAX)
				error_exit(stack);
			// is_duplicate(stack, nbr);
			stackadd_back(stack, nbr);
			count = 0;
		}
		i++;
		while (argv[i] == ' ')
			i++;
	}
}

t_stack	*stack_last(t_stack *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack->next)
	{
		stack = stack->next;
	}
	return (stack);
}

void	stackadd_back(t_stack **stack, int nbr)
{
	t_stack	*new;
	t_stack	*last;

	if (stack == NULL)
		return ;
	new = malloc(sizeof(t_stack));
	if (new == NULL)
		return ;
	new->nb = nbr;
	new->next = NULL;
	if (*stack == NULL)
		*stack = new;
	else
	{
		last = stack_last(*stack);
		last->next = new;
	}
}

// int main()
// {
// 	t_stack *list;
// 	t_stack *tmp;
	
// 	list = NULL;
// 	stackadd_back(&list, 139);
// 	stackadd_back(&list, 13);
// 	stackadd_back(&list, 12);
// 	tmp = list;
// 	while (tmp)
// 	{
// 		printf("%d\n", tmp->nb);
// 		tmp = tmp->next;
// 	}
// 	return (0);
// }