int longestCommonSum(int n) {
        int maxLen = 0;
        int preSum1 = 0, preSum2 = 0;
        int diff[2 * n + 1];
        for (int i = 0; i < 2 * n + 1; i++) {
            diff[i] = -1;
        }
        for (int i = 0; i < n; i++) {
            preSum1 += arr1[i];
            preSum2 += arr2[i];
            int curr_diff = preSum1 - preSum2;
            int diffIndex = n + curr_diff;
            if (curr_diff == 0) maxLen = i + 1;
            else if (diff[diffIndex] == -1) diff[diffIndex] = i;
            else {
                int len = i - diff[diffIndex];
                if (len > maxLen) maxLen = len;
            }
        }
        return maxLen;
    }