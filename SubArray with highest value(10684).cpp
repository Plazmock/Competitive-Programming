#include <iostream>
#include <typeinfo>
#include <climits>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <utility>
#include <iomanip>
#include <cstring>

using namespace std;


int main() {

    int n;
    while (cin >> n) {
        if (n == 0) break;
        int mSum = 0, cSum = 0;
        int curr;
        while(n--){
            cin >> curr;
            cSum += curr;
            mSum = max(mSum, cSum);
            if( cSum < 0){
                cSum = 0;
            }
        }
        if ( n != 0){
            if (mSum > 0){
                cout << "The maximum winning streak is " << mSum << "." << endl;
            } else {
                cout << "Losing streak." << endl;
            }
        }
    }









    return 0;
}





























