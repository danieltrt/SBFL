int findCommon(int mat[M][N])
{
    unordered_map<int, int> cnt;
    int i, j;
    for (i = 0; i < M; i++)
    {
        if (cnt.find(mat[i][0]) != cnt.end())
        {
            cnt[mat[i][0]]++;
        }
        else
        {
            cnt[mat[i][0]] = 1;
        }
        for (j = 1; j < N; j++)
        {
            if (mat[i][j] != mat[i][j - 1])
            {
                if (cnt.find(mat[i][j]) != cnt.end())
                {
                    cnt[mat[i][j]]++;
                }
                else
                {
                    cnt[mat[i][j]] = 1;
                }
            }
        }
    }
    for (auto ele : cnt)
    {
        if (ele.second == M)
            return ele.first;
    }
    return -1;
}