// #include<iostream>
// using namespace std;    
// void print1(int n){
//     for (int i=0;i<n;i++){
//         for (int j=0;j<n;j++){
//             cout<<"*";

//         }
//     }cout<<endl;

// }
// int main(){
//     int t;
//     cin>>t;
//     for (int i=0;i<t;i++){
//         int n;
//         cin>>n;
//         print1(n);
//         // print2(n);
//     }
//     return 0;
// }





#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for (int i=n;i>0;i--){
        for (int j=0;j<=i;j++){
            cout <<"* ";
        }cout<<endl;
    }
}
int main(){
    int t;
    cout<<"enter the t";
    cin>>t;
    
    for (int i=0;i<t;i++){
    int n;
    cout<<"enter the n"<<endl;
    cin >> n;
    
    print1(n);
}
// return 0;
}


// #include<iostream>
// using namespace std;
// void print3 (int n){
//     for (int i=0;i<=n;i++){
//         for (int j=0;j<n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for (int i=0;i<t;i++){
//         int n;
//         cin>>n;
//         print3(n);
//     } return 0;
// }



// #include<iostream>
// using namespace std;
// void print6(int n){
//     for (int i=0;i<n;i++){
//         cout<<"*0";
//     }
//     for (int j=0;j<2*i*1;j++){
//         cout<<"*";
//     }
//     for (int j=0;j<n-i-1;j++){
//         cout<<"*";
//     }cout<<endl;
// }
// int main(){
//     int t;
//     cin>>t;
//     for (int i=0;i<t;i++){
//         int n;
//         cin>>n;
//         print6(n);
//     } return 0;
// }



// void print6(int n) {
//     for (int i = 0; i < n; i++) {
//         // First part
//         for (int j = 0; j < n; j++) {
//             cout << "*0";
//         }
//         // Second part
//         for (int j = 0; j < 2 * i; j++) {
//             cout << "*";
//         }
//         // Third part
//         for (int j = 0; j < n - i - 1; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
//  int main (){
//     // int t;
//     // cin >> t;
//     // for (int i = 0; i < t; i++) {
//         int n=5;
//         // cin >> n;
//         print6(n);
//         return 0;
//  }
    





// #include <bits/stdc++.h>
// using namespace std;

// void pattern7(int N)
// {
//     // This is the outer loop which will loop for the rows.
//     for (int i = 0; i < N; i++)
//     {
//         // For printing the spaces before stars in each row
//         for (int j =0; j<N-i-1; j++)
//         {
//             cout <<" ";
//         }
       
//         // For printing the stars in each row
//         for(int j=0;j< 2*i+1;j++){
            
//             cout<<"*";
//         }
        
//         // For printing the spaces after the stars in each row
//          for (int j =0; j<N-i-1; j++)
//         {
//             cout <<" ";
//         }
        
//         // As soon as the stars for each iteration are printed, we move to the
//         // next row and give a line break otherwise all stars
//         // would get printed in 1 line.
//         cout << endl;
//     }
// }

// int main()
// {   
//     // Here, we have taken the value of N as 5.
//     // We can also take input from the user.
//     int N = 5;

//     pattern7(N);

//     return 0;
// }




