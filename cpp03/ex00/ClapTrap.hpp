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
		void		attack(const std::string );
		void		takeDamage(unsigned int );
		void		beRepaired(unsigned int );

		std::string	getName( void );
		int		getHp( void );
		void		setHp( int );
		int		getMp( void );
		void		setMp( int );
		int		getDps(void );
		void		setDps(int );

		std::ostream	show( std::ostream );

	private:
		ClapTrap( void );
		std::string	_name;
		int		_hp;
		int		_mp;
		int		_dps;
};

#endif
