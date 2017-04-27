#include "time.h"

using namespace	std;

int				main()
{
		Time	time1(0, 0, 15000);
		Time	time2(0, 5, 360);
		int		h1(time1.getH());
		int		m1(time1.getMin());
		int		s1(time1.getSec());
		int		h2(time2.getH());
		int		m2(time2.getMin());
		int		s2(time2.getSec());


		time1.conv_sec_to_min();
		time1.conv_min_to_h();
		cout << "Hours:min:sec -> " << h1 << ":" << m1 << ":" << s1 << endl;
		time2.conv_sec_to_min();
		time2.conv_min_to_h();
		cout << "Hours:min:sec -> " << h2 << ":" << m2 << ":" << s2 << endl;
		return (0);
}
