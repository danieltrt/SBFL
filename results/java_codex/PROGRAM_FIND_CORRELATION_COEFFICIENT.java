float correlationCoefficient(int X[], int Y[], int n) {
        int sum_X = 0, sum_Y = 0, sum_XY = 0;
        int squareSum_X = 0, squareSum_Y = 0;
        for (int i = 0; i < n; i++) {
            sum_X = sum_X + X[i];
            sum_Y = sum_Y + Y[i];
            sum_XY = sum_XY + X[i] * Y[i];
            squareSum_X = squareSum_X + X[i] * X[i];
            squareSum_Y = squareSum_Y + Y[i] * Y[i];
        }
        float corr = (float) (n * sum_XY - sum_X * sum_Y) / (float) (sqrt((n * squareSum_X - sum_X * sum_X) * (n * squareSum_Y - sum_Y * sum_Y)));
        return corr;
    }