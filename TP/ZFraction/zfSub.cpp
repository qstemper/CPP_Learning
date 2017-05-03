#include "ZFraction.h"

using namespace	std;

ZFraction		ZFraction::zfSub(ZFraction zf)
{
	ZFraction	res;
	int			tmpx(0);
	int			tmpx2(0);
	int			tmpy(0);

	if (t_y == zf.t_y)
	{
		res.t_x = t_x - zf.t_x;
		res.t_y = t_y;
	}
	else
	{
		tmpx = t_x * zf.t_y;
		tmpy = t_y * zf.t_y;
		tmpx2 = zf.t_x * t_y;
		res.t_x = tmpx - tmpx2;
		res.t_y = tmpy;
	}
	return (res);
}

ZFraction		operator-(ZFraction a, ZFraction b)
{
	ZFraction	res;

	res = a.zfSub(b);
	return (res);
}
