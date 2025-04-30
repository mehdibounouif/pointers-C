/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_little_endian.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:55:05 by mbounoui          #+#    #+#             */
/*   Updated: 2025/04/30 12:12:32 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Little-endian & Big-endian
*	
*	big_endian :
*		- The moset significant byte (MSB) is stored in the lowest memory address
*		- This similar to how humans write numbers (left-to-right, most significant digit first).
*	Example : (32-bit integer 0x0A0B0C0D)
*		- memory address		byte stored
*		- 0x1000				0x0A (MSB)
*		- 0x1001				0x0B
*		- 0x1002				0x0C
*		- 0x1003				0x0D (LSB)
*
*	little_endian :
*		- The least significant byte (LSB) is stored at the lowest memory address.
*		- This is the reverse of human notation but is efficient for some CPU operations.
*	Example : (32-bit integer 0x0A0B0C0D)
*		- memory address		byte stored
*		- 0x1000				0x0D (LSB)
*		- 0x1001				0x0C
*		- 0x1002				0x0B
*		- 0x1003				0x0A (MSB).
*/

#include <stdio.h>

int	main()
{
	// Detecting Endianness :

	unsigned int x = 0x12345678;
	unsigned char *p = (unsigned char *)&x;

	if (*p == 0x78)
		printf("This little endian %d\n", *p);
	else
		printf("This big endian %d\n", *p);
	return (0);
}
