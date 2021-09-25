#include<iostream>
using std::cout;
using std::endl;
using namespace std;
using std::cin;

int main()
{
    string a;
    cout << "Enter a string:";
    cin >> a;
    if (a=="get_info")
    {
        cout << "NAME_PRIYANSHU_MAURYA \nAGE_18 \nSEX_MALE \nMARTIAL_STATUS_UNMARRIED \nCAREER_COMPUTER_PROGRAMMING" << endl;
    }
    else {cout << "Couldn't get the required info!" << endl;}
}