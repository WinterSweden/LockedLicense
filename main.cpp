
//main.cpp

#include <iostream>
#include <string>

int main() {
    
    double triedlicense; // the license key that was tried
    double licensekey = 8080.00; // license key should come in place of 8080.00
    bool correct = false; // wether the key is correct or not
    bool locked = false; // is the user locked out?
    int tries = 0; // how many tries has the user taken?
    
    while (locked == false and correct == false) {
        
        std::cout << "Enter your license key: "; // asks the user for their license key
        std::cin >> triedlicense; // saves the key provided
        
        if ( triedlicense != licensekey) { // checks if the license key is incorrect
            
            tries = tries++; // if so, tries increase by 1
            
        }
        
        if (tries == 3) {
            
            correct = false;
            locked = true;
            
        }
        
        if (triedlicense == licensekey) {
            
            correct = true;
            locked = false;
            
    
            
        }
        
    }
    
    // insert code here
    
}
   
