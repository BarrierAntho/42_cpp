/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:00:43 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/03 10:35:50 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed
{
	public:
		Fixed( void );
		Fixed( const int );
		Fixed( const float );
		~Fixed( void );
		Fixed( const Fixed & );
		Fixed			&operator = ( const Fixed & );
		Fixed			operator + ( const Fixed & ) const;
		Fixed			operator - ( const Fixed & ) const;
		Fixed			operator * ( const Fixed & ) const;
		Fixed			operator / ( const Fixed & ) const;
		Fixed			operator ++ ( void );
		Fixed			operator ++ ( int );
		Fixed			operator -- ( void );
		Fixed			operator -- ( int );
		bool			operator > ( const Fixed & ) const;
		bool			operator < ( const Fixed & ) const;
		bool			operator >= ( const Fixed & ) const;
		bool			operator <= ( const Fixed & ) const;
		bool			operator == ( const Fixed & ) const;
		bool			operator != ( const Fixed & ) const;
		int			getRawBits( void ) const;
		void			setRawBits( int const raw );
		float			toFloat( void ) const;
		int			toInt( void ) const;
		static Fixed		&min( Fixed &, Fixed & );
		static const Fixed	&min( const Fixed &, const Fixed & );
		static Fixed		&max( Fixed &, Fixed & );
		static const Fixed	&max( const Fixed &, const Fixed & );
		void			show( void ) const;

	private:
		int			_value;
		static const int	_frac = 8;
};

std::ostream		&operator << (std::ostream &, const Fixed & );

#endif
