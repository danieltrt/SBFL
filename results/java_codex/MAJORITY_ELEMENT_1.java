void findMajority(int arr[], int size)
{
    int maxCount = 0;
    int index = -1; // sentinels
    for(int i = 0; i < size; i++)
    {
        int count = 0;
        for(int j = 0; j < size; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        // update maxCount if count of
        // current element is greater
        if(count > maxCount)
        {
            maxCount = count;
            index = i;
        }
    }

    // if maxCount is greater than n/2
    // return the corresponding element
    if (maxCount > size/2)
       cout << "Majority Element : " << arr[index] << endl;
    else
        cout << "No Majority Element" << endl;
}