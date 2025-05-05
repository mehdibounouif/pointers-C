/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Question_16.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:55:01 by mbounoui          #+#    #+#             */
/*   Updated: 2025/05/05 07:55:34 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	f(char **);

int	main()
{
	char	*v[] = {"ab", "cd", "ef", "gh", "ij", "kl"};
	f(v);
	return (0);
}
void	f(char **p)
{
	char	*t;
	t = (p += sizeof(int))[-1];
	printf("%s\n", t);
}

/*
*	what is the output of this program ?
*	A - ab
*	B - cd
*	C - ef
*	D - gh
*/
