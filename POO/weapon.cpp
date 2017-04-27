#include "weapon.h"

using namespace	std;

Weapon::Weapon()
{
	name = "Iron Blade";
	dmg = 15;
}

Weapon::Weapon(string newName, int newDmg)
{
	name = newName;
	dmg = newDmg;
}

void			Weapon::change(string newName, int newDmg)
{
	name = newName;
	dmg = newDmg;
}

void			Weapon::print() const
{
	cout << "Weapon : " << name << " (Damages : " << dmg << ")" << endl;
}

// on est oblige de creer cette methode pour pouvori acceder a l'attribut dmg
// sinon on aurait eu une erreur a la compilation 
int				Weapon::getDmg() const
{
	return (dmg);
}
