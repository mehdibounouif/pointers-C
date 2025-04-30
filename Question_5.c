/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Question_5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 10:18:05 by mbounoui          #+#    #+#             */
/*   Updated: 2025/04/30 10:49:17 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	float	arr[] = {12.5, 10.0, 13.5, 90.5, 0.5};
	float	*ptr1 = arr;
	float	*ptr2 = ptr1 + 3;

	printf("%f ", *ptr2); // ptr1 = arr[0] , so ptr1 + 3 = arr[3].
	printf("%ld", ptr2 - ptr1); // get number of element between this two pointers.

	return (0);
}

/*
*	Predict the output of following program .
*	A - 90.500000 3
*	B - 90.500000 12
*	C - 10.000000 12
*	D - 0.500000 3
*/
