#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ifstream inputFile("BAI.INP.txt");

    int x, y;
    inputFile >> x >> y; 

    string path;
    inputFile >> path;

    inputFile.close();

    int mouseX = 0;
    int mouseY = 0;

    vector<int> catchTimes;
   
    for (int i = 0; i < path.length(); i++) {
        char move = path[i];
        if (move == 'U') {
            mouseY++;
        } else if (move == 'D') {
            mouseY--;
        } else if (move == 'L') {
            mouseX--;
        } else if (move == 'R') {
            mouseX++;
        }

        if (mouseX == x && mouseY == y) {
            catchTimes.push_back(i + 1);
        }
        if (mouseX - 1 == x && mouseY + 1 == y) {
            catchTimes.push_back(i + 1);
        }
        if (mouseX == x && mouseY + 1 == y) {
            catchTimes.push_back(i + 1);
        }
        if (mouseX + 1 == x && mouseY + 1 == y) {
            catchTimes.push_back(i + 1);
        }
        if (mouseX - 1 == x && mouseY == y) {
            catchTimes.push_back(i + 1);
        }
        if (mouseX + 1 == x && mouseY == y) {
            catchTimes.push_back(i + 1);
        }
        if (mouseX - 1 == x && mouseY - 1 == y) {
            catchTimes.push_back(i + 1);
        }
        if (mouseX == x && mouseY - 1 == y) {
            catchTimes.push_back(i + 1);
        }
        if (mouseX + 1 == x && mouseY - 1 == y) {
            catchTimes.push_back(i + 1);
        }
    }

    ofstream outputFile("BAI.OUT");
    if (catchTimes.empty()) {
        outputFile << "-1" << endl;
    } else {
        for (int i = 0; i < catchTimes.size(); i++) {
            outputFile << catchTimes[i] << endl;
        }
    }

    outputFile.close();

    return 0;
}

