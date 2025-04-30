/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Question_7.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:19:56 by mbounoui          #+#    #+#             */
/*   Updated: 2025/04/30 12:12:36 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int	a;
	char	*x;

	x = (char *)&a;
	a = 512;
	x[0] = 1;
	x[1] = 2;
	printf("%d", a);

	return (0);
}

// Steps :
//			 (MSB)    (LSB)
// - 512 = 00000010 00000000
// - In little-endian, the bytes are stored in reverse order:
// - &a = 00000000 
// - &a+1 = 00000010
// - so be like this 00000000 00000010
// - x[0] = 1; mean &a = 00000001
// - x[1] = 2; mean &a+1 = 00000010
// - Result = 00000001 00000010 = 258
// - In little-endian, the bytes are read from right to left to form the final value.
// - So The final result = 00000010 00000001 = 513.
/*
*	what is the output of the following program ?
*	A - Machine dependent.
*	B - 513
*	C - 258
*	D - Compiler Error
*/
