#include <iostream>
#include <vector>

using namespace std;

const int MAX = 21;

int main() {
    //input
    int total;
    cin >> total;
    int stu[MAX];
    for(int i = 0; i < total; ++i) {
        cin >> stu[i];
    }
    //bubble sort
    for (int i = 0; i < total - 1; ++i) {
        for (int j = 0; j < total - 1 - i; ++j) {
            if (stu[j] > stu[j+1]) {
                swap(stu[j], stu[j+1]);
            }
        }
    }
    // print scores
    for (int i = 0; i < total; ++i) {
        cout << stu[i] << (i < total-1 ? " " : "\n");
    }

    //output---------------------------------------------------------------

    bool hasfail = false;
    int highest_fail = -1;
    for (int i = total-1; i >= 0; --i) {
        if (stu[i] < 60) {
            highest_fail = stu[i];
            hasfail = true;
            break;
        }
    }
    if (!hasfail) {
        cout << "best case" << endl;
    }else{
        cout << highest_fail << endl;
    }
    
    
    bool haspass = false;
    int lowest_pass = -1;
    for (int i = 0; i < total; ++i) {
        if (stu[i] >= 60) {
            lowest_pass = stu[i];
            haspass = true;
            break;
        }
    }
    if (!haspass) {
        cout << "worst case" << endl;
    }else{
        cout << lowest_pass << endl;
    }

    return 0;
}