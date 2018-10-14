//Напишите программу находящую в массиве сумму элементов делящихся либо
//на 72 либо на 27(не вместе)

#include <iostream>
#include <vector>
using namespace std;
int main() {
int num;
int sum=0;
cin >> num;
vector <int > a(num);
for (int i=0 ; i<num ; i++ ){
cin >> a[ i ];

if ((a[i] %72==0 || a[i] %27==0) && a[i]%216!=0) {
sum= sum +a[i] ;
}
}
cout << sum;
return 0 ;

}
