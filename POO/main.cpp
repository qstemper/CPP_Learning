#include "character.h"

using namespace	std;

int				main()
{
	Character	quintus;
	Character	rubicon("Steel Blade", 20);

	rubicon.dealtDmg(quintus);
	quintus.regainHp(20);
	rubicon.dealtDmg(quintus);
	quintus.dealtDmg(rubicon);
	rubicon.weaponChange("Frost Bite Blade", 25);
	rubicon.dealtDmg(quintus);
	cout << "Quintus" << endl;
	quintus.printState();
	cout << endl << "Rubicon" << endl;
	rubicon.printState();
	return (0);
}
