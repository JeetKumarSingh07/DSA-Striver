// #include<iostream>
// using namespace std;
// int main ()
// {
//     int age;
//     cin>>age;
//     if (age>=18){
//          cout<<"voter"<<endl;
//     } else {
//         cout<<"not voter";
//     }return 0;
//     }
 
// #include <iostream>
// using namespace std;

// int main() {
//     int age;
//     cin >> age;

//     if (age >= 18) {
//         cout << "voter" << endl;
//     } else {
//         cout << "not voter";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;    
// int main(){
//     int marks=34;
//     if (marks<25){
//         cout<<"fail"<<endl;
//     }
//     if(marks>=25 &&marks<=44){
//         cout<<"pass"<<endl;
//     }
//     return 0;
//       }





#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Age is "<< endl;
    cin>>age;
    
    if (age <18){
        cout <<"not eligible for job"<<endl;
    }
    else if (age <= 55){
        cout<< "eligible for job"<<endl;

    }
    else{
        cout << "retirement age"<<endl;
    }
    return 0;
    }
