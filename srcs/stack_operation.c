/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:12:22 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/08 05:25:27 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_last_elem(t_stack *stack)
{
	return (stack->prev);
}

t_stack	*ft_first_elem(t_stack *stack)
{
	return (stack->next);
}

t_stack	*ft_new_elem(int val)
{
	t_stack	*elem;

	elem = (t_stack *)malloc(sizeof(t_stack));
	if (elem == NULL)
		return (NULL);
	elem->val = val;
	elem->next = NULL;
	elem->prev = NULL;
	return (elem);
}
