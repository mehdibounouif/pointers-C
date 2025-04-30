/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Question_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 09:01:03 by mbounoui          #+#    #+#             */
/*   Updated: 2025/04/30 09:07:46 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <endian.h>
#include <stdio.h>

int	main()
{
	int	a;
	int	*p;

	p = &a;
	*p = 0;
	printf("a = %d\n", a);
	printf("p = %d\n", *p);

	*p = 5;
	printf("a = %d\n", a);
	printf("p = %d\n", *p);

	(*p)++;
	printf("a = %d\n", a);
	printf("p = %d\n", *p);
}

/*
*	What is the output of following program ?
*	A - x = 0
		*ptr = 0
		x = 5
		*ptr = 5
		x = 6
		*ptr = 6

*	B - x = garbage value
		*ptr = 0
		x = garbage value
		*ptr = 5
		x = garbage value
		*ptr = 6

*	C - x = 0
		*ptr = 0
		x = 5
		*ptr = 5
		x = garbage value
		*ptr = garbage value

*	D - x = 0
		*ptr = 0
		x = 0
		*ptr = 0
		x = 0
		*ptr = 0
*/
