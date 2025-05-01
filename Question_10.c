/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Question_10.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 09:50:17 by mbounoui          #+#    #+#             */
/*   Updated: 2025/05/01 09:53:52 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	f(int *a, int *b)
{
	a = b;
	*a = 2;
}
int	a = 0, b = 1;
int	main()
{
	f(&a, &b);
	printf("%d %d\n", a, b);
	return (0);
}

/*
*	what is the output of following program ?
*
*	A - 2 2
*	B - 2 1
*	C - 0 1
*	D - 0 2
*/
