/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 23:06:52 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/09/22 16:14:06 by asanotomoki      ###   ########.fr       */
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

t_swap *ft_last_elem(t_swap *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}

t_swap *ft_new_elem(long num)
{
	t_swap *elem;

	elem = (t_swap *)malloc(sizeof(t_swap));
	if (elem == NULL)
		return (NULL);
	elem->num = num;
	elem->next = NULL;
	return (elem);
}

void	ft_elemadd_front(t_swap **lst, t_swap *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

void ft_elemadd_back(t_swap **elem, t_swap *new)
{
	if (new == NULL)
		return;
	if (*elem == NULL)
		*elem = new;
	else
		ft_last_elem(*elem)->next = new;
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
	while (stack_a->next != NULL)
	{
		printf("%ld\n", stack_a->num);
		stack_a = stack_a->next;
	}
	// if (argc <= 4)
	// {

	// }
	// else if (argc <= 7)
	// {

	// }
	// else if (7 < argc)
	// {

	// }
	return (0);
}
