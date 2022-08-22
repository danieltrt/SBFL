int findMaxValue(int arr[], int n)
{
    if (n < 4)
    {
        cout << "The array should have atleast 4 elements";
    }
    int table1[n + 1];
    int table2[n];
    int table3[n - 1];
    int table4[n - 2];
    fill_n(table1, n + 1, INT_MIN);
    fill_n(table2, n, INT_MIN);
    fill_n(table3, n - 1, INT_MIN);
    fill_n(table4, n - 2, INT_MIN);
    for (int i = n - 1; i >= 0; i--)
    {
        table1[i] = max(table1[i + 1], arr[i]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        table2[i] = max(table2[i + 1], table1[i + 1] - arr[i]);
    }
    for (int i = n - 3; i >= 0; i--)
        table3[i] = max(table3[i + 1], table2[i + 1] + arr[i]);
    for (int i = n - 4; i >= 0; i--)
        table4[i] = max(table4[i + 1], table3[i + 1] - arr[i]);
    return table4[0];
}