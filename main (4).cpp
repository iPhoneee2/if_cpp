#include <iostream>
using namespace std;
int main()
{
    int s;
    cin >> s;
    {
        if(s == 01) {
            cout << "город Астана";
        }
        else if(s == 02) {
            cout << "город Алматы";
        }
        else if(s == 03) {
            cout << "Акмолинская область";
        }
        else if(s == 04) {
            cout << "Актюбинская область";
        }
        else if(s == 12) {
            cout << "Мангистауская область";
        }
        else {
            cout << "нет такого";
        }
    }
    return 0;
}