/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ans.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:18:21 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/08 05:29:43 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	del_ans(t_stack *ans)
{
	ans->prev->next = ans->next;
	ans->next->prev = ans->prev;
	free(ans);
}

void	check_ans(t_stack *ans)
{
	t_stack	*tmp;

	tmp = ans->next;
	while (tmp != ans)
	{
		if (check_papb(tmp) || check_pbpa(tmp))
		{
			tmp = tmp->prev;
			del_push(tmp->next);
		}
		else if (check_rr(tmp))
			del_rotate(tmp);
		else if (check_ss(tmp))
			del_swap(tmp);
		else
			tmp = tmp->next;
	}
}
