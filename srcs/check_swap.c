/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:18:28 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/08 05:21:02 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	check_ss(t_stack *ans)
{
	if (ans->val == SA && ans->next->val == SB)
		return (true);
	if (ans->val == SB && ans->next->val == SA)
		return (true);
	return (false);
}

void	del_swap(t_stack *ans)
{
	ans->val = SS;
	del_ans(ans->next);
}
