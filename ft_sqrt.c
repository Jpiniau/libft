/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 18:31:38 by jpiniau           #+#    #+#             */
/*   Updated: 2015/05/21 18:31:53 by jpiniau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	ft_sqrt(float x)
{
	float	root;
	int	i;

	i = -1;
	root = x / 2;
	while (++i < 10)
	{
		root = (((x / root) + root) / 2);
	}
	return (root);
}
