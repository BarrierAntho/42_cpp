/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertScalarTypes.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:21:48 by abarrier          #+#    #+#             */
/*   Updated: 2022/11/29 15:40:36 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTSCALARTYPES_HPP
# define CONVERTSCALARTYPES_HPP

# include <climits>
# include <cmath>
# include <cstdlib>
# include <exception>
# include <iomanip>
# include <iostream>

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
#  define CVT_INF_P "inf"
# endif
# ifndef CVT_INF_PP
#  define CVT_INF_PP "+inf"
# endif
# ifndef CVT_INF_N
#  define CVT_INF_N "-inf"
# endif
# ifndef CVT_INFF_P
#  define CVT_INFF_P "inff"
# endif
# ifndef CVT_INFF_PP
#  define CVT_INFF_PP "+inff"
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
		double		getHandle( void ) const;
		double		getIntPart( void ) const;
		double		getFractPart( void ) const;

		char		getChar( void ) const;
		int		getInt( void ) const;
		float		getFloat( void ) const;
		double		getDouble( void ) const;

		bool		getPseudo( void ) const;
		bool		getPseudoF( void ) const;

		bool		getErrChar( void ) const;
		bool		getErrInt( void ) const;
		bool		getErrFloat( void ) const;
		bool		getErrDouble( void ) const;

		// MEMBER FUNCTIONS
		int	inputType( void );
		int	checkString( void );
		void	convert( void );
		void	show( void ) const;
		void	showChar( void ) const;
		void	showInt( void ) const;
		void	showFloat( void ) const;
		void	showDouble( void ) const;

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
		double		_intpart;
		double		_fractpart;
		char		_char;
		int		_int;
		float		_float;
		double		_double;

		bool		_isPseudo;
		bool		_isPseudoF;

		bool		_err_char;
		bool		_err_int;
		bool		_err_float;
		bool		_err_double;
};

std::ostream	&operator << ( std::ostream &, ConvertScalarTypes const & );

#endif
