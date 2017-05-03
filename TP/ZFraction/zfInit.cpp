#include "ZFraction.h"

using namespace	std;

ZFraction::ZFraction()
{
	t_x = 0;
	t_y = 0;
}

ZFraction::ZFraction(int nb1, int nb2) : t_x(nb1), t_y(nb2)
{

}

ZFraction::ZFraction(int nb) : t_x(nb), t_y(1)
{

}

int				ZFraction::denNull()
{
	if (t_y == 0)
		cout << "The denominator can't be 0 !" << endl;
	return (0);
}

void			ZFraction::getFrac()
{
	cout << t_x << " / " << t_y << endl;
}
