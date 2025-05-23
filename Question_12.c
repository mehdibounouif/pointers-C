/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Question_12.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 10:38:38 by mbounoui          #+#    #+#             */
/*   Updated: 2025/05/13 11:33:25 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	f(int	x, int	*p, int **pp)
{
	int	y, z;

	**pp += 1;
	z = **pp; // z = 5;
	*p += 2;
	y = *p; // y = 7;
	x += 3; // x = 7;
	return (x + y + z);  // 7 + 7 + 5 = 19;
}

int	main()
{
	int	c, *b, **a;
	c = 4;
	b = &c;
	a = &b;
	printf("%d\n", f(c, b, a));
}

/*	What is the behavoir of this program ?
*
*	A - 18
*	B - 19
*	C - 21
*	D - 22
*/
