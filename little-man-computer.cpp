#include <iostream>
#include <string>

using namespace std;

int main() {
    //Display Welcome Text
    cout << "Welcome, to the Little Man Computer!!!\n";

    bool validInput = true;
    
    do {
    cout << "Please enter the file you would like to be executed in the inp directory (omitting the .txt extension))\n>>>";
    
    //Get filename from user
    string filename;
    cin >> filename;
    cout << endl;
    //cout << filename;

    //detect if there was a filename extension entered
    //search from the end of the file as the
    for (int i=(filename.length()-1); i<=0; i--) {
        cout << i;
        if (filename[i] == '.') {
            cout << ". detected";
            //if a filename extension is detected and not .txt - reject the input
            if (filename.substr(i+1, 3) == "txt") {
                validInput = false;
                cout << "Error! \n Filename extension other than .txt detected!\n";
                break;
            }
        }
    }

    } while (!validInput);

    cout << validInput;
    cout << endl;
}