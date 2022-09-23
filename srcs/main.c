/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanotomoki <asanotomoki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 23:06:52 by asanotomoki       #+#    #+#             */
/*   Updated: 2022/09/24 05:28:41 by asanotomoki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Author: Hiroyuki Chishiro
 * License: 2-Clause BSD
 */
#include <stdio.h>
#include <stdlib.h>

void print_list(t_swap *list)
{
  t_swap *p = list->next;
  printf("print_list(): \n");

  while (p != list) {
    printf("[%11p] : %ld\n",  p,p->val);
    p = p->next;
  }

  printf("HEAD\n");
}



int main(int argc, char **argv)
{
	t_swap stack_a;
	// t_swap stack_b;

	if (argc == 1)
		return 0;
	init_stack(&stack_a);
	if (create_stack(argc, argv, &stack_a))
		return (ft_error("Bad arguments"));
	print_list(&stack_a);
	rra(&stack_a);
	ra(&stack_a);
	print_list(&stack_a);
	// if (argc <= 4)
	// {

	// }
	// else if (argc <= 7)
	// {

	// }
	// else if (7 < argc)
	// {

	// }
	
	return (0);
}
