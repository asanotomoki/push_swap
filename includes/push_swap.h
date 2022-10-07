/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:43:45 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/07 18:35:05 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft.h"
#include <stdio.h>
#include <stdbool.h>

#define STACK_A 0
#define STACK_B 1
#define PA 2
#define PB 3
#define SA 4
#define SS 5
#define SB 6
#define RA 7
#define RR 8
#define RB 9
#define RRA 10
#define RRR 11
#define RRB 12
#define PUSH 13
#define SWAP 14
#define ROTATE 15
#define REVERSE 16

typedef struct s_stack
{
	int val;
	struct s_stack *next;
	struct s_stack *prev;
} t_stack;

typedef struct s_operation
{
	int val;
	struct s_answer *next;
} t_operation;

typedef struct s_dswap
{
	t_stack *a;
	t_stack *b;
	t_operation *a_cmd;
	t_operation *b_cmd;
	int min;
	int max;
	int median;
	size_t size;
} t_dswap;

void format6(t_dswap *data);

void sa(t_stack *stack_a);
void sb(t_stack *stack_b);
void ss(t_stack *stack_a, t_stack *stack_b);
void swap(t_stack *stack, int flag);

void ra(t_stack *stack_a);
void rb(t_stack *stack_b);
void rr(t_stack *stack_a, t_stack *stack_b);
void rotate(t_stack *stack, int flag);

void rra(t_stack *stack_a);
void rrb(t_stack *stack_b);
void rrr(t_stack *stack_a, t_stack *stack_b);
void reverse(t_stack *stack, int flag);

void pa(t_stack *stack_a, t_stack *stack_b);
void pb(t_stack *stack_a, t_stack *stack_b);

t_stack *ft_first_elem(t_stack *stack);
t_stack *ft_last_elem(t_stack *stack);
t_stack *ft_new_elem(int num);
t_stack *ft_last_elem(t_stack *stack);
void ft_push_front(t_stack *stack, t_stack *new);
void ft_push_back(t_stack *stack, t_stack *new);
t_stack *ft_pop_front(t_stack *stack);
t_stack *ft_pop_back(t_stack *stack);
void create_stack(int argc, char **argv, t_dswap *data);
t_stack *init_stack(t_stack *stack);

int ft_error(char *err_msg);

int ft_isnum(char *num);
bool ft_check_stack_2elems(t_stack *stack);
bool ft_isasc(t_stack *stack, t_stack *start);
bool ft_isdesc(t_stack *stack, t_stack *start);

int *quicksort(t_dswap *data);
void move_top(t_stack *stack, int min, int max, size_t size);
void main_sort(t_dswap *data);
void print_list(t_stack *list);
#endif
