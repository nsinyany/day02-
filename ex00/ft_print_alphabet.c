/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsinyany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 09:46:09 by nsinyany          #+#    #+#             */
/*   Updated: 2020/06/18 11:09:55 by nsinyany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

void ft_print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
   	{
		ft_putchar(letter);
		letter++;
	}
}

int main(void) {
	ft_print_alphabet();
	return 0;
}
