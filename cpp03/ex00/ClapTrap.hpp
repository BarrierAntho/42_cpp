#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define CP_HP 10
# define CP_MP 10
# define CP_MP_COST 1
# define CP_DPS 0
# define CP_DPS_COST 1

class ClapTrap
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		ClapTrap( std::string );
		~ClapTrap( void );
		ClapTrap( const ClapTrap & ); // COPY CONSTRUCTOR

		// OVERLOAD OPERATOR
		ClapTrap	&operator = ( const ClapTrap & );

		// GETTER / SETTER
		std::string	getName( void ) const;
		void			setName ( const std::string newName );
		int			getHp( void ) const;
		void			setHp( const int );
		int			getMp( void ) const;
		void			setMp( const int );
		int			getDps( void ) const;
		void			setDps( const int );

		// SUBJECT FUNCTIONS
		void			attack( const std::string & );
		void			takeDamage( unsigned int );
		void			beRepaired( unsigned int );

	private:
		// CONSTRUCTOR / DESTRUCTOR
		ClapTrap( void ); // PRIVATE DEFAULT CONSTRUCTOR TO RESPECT CANNONIX FORM
		
		// ATTRIBUTES
		std::string	_name;
		int		_hp;
		int		_mp;
		int		_dps;
};

// OUTSIDE OF THE CLASS
std::ostream	&operator << ( std::ostream &, const ClapTrap & );

#endif
