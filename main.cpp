#include <iostream>


using namespace std;

int main()
{
    cout << "Say Hello" << endl;

    string userInput;

 
    cout << "Please enter your name: ";


    cin >> userInput;


    for (int i=0; i<=6; i++)
    {
        cout << endl;
    }

    cout << " Hello,  " << userInput << " We hope you are having a wonderful day!";



    return 0;
}
