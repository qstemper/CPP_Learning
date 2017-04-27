#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class					Weapon
{
	public :
		Weapon();
		Weapon(std::string newName, int newDmg);
		void			change(std::string newName, int newDmg);
		void			print() const;
		int				getDmg() const;

	private :
		std::string		name;
		int				dmg;
};

#endif
