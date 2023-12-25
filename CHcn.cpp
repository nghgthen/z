#include "pch.h"
#include "CHcn.h"
#include "Ctron.h"
CHcn::CHcn()
{
	x1 = 0;
	y1 = 0;
	x2 = 0;
	y2 = 0;
}

CHcn::CHcn(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	y1 = my1;
	x2 = mx2;
	y2 = my2;
}
CHcn Ctron::xuathvnt()
{
	int x1, y1, x2, y2;
	x1 = x - r;
	y1 = y - r;
	x2 = x + r;
	y2 = y + r;
	CHcn hcn(x1, y1, x2, y2);
	return hcn;
}
