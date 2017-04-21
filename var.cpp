#include <iostream>
#include <string> // a inclure des l'utilisation de string

using namespace std;

int main()
{
	int		userAge(25);
	int		userAge2 = 25;
	// les 2 notations sont egales, mais la premiere est la plus legitime en c++

	int		friendNumber(432);
	double	pi(3.1415);
	bool	isMyFriend(true); // 2 valeurs pour bool : true ou false !
	char	character('a'); // bien mettre les apostrophes !
	string	userName("Quentin Stempert"); // bien mettre les guillemets !

	// possiblite de declarer plusieurs var du meme type sur une ligne
	// perte de lisibilite et de comprehensibilite
	int		a(0), b(1), c(2);
	string	name("Stempert"), firstName("Quentin");

	//declaration de var sans initialisation et sans parenthese
	string	playerName;
	int		playerNumber;
	bool	hasWon;

	return (0);
}
