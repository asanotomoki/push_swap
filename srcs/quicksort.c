/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:54:15 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/01 15:47:12 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*get_array(t_stack *stack, size_t size)
{
	t_stack	*tmp;
	size_t	i;
	int		*array;

	array = (int *)malloc(sizeof(int) * size);
	if (!array)
		ft_error("ERROR");
	tmp = stack->next;
	i = 0;
	while (tmp != stack)
	{
		array[i++] = tmp->val;
		tmp = tmp->next;
	}
	return (array);
}

void	sort_swap(int *elem1, int *elem2)
{
	int	tmp;

	tmp = *elem1;
	*elem1 = *elem2;
	*elem2 = tmp;
}

void	quicksort_main(int *array, int left, int right)
{
	int	pivot;
	int	i;
	int	j;

	i = left;
	j = right;
	if (left <= right)
	{
		pivot = array[left];
		while (1)
		{
			while (array[i] < pivot)
				i++;
			while (array[j] > pivot)
				j--;
			if (i >= j)
				break ;
			sort_swap(&(array[i++]), &(array[j--]));
		}
		quicksort_main(array, left, i - 1);
		quicksort_main(array, j + 1, right);
	}
}

int	*quicksort(t_dswap *data)
{
	int	*array;

	array = get_array(data->a, data->size);
	quicksort_main(array, 0, data->size - 1);
	return (array);
}
