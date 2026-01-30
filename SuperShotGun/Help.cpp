#include <iostream>
#include <Windows.h>
//std::cout << "\n";
void help() {
	std::cout << "SuperShotGun(SSG), is a cli tool that creates html boiler plate.\n";
	std::cout << "Commands:\n";
	std::cout << "help : Prints help message\n";
	std::cout << "initialize / init : creates index.html with basic boiler plate\n";
	std::cout << "h1 : Asks for header 1/title and adds it to index.html\n";
	std::cout << "paragraph : Asks for paragraph and adds it to index.html\n";
	std::cout << "image : Asks for image filepath or link and adds it to index.html\n";
	std::cout << "link : Asks for link and what text to display as link(if left empty i'll just be the link displayed)\n";
	std::cout << "footer : Basicly just paragraph but at the bottom of your site\n";
	std::cout << "br : breaks line\n";
	std::cout << "exit : exits the program... :(\n";
	std::cout << "clear : clears the console\n";
	std::cout << "version : Prints version number\n";
	std::cout << "ls / dir : Prints working directory\n";
	return;
}

void version() {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, 6);
	std::cout << "                          ######################################\n";
	std::cout << "##################    ######";
	SetConsoleTextAttribute(color, 7);
	std::cout << "Super ShotGun";
	SetConsoleTextAttribute(color, 6);
	std::cout << "####################   \n";
	std::cout << "####################################################            \n";
	std::cout << "  ################";
	SetConsoleTextAttribute(color, 7);
	std::cout << "Static Site Generator";
	SetConsoleTextAttribute(color, 6);
	std::cout << "#####                    \n";
	std::cout << "  ########################################                      \n";
	std::cout << "  ###########         ## ##                                     \n";
	std::cout << " ##########            ###     ";
	SetConsoleTextAttribute(color, 7);
	std::cout << "version : 1,00,1                 \n";//change this evry new commit or I will come for you
	SetConsoleTextAttribute(color, 6);
	std::cout << " #####           ";
	SetConsoleTextAttribute(color, 14);
	std::cout << "#";
	SetConsoleTextAttribute(color, 4);
	std::cout << "@@";
	std::cout << "                                            \n";
	SetConsoleTextAttribute(color, 7);
}