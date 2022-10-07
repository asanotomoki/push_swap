/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_6elems.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 09:41:09 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/07 18:34:35 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	desc_3less(t_stack *stack, size_t size, int max, int min)
{
	t_stack	*second_elem;

	second_elem = stack->next->next;
	if (size == 2)
	{
		if (stack->next->val < stack->prev->val)
			sb(stack);
	}
	else if (size == 3)
	{
		if (second_elem->prev->val == min)
			rb(stack);
		else if (second_elem->next->val == max && second_elem->val == min)
			rrb(stack);
		if (!ft_isdesc(stack, stack->next))
		{
			sb(stack);
			desc_3less(stack, size, max, min);
		}
	}
}

void	asc_3less(t_stack *stack, size_t size, int max, int min)
{
	t_stack	*second_elem;

	second_elem = stack->next->next;
	if (size == 2)
	{
		if (second_elem->val < second_elem->prev->val)
			sa(stack);
	}
	else if (size == 3)
	{
		if (second_elem->prev->val == max && second_elem->val == min)
			ra(stack);
		else if (second_elem->next->val == min && second_elem->val == max)
			rra(stack);
		if (!ft_isasc(stack, stack->next))
		{
			sa(stack);
			asc_3less(stack, size, max, min);
		}
	}
}

void	asc_6less(t_dswap *data, size_t size)
{
	size_t	i;
	size_t	j;
	t_stack	*tmp;

	i = 0;
	tmp = data->a->next;
	while (i < size - 3 && tmp != data->a)
	{
		move_top(data->a, 0, size / 2 - 1 - (size == 4), size - i);
		pb(data->a, data->b);
		i++;
	}
	asc_3less(data->a, size - i, data->max, size - 3);
	desc_3less(data->b, i, 2, 0);
	j = 0;
	while (j++ < i)
		pa(data->a, data->b);
}

void	format6(t_dswap *data)
{
	if (data->size == 1)
		return ;
	else if (data->size <= 3)
		asc_3less(data->a, data->size, 2, 0);
	else if (data->size <= 6)
		asc_6less(data, data->size);
}
