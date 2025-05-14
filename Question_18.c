/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Question_18.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:09:44 by mbounoui          #+#    #+#             */
/*   Updated: 2025/05/14 11:31:53 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *i, int *j)
{
	int	*tmp;

	tmp = i;
	i = j;
	j = tmp;
}

int	main()
{
	int	a, b, c, d;

	a = 2022;
	b = 0;
	c = 4;
	d = 42;

	swap(&a, &b);
	if (a < c)
		swap(&a, &c);
	swap(&a, &d);
	printf("%d\n", a); 
}

/*
*	The output of the program is :
*	A - 2022;
*	B - 0;
*	C - 4;
*	D - 8;
*	E - 42
*/
