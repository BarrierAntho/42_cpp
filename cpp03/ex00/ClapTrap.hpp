#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define CP_HP 10
# define CP_MP 10
# define CP_DPS 0

class ClapTrap
{
	public:
		ClapTrap( std::string );
		~ClapTrap( void );
		ClapTrap( const ClapTrap & );
		ClapTrap	&operator = ( const ClapTrap & );
		void			attack( const std::string );
		void			takeDamage( unsigned int );
		void			beRepaired( unsigned int );

		std::string	getName( void ) const;
		void			setName ( const std::string newName );
		int			getHp( void ) const;
		void			setHp( const int );
		int			getMp( void ) const;
		void			setMp( const int );
		int			getDps( void ) const;
		void			setDps( const int );
		
		void			show( void );

	private:
		ClapTrap( void );
		
		std::string	_name;
		int		_hp;
		int		_mp;
		int		_dps;
};

std::ostream	&operator << ( std::ostream &, const ClapTrap & );

#endif
