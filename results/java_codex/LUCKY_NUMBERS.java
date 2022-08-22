bool isLucky(int n) {
        static int counter = 2;
        if (counter > n) return true;
        if (n % counter == 0) return false;
        n -= n / counter;
        counter++;
        return isLucky(n);
    }