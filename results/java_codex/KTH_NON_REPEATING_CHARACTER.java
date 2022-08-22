int kthNonRepeating(string str, int k)
{
    int n = str.length();
    int count[MAX_CHAR] = {0};
    int index[MAX_CHAR] = {n};
    for (int i = 0; i < n; i++)
    {
        char x = str[i];
        ++count[x];
        if (count[x] == 1)
            index[x] = i;
        if (count[x] == 2)
            index[x] = n;
    }
    sort(index, index+MAX_CHAR);
    return (index[k-1] != n)? index[k-1] : -1;
}