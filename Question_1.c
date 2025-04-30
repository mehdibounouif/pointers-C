/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Question_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 08:54:49 by mbounoui          #+#    #+#             */
/*   Updated: 2025/04/30 08:57:25 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	fun(int x)
{
	x = 30;
}

int	main()
{
	int	y;

	y = 10;
	fun(y);
	printf("%d\n", y);
}

/*
*  what is the output of following program ?
* A - 30 
* B - 30 
* C - Compiler Error
* C - Runtime Error
*/
