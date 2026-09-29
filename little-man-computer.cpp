#include <iostream>

using namespace std;

int main() {
    //Display Welcome Text
    cout << "Welcome, to the Little Man Computer!!!\n";
    cout << "Please enter the file you would like to be executed in the inp directory (omitting the .txt extension))";
    cout << endl;
    
    //Get filename from user
    string filename;
    cin >> filename;

    cout << filename;
    cout << endl;
}