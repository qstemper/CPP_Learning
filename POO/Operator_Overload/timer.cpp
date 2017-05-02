#include "timer.h"

using namespace std;

Timer::Timer()
{
	t_h = 0;
	t_m = 0;
	t_s = 0;
}


Timer::Timer(int h, int min, int sec) : t_h(h), t_m(min), t_s(sec)
{

}

Timer::~Timer()
{

}

void		Timer::convSec(int sec)
{
	int		i(0);

	while (sec >= 60)
	{
		sec -= 60;
		i++;
	}
	t_m += i;
	t_s += sec;
}

void		Timer::convMin(int hours, int min)
{
	int		i(0);

	t_h = hours;
	while (min >= 60)
	{
		min -= 60;
		i++;
	}
	t_h += i;
	t_m += min;
}

int			Timer::getHours()
{
	return (t_h);
}

int			Timer::getMin()
{
	return (t_m);
}

int			Timer::getSec()
{
	return (t_s);
}

bool		Timer::isEqual(Timer const& b) const
{
	if (t_h == b.t_h && t_m == b.t_m && t_s == b.t_s)
		return (true);
	return (false);
}

bool		operator==(Timer const& a, Timer const& b)
{
	return (a.isEqual(b));
}
