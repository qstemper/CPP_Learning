#ifndef CHARACTER_H
# define CHARACTER_H

#include <iostream>
#include <string>
#include "weapon.h"

class					Character
{
	public :
		// constructeur -> permet d'initialiser les atributs
		Character();
		Character(std::string weapName, int weapDmg);
		// destructeur -> permet de desallouer la memoire quand un objet est supprime de la memoire
		~Character();
		void			receivedDmg(int dmg);
		void			dealtDmg(Character &target);
		void			regainHp(int potionQuant);
		void			weaponChange(std::string newWeapon, int newWeaponDmg);
		bool			isAlive() const;
		void			printState() const;

	private :
		int				hpMax;
		int				mpMax;
		int				hp;
		int				mp;
		Weapon			weapon;
};

#endif
