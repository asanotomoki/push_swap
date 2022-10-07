/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:49:51 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/08 05:22:45 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	a_ans_decide(t_dswap *data, int ans)
{
	if (data->a->next->next->val == ans)
		sa(data);
	if (data->a->next->val == ans)
	{
		ra(data);
		return (1);
	}
	return (0);
}

int	b_ans_decide(t_dswap *data, int ans)
{
	if (data->b->next->next->val == ans)
		sb(data);
	if (data->b->next->val == ans)
	{
		pa(data);
		ra(data);
		return (1);
	}
	return (0);
}

void	b_quick_sort(t_dswap *data, int min)
{
	int		pivot;
	size_t	i;
	size_t	size;

	size = get_size(data->b);
	while (size > 4)
	{
		pivot = get_pibot(min, get_max(data->b, size));
		i = 0;
		while (i++ < size)
		{
			if (data->b->next->val > pivot)
				pa(data);
			else
				rb(data);
			min += b_ans_decide(data, min);
		}
		size /= 2;
	}
}

void	allsort(t_dswap *data, int ans)
{
	size_t	i;
	size_t	b_size;

	b_size = get_size(data->b);
	i = 0;
	while (i++ < b_size)
	{
		pa(data);
		ans += a_ans_decide(data, ans);
	}
	i = 0;
	while (i++ < data->size)
		ans += a_ans_decide(data, ans);
}
