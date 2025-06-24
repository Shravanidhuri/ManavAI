#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string sourceFile, destinationFile;

    cout << "Enter the source file name: ";
    cin >> sourceFile;
    cout << "Enter the destination file name: ";
    cin >> destinationFile;

    ifstream source(sourceFile);
    ofstream destination(destinationFile);

    if (!source) {
        cout << "Error: Unable to open source file." << endl;
        return 1;
    }
    if (!destination) {
        cout << "Error: Unable to create destination file." << endl;
        return 1;
    }

    string line;
    while (getline(source, line)) {
        destination << line << endl;
    }

    cout << "File copied successfully." << endl;

    source.close();
    destination.close();
    return 0;
}

