#include "time.h"

Time::Time(int hours, int min, int sec) : h(hours), m(min), s(sec)
{

}

void		Time::conv_sec_to_min()
{
	while (s > 59)
	{
		m += s % 60;
		s %= 60;
	}
}

void		Time::conv_min_to_h()
{
	while (m > 59)
	{
		h += m % 60;
		m %= 60 ;
	}
}

int		getSec()
{
	return (s);
}

int		getMin()
{
	return (m);
}

int		getH()
{
	return (h);
}
