/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 06:49:43 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/07 18:34:42 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_pop_front(t_stack *stack)
{
	t_stack	*first_elem;

	if (stack->next == stack)
		return (NULL);
	first_elem = ft_first_elem(stack);
	stack->next = first_elem->next;
	first_elem->next->prev = stack;
	first_elem->next = NULL;
	first_elem->prev = NULL;
	return (first_elem);
}

t_stack	*ft_pop_back(t_stack *stack)
{
	t_stack	*last_elem;

	if (stack->next == stack)
		return (NULL);
	last_elem = ft_last_elem(stack);
	stack->prev = last_elem->prev;
	last_elem->prev->next = stack;
	last_elem->next = NULL;
	last_elem->prev = NULL;
	return (last_elem);
}
