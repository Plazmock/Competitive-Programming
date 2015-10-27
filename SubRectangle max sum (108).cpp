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
        int tmp, sum = 0;
        int arr[101][101] = {};
        int sumArr[101][101] = {};
        for (int i = 1; i <= n ; i++) {
            sum = 0;
            for (int j = 1; j <= n ; j++) {
                cin >> tmp;
                sum += tmp;
                arr[i][j] == tmp;
                sumArr[i][j] = sum + sumArr[i-1][j];
            }
        }

        int maxSum = 0;
        int currSum = 0;
        int bottomRight;
        int bottomLeft;
        int topRight;
        int topLeft;
        for (int i = 1; i <= n ; i++) {
            for (int j = 1; j <= n ; j++) {
                for (int g = i; g <= n; g++){
                    for(int k = j; k <= n; k++){
                        bottomRight = sumArr[g][k];
                        bottomLeft = sumArr[g][j-1];
                        topRight = sumArr[i-1][k];
                        topLeft = sumArr[i-1][j-1];
                        currSum = bottomRight - bottomLeft - topRight + topLeft;
                        maxSum = max(maxSum, currSum);
                    }
                }
            }
        }

        cout << maxSum << endl;
    }




    return 0;
}


























