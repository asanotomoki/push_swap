/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 06:44:52 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/09/26 10:46:52 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_front(t_stack *stack, t_stack *new)
{
	t_stack	*first_elem;

	if (new == NULL)
		return ;
	if (stack == NULL)
		init_stack(stack);
	else
	{
		first_elem = ft_first_elem(stack);
		stack->next = new;
		new->prev = stack;
		first_elem->prev = new;
		new->next = first_elem;
	}
}

void	ft_push_back(t_stack *stack, t_stack *new)
{
	t_stack	*last_elem;

	if (new == NULL)
		return ;
	if (stack == NULL)
		init_stack(stack);
	else
	{
		last_elem = ft_last_elem(stack);
		last_elem->next->prev = new;
		last_elem->next = new;
		new->prev = last_elem;
		new->next = stack;
	}
}
