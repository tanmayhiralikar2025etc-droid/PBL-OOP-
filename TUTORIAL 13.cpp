#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Open the source file for reading
    ifstream inFile("source.txt");

    // Open (or create) the destination file for writing
    ofstream outFile("destination.txt");

    // Check if both files opened successfully
    if (!inFile || !outFile) {
        cout << "Error: Could not open file." << endl;
        return 1;
    }

    string line;

    // Read the source file line by line and write each line to the destination
    while (getline(inFile, line)) {
        outFile << line << endl;
    }

    cout << "File copied successfully!" << endl;

    // Close both files
    inFile.close();
    outFile.close();

    return 0;
}
