/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:10:35 by pcervill          #+#    #+#             */
/*   Updated: 2023/01/11 17:50:52 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_lstorder(t_list **stack_a)
{
	t_list	*cpy;
	t_list	*cpy2;

	cpy = *stack_a;
	cpy2 = cpy->next;
	while (cpy->next != NULL)
	{
		if (cpy->content > cpy2->content)
			return ;
		cpy = cpy->next;
		cpy2 = cpy2->next;
	}
	exit (0);
}

void	maxminstack(t_list *stack_a, t_stacks *data)
{
	data->max = -2147483648;
	data->min = 2147483647;
	while (stack_a)
	{
		if (stack_a->content > data->max)
			data->max = stack_a->content;
		if (stack_a->content < data->min)
			data->min = stack_a->content;
		stack_a = stack_a->next;
	}
}

void	stackclear(t_list **stack_a)
{
	t_list	*cpy;

	if (!stack_a)
		return ;
	cpy = *stack_a;
	while (cpy)
	{
		cpy = (*stack_a)->next;
		free(*stack_a);
		*stack_a = cpy;
	}
	stack_a = NULL;
	return ;
}