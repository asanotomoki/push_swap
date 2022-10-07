/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_6elems.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 09:41:09 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/07 19:36:47 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	desc_3less(t_dswap *data, size_t size, int max, int min)
{
	t_stack	*second_elem;

	second_elem = data->b->next->next;
	if (size == 2)
	{
		if (data->b->next->val < data->b->prev->val)
			sb(data);
	}
	else if (size == 3)
	{
		if (second_elem->prev->val == min)
			rb(data);
		else if (second_elem->next->val == max && second_elem->val == min)
			rrb(data);
		if (!ft_isdesc(data->b, data->b->next))
		{
			sb(data);
			desc_3less(data, size, max, min);
		}
	}
}

void	asc_3less(t_dswap *data, size_t size, int max, int min)
{
	t_stack	*second_elem;

	second_elem = data->a->next->next;
	if (size == 2)
	{
		if (second_elem->val < second_elem->prev->val)
			sa(data);
	}
	else if (size == 3)
	{
		if (second_elem->prev->val == max && second_elem->val == min)
			ra(data);
		else if (second_elem->next->val == min && second_elem->val == max)
			rra(data);
		if (!ft_isasc(data->a, data->a->next))
		{
			sa(data);
			asc_3less(data, size, max, min);
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
		move_top(data, 0, size / 2 - 1 - (size == 4), size - i);
		pb(data);
		i++;
	}
	asc_3less(data, size - i, data->max, size - 3);
	desc_3less(data, i, 2, 0);
	j = 0;
	while (j++ < i)
		pa(data);
}

void	format6(t_dswap *data)
{
	if (data->size == 1)
		return ;
	else if (data->size <= 3)
		asc_3less(data, data->size, 2, 0);
	else if (data->size <= 6)
		asc_6less(data, data->size);
}
