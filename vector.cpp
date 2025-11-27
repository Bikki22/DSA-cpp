#include <iostream>
#include <vector>
// #include <bits/c++.h> this is also valid

using namespace std;

int main()
{
    vector<int> vec = {'a', 'b', 'c', 'd', 'e'};

    // size function
    cout << "size = " << vec.size() << endl;

    // push_back
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout << "size = " << vec.size() << endl;

    // pop_back
    vec.pop_back();

    for (char val : vec) // for each loop
    {
        cout << val << endl;
    }

    cout << vec.at(2) << endl;
    cout << vec.front() << endl;
    cout << vec.back() << endl;

    return 0;
}

// vector functions
// size
// push_back
// pop_back
// front
// back
// at
