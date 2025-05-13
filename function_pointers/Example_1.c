/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Example_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:48:15 by mbounoui          #+#    #+#             */
/*   Updated: 2025/05/13 15:59:43 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void	add_1(int	a, int	b)
{
	printf("%d\n", a + b);
}

int	add_2(int	a, int	b)
{
	return (a + b);
}

int	main()
{
	void	(*fun_1)(int, int);
	int	(*fun_2)(int, int);
	fun_1 = add_1;
	fun_2 = add_2;

	fun_1(10, 10);
	printf("%d\n", fun_2(10, 10));
	return (0);
}
