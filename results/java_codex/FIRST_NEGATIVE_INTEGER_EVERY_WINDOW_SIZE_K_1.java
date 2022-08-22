void printFirstNegativeInteger(int arr[], int n, int k)
{
    queue<int> Qi(k);

    int i;
    for (i = 0; i < k; ++i)
    {
        if (arr[i] < 0)
            Qi.push(i);
    }

    for ( ; i < n; ++i)
    {
        if (!Qi.empty())
            cout << arr[Qi.front()] << " ";
        else
            cout << "0" << " ";

        while ( (!Qi.empty()) && Qi.front() < (i-k+1))
            Qi.pop();

        if (arr[i] < 0)
            Qi.push(i);
    }

    if (!Qi.empty())
        cout << arr[Qi.front()];
    else
        cout << "0";
}