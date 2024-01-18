/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:37:17 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/18 19:14:44 by mel-yand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
	int			nb;
	struct s_stack	*next;
}t_stack;

void	stackadd_back(t_stack **stack, int nbr);
t_stack	*stack_last(t_stack *stack);
void	error_exit(t_stack **stack);
void	free_split(char **arr);
void	print_stack(t_stack *stack_a, t_stack *stack_b);
void	check_error(t_stack **stack_a, char *str);
void	free_stack(t_stack **stack);
int		is_duplicate(t_stack *stack, long nbr);
void	swap(t_stack **stack);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_b, t_stack **stack_a);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	rotate(t_stack **stack);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	reverse_rotate(t_stack **stack);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

#endif