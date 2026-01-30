#include "Amender.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

void Amender::amendAtPoint(std::string pointToAmend, std::string AddedAmend) {
    std::ifstream inputFile("index.html");
    std::ofstream tempFile("temp.txt");
    std::string line;
    std::string targetLine = pointToAmend;
    std::string newLineContent = AddedAmend;
    if (!inputFile || !tempFile) return;
    while (std::getline(inputFile, line)) {
        tempFile << line << "\n";
        if (line == pointToAmend) {
            tempFile << AddedAmend << "\n";
        }
    }
    inputFile.close();
    tempFile.close();
    std::remove("index.html");
    (void)std::rename("temp.txt", "index.html");
    return;
}