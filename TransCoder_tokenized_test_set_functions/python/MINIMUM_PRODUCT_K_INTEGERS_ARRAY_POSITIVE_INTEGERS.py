def minProduct ( arr, n, k ) :
    heapq . heapify ( arr )
    count = 0
    ans = 1
    while ( arr ) and count < k :
        x = heapq . heappop ( arr )
        ans = ans * x
        count = count + 1
    return ans;
