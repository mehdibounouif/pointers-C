/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Question_14.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:07:04 by mbounoui          #+#    #+#             */
/*   Updated: 2025/05/04 14:14:45 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void	swap(char **str1, char **str2)
{
	char	 *tmp;
	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

int	main()
{
	char	*str1 = "mehdi";
	char	*str2 = "bounouif";
	char	*t;

	swap(&str1, &str2);

	printf("%s %s\n", str1, str2);

	t = str1;
	str1 = str2;
	str2 = t;

	printf("%s %s\n", str1, str2);
}
