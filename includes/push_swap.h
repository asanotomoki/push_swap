/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:43:45 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/09/24 05:20:35 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
#include <stdio.h>

typedef struct s_swap
{
	long			val;
	struct s_swap	*next;
	struct s_swap	*prev;	
}	t_swap;

void sa(t_swap *stack_a);
void sb(t_swap *stack_b);
void ss(t_swap *stack_a, t_swap *stack_b);

void ra(t_swap *stack_a);
void rb(t_swap *stack_b);
void rr(t_swap *stack_a, t_swap *stack_b);

void rra(t_swap *stack_a);
void rrb(t_swap *stack_b);
void rrr(t_swap *stack_a, t_swap *stack_b);

void pa(t_swap *stack_a, t_swap *stack_b);
void pb(t_swap *stack_b, t_swap *stack_a);

t_swap *ft_first_elem(t_swap *stack);
t_swap *ft_last_elem(t_swap *stack);
t_swap *ft_new_elem(long num);
t_swap *ft_last_elem(t_swap *stack);
void	ft_push_front(t_swap *stack, t_swap *new);
void ft_push_back(t_swap *stack, t_swap *new);
int create_stack(int argc, char **argv, t_swap *stack_a);
void init_stack(t_swap *stack);

int ft_error(char *err_msg);

int ft_isnum(char *num);
#endif
