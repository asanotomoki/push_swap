/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stackdata.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 07:46:49 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/08 05:31:19 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	check_dup(int *array, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1)
	{
		if (array[i] == array[i + 1])
			return (false);
		i++;
	}	
	return (true);
}

void	create_compressionlist(t_dswap *data)
{
	int		*array;
	size_t	i;
	t_stack	*tmp;

	array = quicksort(data);
	if (!check_dup(array, data->size))
		ft_error("ERROR");
	tmp = data->a->next;
	while (tmp != data->a)
	{
		i = 0;
		while (i < data->size)
		{
			if (array[i] == tmp->val)
				tmp->val = i;
			i++;
		}
		tmp = tmp->next;
	}
}

bool	check_arg(char *arg)
{
	size_t	len;
	int		res;

	if (!arg[0])
		return (false);
	len = ft_strlen(arg);
	if (11 < len)
		return (false);
	if (ft_isnum(arg) == 1)
		return (false);
	res = 0;
	if (len == 10)
		res = ft_strncmp(arg, "2147483647", 10);
	else if (len == 11 && arg[0] == '+')
		res = ft_strncmp(arg, "+2147483647", 11);
	else if (len == 11 && arg[0] == '-')
		res = ft_strncmp(arg, "-2147483648", 11);
	if (0 < res)
		return (false);
	return (true);
}

void	create_list(char **argv, t_dswap *data)
{
	t_stack	*new;
	int		val;

	data->size = 0;
	data->max = -1;
	while (*argv)
	{
		if (!check_arg(*argv))
			ft_error("ERROR");
		val = ft_atoi(*argv++);
		new = ft_new_elem(val);
		if (!new)
			ft_error("ERROR");
		ft_push_back(data->a, new);
		data->size++;
		data->max++;
	}
	create_compressionlist(data);
	data->min = 0;
}

void	create_stack(int argc, char **argv, t_dswap *data)
{
	char	**elems;

	argv++;
	if (argc == 2)
	{
		if (!*argv[0])
			ft_error("Error");
		elems = ft_split(*argv, ' ');
		if (!elems || !elems[0])
			ft_error("Error");
		create_list(elems, data);
		while (*elems)
			free(*elems++);
	}
	else
		create_list(argv, data);
}
