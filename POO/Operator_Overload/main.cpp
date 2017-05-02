#include "timer.h"

using namespace		std;



int					main()
{
	Timer			timer;
	Timer			time1(36, 42, 69);
	Timer			time2(36, 42, 69);
	int				h(0);
	int				min(0);
	int				sec(0);

	cout << "Hello ! Please, enter the time :" << endl;
	cout << "Hours :" << endl;
	cin >> h;
	cout << "Minutes :" << endl;
	cin >> min;
	cout << "Seconds :" << endl;
	cin >> sec;
	timer.convSec(sec);
	timer.convMin(h, min);
	cout << "The time is : " << timer.getHours() << "h ";
	cout << timer.getMin() << "m ";
	cout << timer.getSec() << "s " << endl;
	if (time1 == time2)
		cout << "The times are equals" << endl;
	return (0);
}
