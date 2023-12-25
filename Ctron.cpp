#include "pch.h"
#include<iostream>
using namespace std;
#include"Ctron.h"
Ctron::Ctron()
{
	x = 0;
	y = 0;
	r = 0;
}

Ctron::Ctron(int mx, int my, int mr)
{
	x = mx;
	y = my;
	r = mr;
}

double Ctron::chuvi()
{
	double cv = 0;
	cv = 3.14 * 2 * r;
	return cv;
}

double Ctron::dientich()
{
	double dt = 0;
	dt = 3.14 * r * r;
	return dt;
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