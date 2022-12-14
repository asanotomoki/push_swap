/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:32:16 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/10/08 05:24:35 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_error(char *err_msg)
{
	ft_putendl_fd(err_msg, 2);
	exit(1);
}
