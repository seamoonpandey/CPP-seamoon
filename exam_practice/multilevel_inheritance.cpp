//multilevel inheritance

#include<iostream>
using namespace std;

enum Category{beauty, sexy, food, plant};

class Item{
    protected:
    static int count;
    string name;
    int id;
    Category category;
    public:
    Item(string n,Category c):name(n),category(c){
        id = ++count;
    }
    int getId() const { return id; }
};

int Item::count = 0;

class Product : public Item {
    protected:
    double price;
    public:
    Product(string n, Category c, double p) : Item(n, c), price(p) {}
};

class Inventory : public Product {
    protected:
    int quantity;
    public:
    Inventory(string n, Category c, double p, int q) : Product(n, c, p), quantity(q) {}
};

int main(){
    Inventory inventory1("Herbal Neem Soap", beauty, 3.99, 100);
    Inventory inventory2("Red Lipstick", sexy, 14.99, 50);
    Inventory inventory3("Organic Apple", food, 0.99, 200);
    
    cout << "Item ID: " << inventory1.getId() << endl;
    cout << "Item ID: " << inventory2.getId() << endl;
    cout << "Item ID: " << inventory3.getId() << endl;

    return 0;
}

