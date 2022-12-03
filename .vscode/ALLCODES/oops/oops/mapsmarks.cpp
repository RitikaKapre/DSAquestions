#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> m;
    m["ritika"] = 0;
    m["ruchita"] = 0;
    m["sam"] = 0;
    m["varti"] = 0;

    string n;
    cin >> n;

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        int num;
        cin >> num;
        m[n] = m[n] + num;
        cout << n << " marks is " << m[n];
        break;
    case 2:
        m[n] = 0;
        cout<<m[n];
        break;
    case 3:
        cout<<m[n];
        break;
    case 4:
        int sub;
        m[n] = m[n]-sub;
        cout<<n << " marks now "<<m[n];
    }
}