/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:00:43 by abarrier          #+#    #+#             */
/*   Updated: 2022/10/31 10:03:05 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed( void );
		~Fixed( void );
		Fixed( const Fixed & );
		Fixed			&operator = ( const Fixed & );
		int			getRawBits( void ) const;
		void			setRawBits( int const raw );

	private:
		int			_value;
		static const int	_frac = 8;
};

#endif
