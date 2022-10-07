/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:49:51 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/07 18:21:35 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t get_size(t_stack *stack)
{
	t_stack *tmp;
	size_t count;

	count = 0;
	tmp = stack->next;
	while (tmp != stack)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

int get_ans(t_dswap *data)
{
	return (data->a->prev->val + 1);
}

void half_sort(t_dswap *data, int count)
{
	int j;

	j = 0;
	while (j++ < count)
		rrb(data->b);
	while (0 < count--)
	{
		pa(data->a, data->b);
		ra(data->a);
	}
}

int split_half(t_dswap *data, size_t size)
{
	size_t i;
	int count;

	i = 0;
	count = 0;
	while (i < size)
	{
		if (data->max / 2 < data->a->next->val)
			ra(data->a);
		else
			pb(data->a, data->b);
		if (data->b->next->val == count)
		{
			rb(data->b);
			count++;
		}
		i++;
	}
	half_sort(data, count);
	return (count);
}

void set_b(t_dswap *data, size_t pb_size, int ans, int max)
{
	size_t i;

	i = 0;
	while (i < pb_size && data->a->next->val <= max && data->a->next->val >= ans)
	{
		if (data->a->next->next->val == ans)
			sa(data->a);
		if (data->a->next->val == ans)
		{
			ra(data->a);
			ans++;
		}
		else
			pb(data->a, data->b);
		i++;
	}
}

int get_pibot(int min, int max)
{
	int pivot;

	pivot = min + ((max - min) / 2);
	return (pivot);
}

int get_max(t_stack *stack, size_t size)
{
	int max;
	size_t i;

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

void b_quick_sort(t_dswap *data, int min)
{
	int pivot;
	int max;
	size_t i;
	size_t size;

	size = get_size(data->b);
	while (size > 4)
	{
		max = get_max(data->b, size);
		pivot = get_pibot(min, max);
		i = 0;
		while (i < size)
		{
			if (data->b->next->val < pivot)
				rb(data->b);
			else
				pa(data->a, data->b);
			if (data->b->next->next->val == min)
				sb(data->b);
			if (data->b->next->val == min)
			{
				pa(data->a, data->b);
				ra(data->a);
				min++;
			}
			i++;
		}
		size /= 2;
	}
}

void allsort(t_dswap *data, int ans)
{
	size_t i;
	size_t b_size;

	b_size = get_size(data->b);
	i = 0;
	while (i < b_size)
	{
		pa(data->a, data->b);
		if (data->a->next->next->val == ans)
			sa(data->a);
		if (data->a->next->val == ans)
		{
			ra(data->a);
			ans++;
		}
		i++;
	}
	i = 0;
	while (i < data->size)
	{

		if (data->a->next->next->val == ans)
			sa(data->a);
		if (data->a->next->val == ans)
		{
			ra(data->a);
			ans++;
		}
		else
			break;
		i++;
	}
}

void test(t_dswap *data, size_t size)
{
	b_quick_sort(data, get_ans(data));
	if (size > 4)
		test(data, size / 2);
	set_b(data, size, get_ans(data), data->max / 2);
	b_quick_sort(data, get_ans(data));
	allsort(data, get_ans(data));
	if (size > 4)
		test(data, size / 2);
}

void next(t_dswap *data, size_t size)
{
	b_quick_sort(data, get_ans(data));
	allsort(data, get_ans(data));
	if (size > 4)
		next(data, size / 2);
	set_b(data, size, get_ans(data), data->max);
	b_quick_sort(data, get_ans(data));
	allsort(data, get_ans(data));
	if (size > 4)
		next(data, size / 2);
}

void main_sort(t_dswap *data)
{
	split_half(data, data->size);
	test(data, data->size / 2);
	set_b(data, data->size, data->a->prev->val, data->max);
	next(data, data->size / 2);
}