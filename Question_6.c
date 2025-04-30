/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Question_6.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 10:29:27 by mbounoui          #+#    #+#             */
/*   Updated: 2025/04/30 10:33:58 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int	arr[] = {10, 20, 30, 40, 50, 60};
	int	*ptr1 = arr;
	int	*ptr2 = ptr1 + 5;

	printf("Number of element between two pointer are : %ld .", ptr2 - ptr1);
	printf("Number of bytes between two pointer are : %ld .", (char *)ptr2 - (char *)ptr1);
}
