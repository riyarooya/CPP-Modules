/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:05:47 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/27 08:25:18 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string.h>

class Fixed
{
private:
		int val;
		static const int bit = 8;
public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &b);
		Fixed &operator = (const Fixed &b);
		int getRawBits(void) const;
		void setRawBits(int const bitt);
};

#endif