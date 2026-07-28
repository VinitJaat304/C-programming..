#include <iostream>
#include <string>
using namespace std;
class Hotel
{
private:
    int hotel_id;
    char hotel_name[20];
    char hotel_type[20];
    char hotel_rating[20];
    static string hotel_location;
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

public:
    void setHotelData()
    {
        cout << "Enter Hotel ID: ";
        cin >> hotel_id;

        fflush(stdin);
        cout << "Enter Hotel Name: ";
        gets(hotel_name);

        fflush(stdin);
        cout << "Enter Hotel Type: ";
        gets(hotel_type);

        fflush(stdin);
        cout << "Enter Hotel Rating: ";
        gets(hotel_rating);

        cout << "Enter Hotel Establish Year: ";
        cin >> hotel_establish_year;

        cout << "Enter Hotel Staff Quantity: ";
        cin >> hotel_staff_quantity;

        cout << "Enter Hotel Room Quantity: ";
        cin >> hotel_room_quantity;
    }

    void getHotelData()
    {
        cout << "Hotel ID\t\t: " << hotel_id << endl;
        cout << "Hotel Name\t\t: " << hotel_name << endl;
        cout << "Hotel Type\t\t: " << hotel_type << endl;
        cout << "Hotel Rating\t\t: " << hotel_rating << endl;
        cout << "Hotel Location\t\t: " << hotel_location << endl;
        cout << "Hotel Establish Year\t: " << hotel_establish_year << endl;
        cout << "Hotel Staff Quantity\t: " << hotel_staff_quantity << endl;
        cout << "Hotel Room Quantity\t: " << hotel_room_quantity << endl;
    }
};

string Hotel::hotel_location = "Surat";
