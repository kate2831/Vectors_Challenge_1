// Kate Rivera, 9/8/25, Date Utilities with const Arrays, Lab Activities: Arrays & Vectors

#include <iostream>
#include <string>
#include <limits>

// Function prototypes
int displayMenu();
void runMenu();

int main(){
    // Initialization
    runMenu();
    // Cleanup
    return 0;
}

// Global const arrays
const std::string daysOfWeek[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
const std::string monthsOfYear[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

// Function to display menu
int displayMenu(){
    std::cout << "\nMenu\n";
    std::cout << "1. Get Day Name by Number (1-7)\n";
    std::cout << "2. Get Month Name by Number (1-12)\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter your choice: ";
    int choice;
    std::cin >> choice;
    return choice;
}

// Function to run menu loop
void runMenu(){
// Menu selection
    int choice;
do{
        // Get menu selection
        choice = displayMenu();
        // Carry out menu selection
    
    switch (choice){
        case 1:
            std::cout << "Please enter a day number (1-7): ";
            int day;
            std::cin >> day;
            if (day >= 1 && day <= 7){
                std::cout << "The corresponding day is: " ;
            } else {
                std::cout << "Invalid day";
            }
            break;
            
        case 2:
            std::cout << "Please enter a month number (1-12): ";
            int month;
            std::cin >> month;
            if (month >= 1 && month <=12){
                std::cout << "The corresponding month is: ";
            } else {
                std::cout << "Invalid month";
            }
            break;
            
        case 3:
            std::cout << "Exiting program.\n";
            break;
            
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
            // End of menu selection if 3 was selected
        }
    } while (choice != 3);
}
