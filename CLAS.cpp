#include<iostream>

using namespace std;

int main()
{setlocale(LC_ALL, "Russian");
float num1, num2, num3;
float sum;
Price my;
// First Formula

cout<<"Сколько яблок вы хотели бы приобрести (.65 cents/each): ";
cin >> my.num1;

cout<<"Сколько бы Вы апельсинов лик приобрести (.90 cents/each): ";
cin >> num2;

cout<<"Сколько бананов вы бы лик приобрести (.70 cents/each): ";
cin >> num2;

sum = num1 + num2 + num3;
cout << "ФРУКТЫ СЧЕТ" << endl;
cout << "----------------------------" << endl;
cout << sum << "Apples @ 0.65 each = " << sum << endl << endl;

system ("PAUSE");
return 0;
}
