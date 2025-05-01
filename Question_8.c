/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Question_8.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 08:10:08 by mbounoui          #+#    #+#             */
/*   Updated: 2025/05/01 08:34:26 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	char	*name = "Mehdi bounouif";
	printf("%c\n", *&*&*&*&*name);
	return (0);
}

/*
*	Compiler Error
*	Garbage value
*	Runtime error
*	M
*/
