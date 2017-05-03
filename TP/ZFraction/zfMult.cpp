#include "ZFraction.h"

using namespace	std;

ZFraction		ZFraction::zfMult(ZFraction zf)
{
	ZFraction	res;

	res.t_x = t_x * zf.t_x;
	res.t_y = t_y * zf.t_y;
	return (res);
}

ZFraction		operator*(ZFraction a, ZFraction b)
{
	ZFraction	res;

	res = a.zfMult(b);
	return (res);
}
