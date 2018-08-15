#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "config.h"
#include "meson.h"
int main()
{
	std::vector<std::string> config;
	std::vector<std::string> pion_file_list;
	std::string marker="*";
	std::string common_name="./data/klks_ml_0.00062/traj_*_pion_1e-4.txt";
	std::string config_path="./inputs/configs.txt";
	list_config( config, config_path);
	list_file_name(pion_file_list, config, common_name, marker );	
	std::vector< std::vector<double> > pion(pion_file_list.size());	
	meson_in(pion, pion_file_list);	 
	//Display
	
	std::cout << "The pion file list contents: " << std::endl;
	for (auto i=pion_file_list.begin(); i!= pion_file_list.end() ; ++i)
		std::cout << *i << '\n';
	
	std::cout << "The pion read contents: " << std::endl;
	for (auto i=pion.begin(); i!= pion.end() ; ++i)
	{	
		for(auto j=(*i).begin(); j != (*i).end(); ++j)
			std::cout << *j << '\n';

		std::cout << '\n' << '\n';
	}
	

	std::cout << "Configs read in are:" << std::endl;

	for (auto i=config.begin(); i != config.end(); ++i)
		std::cout << *i << '\n';
	

	//std::cin.get();
	return 0; 


}
