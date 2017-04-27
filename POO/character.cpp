#include "character.h"

using namespace	std;

Character::Character()
{
	hpMax = 100;
	mpMax = 100;
	hp = hpMax;
	mp = mpMax;
}

Character::Character(string weapName, int weapDmg) : hpMax(100), mpMax(100), hp(hpMax), mp(mpMax), weapon(weapName, weapDmg)
{

}

Character::~Character()
{
	// on a fait aucune allocation dynamique de la memoire
	// donc le destructeur restera vide
}

void			Character::receivedDmg(int dmg)
{
	hp -= dmg;
	if (hp < 0)
		hp = 0;
}

void			Character::dealtDmg(Character &target)
{
	target.receivedDmg(weapon.getDmg());
}

void			Character::regainHp(int potionQuant)
{
	hp += potionQuant;
	if (hp > hpMax)
		hp = hpMax;
}

void			Character::weaponChange(string newWeapon, int newWeaponDmg)
{
	weapon.change(newWeapon, newWeaponDmg);
}

// const permet de dire au compilo que la methode ne modifie nullement l'objet
bool			Character::isAlive() const
{
	if (hp > 0)
		return (true);
	return (false);
	// on peut aussi ecrire -> return (hp > 0);
}

void			Character::printState() const
{
	cout << "Life : " << hp << endl;
	cout << "Mana : " << mp << endl;
	weapon.print();
}
