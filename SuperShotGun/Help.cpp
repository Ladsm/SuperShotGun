#include <iostream>
#include <Windows.h>
//std::cout << "\n";

static void changecolor(int cOlOr) {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	switch (cOlOr) {
	case 1:
		SetConsoleTextAttribute(color, 7);
		break;
	case 2:
		SetConsoleTextAttribute(color, 6);
		break;
	case 3:
		SetConsoleTextAttribute(color, 4);
		break;
	case 4:
		SetConsoleTextAttribute(color, 14);
		break;
	case 5:
		SetConsoleTextAttribute(color, 15);
		break;
	default:
		SetConsoleTextAttribute(color, 7);
		break;
	}
}

void help() {
	std::cout << "SuperShotGun(SSG), is a cli tool that creates html boiler plate.\n";
	std::cout << "Commands:\n"; changecolor(5);
	std::cout << "help : Prints help message\n"; changecolor(4);
	std::cout << "initialize / init : creates index.html with basic boiler plate\n"; changecolor(5);
	std::cout << "h1 : Asks for header 1/title and adds it to index.html\n"; changecolor(4);
	std::cout << "paragraph : Asks for paragraph and adds it to index.html\n"; changecolor(5);
	std::cout << "image : Asks for image filepath or link and adds it to index.html\n"; changecolor(4);
	std::cout << "link : Asks for link and what text to display as link(if left empty i'll just be the link displayed)\n"; changecolor(5);
	std::cout << "footer : Basicly just paragraph but at the bottom of your site\n"; changecolor(4);
	std::cout << "line : Adds a line to your website with the hr tag\n"; changecolor(5);
	std::cout << "center : centers evrything in your website\n"; changecolor(4);
	std::cout << "br : breaks line\n"; changecolor(5);
	std::cout << "exit : exits the program... :(\n"; changecolor(4);
	std::cout << "clear : clears the console\n"; changecolor(5);
	std::cout << "version : Prints version number\n"; changecolor(4);
	std::cout << "ls / dir : Prints working directory\n"; changecolor(1);
	return;
}

void version() {
	changecolor(2);
	std::cout << "                          ######################################\n";
	std::cout << "##################    ######";
	changecolor(1);
	std::cout << "Super ShotGun";
	changecolor(2);
	std::cout << "####################   \n";
	std::cout << "####################################################            \n";
	std::cout << "  ################";
	changecolor(1);
	std::cout << "Static Site Generator";
	changecolor(2);
	std::cout << "#####                    \n";
	std::cout << "  ########################################                      \n";
	std::cout << "  ###########         ## ##                               ";
	changecolor(3);
	std::cout << "@     \n";
	changecolor(2);
	std::cout << " ##########            ###     ";
	changecolor(1);
	std::cout << "version : 1,01,3           ";//change this evry new commit or I will come for you
	changecolor(3);
	std::cout << "@     \n";
	changecolor(2);
	std::cout << " #####           ";
	changecolor(4);
	std::cout << "#";
	changecolor(3);
	std::cout << "@@";
	changecolor(4);
	std::cout << "                                      #     \n";
	changecolor(1);
}