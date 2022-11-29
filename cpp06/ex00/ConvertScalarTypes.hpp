/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertScalarTypes.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:21:48 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/29 12:44:26 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTSCALARTYPES_HPP
# define CONVERTSCALARTYPES_HPP

# include <climits>
# include <cstdlib>
# include <exception>
# include <iostream>
# include <inttypes.h>

# ifndef CVT_DFT_STR
#  define CVT_DFT_STR "Default string"
# endif
# ifndef CVT_DFT_TYPE
#  define CVT_DFT_TYPE -1
# endif
# ifndef CVT_NOT_DISP
#  define CVT_NOT_DISP "Non displayable"
# endif
# ifndef CVT_IMPOSSIBLE
#  define CVT_IMPOSSIBLE "Impossible"
# endif
# ifndef CVT_INF_P
#  define CVT_INF_P "+inf"
# endif
# ifndef CVT_INF_N
#  define CVT_INF_N "-inf"
# endif
# ifndef CVT_INFF_P
#  define CVT_INFF_P "+inff"
# endif
# ifndef CVT_INFF_N
#  define CVT_INFF_N "-inff"
# endif
# ifndef CVT_NAN
#  define CVT_NAN "nan"
# endif
# ifndef CVT_NANF
#  define CVT_NANF "nanf"
# endif

enum dataType{
	STRG,
	CHR,
	INTG,
	FLT,
	DBL,
};

class ConvertScalarTypes
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		ConvertScalarTypes( void );
		~ConvertScalarTypes( void );
		ConvertScalarTypes( std::string const & );
		ConvertScalarTypes( ConvertScalarTypes const & );

		// OVERLOAD OPERATOR
		ConvertScalarTypes	&operator = ( ConvertScalarTypes const & );
		operator char ( void );
		operator int ( void );
		operator float ( void );
		operator double ( void );

		// GETTER / SETTER
		std::string	getString( void ) const;
		int		getType( void ) const;
		char		getChar( void ) const;
		int		getInt( void ) const;
		float		getFloat( void ) const;
		double		getDouble( void ) const;

		// MEMBER FUNCTIONS
		int	getInputType( void );
		int	checkString( void );
		//void	convert( void );

		// EXCEPTION FUNCTIONS
		class NullInputException: public std::exception
		{
			public:
				virtual const char	*what( void ) const throw();
		};

	private:
		std::string	_str;
		int		_type;
		double		_handle;
		char		_char;
		int		_int;
		float		_float;
		double		_double;
};

std::ostream	&operator << ( std::ostream &, ConvertScalarTypes const & );

#endif
