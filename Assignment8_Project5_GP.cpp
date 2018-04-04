
/* Student Name: Gobind Puniani
 * Student ID: 106302306
 * Course Name and Number: ECE 71 (Engineering Computations)
 * Instructor Name: Dr. Hovannes Kulhandjian
 * Assignment Number: #8
 * Project Number: #5
 * File Name: Assignment8_Project5_GP.cpp
 * Submitted On: 11/28/17
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void search (int IDNumber, int* lab[4]);
//Pre-condition: User ID number passes through as an integer, and entire array 
// is called to search through
//Post-condition: Prints out location of user if present, or informs that 
// user is not present


int main(int argc, char** argv) {
    
    char ans;
    //Declare variable for administrator's answer
    
    int* lab[4];
    lab[0] = new int[5]();
    lab[1] = new int[6]();
    lab[2] = new int[4]();
    lab[3] = new int[3]();
    
    do {
        char answer;
        //Declare variable for administrator's answer of logging or searching
        int userID, labNumber, computerStation;
        //Declare integer variables for ID parameters
        int searchUser;
        //Declare integer variable for searching for a user
        
        cout << "\nAre your logging in or logging out a user, or searching?\n";
        cout << "Enter 'I' for 'In', 'O' for 'Out', or 'S' for 'Search'.\n";
        cin >> answer;
        
        
        if (answer == 'I' || answer == 'i') {
            cout << "Please enter the user ID, lab number, and then the computer "
                    "station for logging in. Separate each input value with "
                    "whitespace.\n";
            cin >> userID >> labNumber >> computerStation;
            
            lab[labNumber - 1][computerStation - 1] = userID;
            cout << "Lab Number\tComputer Station\n";
            
            cout << "1         \t";
            for (int i = 0; i < 5; i++) {
                cout << i+1 << ": ";
                if (lab[0][i] == 0) {
                    cout << "empty ";
                }
                else {
                    cout << userID << " ";
                }
            }
            
            cout << "\n2         \t";
            for (int i = 0; i < 6; i++) {
                cout << i+1 << ": ";
                if (lab[1][i] == 0) {
                    cout << "empty ";
                }
                else {
                    cout << userID << " ";
                }
            }
            
            cout << "\n3         \t";
            for (int i = 0; i < 4; i++) {
                cout << i+1 << ": ";
                if (lab[2][i] == 0) {
                    cout << "empty ";
                }
                else {
                    cout << userID << " ";
                }
            }
            
            cout << "\n4         \t";
            for (int i = 0; i < 3; i++) {
                cout << i+1 << ": ";
                if (lab[3][i] == 0) {
                    cout << "empty ";
                }
                else {
                    cout << userID << " ";
                }
            }
            
        }
        else if (answer == 'O' || answer == 'o') {
            cout << "Please enter the lab number and computer station to log "
                    "out that user. Separate each input value with "
                    "whitespace.\n";
            cin >> labNumber >> computerStation;
            
            lab[labNumber - 1][computerStation - 1] = 0;
            cout << "Lab Number\tComputer Station\n";
            
            cout << "1         \t";
            for (int i = 0; i < 5; i++) {
                cout << i+1 << ": ";
                if (lab[0][i] == 0) {
                    cout << "empty ";
                }
                else {
                    cout << userID << " ";
                }
            }
            
            cout << "2         \t";
            for (int i = 0; i < 6; i++) {
                cout << i+1 << ": ";
                if (lab[1][i] == 0) {
                    cout << "empty ";
                }
                else {
                    cout << userID << " ";
                }
            }
            
            cout << "3         \t";
            for (int i = 0; i < 4; i++) {
                cout << i+1 << ": ";
                if (lab[2][i] == 0) {
                    cout << "empty ";
                }
                else {
                    cout << userID << " ";
                }
            }
            
            cout << "4         \t";
            for (int i = 0; i < 3; i++) {
                cout << i+1 << ": ";
                if (lab[3][i] == 0) {
                    cout << "empty ";
                }
                else {
                    cout << userID << " ";
                }
            }
        }
        else if (answer == 'S' || answer == 's') {
            cout << "Please enter a user ID to search for.\n";
            cin >> searchUser;
            
            search(searchUser, lab);
        }
        else
            cout << "Invalid answer.\n";
        
        
        cout << "\nWould you like to log in or log out another user, or search "
                "for a user?\n";
        cout << "Please enter 'Y' for 'Yes' or 'N' for 'No'.\n";
        cin >> ans;
    } while (ans == 'Y' || ans == 'y');
    //Do-while loop for the administrator to update the login information

    return 0;
}

void search (int IDNumber, int* lab[4]) {
    
    for (int i = 0; i < 5; i++) {
        if (lab[0][i] == IDNumber) {
            cout << "User #" << IDNumber << " is at lab number 1 and "
                    "computer station " << i+1 << endl;
            return;
        }
    }
    
    for (int i = 0; i < 6; i++) {
        if (lab[1][i] == IDNumber) {
            cout << "User #" << IDNumber << " is at lab number 2 and "
                    "computer station " << i+1 << endl;
            return;
        }
    }
    
    for (int i = 0; i < 4; i++) {
        if (lab[2][i] == IDNumber) {
            cout << "User #" << IDNumber << " is at lab number 3 and "
                    "computer station " << i+1 << endl;
            return;
        }
    }
    
    for (int i = 0; i < 3; i++) {
        if (lab[3][i] == IDNumber) {
            cout << "User #" << IDNumber << " is at lab number 4 and "
                    "computer station " << i+1 << endl;
            return;
        }
    }
    
    cout << "This user (#" << IDNumber << ") is not logged in to any computer stations.\n";
}