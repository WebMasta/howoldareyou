#include <iostream>
using namespace std;
void checkYourAge(int currentYear, int dateBirthday)
{  
    if (currentYear <= 0 || dateBirthday <= 0 || dateBirthday > currentYear)
    {
       cout << "Wrong parametres" << endl;
    }
    else
    {
        int age = currentYear - dateBirthday;
        if ( age > 150)
        {
            cout << "On this moment it is impossible" << endl; 
        }
           else
           {
           cout << "Good, your age is: " << age << " year(s)" << endl;
           } 
    }
}
int main() {
    int currentYear, dateBirthday;
    cout << "Enter current year and date of your birthday" << endl;
    cin >> currentYear >> dateBirthday;
    checkYourAge(currentYear, dateBirthday);
    return 0;
}
// Will modificate this code with time
