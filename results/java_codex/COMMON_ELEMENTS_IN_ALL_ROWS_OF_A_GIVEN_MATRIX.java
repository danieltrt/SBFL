void printCommonElements(int mat[M][N])
{
    unordered_map<int, int> mp;
    for (int j = 0; j < N; j++)
        mp[mat[0][j]] = 1;
    for (int i = 1; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (mp.find(mat[i][j]) != mp.end() && mp[mat[i][j]] == i)
            {
                mp[mat[i][j]] = i + 1;
                if (i == M - 1)
                    cout << mat[i][j] << " ";
            }
        }
    }
}