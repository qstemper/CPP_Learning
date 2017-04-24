#include <iostream>
#include <string>
#include <fstream>

using namespace	std;

// En C++, on peut savoir ou se situe le curseur et le deplacer dans un fichier
// Lorsqu'un fichier est ouvert, le curseur est place tout au debut

int				main()
{
	int			pos;
	string		fileName("Test/stream1");
	ifstream	stream(fileName);

	stream.seekg(30, ios::beg);	// permet de deplacer le curseur dans un fichier | seekp pour ofstream
								// 3 positions pour le dpct : 
								// ios::beg = depuis le debut
								// ios::end = depuis la fin
								// ios::cur = depuis la position du curseur
	pos = stream.tellg();	// determine a quel octect/char du fichier se trouve le curseur
							// pour les types ofstream le fonction est tellp()
							// et s'utilise de la meme maniere
	cout << "We are at the ";
	if (pos == 1)
		cout << "fisrt char of the file" << endl;
	else if (pos == 2)
		cout << "second char of the file" << endl;
	else if (pos == 3)
		cout << "third char of the file" << endl;
	else
		cout << pos << "th char of the file" << endl;
	return (0);
}
