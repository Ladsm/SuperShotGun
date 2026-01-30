#include <iostream>
//std::cout << "\n";
void help() {
	std::cout << "SuperShotGun(SSG), is a cli tool that creates html boiler plate.\n";
	std::cout << "Commands:\n";
	std::cout << "help : Prints help message\n";
	std::cout << "exit : exits the program... :(\n";
	std::cout << "clear : clears the console\n";
	std::cout << "version : Prints version number\n";
	std::cout << "initialize : creates index.html with basic boiler plate\n";
	std::cout << "h1 : Asks for header 1/title and adds it to index.html\n";
	std::cout << "paragraph : Asks for paragraph and adds it to index.html\n";
	std::cout << "image : Asks for image filepath or link and adds it to index.html\n";
	return;
}

void version() {
std::string L1 = "                          ######################################\n";
std::string L2 = "##################    ######Super ShotGun####################   \n";
std::string L3 = "####################################################            \n";
std::string L4 = "  ################Static Site Generator#####                    \n";
std::string L5 = "  ########################################                      \n";
std::string L6 = "  ###########         ## ##                                     \n";
std::string L7 = " ##########            ###     version : 0,00,0                 \n";
std::string L8 = " #####                                                          \n";
std::string Sversion = L1 + L2 + L3 + L4 + L5 + L6 + L7 + L8;
std::cout << Sversion;
}