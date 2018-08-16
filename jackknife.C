#include <iostream>
#include <vector>
#include <string>
#include "jackknife.h"

void meson_jknf (const std::vector < std::vector <double> > &raw, std::vector < std::vector <double> > &output)
{
	int size_N=raw.size();
	int size_X=raw[0].size();
	double sum[size_X]={0.00};
	double temp[size_N][size_X]={0};
	for (int i = 0; i < size_X ; ++i)
	{
		for (int j = 0; j < size_N ; ++j )
		{
			sum[i] = sum[i] + raw[j][i];
		}
	}
	
	//Calculate jackknifed value
	for (int r = 0; r < size_N ; ++r)
	{
		for (int c = 0; c < size_X ; ++c)
		{	temp[r][c]= sum[c]-raw[r][c];
			output[r].push_back(temp[r][c]);
		}	
	}
	
} 
