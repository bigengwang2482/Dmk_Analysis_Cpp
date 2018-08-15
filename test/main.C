#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "config.h"
#include "meson.h"
int main()
{
	std::vector<double> pion;
	std::vector<std::string> config;
	std::vector<std::string> file_list;
	std::string marker="*";
	std::string common_name="./inputs/traj_*_pion_1e-4.txt";
	std::string config_path="./inputs/list.txt";
	std::string path_pion="../traj_2840_pion_1e-4.txt";
	list_config( config, config_path);
	list_file_name(file_list, config, common_name, marker );		
	meson_in(pion, path_pion);	 
	//Display
	std::cout << "The vector pion contents: " << std::endl;
	for (auto i=pion.begin(); i!= pion.end() ; ++i)
		std::cout << *i << '\n';
	
	std::cout << "The file list contents: " << std::endl;
	for (auto i=file_list.begin(); i!= file_list.end() ; ++i)
		std::cout << *i << '\n';
	


	std::cout << "Configs read in are:" << std::endl;

	for (auto i=config.begin(); i != config.end(); ++i)
		std::cout << *i << '\n';


	//std::cin.get();
	return 0; 


}
