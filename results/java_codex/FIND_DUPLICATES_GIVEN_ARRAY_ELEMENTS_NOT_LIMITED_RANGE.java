void printDuplicates(int arr[], int n)
{
    unordered_map<int, int> mp;
    int count = 0;
    bool dup = false;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(arr[i]) != mp.end())
        {
            count = mp[arr[i]];
            mp[arr[i]] = count + 1;
        }
        else
        {
            mp[arr[i]] = 1;
        }
    }
    for (auto x : mp)
    {
        if (x.second > 1)
        {
            cout << x.first << " ";
            dup = true;
        }
    }
    if (!dup)
    {
        cout << "-1";
    }
}