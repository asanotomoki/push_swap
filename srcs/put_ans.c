/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_ans.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:49:40 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/08 05:24:52 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	search_ans(int ans)
{
	if (ans == RA)
		ft_putendl_fd("ra", 1);
	else if (ans == RB)
		ft_putendl_fd("rb", 1);
	else if (ans == RR)
		ft_putendl_fd("rr", 1);
	else if (ans == SA)
		ft_putendl_fd("sa", 1);
	else if (ans == SB)
		ft_putendl_fd("sb", 1);
	else if (ans == SS)
		ft_putendl_fd("ss", 1);
	else if (ans == PA)
		ft_putendl_fd("pa", 1);
	else if (ans == PB)
		ft_putendl_fd("pb", 1);
	else if (ans == RRA)
		ft_putendl_fd("rra", 1);
	else if (ans == RRB)
		ft_putendl_fd("rrb", 1);
	else if (ans == RRR)
		ft_putendl_fd("rrr", 1);
}

void	put_ans(t_stack *ans)
{
	t_stack	*tmp;

	tmp = ans->next;
	check_ans(ans);
	while (tmp != ans)
	{
		search_ans(tmp->val);
		tmp = tmp->next;
	}
}
