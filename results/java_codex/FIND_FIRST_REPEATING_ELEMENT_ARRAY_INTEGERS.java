void printFirstRepeating(int arr[], int n)
{
    // Initialize index of first repeating element
    int min = -1;
 
    // Creates an empty hashset
    unordered_set<int> set;
 
    // Traverse the input array from right to left
    for (int i=n-1; i>=0; i--)
    {
        // If element is already in hash set, update min
        if (set.find(arr[i]) != set.end())
            min = i;
 
        else   // Else add element to hash set
            set.insert(arr[i]);
    }
 
    // Print the result
    if (min != -1)
      cout << "The first repeating element is " << arr[min];
    else
      cout << "There are no repeating elements";
}