#include <iostream>
#include <fstream>
#include <vector>
#include "config.h"
int main()
{
	std::vector<double> pion;
	std::ifstream in("../traj_2840_pion_1e-4.txt",std::ios::in);
	std::vector<std::string> config;
	std::string list_path="list.txt";
	config=list_config( config, list_path);	
	double temp;
	while (in >> temp)
	{
		pion.push_back(temp);
	}
	
	in.close();


	//Display
	std::cout << "The vector pion contents: " << std::endl;
	for (auto i=pion.begin(); i!= pion.end() ; ++i)
		std::cout << *i << '\n';
	


	std::cout << "Configs read in are:" << std::endl;

	for (auto i=config.begin(); i != config.end(); ++i)
		std::cout << *i << '\n';


	//std::cin.get();
	return 0; 


}
