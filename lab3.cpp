#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename, word;

    cout << "Enter the name of the file: ";
    cin >> filename;

    cout << "Enter the word to search: ";
    cin >> word;

    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Error opening file '" << filename << "'." << endl;
        return 1;
    }

    bool found = false;
    string line;

    while (getline(file, line)) {
        if (line.find(word) != string::npos) {
            found = true;
            break;
        }
    }

    file.close();

    if (found) {
        cout << "The word '" << word << "' was found in the file." << endl;
    } else {
        cout << "The word '" << word << "' was not found in the file." << endl;
    }

    return 0;
}
