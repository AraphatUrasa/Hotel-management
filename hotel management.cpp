#include <fstream>
#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;
class Hotel
{
private:
    int room_number;
    char name[30], address[50], mobile_number[15];
public:
    void add_customer()
    {
        cout << "\n enter the room number=" << endl;
        cin >> room_number;
        cout << "\n enter customers name=" << endl;
        cin.ignore();
        cin.getline(name, 30);
        cout << "\n enter the customers address no=" << endl;
        cin.ignore();
        cin.getline(address, 50);
        cout << "\n enter the customers mobile number=" << endl;
        cin.ignore();
        cin.getline(mobile_number, 15);
        cout << "\n mobile_number" << endl;
    }