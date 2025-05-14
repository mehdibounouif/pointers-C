/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Example_4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 08:01:37 by mbounoui          #+#    #+#             */
/*   Updated: 2025/05/14 08:14:02 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	add(int	a, int	b)
{
	return (a + b);
}

int	sub(int	a, int	b)
{
	return (a - b);
}

int	mul(int	a, int	b)
{
	return (a * b);
}

int	div(int	a, int	b)
{
	return (a / b);
}

int	main()
{
	int	(*funs[])(int, int) = {add, sub, mul, div};
	int	a = 30;
	int	b = 20;

	printf("Sum: %d\n", funs[0](a, b));
	printf("sub: %d\n", funs[1](a, b));
	printf("mul: %d\n", funs[2](a, b));
	printf("div: %d\n", funs[3](a, b));
	return (0);
}
