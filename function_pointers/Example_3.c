/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Example_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:29:37 by mbounoui          #+#    #+#             */
/*   Updated: 2025/05/13 16:51:16 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef	struct	s_rect
{
	int	w;
	int	h;
	int	(*area)(struct s_rect*);
	void	(*set)(struct s_rect*, int, int);
	void	(*show)(struct s_rect*);
}	t_rect;

int	area(t_rect* r)
{
	return (r->w * r->h);
}

void	show(t_rect *r)
{
	printf("Rectangle's Width: %d, Height: %d\n", r->w, r->h);
}

void	set(t_rect *r, int w, int h)
{
	r->w = w;
	r->h = h;
}

void	init(t_rect *r)
{
	r->w = 0;
	r->h = 0;
	r->set = set;
	r->show = show;
	r->area = area;
}

int	main()
{
	t_rect	*r;
	r = malloc(sizeof(t_rect));

	init(r);
	r->set(r, 10, 5);
	r->show(r);
	printf("Rectangle area: %d\n", r->area(r));
	return (0);
}
