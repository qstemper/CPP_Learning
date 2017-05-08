#include "ZFraction.h"

using namespace	std;

void			ZFraction::zfIrr()
{
	int			maxIrr;
	int			flag;

	if (t_x < 0 && t_y > 0)
	{
		t_x *= -1;
		flag = 1;
	}
	else if (t_x > 0 && t_y < 0)
	{
		t_y *= -1;
		flag = 2;
	}
	if (t_x > t_y)
		maxIrr = t_y;
	else
		maxIrr = t_x;
	while (maxIrr > 0)
	{
		if ((t_x % maxIrr == 0) && (t_y % maxIrr == 0))
		{
			t_x /= maxIrr;
			t_y /= maxIrr;
			return ;
		}
		maxIrr--;
	}
	return ;
}
