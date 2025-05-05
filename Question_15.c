/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Question_15.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:30:38 by mbounoui          #+#    #+#             */
/*   Updated: 2025/05/04 13:54:43 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int	arr[] = {1, 2, 3, 4,5};
	int	*p = arr;
	++*p; //++(*p) same;
	p += 2;
	printf("%d\n", *p);
	return (0);
}

/*
*	What is the output of this program?
*	A - 2;
*	B - 3;
*	C - 4;
*	D - Compiler Error
*/
