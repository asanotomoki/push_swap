/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 04:50:08 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/08 05:28:10 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	get_size(t_stack *stack)
{
	t_stack	*tmp;
	size_t	count;

	count = 0;
	tmp = stack->next;
	while (tmp != stack)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

int	get_ans(t_dswap *data)
{
	return (data->a->prev->val + 1);
}

int	get_ans_quarter(t_dswap *data)
{
	if (data->max / 2 < data->a->prev->val)
		return (0);
	return (data->a->prev->val + 1);
}

int	get_pibot(int min, int max)
{
	int	pivot;

	pivot = min + ((max - min) / 2);
	return (pivot);
}

int	get_max(t_stack *stack, size_t size)
{
	int		max;
	size_t	i;

	max = -1;
	i = 0;
	stack = stack->next;
	while (i < size)
	{
		if (max < stack->val)
			max = stack->val;
		stack = stack->next;
		i++;
	}
	return (max);
}
