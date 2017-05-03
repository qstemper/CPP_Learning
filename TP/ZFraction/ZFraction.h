#ifndef ZFRACTION_H
# define ZFRACTION_H

# include <iostream>

class				ZFraction
{
	public :
		ZFraction();
		ZFraction(int nb1, int nb2);
		ZFraction(int nb);
		int			denNull();
		ZFraction	zfAdd(ZFraction zf);
		ZFraction	zfSub(ZFraction zf);
		ZFraction	zfMult(ZFraction zf);
		ZFraction	zfDiv(ZFraction zf);
		bool		zfSup(ZFraction zf);
		bool		zfInf(ZFraction zf);
		bool		zfEqual(ZFraction zf);
		bool		zfDiff(ZFraction zf);
		void		getFrac();

	private :
		int			t_x;
		int			t_y;
};

ZFraction			operator+(ZFraction a, ZFraction b);
ZFraction			operator-(ZFraction a, ZFraction b);
ZFraction			operator*(ZFraction a, ZFraction b);
ZFraction			operator/(ZFraction a, ZFraction b);
bool				operator<(ZFraction a, ZFraction b);
bool				operator>(ZFraction a, ZFraction b);
bool				operator==(ZFraction a, ZFraction b);
bool				operator!=(ZFraction a, ZFraction b);
bool				operator<=(ZFraction a, ZFraction b);
bool				operator>=(ZFraction a, ZFraction b);

#endif
