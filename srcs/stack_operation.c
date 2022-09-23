/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:12:22 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/09/24 06:45:44 by asanotomoki      ###   ########.fr       */
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