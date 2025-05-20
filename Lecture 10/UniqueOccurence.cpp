#include<bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    int ctr;
    vector<int> freq(1000, 0);
    for (int i = 0; i < arr.size(); i++) {
        freq[arr[i]] += 1;
    }
    sort(freq.begin(), freq.end());
    for (int i = 0; i < freq.size() && i + 1 < freq.size(); i++) {
        if (freq[i] == freq[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<uniqueOccurrences(arr)<<endl;

}