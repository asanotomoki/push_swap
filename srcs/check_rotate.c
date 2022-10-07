/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:18:28 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/08 05:16:34 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	check_rr(t_stack *ans)
{
	if (ans->val == RA && ans->next->val == RB)
		return (true);
	else if (ans->val == RB && ans->next->val == RA)
		return (true);
	return (false);
}

void	del_rotate(t_stack *ans)
{
	ans->val = RR;
	del_ans(ans->next);
}
