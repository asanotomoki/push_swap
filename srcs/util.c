/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:33:00 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/07 19:37:20 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdbool.h>

int ft_isnum(char *num)
{
	if (*num == '-' || *num == '+')
		num++;
	while (*num)
	{
		if (!ft_isdigit(*num))
			return (1);
		num++;
	}
	return (0);
}

bool ft_check_stack_2elems(t_stack *stack)
{
	if (stack->next->next == stack)
		return (false);
	return (true);
}

bool ft_isasc(t_stack *stack, t_stack *start)
{
	t_stack *tmp;

	tmp = start;
	while (tmp->next != stack)
	{
		if (tmp->val > tmp->next->val)
			return (false);
		tmp = tmp->next;
	}
	return (true);
}

bool ft_isdesc(t_stack *stack, t_stack *start)
{
	t_stack *tmp;

	tmp = start;
	while (tmp->next != stack)
	{
		if (tmp->val < tmp->next->val)
			return (false);
		tmp = tmp->next;
	}
	return (true);
}

void move_top(t_dswap *data, int min, int max, size_t size)
{
	t_stack *tmp;
	size_t i;
	size_t j;

	tmp = data->a->next;
	i = 0;
	while ((tmp->val < min || tmp->val > max) && tmp != data->a)
	{
		tmp = tmp->next;
		i++;
	}
	j = 0;
	if (size / 2 < i)
		j = size - i;
	if (i == size - 1)
		j = i - 1;
	while (j++ < i)
	{
		if (size / 2 < i)
			rra(data);
		else
			ra(data);
	}
}