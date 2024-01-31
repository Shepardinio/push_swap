/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yand <mel-yand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:37:17 by mel-yand          #+#    #+#             */
/*   Updated: 2024/01/30 17:14:38 by mel-yand         ###   ########.fr       */
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
	int			cost;
	int			index;
	int			above;
	int			cheap;
	struct s_stack	*next;
	struct s_stack	*target;
}t_stack;

int		stackadd_back(t_stack **stack, int nbr);
int		is_duplicate(t_stack *stack, long nbr);
t_stack	*stack_last(t_stack *stack);
t_stack	*get_highest(t_stack *stack);
t_stack *get_lowest(t_stack *stack);
int		stack_len(t_stack *stack);
int		is_sorted_stack(t_stack **stack);
void	sort_three(t_stack **stack);
void	sort(t_stack **s_a, t_stack **s_b);
void	set_index(t_stack **stack);

void	error_exit(t_stack **stack);
void	free_split(char **arr);
void	print_stack(t_stack *stack_a, t_stack *stack_b);
int		check_error(t_stack **stack_a, char *str);
void	free_stack(t_stack **stack);

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

void	get_cost_a(t_stack **a, t_stack **b);
void	find_target_a(t_stack *a, t_stack *b);
void	find_target_b(t_stack *b, t_stack *a);
void	cost_a(t_stack *a, t_stack *b);
void	set_cheapest(t_stack *a);
t_stack	*find_cheapest(t_stack *a);

void	a_to_b(t_stack **a, t_stack **b);
void	rotate_both(t_stack **a, t_stack **b, t_stack *cheap);
void	reverse_both(t_stack **a, t_stack **b, t_stack *cheap);
void	node_top_a(t_stack **a, t_stack *cheap);
void	node_top_b(t_stack **b, t_stack *cheap);
void	b_to_a(t_stack **b, t_stack **a);

#endif