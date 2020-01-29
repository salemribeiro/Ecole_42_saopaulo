/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 19:13:35 by sfreitas          #+#    #+#             */
/*   Updated: 2020/01/27 19:17:32 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int caracter)
{
	if(caracter >= 0 && caracter <= 127)
		return(1);
	return(0);
}
