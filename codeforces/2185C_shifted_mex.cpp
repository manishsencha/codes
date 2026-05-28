#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> st;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            st.insert(temp);
         
        }
        vector<int> filtered(st.begin(), st.end());
        int length =  filtered.size();
        // longest subsequence of consecutive integers
        int result = 0;
        for (int i = 0; i < length; i++) {
            int target_index = filtered[i];
            int index = i;
            while (index < length && filtered[index] - target_index == index - i) {
                index++;
            }
            result = max(result, index - i);
        }
        cout << result << endl;
    }
    return 0;
}
