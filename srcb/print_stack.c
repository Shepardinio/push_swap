/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:06:34 by mel-yand          #+#    #+#             */
/*   Updated: 2024/02/01 19:35:50 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap_bonus.h"

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
