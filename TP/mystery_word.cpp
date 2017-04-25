#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace	std;

int				main()
{
	string		mysteryWord;
	string		tmp;
	string		guessWord;
	string		shuffleWord;
	int			play;
	int			nbAlea;
	int			size;

	srand(time(0));
	cout << "Welcome to the Mystery Word" << endl;
	cout << "Player 1, choose the word you want to make discover !" << endl;
	cin >> mysteryWord;
	size = mysteryWord.size();
	tmp = mysteryWord;
	while (size > 0)
	{
		nbAlea = rand() % size;
		shuffleWord += mysteryWord[nbAlea];
		mysteryWord.erase(nbAlea, 1);
		size--;
	}
	while (tmp.compare(guessWord) != 0)
	{
		cout << "Player 2, guess the word !" << endl;
		cout << shuffleWord << endl;
		cin >> guessWord;
		if (mysteryWord.compare(guessWord) != 0)
			cout << "That's not the word !" << endl;
	}
	cout << "Bravo ! You guess the word !" << endl;
	cout << "Wanna play again ?" << endl << "0 for yes and 1 for no" << endl;
	cin >> play;
	if (play == 0)
		main();
	return (0);
}
