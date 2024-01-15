/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emauduit <emauduit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:56:37 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/15 15:39:43 by emauduit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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