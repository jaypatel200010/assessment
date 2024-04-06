//C ++ Programming Assessment Test
//Create a Project to demonstrate Simple Food Ordering Project which will help to order foods.

#include <iostream>
#include <string>

using namespace std;

// Class to represent a food item
class Food {
private:
    string name;
    float price;

public:
    // Constructor to initialize food item
    Food(string n, float p) {
        name = n;
        price = p;
    }

    // Function to get name of food
    string getName() {
        return name;
    }

    // Function to get price of food
    float getPrice() {
        return price;
    }
};

// Function to display menu and get user choice
int displayMenu() {
    cout << "1) Pizza" << endl;
    cout << "2) Burger" << endl;
    cout << "3) Sandwich" << endl;
    cout << "4) Roll" << endl;
    cout << "5) Biryani" << endl;
    int choice;
    cout << "\nEnter your choice: ";
    cin >> choice;
    return choice;
}

// Function to take pizza order
void orderPizza() {
    cout << "1) Margeritta - $5" << endl;
    cout << "2) perry perry pizza - $7" << endl;
    int PizzaChoice;
    cout << "\nEnter Which pizza would you like to have: ";
    cin >> PizzaChoice;
    int quantity;
    cout << "Enter quantity: ";
    cin >> quantity;

    // Calculate total price
    float totalPrice;
    if (PizzaChoice == 1)
        totalPrice = quantity * 5;
    else
        totalPrice = quantity * 7;

    cout << "Your order: " << quantity << " ";
    if (PizzaChoice == 1)
        cout << "Margeritta\n";
    else
        cout << "perry perry pizza\n";
    cout << "Total Price: $" << totalPrice << endl;
}

// Function to take Burger order
void orderBurger() {
    cout << "1) veg alu tikki - $5" << endl;
    cout << "2) double cheese - $7" << endl;
    int BurgerChoice;
    cout << "\nEnter Which burger would you like to have: ";
    cin >> BurgerChoice;
    int quantity;
    cout << "Enter quantity: ";
    cin >> quantity;

    // Calculate total price
    float totalPrice;
    if (BurgerChoice == 1)
        totalPrice = quantity * 5;
    else
        totalPrice = quantity * 7;

    cout << "Your order: " << quantity << " ";
    if (BurgerChoice == 1)
        cout << "veg alu tikki\n";
    else
        cout << "double cheese\n";
    cout << "Total Price: $" << totalPrice << endl;
}

// Function to take sandwich order
void orderSandwich() {
    cout << "1) Veg Sandwich - $5" << endl;
    cout << "2) Chicken Sandwich - $7" << endl;
    int sandwichChoice;
    cout << "\nEnter Which sandwich would you like to have: ";
    cin >> sandwichChoice;
    int quantity;
    cout << "Enter quantity: ";
    cin >> quantity;

    // Calculate total price
    float totalPrice;
    if (sandwichChoice == 1)
        totalPrice = quantity * 5;
    else
        totalPrice = quantity * 7;

    cout << "Your order: " << quantity << " ";
    if (sandwichChoice == 1)
        cout << "Veg Sandwich\n";
    else
        cout << "Chicken Sandwich\n";
    cout << "Total Price: $" << totalPrice << endl;
}

// Function to take Roll order
void orderRoll() {
    cout << "1) Veg Roll - $5" << endl;
    cout << "2) perry perry Roll - $7" << endl;
    int RollChoice;
    cout << "\nEnter Which roll would you like to have: ";
    cin >> RollChoice;
    int quantity;
    cout << "Enter quantity: ";
    cin >> quantity;

    // Calculate total price
    float totalPrice;
    if (RollChoice == 1)
        totalPrice = quantity * 5;
    else
        totalPrice = quantity * 7;

    cout << "Your order: " << quantity << " ";
    if (RollChoice == 1)
        cout << "Veg Roll\n";
    else
        cout << "perry perry Roll\n";
    cout << "Total Price: $" << totalPrice << endl;
}

// Function to take Biryani order
void orderBiryani() {
    cout << "1) Veg biryani - $5" << endl;
    cout << "2) Hayderabadi biryani - $7" << endl;
    int BiryaniChoice;
    cout << "\nEnter Which biryani would you like to have: ";
    cin >> BiryaniChoice;
    int quantity;
    cout << "Enter quantity: ";
    cin >> quantity;

    // Calculate total price
    float totalPrice;
    if (BiryaniChoice == 1)
        totalPrice = quantity * 5;
    else
        totalPrice = quantity * 7;

    cout << "Your order: " << quantity << " ";
    if (BiryaniChoice == 1)
        cout << "Veg biryani\n";
    else
        cout << "Hayderabadi biryani\n";
    cout << "Total Price: $" << totalPrice << endl;
}

int main() {
    string name;
    cout << "-------------- Tops tech. Fast food------------------------\n";
    cout << "Please Enter your name: ";
    getline(cin, name);
	cout << "Hello! " << name << endl;
	cout << "What would you like to order?\n\n";
	cout << "-------------Menu---------------\n";
    char choice;
    do {
        int menuItem = displayMenu();

        switch (menuItem) {
            case 1:
                orderPizza();
                break;
            case 2:
                orderBurger();
                break;
            case 3:
                orderSandwich();
                break;
            case 4:
                orderRoll();
                break;
            case 5:
                orderBiryani();
                break;
            default:
                cout << "Invalid choice" << endl;
        }

        cout << "Do you want to continue ordering (Y/N)? ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    cout << "Thank you, " << name << "! Your order will be delivered shortly." << endl;

    return 0;
}

