/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Question_17.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 09:46:21 by mbounoui          #+#    #+#             */
/*   Updated: 2025/05/14 10:00:52 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	x;

void	q(int	z)
{
	z += x;
	printf("%d ", z);
}

void	p(int	*y)
{
	int	x = *y + 2;
	q(x); 
	*y = x - 1; 
	printf("%d ", x);

}

int	main()
{
	x = 5;
	p(&x);
	printf("%d\n", x);
}


/*
*	The output of this program is:
*
*	A - 12 7 6
*	B - 22 12 11
*	C - 14 6 6
*	D - 7 6 6
*/
