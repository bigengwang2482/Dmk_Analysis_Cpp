#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "meson.h"
void  meson_in(std::vector< std::vector<double> > &meson, const std::vector<std::string> &config_file_list)
{
	for(auto i = 0; i < config_file_list.size(); ++i)
	{
		std::ifstream in(config_file_list[i] ,std::ios::in);
		double temp;
		while (in >> temp)
		{
			(meson[i]).push_back(temp);
		}	

		in.close();
	}
}
