#include "ZFraction.h"

using namespace	std;

bool			ZFraction::zfDiff(ZFraction zf)
{
	int			tmpx(0);
	int			tmpx2(0);

	if (t_y == zf.t_y)
	{
		if (t_x != zf.t_x)
			return (true);
		return (false);
	}	
	tmpx = t_x * zf.t_y;
	tmpx2 = zf.t_x * t_y;
	if (tmpx != tmpx2)
		return (true);
	return (false);
}

bool			operator!=(ZFraction a, ZFraction b)
{
	if (a.zfDiff(b))
		return (true);
	return (false);
}
