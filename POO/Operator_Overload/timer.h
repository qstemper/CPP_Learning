#ifndef TIMER_H
# define TIMER_H

# include <iostream>

class				Timer
{
	public :
		Timer();
		Timer(int h, int min, int sec);
		~Timer();
		void		convSec(int sec);
		void		convMin(int hours, int min);
		int			getHours();
		int			getMin();
		int			getSec();

	private :
		int			t_h;
		int			t_m;
		int			t_s;
};

#endif
