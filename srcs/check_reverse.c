/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_reverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:18:28 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/08 05:26:40 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	check_reverse(t_stack *ans)
{
	if (ans->val == RA && ans->next->val == RB)
		return (true);
	if (ans->val == RB && ans->next->val == RA)
		return (true);
	return (false);
}

void	del_reverse(t_stack *ans)
{
	ans->val = RR;
	del_ans(ans->next);
}
