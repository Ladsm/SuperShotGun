#include "File.h"
#include "Help.h"
#include "Amender.h"
#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>

File file;
Amender amender;

int main(int argc, char* argv[]) {
    std::string command;
    while (true) {
        std::cout << "SSG> ";
        std::getline(std::cin, command);
        if (command == "help") {
            help();
        }
        //real stuff related to program
        else if(command == "initialize"||command == "init") {
            file.createFile();
        }
        else if (command == "h1") {
            std::string H1;
            std::cout << "Please provide the header 1 for your website : ";
            std::getline(std::cin, H1);
            std::string h1 = "<h1>" + H1 + "</h1>";
            amender.amendAtPoint("<header>", h1);
        }
        else if (command == "paragraph") {
            std::string P;
            std::cout << "Please provide the text you want to add to your website : ";
            std::getline(std::cin, P);
            std::string p = "<p>" + P + "</p>";
            amender.amendAtPoint("<main>", p);
        }
        else if (command == "image") {
            std::string imagepath;
            std::cout << "Please provide a link or filepath to the image you want to display : ";
            std::getline(std::cin, imagepath);
            std::string image = R"(<img src=")" + imagepath + R"(">)";
            amender.amendAtPoint("<main>", image);
        }
        else if (command == "link") {
            std::string link;
            std::string linktodisplay;
            std::cout << "Please provide the link you want to link to : ";
            std::getline(std::cin, link);
            std::cout << "Please provide the text you want to display as the link\n(if left empty the displayed text will be the link itself) : ";
            std::getline(std::cin, linktodisplay);
            if (linktodisplay == "") {
                linktodisplay = link;
            }
            std::string finallink = R"(<a href=")" + link + R"(">)" + linktodisplay + "</a><br>";
            amender.amendAtPoint("<main>", finallink);
        }
        else if (command == "br") {
            amender.amendAtPoint("<main>", "<br>");
        }
        else if (command == "footer") {
            std::string footertext;
            std::cout << "Please provide the text you want to be as your footer : ";
            std::getline(std::cin, footertext);
            std::string footer = "<p>" + footertext + "</p>";
            amender.amendAtPoint("<main>", footer);
        }
        // boring stuff
        else if (command == "version") {
            version();
        }
        else if (command == "exit") {
            exit(0);
        }
        else if (command == "clear") {
            system("cls");
        }
        else if(command == "ls" || command == "dir") {
            system("dir");
        }
        else if (command == "") {

        }
        else {
            HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(color, 4);
            std::cout << command << " : The term " << R"(')" << command << R"(')" << "is not recognized as the name of a function.\nCheck if the spelling of the command is correct and try again.\n";
            SetConsoleTextAttribute(color, 7);
        }
    }
    return 0;
}