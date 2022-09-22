/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:12:22 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/09/22 17:12:33 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_swap *ft_last_elem(t_swap *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}

t_swap *ft_new_elem(long num)
{
	t_swap *elem;

	elem = (t_swap *)malloc(sizeof(t_swap));
	if (elem == NULL)
		return (NULL);
	elem->num = num;
	elem->next = NULL;
	return (elem);
}

void	ft_elemadd_front(t_swap **lst, t_swap *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

void ft_elemadd_back(t_swap **elem, t_swap *new)
{
	if (new == NULL)
		return;
	if (*elem == NULL)
		*elem = new;
	else
		ft_last_elem(*elem)->next = new;
}