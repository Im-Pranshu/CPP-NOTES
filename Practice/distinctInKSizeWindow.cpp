#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> distinctElementsInWindows(int arr[], int n, int k) {
    vector<int> ans;
    unordered_map<int, int> window;

    for (int i = 0; i < k; i++) {
        window[arr[i]]++;
    }

    ans.push_back(window.size());

    for (int i = k; i < n; i++) {
        window[arr[i - k]]--;
        if (window[arr[i - k]] == 0) {
            window.erase(arr[i - k]);
        }

        window[arr[i]]++;

        ans.push_back(window.size());
    }

    return ans;
}

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    vector<int> result = distinctElementsInWindows(arr, n, k);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}