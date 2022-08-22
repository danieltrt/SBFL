int SumOfKsubArray(int arr[], int k) {
        int sum = 0;
        deque<int> S, G;
        int i = 0;
        for (i = 0; i < k; i++) {
            while (!S.empty() && arr[S.back()] >= arr[i]) S.pop_back();
            while (!G.empty() && arr[G.back()] <= arr[i]) G.pop_back();
            G.push_back(i);
            S.push_back(i);
        }
        for (; i < arr.size(); i++) {
            sum += arr[S.front()] + arr[G.front()];
            while (!S.empty() && S.front() <= i - k) S.pop_front();
            while (!G.empty() && G.front() <= i - k) G.pop_front();
            while (!S.empty() && arr[S.back()] >= arr[i]) S.pop_back();
            while (!G.empty() && arr[G.back()] <= arr[i]) G.pop_back();
            G.push_back(i);
            S.push_back(i);
        }
        sum += arr[S.front()] + arr[G.front()];
        return sum;
    }