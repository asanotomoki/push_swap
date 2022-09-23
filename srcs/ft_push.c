/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 06:44:52 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/09/24 06:47:09 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_front(t_swap *stack, t_swap *new)
{
	t_swap	*first_elem;

	if (new == NULL)
		return ;
	if (stack == NULL)
		init_stack(stack);
	else
	{
		first_elem = ft_first_elem(stack);
		first_elem->prev->next = new;
		first_elem->prev = new;
		new->next = first_elem;
		new->prev = stack;
	}
}

void	ft_push_back(t_swap *stack, t_swap *new)
{
	t_swap	*last_elem;

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
