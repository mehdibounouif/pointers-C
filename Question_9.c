/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Question_9.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 08:34:42 by mbounoui          #+#    #+#             */
/*   Updated: 2025/05/01 09:43:56 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_list(int	list[], int len)
{
	int	i;

	i = 0;
	// When you pass an array to a function in C, it decays into a pointer to its first element.
	// len = sizeof(list) / sizeof(list[0]);  len = 2;
	//		sizeof(int) = 4 / sizeof(int) = 4 = 2;
	printf("len = %d\n", len);
	while (i < len)
	{
		printf("%d ", list[i]);
		i++;
	}
}

int	main()
{
	int	len;
	int	arr[] = {10, 20, 30, 40};
	len = sizeof(arr) / sizeof(arr[0]);
	print_list(arr, len);
	return (0);
}

/*
*	what is the output of following program ?
*	A - 10 20 30 40
*	B - Machine Dependent
*	C - 10 20
*	D - Nothing
*/
