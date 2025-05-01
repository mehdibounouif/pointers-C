/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Question_4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 09:34:10 by mbounoui          #+#    #+#             */
/*   Updated: 2025/05/01 07:48:36 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int	arr1[] = {1, 2, 3};
	int *ptr1 =	arr1;

	char arr2[] = {1, 2, 3};
	char *ptr2 =	arr2;

	printf("sizeof arr1[] = %zu ", sizeof(arr1));
	printf("sizeof ptr1 = %zu ", sizeof(ptr1));

	printf("sizeof arr2[] = %zu ", sizeof(arr2));
	printf("sizeof ptr2 = %zu \n", sizeof(ptr2));

	return (0);
}

/*
*	what is the output of following program ?
*	A - sizeof arri[] = 3 sizeof ptri = 8 sizeof arrc[] = 3 sizeof ptrc = 8;
*	B - sizeof arri[] = 12 sizeof ptri = 8 sizeof arrc[] = 3 sizeof ptrc = 1;
*	C - sizeof arri[] = 3 sizeof ptri = 8 sizeof arrc[] = 3 sizeof ptrc = 1;
*	D - sizeof arri[] = 12 sizeof ptri = 8 sizeof arrc[] = 3 sizeof ptrc = 8;
*/
