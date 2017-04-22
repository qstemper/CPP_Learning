#include <iostream>

using namespace	std;

int				main()
{
	string		tabName[5];
	int			tabScore[5];
	int			i;
	int			j;
	int			bestScore;

	tabName[0] = "Loser";
	tabName[1] = "Quentin";
	tabName[2] = "Eternal Third";
	tabName[3] = "Nearly First";
	tabName[4] = "Better than the last at least";
	tabScore[0] = 36;
	tabScore[1] = 100;
	tabScore[2] = 95;
	tabScore[3] = 98;
	tabScore[4] = 57;
	i = -1;
	j = -1;
	bestScore = -1;
	while (++i < 5)
	{
		cout << "Scores of player " << tabName[i] << " : " << tabScore[i] << endl;
		if (bestScore < tabScore[i])
		{
			bestScore = tabScore[i];
			j = i;
		}
	}
	cout << "The Best Player is " << tabName[j] << " with a score of " << bestScore << endl;
	return (0);
}
