#include <bits/stdc++.h>
using namespace std;
vector<int> getThreeLargest(vector<int> &arr)
{
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;

    if (arr.size() < 3)
    {
        if (arr[0] == arr[1])
        {
            arr.pop_back();
        }
        else if (arr[0] < arr[1])
        {
            swap(arr[0], arr[1]);
        }
        return arr;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if (max2 < arr[i] && arr[i] != max1)
        {
            max3 = max2;
            max2 = arr[i];
        }
        else if (arr[i] > max3 && arr[i] != max2 && arr[i] != max1)
        {
            max3 = arr[i];
        }
    }
    vector<int> ans;

    if (max1 != INT_MIN)
        ans.push_back(max1);
    if (max2 != INT_MIN)
        ans.push_back(max2);
    if (max3 != INT_MIN)
        ans.push_back(max3);

    return ans;
}

int main()
{
    vector<int> v = {4,2,67,12,87,45,90,42,45,78,87};
    vector<int>ans = getThreeLargest(v);

    for(auto u : ans){
        cout << u << " ";
    }cout << endl;
}