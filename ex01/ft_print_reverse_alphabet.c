/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsinyany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 11:33:53 by nsinyany          #+#    #+#             */
/*   Updated: 2020/06/19 09:03:08 by nsinyany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_alphabet(void)
{
	char letter;

	letter = 'z';
	while (letter <= 'a')
	{
		putchar(letter);
		letter++;
	}
}

int main(void)
{
	ft_print_alphabet();
	return 0;
}
