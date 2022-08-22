void countDistinct(int arr[], int k, int n)
{
    // Creates an empty hashMap hM
    unordered_map<int, int> hM;

    // Initialize distinct element count for
    // current window
    int dist_count = 0;

    // Traverse the first window and store count
    // of every element in hash map
    for (int i = 0; i < k; i++)
    {
        if (hM.find(arr[i]) == hM.end())
        {
            hM[arr[i]] = 1;
            dist_count++;
        }
        else
            hM[arr[i]] += 1;
    }

    // Print count of first window
    cout << dist_count << endl;

    // Traverse through the remaining array
    for (int i = k; i < n; i++)
    {
        // Remove first element of previous window
        // If there was only one occurrence, then
        // reduce distinct count.
        if (hM[arr[i-k]] == 1)
        {
            hM.erase(arr[i-k]);
            dist_count--;
        }
        else
            hM[arr[i-k]] -= 1;

        // Add new element of current window
        // If this element appears first time,
        // increment distinct element count
        if (hM.find(arr[i]) == hM.end())
        {
            hM[arr[i]] = 1;
            dist_count++;
        }
        else
            hM[arr[i]] += 1;

        // Print count of current window
        cout << dist_count << endl;
    }
}