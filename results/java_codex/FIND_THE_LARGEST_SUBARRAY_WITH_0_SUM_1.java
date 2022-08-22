int maxLen(int arr[], int n)
{
    // Creates an empty hashMap hM
    unordered_map<int, int> hM;

    int sum = 0;      // Initialize sum of elements
    int max_len = 0;  // Initialize result

    // Traverse through the given array
    for (int i = 0; i < n; i++)
    {
        // Add current element to sum
        sum += arr[i];

        if (arr[i] == 0 && max_len == 0)
            max_len = 1;

        if (sum == 0)
            max_len = i+1;

        // Look this sum in hash table
        if (hM.find(sum) != hM.end())
            max_len = max(max_len, i - hM[sum]);
        else // Else put this sum in hash table
            hM[sum] = i;
    }

    return max_len;
}