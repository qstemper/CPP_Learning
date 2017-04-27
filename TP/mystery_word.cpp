#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace	std;

static void			hide_word()
{
	int			i;

	i = 81;
	while (--i > -1)
		cout << endl;
}

static string	get_word()
{
	string		str;

	cin >> str;
	return (str);
}

static void		print_msg()
{
	cout << "Welcome to the Mystery Word" << endl;
	cout << "Player 1, choose the word you want to make discover !" << endl;
}


static string	shuffle_word(string mysteryWord)
{
	int			alea;
	int			size;
	string		shuffleWord;

	size = mysteryWord.size();
	while (size > 0)
	{
		alea = rand() % size;
		shuffleWord += mysteryWord[alea];
		mysteryWord.erase(alea, 1);
		size--;
	}
	return (shuffleWord);
}

static void		guess_word(string mysteryWord, string tmp)
{
	string		guessWord;

	while (mysteryWord.compare(guessWord) != 0)
	{
		cout << "Player 2, guess the word !" << endl;
		cout << tmp << endl;
		cin >> guessWord;
		if (mysteryWord.compare(guessWord) != 0)
		{
			tmp = shuffle_word(tmp);
			cout << "That's not the word !" << endl;
		}
	}
	cout << "Bravo ! You guess the word !" << endl;
}

static int		play_again()
{
	int			play;

	cout << "Wanna play again ?" << endl << "0 for yes and 1 for no" << endl;
	cin >> play;
	if (play == 0)
		return (0);
	return (1);
}

int				main()
{
	string		mysteryWord;
	string		tmp;

	srand(time(0));
	print_msg();
	mysteryWord = get_word();
	hide_word();
	tmp = shuffle_word(mysteryWord);
	guess_word(mysteryWord, tmp);
	if (play_again() == 0)
		main();
	return (0);
}
