#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "meson.h"
void  meson_in(std::vector<double> &m, std::string path)
{
	std::ifstream in(path ,std::ios::in);
	double temp;
	while (in >> temp)
	{
		m.push_back(temp);
	}
	
	in.close();
}
