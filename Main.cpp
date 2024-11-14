#include <iostream>
using namespace std;

int main() 
{
    string codeword = "sugar";
    string mypass = "mypassword";
    string entered;
    cin >> entered;
    if(entered == codeword) {
      cout << mypass;
    }
}