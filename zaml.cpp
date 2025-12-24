#include <iostream>
using namespace std;

class Restaurant
 {
private:
    string name;
    string location;
    int numberOfTables;
    double rating;

public:
    void setRestaurant(string n, string loc, int tables, double r)
     {
        name = n;
        location = loc;
        numberOfTables = tables;
        rating = r;
    }

    
    void printRestaurant() 
    {
        cout << "Restaurant Name: " << name << endl;
        cout << "Location: " << location << endl;
        cout << "Number of Tables: " << numberOfTables << endl;
        cout << "Rating: " << rating << endl;
    }
};


class Customer
 {
private:
    string name;
    int age;
    string phone;
    int customerId;

public:
   
    void setCustomer(string n, int a, string p, int id) 
    {
        name = n;
        age = a;
        phone = p;
        customerId = id;
    }

   
    void printCustomer() 
    {
        cout << "Customer Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Phone: " << phone << endl;
        cout << "Customer ID: " << customerId << endl;
    }
};

int main() 
{
    Restaurant r1;
    Customer c1;

    r1.setRestaurant("Al Baghdad Restaurant", "Baghdad", 20, 4.5);
    c1.setCustomer("Ali Ahmed", 25, "7701234567", 101);

    cout << "=== Restaurant Info ===" << endl;
    r1.printRestaurant();

    cout << "\n=== Customer Info ===" << endl;
    c1.printCustomer();

    return 0;
}