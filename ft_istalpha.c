/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 19:02:52 by sfreitas          #+#    #+#             */
/*   Updated: 2020/01/27 19:07:10 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int caracter)
{
	if((caracter >= 'A' && caracter <= 'Z') || (caracter >= 'a' && caracter <= 'z'))
		return(1);
	return(0);
}
