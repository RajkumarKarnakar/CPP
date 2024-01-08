#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename, word;

    cout << "Enter the name of the file to create: ";
    cin >> filename;

    ofstream file(filename);

    if (!file.is_open()) {
        cerr << "Error creating file '" << filename << "'." << endl;
        return 1;
    }

    cout << "Enter words to write to the file (enter 'quit' to stop):" << endl;

    while (true) {
        cin >> word;

        if (word == "quit") {
            break;
        }

        file << word << " ";
    }

    file.close();

    cout << "Words written to file successfully." << endl;

    return 0;
}
