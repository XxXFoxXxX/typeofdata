#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;
    unsigned long long s;
    string ull = "18446744073709551615";
    string ll=   "-9223372036854775807";
    int sign=1;
    if (input[0]=='-')
        sign=-1;
    if (ull.size() < input.size() && sign==1)
        return 0;
    if (ll.size() < input.size() && sign==-1)
        return 0;
    if (input==ull)
        cout <<"unsigned long long";
    if (input==ll)
        cout<<"long long";
    if (input=="-0")
        cout<<"char\n"<<"short int\n"<<"int\n"<<"long long\n";
    if (ull.size() == input.size() && sign==1)
        for(int i =0; i < ull.size(); ++i){
            if (input[i] == ull[i])
                continue;
            else if (input[i] < ull[i]){
                cout<<"unsigned long long";
                return 0;
            }
            else if (input[i] > ull[i])
                return 0;}
    if (ll.size() == input.size() && sign==-1)
        for(int i =0; i < ll.size(); ++i){
            if (input[i] == ll[i])
                continue;
            else if (input[i] < ll[i]){
                cout<<"long long";
                return 0;
            }
            else if (input[i] > ll[i])
                return 0;}
    if (ull.size()>input.size() && sign==1) {
            s = stoull(input);
            if (INT8_MAX >= s)
                cout << "char" << '\n';
            if (UINT8_MAX >= s)
                cout << "unsigned char" << '\n';
            if (INT16_MAX >= s)
                cout << "short int" << '\n';
            if (UINT16_MAX >= s)
                cout << "unsigned short int" << '\n';
            if (INT32_MAX >= s)
                cout << "int" << '\n';
            if (UINT32_MAX >= s)
                cout << "unsigned int" << '\n';
            if (INT64_MAX >= s)
                cout << "long long" << '\n';
            if (UINT64_MAX >= s)
                cout << "unsigned long long" << '\n';

    }
    if (input.size()<ll.size()&& sign ==-1){
            s = stoll(input);
            if (INT8_MIN <= s)
                cout << "char" << '\n';
            if (INT16_MIN <= s)
                cout << "short int" << '\n';
            if (INT32_MIN <= s)
                cout << "int" << '\n';
            if (INT64_MIN <= s)
                cout << "long long" << '\n';


    }

}

