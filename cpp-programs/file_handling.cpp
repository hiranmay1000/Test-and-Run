#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Create a file
    ofstream myFile("test-file.txt");
    myFile << "\nThis is new text.";

    myFile.clear();
}