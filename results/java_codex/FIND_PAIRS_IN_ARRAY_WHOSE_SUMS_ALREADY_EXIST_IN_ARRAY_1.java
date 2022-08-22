void findPair(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);
    bool found = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = arr[i] + arr[j];
            if (s.find(sum) != s.end())
            {
                found = true;
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
    if (found == false)
        cout << "Not Exist" << endl;
}