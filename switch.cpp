#include<iostream> 
using namespace std;
int main() {
    int days;
     cout << "Enter number of days: " << endl;
    cin>>days;
   
    
    switch (days){
        case 1:
        cout << "monday"<< endl;
        break;
        case 2:
        cout << "tuesday"<< endl;
        break;
        case 3:
        cout << "wednesday"<< endl;
        break;
    }
   
return 0;
}



// #include <iostream>
// using namespace std;

// int main() {
//     int days; // declare first
//     cout << "Enter number of days (1-3): ";
//     cin >> days; // then read input

//     switch (days) {
//         case 1:
//             cout << "monday" << endl;
//             break;
//         case 2:
//             cout << "tuesday" << endl;
//             break;
//         case 3:
//             cout << "wednesday" << endl;
//             break;
//         default:
//             cout << "invalid day" << endl;
//     }

//     return 0;
// }
