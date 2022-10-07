/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:19:21 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/08 05:25:09 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	check_pbpa(t_stack *ans)
{
	if (ans->val == PB && ans->next->val == PA)
		return (true);
	return (false);
}

bool	check_papb(t_stack *ans)
{
	if (ans->val == PA && ans->next->val == PB)
		return (true);
	return (false);
}

void	del_push(t_stack *ans)
{
	del_ans(ans->next);
	del_ans(ans);
}
