#include<iostream>
#include<fstream>
using namespace std;

class car {
public:
    string name, color;
    int year, speed;

    car(string n, string c, int y) {
        name = n;
        color = c;
        year = y;
        speed = 0;
    }

    void display() {
        cout << "car name: " << name << endl;
        cout << "car color: " << color << endl;
        cout << "car year: " << year << endl;
        cout << "car speed: " << speed << endl;
        cout << endl; 
    }
};

class sportscar : public car {
public:
    sportscar(string n, string c, int y, int s) : car(n, c, y) {
        speed = s;
    }
};

int main() {
   
    car c1("Land Cruiser", "Black", 2026);
    car c2("Toyota", "White", 2023);
    car c3("Honda", "Red", 2024);
    sportscar sc1("Ferrari", "Red", 2023, 200);

    c1.display();
    c2.display();
    c3.display();
    sc1.display();

    
    ofstream myfile("car.txt");
    
    
    car all_cars[4] = {c1, c2, c3, sc1};
    
   
    for(int i = 0; i < 4; i++) {
        myfile << "car name: " << all_cars[i].name << endl;
        myfile << "car color: " << all_cars[i].color << endl;
        myfile << "car year: " << all_cars[i].year << endl;
        myfile << "car speed: " << all_cars[i].speed << endl;
        myfile << endl; 
    }
    myfile.close();

    cout << "--- use of pointers ---" << endl << endl;
    
    int speed_val = 200;
    int* speedPtr = &speed_val; 
    
    cout << "Value of speed: " << *speedPtr << endl;
    cout << "Memory address: " << speedPtr << endl;

    return 0;
}
