/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 23:06:52 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/09/22 17:12:15 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int ft_error(char *err_msg)
{
	ft_putendl_fd(err_msg, 2);
	exit(1);
}

int ft_isnum(char *num)
{
	while (*num)
	{
		if (!ft_isdigit(*num))
			return (1);
		num++;
	}
	return (0);
}

int create_stack(int argc, char **argv, t_swap **stack_a)
{
	int i;
	t_swap *new;
	
	i = 0;
	argv++;
	while (i < argc - 1)
	{
		if (ft_isnum(*argv))
			ft_error("Bad argument");
		new = ft_new_elem(ft_atoi(*argv));
		ft_elemadd_front(stack_a, new);
		argv++;
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	t_swap *stack_a;
	// t_swap stack_b;

	stack_a = NULL;
	if (create_stack(argc, argv, &stack_a))
		return (ft_error("Bad arguments"));
	ra(stack_a);
	// if (argc <= 4)
	// {

	// }
	// else if (argc <= 7)
	// {

	// }
	// else if (7 < argc)
	// {

	// }
	while (stack_a != NULL)
	{
		printf("%ld\n", stack_a->num);
		stack_a = stack_a->next;
	}
	return (0);
}
