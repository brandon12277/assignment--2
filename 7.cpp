#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the file to read: ";
    getline(cin, filename); 

    ifstream inputFile(filename);

    
    if (!inputFile.is_open()) {
        cerr << "Error: Unable to open the file." << endl;
        return 1; 
    }

    string line;
    int charCount = 0;
    int wordCount = 0;
    int lineCount = 0;

    while (getline(inputFile, line)) {
        lineCount++;

        charCount += line.length();

       
        stringstream ss(line);
        string word;
        while (ss >> word) {
            wordCount++;
        }
    }

   
    inputFile.close();

   
    cout << "Number of characters: " << charCount << endl;
    cout << "Number of words: " << wordCount << endl;
    cout << "Number of lines: " << lineCount << endl;

    return 0;
}
