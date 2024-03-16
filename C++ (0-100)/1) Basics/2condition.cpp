//IF-ELSE STATEMENTS

//Take a user input - age and display eligibility for vote
#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout << "Enter the age:  ";
    cin >> age;
    if (age>=18){
        cout << "You are elgible to caste the vote.";
    }
    else {
        cout << "You are not elgible to caste the vote.";
    }
}