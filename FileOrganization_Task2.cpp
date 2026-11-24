
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string a, b, c;
    ofstream out("fruit.txt");
    out << "Apple\nOrange\nBanana" << endl;
    out.close();

    ifstream in("fruit.txt");
    in >> a >> b >> c;
    cout << a << b << c;
    in.close();
    fstream res("fruit.txt", ios::out | ios::app);
    res << "Fresh Fresh\n";
    res.close();

}

