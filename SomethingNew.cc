#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout<< "Podaj boki potencjalnego trojkata"<< endl<< "a= ";
    cin>> a;
    cout<< endl<< "b= ";
    cin>> b;
    cout<< endl<< "c= ";
    cin>> c;
    
    if(a+b>c && b+c>a && a+c>b)
        cout<< endl<< "Boki tworza trojkat.";
    
    else
        cout<< endl<< "Boki nie tworza trojkata."<< endl;

    return 0;
}
