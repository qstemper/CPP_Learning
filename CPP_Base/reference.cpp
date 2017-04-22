#include <iostream>

using namespace std;

int main()
{
	int		userAge(25);
	int&	myVar(userAge);
	// l'esperluette marque la reference, les 2 var sont attachees a la meme memoire
	// la ref doit etre du meme type que la var a laquelle elle est accrochee

	cout << "Vous avez " << userAge << " ans. (via var)" << endl;
	cout << "Vous avez " << myVar << " ans. (via ref)" << endl;
	return (0);
}
