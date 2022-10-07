/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:14:26 by tasano            #+#    #+#             */
/*   Updated: 2022/10/08 05:32:26 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long int	num;

	while (ft_isspace(*str))
		str++;
	sign = -1;
	if (*str == '+' || *str == '-')
		sign = -(44 - *str++);
	num = 0;
	while (ft_isdigit(*str))
		num = (num * 10) - (*str++ - '0');
	return (num * sign);
}
