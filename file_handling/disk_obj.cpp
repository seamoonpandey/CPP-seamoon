#include <iostream>
#include <fstream>
using namespace std;

class Person {
protected:
    string name;
    short age;

public:
    void getData() {
        cout << "Enter name:\t";
        getline(cin, name);
        cout << "Enter your age:\t";
        cin >> age;
        cin.ignore(); // To consume the newline character left by cin
    }

    void showData() {
        cout << "Name:\t" << name << endl;
        cout << "Age:\t" << age << endl;
    }

    // Save person data to a file
    void saveToFile(const string& filename) {
        ofstream outfile(filename);
        if (outfile) {
            outfile << name << endl;
            outfile << age << endl;
            cout << "Person data saved to file: " << filename << endl;
        } else {
            cout << "Error opening file: " << filename << endl;
        }
    }

    // Load person data from a file
    void loadFromFile(const string& filename) {
        ifstream infile(filename);
        if (infile) {
            getline(infile, name);
            infile >> age;
            cout << "Person data loaded from file: " << filename << endl;
        } else {
            cout << "Error opening file: " << filename << endl;
        }
    }
};

int main() {
    Person person;

    // Get data from the user
    person.getData();

    // Save person data to a file
    person.saveToFile("text_files/Person.txt");

    // Load person data from a file
    person.loadFromFile("text_files/Person.txt");

    // Display the data
    person.showData();

    return 0;
}
