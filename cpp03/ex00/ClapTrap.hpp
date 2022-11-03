#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define CP_HP 10
# define CP_MP 10
# define CP_DPS 0

class ClapTrap
{
    public:
         void     attack(const std::string& target);
         void     takeDamage(unsigned int amount);
         void     beRepaired(unsigned int amount);

    private:
         int      hp;
         int      mp;
         int      dps;
};

#endif