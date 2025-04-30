/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Question_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 08:58:00 by mbounoui          #+#    #+#             */
/*   Updated: 2025/04/30 09:00:31 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	fun(int	*ptr)
{
	*ptr = 50;
}

int	main()
{
	int	a;

	a = 10;
	fun(&a);
	printf("%d\n", a);
}

/*
* What is the output of following program ?
*	A - 10
*	B - 50
*	C - Compiler Error
*	D - Runtime Error
*/
