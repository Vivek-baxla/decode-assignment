# include<iostream>
using namespace std;

int main() {
    char ch1;
    char ch2;
    cout<<"Enter two characters : ";
    cin>>ch1>>ch2;
    int x =(int)ch1-(int)ch2;
    cout<<"Difference of ASCII character is : "<<x;
    return 0;
}