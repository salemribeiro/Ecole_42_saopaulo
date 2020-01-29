/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 19:25:28 by sfreitas          #+#    #+#             */
/*   Updated: 2020/01/27 19:26:36 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int caracter)
{
	if(caracter >= '0' && caracter <= '9')
		return(1);
	return(0);
}
