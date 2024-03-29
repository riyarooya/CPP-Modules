/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:05:47 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/29 09:12:35 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string.h>
#include <cmath>
#include <iomanip>

class Fixed
{
private:
		int val;
		static const int bit;
public:
		Fixed();
		Fixed(const Fixed &b);
		Fixed &operator = (const Fixed &b);
		~Fixed();
		Fixed(const int n);
		Fixed (const float fl);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int	toInt(void) const;
		bool operator>(const Fixed &fix);
		bool operator<(const Fixed &fix);
		bool operator>=(const Fixed &fix);
		bool operator<=(const Fixed &fix);
		bool operator==(const Fixed &fix);
		bool operator!=(const Fixed &fix);
		float operator+(Fixed fix)const;
		float operator-(Fixed fix)const;
		float operator*(Fixed fix)const;
		float operator/(Fixed fix)const;
		float operator++ ();
		float operator++ (int);
		float operator-- ();
		float operator-- (int);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed &max(Fixed&a, Fixed &b);
		static Fixed const &max(Fixed const &, Fixed const &b);
};
std::ostream &operator << (std::ostream &object, const Fixed &fix);


#endif