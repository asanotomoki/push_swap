/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:49:51 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/08 05:19:33 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	split_half(t_dswap *data, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (data->max / 2 < data->a->next->val)
			ra(data);
		else
		{
			pb(data);
			if (data->b->next->val <= data->max / 4)
				rb(data);
		}
		i++;
	}
}

void	set_b(t_dswap *data, size_t pb_size, int ans, int max)
{
	size_t	i;
	int		tmp;

	i = 0;
	while (i < pb_size && data->a->next->val <= max && \
		data->a->next->val >= ans)
	{
		tmp = a_ans_decide(data, ans);
		if (tmp == 1)
			ans += tmp;
		else
			pb(data);
		i++;
	}
}

void	sort_quarter(t_dswap *data, size_t size)
{
	if (size > 4)
		sort_quarter(data, size / 2);
	set_b(data, size, get_ans_quarter(data), data->max / 4);
	b_quick_sort(data, get_ans_quarter(data));
	allsort(data, get_ans_quarter(data));
	if (size > 4)
		sort_quarter(data, size / 2);
}

void	sort_all(t_dswap *data, size_t size, int max)
{
	if (size > 4)
		sort_all(data, size / 2, max);
	set_b(data, size, get_ans(data), max);
	b_quick_sort(data, get_ans(data));
	allsort(data, get_ans(data));
	if (size > 4)
		sort_all(data, size / 2, max);
}

void	main_sort(t_dswap *data)
{
	size_t	i;

	i = 0;
	split_half(data, data->size);
	while (i++ < data->size / 4)
		pa(data);
	sort_quarter(data, data->size / 4);
	set_b(data, data->size / 2, get_ans(data), data->max / 2);
	sort_all(data, data->size / 2, data->max / 2);
	set_b(data, data->size, get_ans(data), data->max);
	sort_all(data, data->size / 2, data->max);
}
