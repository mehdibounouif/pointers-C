/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Question_13.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 10:53:53 by mbounoui          #+#    #+#             */
/*   Updated: 2025/05/01 11:02:13 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int	a;
	void	*b;

	a = 12;
	b = (int *)&a;
	// correct way
	// printf("%d\n", *(int *)b);
	// you cannot be de-referencing a void* type pointers
	printf("%d\n", *b);
	return (0);
}

/*
*	A - 12
*	B - Compiler Error
*	C - Run time error
*	D - 0
*/
