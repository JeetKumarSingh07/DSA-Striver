// #include<iostream>
// using namespace std;
// void function(string name){
//     cout <<"this is function :-"<<name<<endl;

// }
// int main (){
//     string name;
//     cin>>name;
//     function(name);
//     string name2;
//     cin>>name2;
//     function(name2);
    
//     return 0;
// }


//              take two number and print its sum

// #include<iostream>
// using namespace std;
// void sum(int a,int b){
//     cout<<"the sum of two number is "<<a+b<<endl;

// }
// int main(){
//     int a,b;
//     cout<<"enter two number "<<endl;
//     cin>>a>>b;
//     sum (a,b);
//     return 0;
// }

#include<iostream>
using namespace std;
void sum(int a,int b){
    int c=a+b;
    cout<<"The sum of two number is "<<c<<endl;
}
int main(){
    int a,b;
    cout<<"Enter two number "<<endl;
    cin>>a>>b;
    sum(a,b);
    int e,f;
    cout<<"Enter two number "<<endl;
    cin>>e>>f;
    sum(e,f);
    return 0;

}





    //     max and min of two number 


//     #include<iostream>
//     using namespace std;
//     int main(){
//         int num1,num2;
//         cin>>num1>>num2;
//         int maximum=max(num1,num2);
//         cout<<"the maximum number is "<<maximum<<endl;
// return 0;
//     }



    
    // #include<iostream>
//     using namespace std;
//     int main(){
//         int num1,num2;
//         cin>>num1>>num2;
//         int minimum =min(num1,num2);
//         cout<<"the minimum  number is "<< minimum <<endl;
// return 0;
//     }



// #include<iostream>
// using namespace std;
// void print2(int n){
//     for (int i=0;i<n;i++){
//         for (int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main (){
//     int t;
//     cin>>t;
//     for (int i=0;i<t;i++){
//         int n;
//         cin>>n;
//         print2(n);
//     } return 0;

// }