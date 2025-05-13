/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Example_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:15:41 by mbounoui          #+#    #+#             */
/*   Updated: 2025/05/13 16:18:52 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	add(int	a, int	b)
{
	return (a + b);
}

int	subtract(int a, int b)
{
	return (a - b);
}

void	calc(int a, int b, int (*fun)(int, int))
{
	printf("%d\n", fun(a, b));
}

int	main()
{
	int	a = 10;
	int	b = 5;
	calc(a, b, add);
	calc(a, b, subtract);
	return (0);
}
