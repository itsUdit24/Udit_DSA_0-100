/* #include<iostream>
 int main(){
     std::cout<< "Hello world";
     return 0;
} */

//OR 

/* #include<bits/stdc++.h>      // includes all standard c++ libraries 
using namespace std;           //std:: won't needed to be specified everytime
int main(){
    cout<< "Hello world";
    return 0;
} */

//AND 

/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y, sum;
    cin>> x >> y;
    sum = x+y;
    cout<< "sum of x: "<< x<< " and sum of y: "<<y<< " is "<< sum;
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int var1,var2,sum;
    cout<< "Enter the first value "<< std::endl;
    cin>> var1;
    cout<< "Enter the second value" << "\n";
    cin>> var2;
    sum = var1+var2;
    cout<< "sum of first value: "<< var1<< " and sum of sceond value: "<<var2<< " is "<< sum;
    return 0;
    
}

/* OUTPUT-:
Enter the first value
10
Enter the second value
10
sum of first value: 10 and sum of second value: 10 is 20
*/