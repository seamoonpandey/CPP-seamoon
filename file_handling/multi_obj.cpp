#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Person {
public:
    string name;
    short age;

    void getData() {
        cout << "Enter name:\t";
        getline(cin, name);
        cout << "Enter your age:\t";
        cin >> age;
        cin.ignore(); // To consume the newline character left by cin
    }

    void showData() const {
        cout << "Name:\t" << name << endl;
        cout << "Age:\t" << age << endl;
    }
};

int main() {
    vector<Person> people;
    // int numPeople;

    // cout << "Enter the number of people: ";
    // cin >> numPeople;
    // cin.ignore(); // To consume the newline character left by cin

    // // Get data for each person
    // for (int i = 0; i < numPeople; i++) {
    //     Person person;
    //     cout << "Enter details for person " << i + 1 << ":" << endl;
    //     person.getData();
    //     people.push_back(person);
    //     cout << endl;
    // }

    // // Save person data to a file
    // ofstream outfile("text_files/People.txt");
    // for (const auto& person : people) {
    //     outfile << person.name << '\n';
    //     outfile << person.age << '\n';
    // }
    // cout << "Person data saved to file: text_files/People.txt" << endl;

    // Load person data from a file
    ifstream infile("text_files/People.txt");
    people.clear(); // Clear the vector before loading data from file
    Person person;
    while (getline(infile, person.name)) {
        infile >> person.age;
        infile.ignore(); // To consume the newline character left by infile
        people.push_back(person);
    }
    cout << "Person data loaded from file: text_files/People.txt" << endl;

    // Display the loaded data
    for (const auto& person : people) {
        person.showData();
        cout << endl;
    }

    return 0;
}
