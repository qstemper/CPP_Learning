#include <iostream>
#include <vector>
#include <string>

using namespace std;

int				main()
{
	int const	x(5);
	int const	y(3);
	int			tab[x][y];
	int			i;
	int			j;

	i = -1;
	while (++i < y)
	{
		j = -1;
		while (++j < x)
		{
			cout << i << " " << j;
			if (j + 1 != x)
				cout << "\t";
		}
		cout << endl;
	}
	return (0);
}
