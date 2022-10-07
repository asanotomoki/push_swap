/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 23:06:52 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/08 05:31:56 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*init_stack(t_stack *stack)
{
	stack->val = -1;
	stack->next = stack;
	stack->prev = stack;
	return (stack);
}

void	all_free_stack(t_stack *stack)
{
	t_stack	*tmp;
	t_stack	*free_tmp;

	tmp = stack->next;
	while (tmp != stack)
	{
		free_tmp = tmp;
		tmp = tmp->next;
		free(free_tmp);
	}
}

int	main(int argc, char **argv)
{
	t_dswap	data;
	t_stack	stack_a;
	t_stack	stack_b;
	t_stack	ans;

	if (argc == 1)
		return (0);
	data.a = init_stack(&stack_a);
	data.b = init_stack(&stack_b);
	data.ans = init_stack(&ans);
	create_stack(argc, argv, &data);
	if (ft_isasc(data.a, data.a->next))
		;
	else if (data.size <= 6)
		format6(&data);
	else
		main_sort(&data);
	all_free_stack(data.a);
	put_ans(data.ans);
	return (0);
}
