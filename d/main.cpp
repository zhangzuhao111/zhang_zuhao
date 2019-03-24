#include <iostream>
#include "Date.h"
using namespace std;
int main()
{
Date date(0,0,2000);
cout << "Month:" << date.getMonth() << endl;
cout << "Day:" << date.getDay() <<endl;
cout << "Year:" << date.getYear() << endl;
cout << "\nOriginal date:" << endl;
date.displayDate();
date.setMonth(0);
date.setDay(0);
date.setYear(2000);
cout << "\nNew date:" << endl;
date.displayDate();
return 0;
}
