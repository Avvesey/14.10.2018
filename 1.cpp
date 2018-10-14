#include <iostream>
using namespace std;  // Напишите программу проверяющую является ли число составным. В программе гарантируется, что число - натуральное.

int main() {
    unsigned int a;
    cin >> a;
if (a==1) {cout << "unit";}
else {for (int k = 2 ; k < a ; k++) {
    if (a%k==0) {cout << "Composite";}
else {cout << "Prime"; }

return 0 ;

}
}
}
