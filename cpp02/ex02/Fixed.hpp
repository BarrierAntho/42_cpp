/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:00:43 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/01 16:31:54 by abarrier         ###   ########.fr       */
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
		Fixed			&operator + ( const Fixed & );
		Fixed			&operator - ( const Fixed & );
		Fixed			&operator * ( const Fixed & );
		Fixed			&operator / ( const Fixed & );
		Fixed			&operator ++ ( void );
		Fixed			operator ++ ( int );
		Fixed			&operator -- ( void );
		Fixed			operator -- ( int );
		bool			operator > ( const Fixed & );
		bool			operator < ( const Fixed & );
		bool			operator >= ( const Fixed & );
		bool			operator <= ( const Fixed & );
		bool			operator == ( const Fixed & );
		bool			operator != ( const Fixed & );
		int			getRawBits( void ) const;
		void			setRawBits( int const raw );
		float			toFloat( void ) const;
		int			toInt( void ) const;
		void			show( void ) const;

	private:
		int			_value;
		static const int	_frac = 8;
};

std::ostream		&operator << (std::ostream &, const Fixed & );

#endif
