/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_pbrapa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:32:22 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/08 05:25:48 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	check_pbrapa(t_stack *ans)
{
	if (ans->val == PB && ans->next->val == RA && ans->next->next->val == PA)
		return (true);
	return (false);
}

void	del_pbrapa(t_stack *ans)
{
	ans->val = SA;
	ans->val = RA;
	del_ans(ans->next->next);
}
