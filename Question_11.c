/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Question_11.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 09:57:22 by mbounoui          #+#    #+#             */
/*   Updated: 2025/05/13 11:22:12 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


// if a and b point to the same adrress, this method will break (it will zero out the value);

void	swap(int *a, int *b)
{
	*a = *a - *b; // 10 - 20 = -10;
	*b = *a + *b; // -10 + 20 = 10;
	*a = *b - *a; // 10 - -10 = 20;
}

int	main()
{
	int	a;
	int	b;

	a = 10;
	b = 20;
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}
