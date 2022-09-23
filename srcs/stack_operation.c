/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:12:22 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/09/24 04:58:11 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_swap *ft_last_elem(t_swap *stack)
{
	return (stack->prev);
}

t_swap *ft_first_elem(t_swap *stack)
{
	return (stack->next);
}

t_swap *ft_new_elem(long val)
{
	t_swap *elem;

	elem = (t_swap *)malloc(sizeof(t_swap));
	if (elem == NULL)
		return (NULL);
	elem->val = val;
	elem->next = NULL;
	elem->prev = NULL;
	return (elem);
}

void ft_push_front(t_swap *stack, t_swap *new)
{
	t_swap *first_elem;

	if (new == NULL)
		return;
	first_elem = ft_first_elem(stack);
	first_elem->prev->next = new;
	first_elem->prev = new;
	new->next = first_elem;
	new->prev = stack;
}

void ft_push_back(t_swap *stack, t_swap *new)
{
	t_swap *last_elem;
	
	if (new == NULL)
		return ;
	last_elem = ft_last_elem(stack);
	last_elem->next->prev = new;
	last_elem->next = new;
	new->prev = last_elem;
	new->next = stack;
}

void init_stack(t_swap *stack)
{
	stack->next = stack->prev = stack;
	stack->val = 0;
}

int create_stack(int argc, char **argv, t_swap *stack_a)
{
	int i;
	t_swap *new;

	i = 0;
	argv++;
	while (i++ < argc - 1)
	{
		if (ft_isnum(*argv))
			ft_error("Bad argument");
		new = ft_new_elem(ft_atoi(*argv++));
		if (!new)
			ft_error("malloc error");
		ft_push_front(stack_a, new);
	}
	return (0);
}