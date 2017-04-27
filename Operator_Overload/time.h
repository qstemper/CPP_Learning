#ifndef TIME_H
# define TIME_H

# include <iostream>

class			Time
{
	public :
		Time(int hours = 0, int min = 0, int sec = 0);
		void	conv_sec_to_min();
		void	conv_min_to_h();
		int		getSec();
		int		getMin();
		int		getH();

	private :
		int		h;
		int		m;
		int		s;
};

#endif
