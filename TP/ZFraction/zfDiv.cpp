#include "ZFraction.h"

using namespace	std;

ZFraction		ZFraction::zfDiv(ZFraction zf)
{
	ZFraction	res;

	res.t_x = t_x * zf.t_y;
	res.t_y = t_y * zf.t_x;
	return (res);
}

ZFraction		operator/(ZFraction a, ZFraction b)
{
	ZFraction	res;

	res = a.zfDiv(b);
	return (res);
}
