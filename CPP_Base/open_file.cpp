#include <iostream>
#include <string>
#include <fstream>

using namespace	std;

// utilisation de ifstream a la place de ofstream
// trois maniere de lire un fichier
//			1 - avec la fonction getline() qui lit ligne par ligne
//			2 - mot par mot, avec les chevrons >>
//			3 - char par char, avec la fonction get();

int				main()
{
	int			method(-1);
	int			i(0);
	char		a;
	string		line;
	string		word;
	string		word2("\0");
	string		fileName("Test/stream1");
	ifstream	myStream(fileName);

	if (!myStream)
	{
		cout << "ERROR ! Can't open the file !" << endl;
		return (0);
	}
	cout << "Choose the method you want :" << endl;
	cout << "\t1 to use getline()" << endl;
	cout << "\t2 to read word by word" << endl;
	cout << "\t3 to read char by char" << endl;
	cin >> method;
	if (method == 1)
	{
		cout << "You choose the line by line reading method" << endl;
		while (myStream)
		{
			getline(myStream, line);
			// on teste si line est une chaine vide en la comparant avec la chaine vide
			if (line.compare("\0") != 0) 
			{
				cout << "Line " << i << " : ";
				cout << line << endl;
				i++;
			}
		}
	}
	else if (method == 2)
	{
		cout << "You choose the word by word reading method" << endl;
		while (myStream)
		{
			myStream >> word;
			if (word.compare(word2) != 0)
			{
				cout << "Word " << i << " : ";
				cout << word << endl;
				i++;
			}
			word2 = word;
		}
	}
	else if (method == 3)
	{
		cout << "You choose the char by char reading method" << endl;
		while (myStream)
		{
			myStream.get(a); // la fonction get(char) stocke dans char la lettre lue
			cout << "Letter " << i << " : ";
			cout << a << endl;
			i++;
		}
	}
	else
		cout << "No method found ! Please choose another one" << endl;
	if (method < 1 || method > 3)
		main();
	return (0);
}
