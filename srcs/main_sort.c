/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:49:51 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/01 15:38:17 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void main_sort(t_dswap *data)
{
	size_t	i;

	i = 0;
	while (i < (data->size / 2))
	{
		move_top_val(data->a, 0, data->size / 2, data->size, STACK_A);
		i++;
	}
}