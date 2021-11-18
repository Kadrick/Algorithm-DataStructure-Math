/**
 * @file Problem8.cpp
 * @author kadrick (kbk2581553@gmail.com)
 * @brief math / implement
 * @version 0.1
 * @date 2021-11-18 15:24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long ans = -1;
    string input, number;
    deque<long long> bucket;
    
    while (cin >> input)
        number += input;

    for (auto &&digit : number)
    {
        bucket.push_back(digit - '0');
        if(bucket.size() == 13) {
            long long mul = 1;
            for (int i = 0; i < 13; i++)
                mul *= bucket[i];
            ans = max(ans, mul);
            bucket.pop_front();
        }
    }  

    cout << ans << endl;

    return 0;
}