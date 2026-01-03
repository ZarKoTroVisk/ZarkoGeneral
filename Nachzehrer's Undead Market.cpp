#include <iostream>
#include <chrono>
using namespace std;

string A[5] = {"cane of the Undead", "Sudaram's Fallen Blade", "Rotten Branch", "Fresh Flesh", "Hided Bone Armor"};
    int recursiveStoreTest(int n)
{
    if (n <= 0) return 1;
    return n + recursiveStoreTest(n - 1);
}

    int iterativeStoreTest(int n)
{
    int result = 1;
    for (int i = 1; i <= n; ++i) result += i;
    return result;
}

int main()
{
    auto start = chrono::high_resolution_clock::now();
    int n, i, target, size = 5;
    string choice;
    cout << "Welcome to Zarko's AKA project." << endl;
    cout << "Welcome to Nachzehrer King's Undead Market! Were currently having a sale today that increases in value the more you spend!\n" << endl;
    cout << "You can choose between 2 different approaches that suits your fancy." << endl;
    cout << "enter 1 to use a recursive approach or 2 to use an iterative approach: ";
    cin >> i;
    if (i == 1)
    {
        cout << "You have chosen the recursive approach. Please enter the number of products you want to buy: ";
        cin >> n;
        cout << "The amount of products you're allowed to buy is: " << recursiveStoreTest(n) << endl;
        cout << "You're total price is : " << n * 5000 << " lmd" << endl;
         auto now = chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(now - start);

    std ::cout << "Elapsed time: " << elapsed.count() << " microseconds" << std::endl;
        cout << "Would you like to purchase? (y/n): ";
        cin >> choice;
        if (choice == "y" || choice == "Y")
        {
            cout << "The Nachzehrer blesses you, Enjoy your products" << endl;
        }
        else
        {
            cout << "Understood, may you find your way." << endl;
        }
    }
    else if (i == 2)
    {
        cout << "You have chosen the iterative approach. Please enter a number to test: ";
        cin >> n;
        cout << "The amount of products you're allowed to buy is: " << iterativeStoreTest(n) << endl;
        cout << "You're total price is : " << n * 5000 << " lmd" << endl;
         auto now = chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(now - start);

    std ::cout << "Elapsed time: " << elapsed.count() << " microseconds" << std::endl;
        cout << "Would you like to purchase? (y/n): ";
        cin >> choice;
        if (choice == "y" || choice == "Y")
        {
            cout << "The Nachzehrer blesses you, Enjoy your products" << endl;
        }
        else
        {
            cout << "Understood, may you find your way." << endl;
        }
    }
    else
    {
        cout << "Invalid choice. Please restart the program and choose either 1 or 2." << endl;
    }
    cout << "Thank you for visiting Nachzehrer King's Undead Market! Have a great day!" << endl;
    auto now = chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(now - start);

    std ::cout << "Elapsed time: " << elapsed.count() << " microseconds" << std::endl;
    cout << "Input any value to exit..." << endl;
    cin >> n; // Pause before exit
    return 0;
}
