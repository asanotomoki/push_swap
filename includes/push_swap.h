/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:43:45 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/08 05:39:04 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include"libft.h"
# include <stdbool.h>

# define PA		2
# define PB		3
# define SA		4
# define SS		5
# define SB		6
# define RA		7
# define RR		8
# define RB		9
# define RRA	10
# define RRR	11
# define RRB	12

typedef struct s_stack
{
	int				val;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

typedef struct s_dswap
{
	t_stack	*a;
	t_stack	*b;
	t_stack	*ans;
	size_t	size;
	int		min;
	int		max;
}	t_dswap;

void	format6(t_dswap *data);

void	sa(t_dswap *data);
void	sb(t_dswap *data);
void	ss(t_dswap *data);

void	ra(t_dswap *data);
void	rb(t_dswap *data);
void	rr(t_dswap *data);

void	rra(t_dswap *data);
void	rrb(t_dswap *data);
void	rrr(t_dswap *data);

void	pa(t_dswap *data);
void	pb(t_dswap *data);

t_stack	*ft_first_elem(t_stack *stack);
t_stack	*ft_last_elem(t_stack *stack);
t_stack	*ft_new_elem(int num);
t_stack	*ft_last_elem(t_stack *stack);
void	ft_push_front(t_stack *stack, t_stack *new);
void	ft_push_back(t_stack *stack, t_stack *new);
t_stack	*ft_pop_front(t_stack *stack);
t_stack	*ft_pop_back(t_stack *stack);
void	create_stack(int argc, char **argv, t_dswap *data);
t_stack	*init_stack(t_stack *stack);

int		ft_error(char *err_msg);

int		ft_isnum(char *num);
bool	ft_check_stack_2elems(t_stack *stack);
bool	ft_isasc(t_stack *stack, t_stack *start);
bool	ft_isdesc(t_stack *stack, t_stack *start);

int		*quicksort(t_dswap *data);
void	move_top(t_dswap *data, int min, int max, size_t size);
void	main_sort(t_dswap *data);
void	print_list(t_stack *list);

size_t	get_size(t_stack *stack);
int		get_ans(t_dswap *data);
int		get_ans_quarter(t_dswap *data);
int		get_pibot(int min, int max);
int		get_max(t_stack *stack, size_t size);
void	allsort(t_dswap *data, int ans);
void	b_quick_sort(t_dswap *data, int min);
int		b_ans_decide(t_dswap *data, int ans);
int		a_ans_decide(t_dswap *data, int ans);

void	put_ans(t_stack *ans);

void	check_ans(t_stack *ans);
bool	check_papb(t_stack *ans);
bool	check_pbpa(t_stack *ans);
bool	check_rr(t_stack *ans);
bool	check_rrr(t_stack *ans);
bool	check_ss(t_stack *ans);
bool	check_pbrapa(t_stack *ans);
void	del_rotate(t_stack *ans);
void	del_reverse(t_stack *ans);
void	del_swap(t_stack *ans);
void	del_push(t_stack *ans);
void	del_pbrapa(t_stack *ans);
void	del_ans(t_stack *ans);
#endif
