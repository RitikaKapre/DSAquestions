#include <iostream>
#include <string>
using namespace std;

class NStack
{
private:
    int n;
    int *arr;
    int tSize;
    int pSize;
    int *index;

public:
    NStack(int nS, int sS)
    {
        n = nS;
        pSize = sS;

        tSize = n * pSize;
        arr = new int[tSize];
        index = new int[nS];
        int id = 0;
        for (int i = 0; i < n; ++i)
        {
            index[i] = id - 1;
            id += pSize;
        }
    }

    int getStart(int idx) { return (idx * pSize); }

    int getEnd(int idx) { return ((idx + 1) * pSize); }

    void add(int idx, int ele)
    {
        if (index[idx] < getEnd(idx))
        {
            ++index[idx];
            arr[index[idx]] = ele;
            return;
        }
        cout << "overflow\n";
    }

    void rem(int idx)
    {
        if (index[idx] >= getStart(idx))
        {
            arr[index[idx]] = 0;
            --index[idx];
            return;
        }
        cout << "underflow\n";
    }

    void draw(int idx, string &output)
    {
        // cout << getStart(idx) << " : " << getEnd(idx) << endl;
        for (int i = getStart(idx); i <= getEnd(idx); ++i)
        {
            if (arr[i] != 0)
                output += (to_string(arr[i]) + " ");
        }
        output += "\n";
    }

    void disp(string &output)
    {
        for (int i = 0; i < tSize; ++i)
            if (arr[i] != 0)
                output += (to_string(arr[i]) + " ");
        // cout << arr[i] << " ";
        // cout << endl;
        output += "\n";
    }
};

int main()
{
    int numOfOper;
    int sizeOfStack;

    // input stack size
    cin >> sizeOfStack;

    // input operation number
    cin >> numOfOper;

    // cin>>numOfStack;
    // cin>>sizeOfStack;

    NStack ns(2, sizeOfStack);

    string output;

    while (numOfOper--)
    {
        cout << "1. A B(add)" << endl
             << "2. A(pop)" << endl
             << "3. A(disp stack)" << endl
             << "4. (dispall)" << endl;

        int op;
        cin >> op;

        if (op == 1)
        {
            int st;
            int num;
            cin >> st;
            cin >> num;
            ns.add(st - 1, num);
        }
        else if (op == 2)
        {
            int st;
            cin >> st;
            ns.rem(st - 1);
        }
        else if (op == 3)
        {
            int st;
            cin >> st;
            ns.draw(st - 1, output);
        }
        else
        {
            ns.disp(output);
        }
    }

    cout << output << endl;

    // ns.add(0,1);
    // ns.add(0,2);
    // ns.add(0,3);

    // ns.add(1,11);
    // ns.add(1,12);

    // ns.add(2, 21);
    // ns.add(2, 22);

    // ns.disp();

    // ns.rem(0);

    // ns.rem(2);
    // ns.rem(2);
    // ns.rem(2);

    // ns.disp();
    return 0;
}