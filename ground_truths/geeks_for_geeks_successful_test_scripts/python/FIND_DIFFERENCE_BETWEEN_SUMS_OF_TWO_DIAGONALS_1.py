# Copyright (c) 2019-present, Facebook, Inc.
# All rights reserved.
#
# This source code is licensed under the license found in the
# LICENSE file in the root directory of this source tree.
#
def f_gold ( arr , n ) :
    d1 = 0
    d2 = 0
    for i in range ( 0 , n ) :
        d1 = d1 + arr [ i ] [ i ]
        d2 = d2 + arr [ i ] [ n - i - 1 ]
    return abs ( d1 - d2 )


#TOFILL

if __name__ == '__main__':
    param = [
    ([[1, 2, 4, 8, 12, 15, 17, 17, 19, 19, 21, 26, 27, 28, 32, 33, 40, 41, 41, 46, 46, 47, 48, 56, 59, 62, 68, 68, 69, 76, 80, 81, 82, 83, 86, 88, 90, 91, 93, 96, 97], [3, 7, 8, 9, 10, 13, 16, 18, 20, 22, 22, 24, 26, 27, 31, 33, 33, 34, 37, 43, 45, 46, 46, 46, 47, 49, 50, 51, 55, 57, 67, 75, 75, 83, 87, 87, 90, 90, 92, 93, 97], [5, 5, 5, 8, 11, 14, 18, 24, 26, 28, 28, 31, 35, 36, 37, 43, 43, 50, 56, 56, 59, 61, 62, 62, 64, 66, 66, 67, 74, 76, 76, 79, 82, 83, 84, 87, 87, 87, 90, 96, 98], [4, 13, 13, 20, 21, 22, 22, 29, 30, 31, 35, 38, 38, 39, 41, 42, 43, 43, 51, 56, 56, 63, 65, 66, 74, 79, 80, 82, 84, 84, 86, 87, 87, 89, 91, 92, 92, 94, 94, 96, 99], [8, 11, 12, 17, 17, 18, 21, 24, 24, 26, 26, 26, 27, 28, 28, 28, 29, 32, 36, 36, 40, 51, 53, 59, 64, 65, 68, 72, 73, 73, 77, 81, 81, 82, 83, 85, 87, 89, 92, 95, 99], [1, 3, 6, 7, 7, 8, 9, 9, 12, 13, 13, 14, 15, 17, 20, 20, 21, 27, 36, 36, 40, 44, 51, 51, 55, 57, 62, 68, 68, 70, 81, 82, 87, 89, 90, 93, 94, 97, 97, 98, 99], [4, 6, 7, 11, 14, 21, 21, 22, 25, 25, 28, 30, 39, 40, 40, 43, 45, 46, 46, 51, 53, 57, 60, 62, 64, 65, 66, 68, 70, 72, 73, 80, 81, 81, 84, 84, 86, 91, 92, 95, 95], [1, 1, 3, 5, 5, 9, 11, 11, 11, 13, 16, 17, 20, 28, 31, 31, 36, 37, 38, 38, 41, 42, 44, 47, 49, 53, 54, 58, 60, 67, 68, 70, 72, 72, 76, 80, 81, 82, 87, 88, 99], [8, 8, 10, 16, 16, 17, 20, 26, 29, 29, 31, 36, 40, 42, 48, 50, 55, 56, 56, 59, 61, 64, 64, 70, 77, 77, 78, 78, 81, 84, 84, 87, 88, 93, 93, 93, 95, 95, 96, 97, 97], [2, 2, 5, 7, 9, 10, 11, 14, 15, 15, 16, 16, 22, 23, 26, 26, 31, 32, 33, 36, 42, 49, 51, 53, 56, 58, 61, 75, 76, 77, 77, 80, 80, 82, 82, 83, 84, 85, 90, 90, 94], [3, 6, 7, 9, 9, 10, 11, 12, 19, 22, 25, 30, 32, 32, 33, 34, 35, 36, 36, 37, 40, 41, 43, 43, 44, 44, 51, 58, 62, 62, 69, 69, 78, 78, 80, 83, 85, 91, 93, 97, 99], [1, 4, 5, 7, 7, 7, 15, 16, 17, 18, 21, 21, 26, 31, 36, 39, 39, 47, 49, 53, 56, 59, 60, 63, 63, 64, 64, 66, 69, 70, 77, 79, 80, 80, 82, 84, 86, 87, 89, 98, 98], [1, 6, 9, 11, 12, 14, 21, 22, 29, 31, 32, 32, 34, 37, 37, 37, 43, 44, 47, 52, 55, 57, 58, 61, 61, 63, 64, 65, 70, 71, 71, 74, 74, 77, 77, 80, 81, 86, 91, 91, 97], [1, 3, 4, 10, 10, 19, 20, 20, 21, 21, 23, 27, 27, 33, 35, 36, 36, 41, 41, 42, 49, 51, 51, 51, 54, 56, 59, 61, 61, 66, 67, 77, 81, 82, 82, 82, 85, 87, 93, 94, 95], [7, 9, 9, 12, 15, 19, 24, 28, 30, 32, 36, 39, 40, 41, 51, 55, 55, 55, 56, 56, 57, 58, 63, 64, 71, 73, 74, 76, 76, 77, 77, 80, 81, 89, 91, 91, 92, 94, 95, 97, 99], [2, 2, 6, 11, 13, 15, 16, 17, 18, 21, 24, 30, 30, 33, 34, 35, 36, 40, 41, 44, 46, 47, 51, 52, 53, 53, 55, 56, 60, 62, 68, 73, 77, 78, 79, 83, 85, 91, 94, 96, 96], [2, 3, 6, 7, 8, 8, 9, 15, 18, 24, 25, 30, 30, 38, 41, 44, 44, 47, 49, 53, 59, 60, 61, 65, 65, 71, 77, 78, 80, 84, 84, 86, 86, 87, 88, 88, 90, 91, 91, 95, 96], [1, 10, 11, 16, 16, 16, 25, 26, 28, 31, 31, 32, 33, 34, 34, 36, 37, 38, 46, 50, 52, 55, 56, 58, 61, 62, 67, 71, 72, 75, 77, 83, 84, 84, 85, 87, 88, 95, 96, 97, 99], [1, 3, 4, 5, 7, 8, 9, 12, 13, 13, 18, 20, 24, 27, 33, 35, 39, 44, 49, 56, 56, 61, 61, 67, 70, 70, 70, 70, 71, 71, 71, 76, 78, 78, 84, 88, 89, 91, 94, 95, 99], [1, 1, 4, 5, 6, 7, 11, 16, 20, 22, 23, 27, 35, 36, 39, 39, 44, 46, 46, 49, 51, 51, 52, 55, 56, 56, 58, 65, 70, 77, 78, 82, 82, 82, 84, 88, 89, 96, 98, 98, 99], [3, 3, 5, 5, 9, 12, 14, 17, 22, 31, 33, 34, 36, 36, 38, 38, 39, 45, 46, 47, 48, 48, 50, 55, 55, 56, 59, 63, 64, 67, 68, 70, 72, 74, 80, 80, 82, 84, 87, 93, 95], [4, 8, 16, 17, 17, 18, 18, 23, 24, 27, 28, 32, 36, 39, 40, 42, 45, 48, 48, 52, 52, 53, 55, 56, 57, 57, 66, 67, 68, 70, 71, 74, 74, 74, 75, 77, 80, 81, 84, 92, 92], [4, 4, 5, 8, 18, 18, 19, 20, 21, 21, 25, 25, 25, 28, 31, 38, 42, 48, 54, 56, 58, 59, 61, 61, 63, 66, 67, 67, 68, 71, 74, 75, 77, 77, 78, 84, 86, 88, 93, 94, 99], [3, 5, 5, 8, 10, 12, 13, 20, 21, 22, 25, 33, 38, 39, 41, 44, 47, 47, 48, 49, 50, 52, 59, 62, 64, 65, 67, 68, 69, 70, 70, 75, 78, 79, 80, 81, 83, 84, 87, 90, 99], [3, 7, 9, 9, 11, 13, 13, 13, 14, 15, 17, 24, 26, 29, 29, 33, 34, 35, 37, 40, 41, 45, 50, 50, 53, 56, 57, 59, 62, 62, 63, 65, 72, 72, 76, 78, 79, 86, 87, 94, 99], [2, 2, 6, 7, 12, 13, 13, 13, 15, 16, 17, 18, 22, 23, 24, 24, 27, 28, 34, 40, 40, 42, 43, 48, 49, 52, 53, 54, 55, 57, 60, 66, 71, 71, 71, 73, 74, 93, 96, 96, 97], [1, 1, 2, 2, 3, 3, 4, 4, 6, 18, 20, 25, 26, 26, 27, 30, 32, 38, 39, 41, 48, 50, 53, 57, 61, 63, 64, 65, 66, 67, 67, 68, 71, 73, 81, 84, 91, 91, 91, 94, 99], [2, 3, 3, 4, 5, 7, 10, 11, 12, 13, 14, 14, 14, 15, 16, 17, 17, 18, 26, 27, 40, 41, 42, 43, 47, 47, 48, 48, 55, 63, 64, 75, 78, 83, 83, 87, 88, 89, 92, 98, 98], [1, 2, 6, 6, 8, 13, 13, 22, 23, 25, 25, 26, 28, 28, 34, 37, 40, 44, 46, 50, 54, 58, 62, 62, 65, 67, 72, 79, 80, 81, 84, 85, 85, 87, 88, 89, 92, 95, 97, 97, 97], [3, 4, 6, 6, 11, 12, 12, 15, 19, 20, 22, 26, 34, 37, 41, 44, 52, 56, 56, 60, 69, 69, 70, 71, 72, 72, 73, 79, 79, 83, 85, 90, 90, 91, 93, 94, 95, 96, 97, 98, 99], [2, 4, 5, 6, 8, 9, 15, 17, 21, 21, 24, 24, 30, 32, 34, 34, 35, 37, 38, 39, 39, 41, 43, 43, 43, 47, 51, 51, 54, 55, 61, 63, 64, 71, 74, 78, 78, 80, 84, 85, 96], [2, 2, 7, 8, 9, 9, 9, 10, 14, 14, 14, 15, 20, 21, 26, 26, 27, 28, 29, 36, 37, 39, 40, 40, 41, 45, 48, 49, 61, 62, 66, 67, 69, 70, 71, 75, 75, 76, 80, 90, 97], [1, 3, 11, 11, 11, 12, 15, 17, 19, 20, 25, 27, 28, 40, 51, 52, 53, 53, 57, 58, 58, 62, 68, 72, 72, 73, 76, 76, 81, 83, 84, 86, 86, 87, 87, 89, 92, 94, 94, 95, 95], [7, 7, 8, 13, 16, 16, 23, 23, 24, 24, 30, 33, 37, 38, 39, 42, 48, 52, 53, 54, 56, 56, 64, 64, 65, 66, 66, 68, 70, 71, 72, 72, 78, 81, 83, 85, 86, 87, 90, 90, 92], [3, 4, 4, 5, 13, 17, 17, 21, 28, 33, 34, 34, 34, 35, 37, 38, 45, 50, 55, 60, 63, 64, 65, 67, 67, 68, 69, 70, 71, 79, 79, 80, 80, 84, 85, 93, 94, 94, 96, 97, 98], [10, 13, 15, 17, 19, 20, 21, 21, 22, 29, 29, 30, 35, 39, 39, 44, 44, 47, 49, 49, 50, 50, 52, 53, 55, 57, 57, 59, 60, 61, 64, 67, 69, 72, 75, 78, 80, 87, 88, 89, 98], [8, 9, 9, 13, 28, 29, 32, 32, 33, 34, 38, 40, 40, 42, 45, 51, 51, 54, 55, 57, 57, 59, 63, 69, 69, 69, 70, 73, 76, 77, 78, 78, 85, 85, 87, 88, 91, 95, 96, 97, 99], [2, 5, 7, 8, 14, 17, 19, 20, 21, 24, 25, 28, 29, 32, 33, 37, 44, 45, 52, 54, 58, 58, 62, 62, 63, 63, 65, 65, 71, 72, 74, 81, 86, 86, 91, 91, 91, 93, 93, 96, 98], [3, 8, 12, 13, 16, 21, 22, 23, 33, 40, 42, 42, 46, 48, 50, 50, 54, 57, 64, 64, 68, 68, 68, 73, 74, 74, 77, 77, 78, 79, 82, 85, 86, 88, 92, 92, 94, 97, 97, 98, 98], [5, 6, 7, 8, 9, 12, 13, 19, 19, 27, 29, 34, 36, 38, 39, 41, 43, 44, 47, 49, 50, 53, 57, 57, 59, 61, 62, 65, 65, 68, 75, 77, 80, 81, 82, 84, 85, 88, 89, 92, 94], [3, 3, 4, 8, 12, 20, 25, 26, 30, 32, 33, 41, 41, 43, 45, 46, 46, 47, 50, 54, 54, 57, 57, 62, 63, 65, 67, 68, 69, 70, 72, 73, 75, 77, 83, 85, 86, 93, 93, 97, 97]],21,),
    ([[52, -18, -36, -28, -14, 92, 80, -48, 28, -18, -46, 76, -96, 4, -50, -80, -40, 34, 36, -66, -66, 48, -8, -36, 10, 26, -46, 80, -22, -90, 66, 82, 22, 30, -32, 96, 30, -4, 70, -92, 90, -26, 18, -48, 72, -88], [14, -90, 60, 50, 54, 78, 46, 26, -46, 94, 46, 42, -48, 96, 18, -84, 42, 16, -58, -96, -80, -66, -50, -32, -48, -8, 34, 42, 40, 34, 12, -34, -94, 18, 60, 30, -48, 8, 30, -24, 10, -26, -12, -58, 62, 96], [-22, -24, -6, 16, 80, 86, -30, -66, 94, 10, -42, 0, -92, -28, 82, -16, -94, -40, 72, -76, 66, -70, 94, 68, -20, -30, 48, 80, -96, -56, -70, -82, -22, -78, 12, -20, -2, 80, -96, -10, 12, -10, 32, 66, 26, 22], [18, 72, 76, 82, -20, -64, 16, 70, 72, 32, -34, -98, -22, 24, -68, 0, -14, -60, -66, 16, -20, -40, -64, 42, 14, -70, -30, 48, 40, 12, -82, -30, -36, -36, 60, -48, 78, -66, 46, -52, 68, -60, 88, -10, -42, 64], [58, -48, 0, 78, -74, 84, -14, 54, -68, 48, 84, -2, -74, -20, 32, 40, 4, 8, 38, -24, 58, 56, 76, -88, -18, 90, -94, -64, -76, -8, -88, -20, -66, -4, -20, -70, 34, 66, 12, 8, -38, 8, 92, -98, -32, -44], [96, -20, 6, -36, 54, -82, -74, -98, -58, -32, -42, 26, 34, 72, -98, -2, 40, -90, 16, -66, 70, -10, 36, -84, 8, -22, -18, 24, -92, 12, 34, 30, -74, 54, 46, 26, -52, -48, -86, 78, 16, -94, -12, -24, 64, -42], [-74, -4, -70, -32, 24, 72, 8, 66, 52, -34, -84, -70, 82, -96, 72, 90, 0, 18, 26, 48, 98, -92, -26, 0, -78, -52, 94, -12, -60, -54, 16, 98, 96, -68, 26, 84, 24, -28, 42, -32, 58, 4, -78, 46, -96, -2], [-74, -46, 62, -52, -30, 36, -52, 64, 66, 4, 18, 76, 8, 82, 90, 72, -64, 24, 86, -46, 72, 58, -10, 46, -8, -20, -18, -24, -4, 52, 96, 44, -18, -84, -64, -56, 76, 54, -84, -12, -32, 52, 62, 10, 52, 68], [-44, 20, 44, -20, 94, 76, 94, -40, 40, -74, -56, 78, 20, 38, -56, -2, -34, -6, -24, -62, 72, -36, 42, 32, 56, 24, 38, 6, 8, -78, -64, -38, 58, -98, 16, 38, 92, -4, -38, -22, -62, 96, 34, 64, -32, -98], [34, -96, -98, 10, 40, 2, 26, 14, 18, -12, -16, 84, -74, 0, -98, 38, -48, 18, 22, -32, -52, -2, 28, -50, 64, 10, 80, 6, 20, 0, 66, 80, 96, 14, 20, -56, 18, 80, -16, 74, -74, 26, -70, 58, 74, 32], [72, -52, 2, -90, -56, 98, -50, 10, -60, 84, 24, -88, -98, -48, 54, 44, -84, 10, -18, 68, 40, 40, -46, -18, 60, -58, -50, 26, 74, -24, -64, -70, 44, -40, 18, -88, -60, 82, -60, 26, -66, -68, 46, 60, 92, 84], [96, 26, -46, 94, -48, 24, 50, -10, 24, -50, 86, -76, -78, 98, -28, -60, -62, -32, -74, -18, 96, -44, -72, -56, 12, -28, 70, -16, 48, -26, 86, -24, 44, 56, 82, -34, 30, 36, -34, 92, -80, -50, -54, -20, -52, 48], [74, -70, 64, -98, -40, -14, -82, 56, 82, -16, -76, -56, 22, 64, -84, -48, 44, 70, 30, 56, -84, -80, -44, -30, -38, 96, 58, -18, 56, -42, -54, 20, -60, 82, -94, -8, 40, -16, -94, -70, 30, -82, 74, 4, -36, -42], [24, -10, 16, -4, 50, -8, 58, -24, -90, -90, 52, 16, 96, 74, 36, -92, -28, -84, 6, 70, 54, 60, 26, 42, 34, 22, 4, -48, -96, 20, 88, 34, 78, 12, -62, -6, 80, 30, 86, 74, 68, -18, 42, -50, -80, 32], [62, 90, 6, 66, -26, -98, -80, 46, -52, -22, 10, -60, 62, 92, 16, 78, 52, 22, 70, 28, 98, 28, -94, 70, -68, -84, 32, -86, 38, -6, -94, 10, -4, -84, 74, 42, -10, -82, 12, -6, -8, 14, -30, 72, 18, 12], [78, -18, 56, 90, -74, 82, 20, -90, 26, 40, -72, -46, -76, 14, -58, 58, 30, -58, -62, -62, 70, -4, -62, -64, -88, 96, 80, 74, 30, 12, 44, 78, 76, 76, -48, -38, -12, 22, -90, 0, -26, 28, 88, 80, 38, 66], [-58, 10, 22, -26, 46, -48, -76, 92, 26, 52, 24, -30, 56, -68, 2, 72, -44, 34, -72, -24, 34, 64, 72, -10, 16, -26, 0, 60, 18, -44, -18, -36, -94, 38, 22, 80, -78, -78, -48, 98, 64, 30, 72, 14, -22, 22], [-30, 82, 38, -2, -60, -28, -4, -36, 22, -64, 48, -14, -26, -10, 62, -10, -68, 54, -6, -26, -32, -66, -84, -12, 56, 42, -64, 14, 86, 76, -24, -36, 38, 98, 56, -14, -52, 44, -44, -88, -26, -10, 14, -2, -12, -14], [-58, 50, 18, 30, 80, 78, 22, 22, 12, 90, 0, -20, 50, 20, 82, -70, -26, -28, -90, 58, -24, 18, 54, 62, 48, 20, 96, -10, 72, 70, -98, 64, -56, 42, 76, 58, -84, -62, 40, -78, -22, -98, 42, 54, -34, 10], [42, 64, -40, -90, -8, -54, -42, 80, -28, -18, 8, 28, -10, 36, 12, 86, 28, -16, 66, 10, 6, 86, 60, -92, -92, -16, -84, -84, -50, 76, -2, 68, 80, -62, 54, -90, -96, 48, 2, -42, 70, 68, -24, 92, 14, -46], [-96, 20, 10, 64, -66, 84, -52, -74, -96, -88, -96, 6, -32, -10, -40, -2, 4, 22, 24, -60, -54, -62, -58, -30, -80, -94, -50, -72, 74, 50, 84, -6, 12, -28, 46, 64, -36, -52, -24, 56, 56, -16, 80, -74, -94, 50], [-66, 62, 46, -38, -50, 78, 2, 96, -50, -2, -64, -86, -26, -4, -92, 78, -16, 64, -74, 6, 34, -54, 40, 62, -8, 30, 46, -88, 68, 52, 46, 84, -90, 6, 86, 58, -70, 86, 54, 80, -6, 30, 44, -6, 2, 42], [-44, -76, 40, -30, -38, 14, -24, -10, -28, -54, 90, -64, 66, 88, 62, 94, -56, 72, 4, 46, 60, 70, -92, -48, -62, -94, 96, -40, 74, -40, -28, -44, 64, -54, 14, -42, -74, -24, 18, 46, -48, 60, 16, -78, -74, -82], [-8, -94, -56, 90, 22, -36, -66, 28, 48, -28, 92, 38, -8, 14, 34, 46, 62, 12, 2, -38, -44, 16, -66, -56, -74, 98, 92, -42, -42, -32, 82, -42, -12, -76, 18, 54, 16, 0, 92, 12, 96, 86, 94, -60, -62, -50], [-14, -88, -20, -60, 36, -90, -24, 90, -24, 70, 10, 22, -10, -88, -90, -72, -60, -62, -58, 98, 24, -52, -70, 82, 84, 24, 94, -16, -70, -16, 84, -34, 72, -42, 66, 36, -38, -20, -22, 12, -30, 48, -2, -58, -26, 56], [52, 40, 28, -48, -80, -58, 50, 34, -94, -24, -94, -24, -44, 4, -90, 84, 84, -66, 76, 36, -62, -22, 8, 32, 24, -86, -52, 16, 52, 24, 66, -16, 38, 54, 56, 92, 84, -46, 88, 22, 92, -58, -14, 12, 82, 92], [-98, 38, 16, 44, -10, 32, 68, -90, 94, -16, -90, 38, 96, -82, 68, -72, -80, -54, -68, 0, 58, -12, 56, -46, 68, 4, -52, 4, 2, -96, -78, 80, 50, 4, 20, 80, 62, -40, -82, -22, 90, 44, 88, 68, -72, 66], [-28, 54, -12, 96, 94, 40, 10, -18, 28, 46, 8, 48, 74, 58, 94, 10, -30, -50, -2, -80, -22, -70, 30, -16, 26, 78, -84, -50, -2, -66, -18, 98, -94, -6, -2, -44, -48, 2, 78, 94, -90, 32, -90, -56, -90, 0], [-36, -40, -28, 94, -96, -16, 8, 12, 94, 52, 52, -56, -66, 86, -10, -68, 38, -16, -72, 94, -68, 26, 58, -74, 22, -84, -50, -8, 32, 66, 20, 94, -44, -74, -72, -96, 38, 64, 4, -72, -66, -54, 44, 92, -52, -62], [-98, -58, -82, -74, 38, -6, -86, -98, -60, 62, 32, -64, 12, 80, -58, 90, -76, -6, -98, 78, -12, -20, 68, -62, 72, -72, 90, -24, -84, -84, 54, 66, 46, 50, 12, 98, -4, -90, -46, 12, 28, 76, -54, -24, -12, -26], [-48, -6, -18, 80, -30, 44, 74, 14, -54, 64, -68, -2, 14, -4, -68, -6, -78, -4, -30, -18, -32, -48, 56, -48, -6, -46, 34, -96, -44, -84, -34, -12, -20, 72, -24, 76, 46, 66, -24, -20, -8, 92, 92, 54, 64, 2], [-30, 26, -76, -38, -72, 36, -32, -22, 8, 40, 72, 12, -58, 6, -94, -70, -44, 56, -88, 76, 50, -8, 76, -74, 2, 54, -48, 56, 56, 60, 72, -30, -42, -54, -28, -80, -64, 82, -32, -42, 2, -32, -48, 64, -66, 26], [66, 72, -98, -62, -18, -42, -50, -20, 62, -96, -24, -90, -58, 82, -76, 0, -12, -66, -48, 26, 42, 12, -8, 46, -56, -16, -2, -94, 16, 90, -34, 48, 34, -44, -66, -70, 44, 66, 6, 74, 50, 96, 32, 64, 82, -10], [84, 48, 94, 32, 44, 26, 64, 24, 28, 88, 42, -54, 82, 34, 16, -14, -46, -94, -76, 88, -38, 42, -60, -8, 4, -70, 24, -60, -82, -96, 40, 20, 98, -2, 32, -24, 54, 52, -44, 78, -58, -16, -32, 56, -20, 52], [34, -90, -10, -10, -8, -28, -34, 46, -86, 20, -90, -78, 94, 72, 92, -4, -30, 84, -32, 84, 16, 94, 92, -40, 46, 58, 38, -8, 14, 58, 58, 38, 0, -30, -30, -40, 90, 12, 26, 56, -62, 40, 8, 16, 70, 4], [-32, 88, 70, 26, 30, 62, -18, -50, -78, -18, 40, -98, -84, -74, -68, 22, 8, 6, -88, 78, 14, 50, -34, -12, -58, 78, 32, -6, 52, 70, -98, 32, 6, -26, 98, -82, -8, -88, -6, -6, 84, -28, -68, 78, 68, 12], [-2, 4, 82, 94, 72, -90, 2, -8, 16, 76, -34, 72, -26, -86, 60, 92, -32, 82, -88, -42, 14, 50, 94, -98, -50, -78, -86, 68, -28, 16, -18, -20, -6, -64, -82, 68, -86, 94, 46, -2, 78, -24, 88, -82, -80, 90], [40, -64, 60, -14, 98, 98, 84, 34, -36, 14, 92, 50, -30, -38, -28, 68, -6, 18, -36, -76, -20, -4, 62, -6, -58, -50, 48, -64, 34, -96, 76, 68, 66, 86, -2, -90, 80, -18, -68, -8, -64, -32, -14, -48, 48, -2], [58, 26, 56, -88, -92, -10, -14, 42, -96, 40, 24, 32, 16, 38, 34, 98, 54, -36, 88, 86, -74, 40, -68, -26, -14, -74, -82, 12, -48, -22, -36, 98, -38, -30, -98, -34, -8, 84, -34, -98, 0, -76, 24, -6, 94, -64], [76, 48, -14, 70, -52, -34, 4, -2, -8, 84, 2, 14, 16, -40, -90, -66, -22, 40, -46, 50, -66, -52, 54, -68, 48, 46, -76, 98, 34, -94, 26, 62, -38, 2, 52, 0, 58, 64, -96, 52, 4, 58, 70, -24, -96, 50], [30, 72, -88, -98, 42, 76, -52, -88, -32, -2, 2, -84, -86, -34, -36, 34, -38, -4, -60, -62, 54, -52, 92, 86, 6, 98, 76, 38, -56, 90, 98, -10, 66, 88, -90, -54, -42, -22, -58, 4, 92, 76, 36, 76, -68, 4], [8, 44, -2, -52, -76, 34, -14, -42, -54, 30, 46, 64, 14, 44, 10, -14, -60, -18, 16, -80, -6, -10, 52, 52, 90, -88, 98, -96, -36, 18, -92, 10, -52, 74, -94, -46, 36, -38, -12, 66, 34, -30, 38, 26, 6, 38], [-84, -22, 4, -52, -12, 40, -14, 44, 70, 80, 72, -16, -38, -44, 16, -16, 82, -90, -14, 24, -98, 92, 52, -50, 40, 96, 76, -16, -28, -28, 28, 10, 0, -22, 16, -62, -34, 28, 94, -72, 20, -30, -20, 40, -24, -76], [-62, 98, -82, 34, 12, 14, -64, -34, -70, -24, -34, -92, 54, 90, -66, -48, -52, -80, -72, -80, -46, -60, 76, -2, 58, -96, 52, 42, 88, 96, -58, -28, -4, 48, 66, -94, 4, 90, 64, -52, 62, 80, -98, 76, 90, -64], [-88, -40, 32, 8, 94, -12, 98, -52, 4, -14, 52, -72, -4, -84, 18, -96, 74, 80, -12, 18, 60, 32, -68, -94, 90, 24, 34, 2, -70, 90, 52, 28, 92, 58, -20, -52, 26, -30, 4, 96, 54, 64, 64, 52, -24, 40], [26, -84, -20, 80, -82, 40, 68, -6, -44, 48, 48, -36, 48, 12, -92, -14, 66, 98, 24, 42, 62, 76, 50, -62, -30, 36, 88, -30, -60, 94, -44, 70, 36, -26, -44, -48, 22, 6, 16, 26, 8, -4, 54, -50, 92, 44]],36,),
    ([[0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]],23,),
    ([[81, 85, 4, 98, 56, 46, 38, 97, 79, 82, 85, 7, 80, 73, 25, 43, 23, 2, 31, 9, 16, 34, 18, 10, 89], [22, 46, 32, 7, 21, 64, 50, 94, 48, 44, 44, 74, 34, 70, 14, 16, 50, 46, 84, 55, 14, 71, 46, 92, 38], [73, 57, 12, 47, 18, 80, 68, 28, 28, 21, 10, 76, 10, 23, 30, 16, 34, 78, 38, 86, 73, 50, 63, 68, 23], [32, 49, 77, 70, 75, 40, 3, 18, 23, 69, 51, 36, 73, 64, 54, 8, 44, 55, 63, 97, 37, 83, 97, 5, 92], [79, 81, 22, 50, 43, 76, 4, 17, 78, 58, 48, 17, 84, 11, 65, 37, 33, 75, 51, 91, 26, 80, 79, 14, 61], [73, 21, 41, 90, 65, 33, 41, 63, 58, 78, 71, 8, 41, 2, 56, 88, 78, 56, 70, 36, 94, 16, 40, 40, 24], [93, 81, 96, 8, 40, 57, 17, 29, 95, 31, 42, 70, 73, 58, 63, 66, 44, 8, 76, 4, 30, 9, 73, 30, 57], [60, 65, 25, 64, 74, 5, 58, 33, 50, 64, 59, 18, 78, 18, 80, 81, 46, 18, 71, 13, 13, 27, 14, 4, 96], [97, 55, 80, 68, 84, 54, 56, 13, 59, 47, 59, 60, 60, 33, 90, 26, 26, 31, 2, 92, 59, 96, 69, 90, 78], [17, 57, 22, 75, 4, 25, 11, 46, 48, 81, 10, 44, 46, 90, 54, 47, 28, 10, 89, 12, 44, 37, 36, 59, 37], [41, 5, 42, 76, 18, 86, 15, 31, 20, 18, 59, 24, 11, 3, 84, 95, 36, 72, 68, 77, 93, 26, 23, 46, 96], [57, 2, 76, 61, 78, 77, 68, 57, 74, 23, 80, 89, 58, 76, 89, 1, 21, 37, 38, 89, 10, 23, 65, 81, 24], [53, 40, 5, 49, 23, 54, 48, 71, 45, 56, 70, 95, 93, 28, 74, 97, 71, 43, 26, 77, 59, 69, 57, 24, 61], [8, 94, 80, 64, 93, 48, 15, 13, 9, 28, 22, 89, 46, 32, 39, 88, 25, 94, 61, 94, 41, 96, 18, 33, 68], [55, 12, 55, 98, 37, 89, 10, 59, 37, 2, 9, 61, 7, 60, 56, 43, 60, 72, 87, 13, 3, 53, 24, 69, 51], [81, 44, 2, 90, 81, 75, 56, 15, 23, 16, 51, 80, 72, 77, 88, 54, 6, 66, 18, 15, 23, 50, 95, 3, 10], [20, 24, 35, 36, 38, 44, 43, 56, 39, 90, 78, 13, 88, 19, 5, 89, 11, 67, 25, 70, 41, 21, 47, 44, 46], [1, 58, 92, 87, 51, 24, 53, 71, 79, 25, 62, 74, 8, 69, 32, 73, 68, 26, 12, 84, 7, 4, 21, 11, 64], [38, 69, 28, 6, 5, 64, 25, 11, 77, 56, 49, 62, 61, 28, 2, 93, 60, 63, 77, 83, 37, 79, 24, 61, 71], [59, 21, 91, 87, 47, 14, 49, 70, 8, 67, 25, 13, 73, 24, 28, 46, 94, 75, 45, 18, 64, 16, 45, 97, 72], [84, 26, 36, 48, 75, 67, 66, 58, 81, 83, 71, 88, 31, 60, 67, 30, 22, 39, 49, 46, 75, 53, 25, 54, 95], [37, 14, 8, 10, 99, 13, 27, 16, 17, 29, 28, 14, 11, 55, 40, 68, 7, 58, 27, 6, 33, 27, 28, 36, 6], [28, 3, 96, 18, 96, 58, 15, 46, 63, 70, 38, 76, 89, 71, 16, 68, 69, 3, 2, 52, 1, 78, 26, 24, 28], [98, 37, 55, 48, 7, 9, 40, 97, 73, 46, 38, 9, 56, 14, 73, 33, 38, 3, 48, 81, 66, 91, 14, 55, 41], [42, 34, 27, 88, 76, 14, 69, 45, 7, 93, 56, 23, 36, 24, 90, 93, 91, 3, 49, 54, 5, 80, 31, 65, 66]],15,),
    ([[-68, -68, -50, -30, 0, 36, 44, 46, 56, 80], [-88, -84, -80, -54, -30, -16, 44, 80, 80, 82], [-78, -66, -46, -44, 2, 42, 52, 56, 62, 92], [-96, -80, -56, -32, -14, 0, 2, 20, 30, 92], [-80, -78, -46, -16, -12, -6, 26, 66, 72, 98], [-62, -52, -52, -22, -12, 2, 10, 42, 90, 96], [-88, -74, -74, -64, -54, -52, 2, 34, 78, 82], [-78, -26, 8, 14, 42, 42, 76, 78, 86, 96], [-78, -70, -68, -22, -12, 20, 58, 60, 84, 98], [-98, -56, -48, -20, -20, 10, 48, 60, 60, 86]],7,),
    ([[0, 0, 1, 1, 0, 1, 1], [0, 1, 0, 1, 1, 0, 0], [1, 1, 1, 1, 0, 1, 0], [0, 0, 1, 0, 0, 0, 1], [1, 0, 1, 0, 0, 0, 0], [1, 1, 1, 1, 1, 1, 0], [1, 0, 0, 1, 1, 0, 1]],5,),
    ([[4, 5, 8, 14, 14, 15, 16, 18, 18, 19, 21, 23, 30, 31, 33, 36, 38, 39, 40, 45, 47, 50, 55, 57, 59, 59, 62, 63, 63, 68, 69, 70, 70, 73, 73, 77, 80, 81, 83, 85, 88, 90, 91, 97, 97], [1, 2, 2, 3, 7, 8, 11, 12, 15, 18, 27, 29, 31, 32, 35, 39, 43, 46, 47, 49, 50, 52, 54, 56, 56, 56, 57, 57, 60, 61, 62, 68, 68, 71, 77, 78, 79, 81, 81, 87, 87, 88, 89, 92, 93], [1, 7, 11, 15, 16, 18, 27, 27, 29, 29, 29, 31, 34, 39, 43, 44, 47, 52, 52, 55, 55, 56, 62, 68, 70, 72, 73, 73, 75, 76, 77, 78, 81, 84, 84, 87, 87, 88, 89, 90, 91, 91, 94, 96, 98], [3, 3, 4, 12, 16, 17, 17, 19, 28, 28, 29, 29, 30, 30, 31, 31, 33, 33, 36, 44, 44, 44, 45, 45, 53, 54, 54, 54, 57, 63, 64, 66, 67, 69, 69, 75, 78, 79, 82, 87, 91, 92, 95, 95, 99], [1, 1, 2, 5, 6, 9, 10, 11, 16, 17, 18, 20, 24, 25, 25, 26, 26, 26, 28, 29, 30, 35, 36, 36, 46, 47, 53, 57, 58, 58, 61, 61, 62, 71, 73, 75, 80, 81, 87, 87, 89, 90, 91, 96, 99], [4, 8, 14, 17, 17, 21, 24, 27, 29, 31, 34, 36, 37, 37, 40, 41, 42, 44, 44, 45, 46, 47, 50, 54, 63, 64, 65, 68, 73, 73, 73, 76, 77, 79, 80, 82, 82, 83, 84, 88, 90, 93, 93, 95, 95], [1, 5, 9, 10, 10, 12, 13, 15, 16, 17, 17, 24, 25, 26, 29, 32, 34, 36, 37, 43, 44, 49, 53, 54, 54, 56, 57, 65, 70, 72, 72, 76, 77, 78, 78, 80, 80, 80, 83, 86, 90, 90, 94, 96, 97], [5, 9, 10, 10, 10, 11, 11, 11, 15, 18, 18, 19, 24, 26, 31, 31, 33, 36, 41, 43, 43, 45, 50, 51, 54, 54, 54, 62, 64, 64, 66, 71, 71, 72, 73, 73, 79, 82, 83, 84, 86, 88, 93, 96, 97], [1, 3, 7, 9, 9, 10, 13, 15, 16, 22, 22, 24, 24, 26, 34, 36, 38, 38, 39, 40, 40, 41, 43, 45, 49, 53, 58, 60, 64, 67, 69, 70, 75, 77, 80, 81, 84, 84, 85, 85, 86, 89, 93, 97, 99], [3, 4, 5, 6, 7, 11, 11, 11, 13, 13, 15, 16, 19, 20, 21, 25, 25, 26, 27, 29, 38, 39, 44, 44, 50, 51, 51, 54, 54, 54, 61, 62, 65, 67, 68, 71, 71, 73, 73, 75, 77, 89, 89, 93, 95], [3, 5, 8, 13, 14, 15, 20, 23, 25, 25, 27, 28, 28, 29, 37, 38, 41, 42, 44, 45, 47, 48, 50, 54, 61, 64, 64, 71, 72, 74, 76, 76, 79, 79, 79, 80, 81, 81, 82, 83, 84, 95, 95, 95, 96], [4, 5, 7, 8, 9, 10, 13, 14, 17, 19, 20, 27, 28, 29, 34, 36, 37, 38, 38, 42, 42, 43, 44, 45, 45, 47, 52, 52, 53, 59, 60, 62, 67, 69, 73, 80, 82, 83, 83, 84, 88, 92, 95, 98, 99], [1, 6, 8, 10, 14, 14, 15, 17, 20, 20, 20, 20, 22, 34, 36, 42, 43, 47, 47, 48, 52, 53, 55, 56, 57, 59, 61, 65, 67, 69, 73, 74, 77, 78, 81, 81, 82, 84, 84, 84, 91, 93, 94, 98, 98], [2, 5, 8, 8, 10, 10, 11, 15, 16, 16, 18, 18, 18, 20, 21, 23, 37, 40, 41, 41, 42, 44, 46, 48, 50, 50, 52, 53, 59, 68, 68, 70, 73, 73, 74, 77, 77, 83, 86, 88, 92, 92, 94, 97, 99], [3, 4, 6, 6, 10, 11, 12, 13, 13, 15, 15, 17, 22, 23, 25, 28, 30, 37, 42, 43, 44, 46, 46, 52, 52, 53, 57, 57, 58, 58, 58, 59, 60, 60, 60, 63, 63, 67, 69, 69, 73, 74, 74, 75, 87], [3, 4, 4, 7, 8, 11, 12, 14, 20, 22, 23, 24, 24, 31, 32, 39, 41, 42, 45, 45, 47, 47, 51, 57, 57, 61, 62, 62, 64, 65, 66, 67, 69, 72, 72, 72, 80, 81, 85, 88, 91, 95, 96, 99, 99], [3, 5, 6, 8, 8, 8, 11, 12, 15, 17, 19, 19, 19, 22, 22, 23, 26, 27, 30, 34, 35, 36, 38, 46, 51, 51, 55, 59, 62, 62, 65, 66, 71, 73, 75, 77, 78, 86, 89, 90, 94, 95, 96, 96, 96], [3, 8, 9, 11, 13, 18, 18, 20, 21, 23, 23, 25, 27, 29, 32, 33, 36, 36, 44, 47, 49, 53, 58, 63, 64, 64, 66, 68, 68, 70, 71, 72, 72, 73, 74, 75, 75, 81, 82, 84, 85, 86, 88, 88, 96], [3, 5, 5, 7, 16, 16, 18, 18, 19, 20, 28, 31, 32, 35, 37, 38, 39, 39, 48, 49, 54, 60, 61, 67, 68, 70, 75, 75, 77, 78, 81, 82, 83, 83, 86, 87, 88, 89, 91, 91, 93, 97, 97, 97, 97], [2, 2, 3, 5, 11, 16, 18, 19, 20, 22, 22, 24, 24, 26, 26, 29, 33, 34, 35, 37, 41, 41, 44, 44, 45, 56, 56, 57, 57, 59, 64, 64, 70, 77, 80, 80, 83, 88, 89, 93, 94, 95, 96, 96, 98], [1, 3, 5, 6, 12, 16, 18, 21, 22, 23, 26, 29, 33, 37, 39, 40, 43, 46, 47, 53, 57, 57, 60, 61, 63, 63, 64, 65, 66, 67, 71, 71, 72, 72, 77, 81, 84, 85, 87, 93, 94, 95, 96, 97, 99], [3, 4, 6, 7, 10, 11, 16, 18, 19, 21, 22, 22, 32, 33, 34, 34, 36, 39, 40, 41, 42, 44, 47, 49, 49, 50, 54, 56, 63, 66, 71, 72, 73, 74, 74, 78, 79, 82, 83, 86, 89, 91, 92, 92, 93], [3, 4, 4, 5, 8, 15, 16, 19, 19, 20, 31, 32, 34, 34, 39, 40, 42, 45, 45, 47, 48, 48, 49, 52, 55, 60, 62, 62, 64, 68, 70, 73, 73, 74, 75, 77, 77, 81, 81, 83, 86, 90, 91, 94, 94], [4, 5, 12, 15, 16, 16, 17, 20, 24, 24, 25, 25, 25, 28, 30, 30, 33, 37, 39, 41, 42, 48, 50, 51, 51, 54, 57, 62, 63, 65, 66, 68, 69, 72, 72, 72, 72, 74, 75, 75, 77, 86, 88, 92, 92], [2, 3, 7, 7, 8, 11, 11, 12, 12, 14, 17, 17, 17, 21, 21, 23, 27, 27, 30, 31, 33, 36, 45, 46, 48, 48, 49, 51, 53, 55, 58, 59, 61, 65, 68, 69, 71, 84, 84, 84, 90, 94, 97, 98, 99], [1, 4, 7, 7, 10, 10, 12, 14, 15, 15, 16, 20, 21, 28, 28, 28, 29, 29, 35, 40, 43, 45, 48, 49, 51, 52, 56, 56, 66, 67, 69, 69, 70, 71, 73, 74, 78, 79, 82, 86, 89, 92, 96, 98, 98], [4, 5, 6, 9, 9, 9, 13, 15, 17, 23, 23, 28, 33, 34, 34, 35, 35, 40, 42, 43, 46, 50, 52, 55, 57, 60, 64, 67, 72, 72, 75, 75, 77, 77, 79, 79, 81, 81, 82, 86, 86, 90, 91, 95, 97], [1, 4, 4, 5, 5, 6, 7, 9, 9, 9, 10, 11, 15, 15, 21, 22, 26, 26, 29, 31, 31, 34, 38, 40, 40, 42, 43, 44, 45, 49, 50, 52, 54, 55, 57, 62, 66, 68, 69, 70, 72, 82, 85, 86, 90], [3, 4, 6, 8, 8, 9, 10, 11, 15, 22, 22, 26, 26, 27, 29, 31, 37, 38, 41, 41, 43, 43, 47, 47, 48, 50, 53, 54, 55, 56, 60, 63, 63, 67, 68, 70, 71, 75, 76, 84, 87, 87, 91, 95, 98], [2, 7, 8, 16, 17, 17, 23, 26, 26, 28, 31, 35, 36, 38, 39, 43, 48, 49, 53, 58, 59, 60, 68, 68, 70, 70, 71, 73, 73, 74, 76, 77, 77, 79, 79, 82, 82, 82, 82, 87, 88, 89, 90, 90, 98], [3, 3, 10, 12, 16, 17, 20, 21, 22, 24, 25, 27, 28, 31, 32, 33, 34, 35, 35, 38, 39, 40, 42, 45, 48, 51, 52, 54, 56, 61, 63, 63, 66, 67, 68, 69, 74, 75, 76, 78, 79, 87, 91, 91, 92], [4, 6, 8, 8, 14, 17, 23, 23, 25, 25, 27, 27, 30, 30, 34, 35, 38, 40, 42, 48, 49, 51, 52, 53, 57, 57, 58, 58, 59, 67, 70, 71, 75, 76, 77, 78, 82, 84, 85, 87, 94, 94, 96, 97, 98], [2, 4, 4, 4, 4, 6, 8, 10, 13, 14, 15, 18, 20, 23, 24, 26, 27, 29, 33, 35, 39, 40, 41, 42, 46, 48, 49, 52, 56, 62, 64, 68, 71, 76, 77, 77, 78, 79, 84, 92, 94, 95, 95, 97, 98], [1, 7, 8, 9, 12, 12, 14, 14, 16, 19, 23, 25, 27, 27, 27, 28, 29, 29, 33, 33, 41, 44, 45, 46, 51, 51, 52, 56, 57, 58, 59, 60, 64, 68, 69, 70, 73, 80, 82, 82, 86, 87, 90, 98, 98], [2, 5, 18, 19, 20, 23, 26, 27, 33, 36, 45, 46, 51, 52, 53, 56, 58, 60, 63, 68, 71, 71, 72, 73, 75, 76, 76, 80, 80, 81, 81, 84, 87, 89, 91, 92, 92, 92, 93, 93, 94, 95, 98, 98, 99], [1, 1, 5, 5, 5, 6, 10, 10, 15, 16, 17, 22, 29, 31, 42, 48, 49, 49, 49, 53, 54, 54, 55, 56, 56, 59, 60, 62, 62, 64, 72, 72, 73, 75, 77, 81, 82, 82, 86, 89, 90, 91, 97, 97, 99], [3, 5, 8, 9, 10, 13, 14, 14, 16, 26, 26, 29, 30, 32, 36, 37, 42, 42, 44, 45, 45, 47, 47, 49, 52, 53, 54, 57, 58, 62, 63, 64, 65, 65, 67, 69, 69, 69, 70, 75, 76, 76, 80, 86, 86], [1, 2, 4, 8, 8, 11, 12, 16, 21, 28, 30, 30, 30, 32, 36, 37, 38, 39, 40, 43, 46, 49, 49, 50, 55, 57, 60, 60, 61, 64, 65, 66, 73, 78, 79, 80, 80, 83, 86, 86, 87, 89, 90, 93, 98], [8, 8, 11, 14, 16, 16, 17, 23, 24, 29, 31, 38, 38, 39, 40, 40, 48, 51, 60, 60, 62, 65, 65, 67, 67, 68, 70, 71, 73, 73, 74, 75, 78, 79, 80, 81, 83, 83, 86, 87, 91, 92, 93, 93, 98], [1, 3, 7, 10, 10, 11, 13, 14, 18, 18, 20, 21, 22, 25, 27, 27, 28, 30, 37, 38, 44, 48, 50, 52, 55, 57, 60, 63, 64, 65, 67, 71, 74, 75, 77, 79, 79, 85, 86, 90, 93, 94, 96, 98, 99], [1, 4, 7, 11, 13, 15, 15, 16, 19, 21, 25, 27, 38, 43, 43, 48, 48, 49, 49, 52, 53, 54, 56, 57, 61, 61, 64, 64, 65, 66, 68, 68, 69, 70, 71, 71, 73, 76, 81, 83, 91, 94, 95, 96, 99], [1, 2, 4, 11, 12, 12, 15, 17, 20, 22, 28, 30, 31, 31, 31, 38, 38, 38, 41, 48, 48, 50, 51, 51, 51, 57, 59, 62, 68, 73, 75, 78, 81, 83, 86, 90, 90, 90, 92, 92, 94, 94, 96, 97, 98], [3, 7, 11, 11, 13, 13, 13, 20, 20, 23, 24, 25, 30, 31, 31, 31, 34, 34, 36, 39, 42, 42, 47, 56, 57, 60, 65, 65, 66, 72, 72, 73, 73, 75, 75, 78, 79, 83, 87, 87, 93, 93, 95, 96, 99], [1, 2, 3, 4, 5, 6, 10, 11, 12, 14, 18, 20, 22, 24, 24, 26, 26, 31, 34, 35, 36, 38, 45, 45, 45, 45, 46, 47, 48, 52, 55, 57, 60, 63, 66, 76, 81, 82, 86, 86, 89, 90, 93, 95, 96], [2, 2, 5, 8, 13, 16, 22, 23, 27, 28, 30, 31, 36, 39, 40, 45, 46, 49, 51, 54, 57, 57, 57, 58, 59, 60, 61, 63, 67, 70, 70, 72, 74, 75, 75, 81, 82, 85, 86, 88, 91, 92, 92, 93, 99]],23,),
    ([[-90, 64, -52, -42, 98, 50, -60, -30, -34, -42, -58, -10, 68, 24, 76, -32, 14, -64, 10, 30, -8, 74, -40, 4, -34, 48, 8, 74, 54, -8, -86, 34, -32, -10, -94, 0, 16, -6, -40, -94, -84], [68, 62, 98, 88, 98, -60, -84, 0, 32, -28, 4, -6, 84, -32, -40, -48, 50, -88, 2, 42, -56, 4, -46, -66, 38, 26, -80, 82, 74, -70, -4, -12, 74, -32, -12, 44, -94, -72, 78, -62, 16], [-76, -32, 58, 48, -38, -38, 46, -74, 12, -88, 82, 0, 8, 44, 22, -68, 34, 48, 74, 4, 48, -82, -96, 40, -78, -80, 26, 22, 36, -22, -36, 88, 10, 14, -98, 22, 4, 72, -72, 10, 56], [-26, -32, -86, 86, 22, -50, 56, 30, -30, -44, 10, 58, 60, -82, 8, 50, -10, 8, 80, 68, 34, -14, -96, 24, -8, -24, 52, 70, 80, -90, -22, -62, -4, 20, -30, -4, -38, 90, 18, 58, 36], [98, -2, 62, -16, -48, 78, 14, 24, 90, 12, -98, -40, -16, 0, 10, 96, -90, 56, 8, 10, -56, 90, -46, -84, 86, 66, -16, 84, -92, 26, -84, -94, -22, -94, 16, -68, -18, 24, -50, -80, 40], [-52, 16, -58, 10, -76, -90, -6, 98, 22, 14, 66, -16, -14, 72, 34, -90, -92, -34, 42, -34, 66, 18, 18, 38, 28, -30, -10, -50, 46, 50, -98, 30, -80, -20, 8, -82, -4, -10, -82, 22, 20], [68, 14, 62, -22, 10, -78, -48, 84, -96, 96, -54, 6, 92, 38, 52, 16, 48, 80, -28, 46, 64, 20, 80, -46, -88, -98, -46, -14, -28, 40, 78, 96, -26, 10, 62, -82, -22, -76, 82, -60, -72], [36, -30, -78, 80, 10, 54, -60, -84, 8, -54, 22, 96, 36, -38, -10, 56, -86, 40, -62, -48, -18, 78, -40, -86, 36, 46, 74, 66, -10, 32, -98, -18, -82, -6, -34, 88, 4, -2, 38, 96, -90], [44, -54, -40, -4, 68, -74, -12, 22, 16, 32, -66, -92, -70, 40, -34, 58, 68, -86, 34, -40, -72, 30, -52, 56, -88, 58, 84, 28, -88, 64, 36, 26, 52, 88, -28, 34, -28, -42, -88, 46, -26], [58, 56, 24, 22, -50, -26, 44, -42, -80, -44, -96, 58, -50, -40, -38, -32, 34, 84, 0, -62, 16, 18, -10, 94, 8, 50, -78, 20, 8, -16, -94, 78, 30, 86, -4, -54, 0, -44, 56, 46, 30], [-44, 2, 14, 56, -2, 20, -14, 20, 24, -90, 40, -90, -6, 90, -22, -64, -64, -8, -58, 62, -48, -84, -44, -78, 80, 68, -74, 6, -42, 52, 14, 40, 2, -44, 24, -76, -92, 82, 6, 6, 94], [80, -84, -8, 90, -72, 88, -58, 98, 30, -28, -84, -98, 14, -90, 2, 50, 26, -32, -16, 50, -28, 50, 18, 0, -42, 56, 58, 68, 6, -26, -78, 24, 70, -98, 52, 46, -52, 92, 52, 38, 28], [50, 56, -92, -68, -2, 76, 82, -22, -86, -70, -4, 84, -30, -68, 4, 58, -40, -68, -46, -92, 68, -56, 14, -12, -98, -36, 76, 54, 14, 12, 18, -14, 12, -28, 14, 2, 2, -74, 90, -34, -34], [-52, 90, -52, 26, -66, 36, 38, 52, -38, -62, 72, 78, 58, -50, -28, 0, -30, 6, -8, 82, -30, 42, 84, 28, 40, 74, 58, 12, 62, -28, -66, 68, 34, 72, -22, 70, 8, 38, 14, 38, 88], [66, -2, 0, -74, -20, 94, 90, -30, 8, -36, -54, -36, 26, -96, 6, -8, 92, -6, -98, 86, 48, 50, 48, -92, 88, -68, -6, -14, 80, -38, 36, 74, -4, -34, 86, -80, -82, 42, -82, -54, -82], [54, 82, -16, -4, -40, 36, -30, -6, -2, 62, -88, -6, 22, 44, -80, 80, 88, -2, 28, -38, 6, 98, 88, -34, 60, -18, -52, -74, -28, -48, -18, -28, -18, -4, 12, 78, -8, 20, -64, -98, -94], [68, -18, -98, 42, -78, 56, -26, -8, -56, 74, 2, -12, 52, -62, 26, -50, -34, 32, -26, -80, 20, 22, 30, -20, 66, 12, 22, 56, -38, -4, -46, 74, -30, -8, -70, -90, 80, 8, -56, 10, -66], [-32, -26, 78, 18, -84, 82, -36, 38, 18, 84, 30, -10, 30, -74, 44, 82, 22, 98, -30, -68, -42, -72, -24, -54, 82, -90, -6, 40, -94, 86, 84, -28, 54, 96, 4, -48, 42, 68, -60, 90, 12], [82, 94, -50, 62, -94, 76, -62, 94, 30, 26, -46, -16, 60, -12, -80, 12, -26, -60, -32, 74, 10, 8, 84, 2, -48, 66, 50, 60, -28, 84, 30, -76, 82, -70, 52, 82, -6, -92, 50, -2, -64], [82, 2, 52, -86, -84, 94, 96, 96, -96, -38, -64, 12, 74, -48, -38, 48, 62, -24, -98, -64, -42, 62, -6, 36, 86, -80, -80, 68, 70, -18, -58, -66, 64, 2, -14, -34, 8, 10, 76, 54, -34], [-20, 48, 86, -68, -44, 10, -56, 68, 14, -24, -10, -34, 8, 74, 22, -76, -8, 76, -54, -36, -16, -66, 48, -24, 60, -22, -48, 0, -86, -56, -98, 82, 16, -32, 78, 90, -38, -30, -34, -8, -40], [72, 74, 72, 20, 84, 0, -54, -36, 28, -24, 24, -16, -4, 54, -88, 98, -16, 74, 80, -60, 62, 48, -26, 84, 86, -2, 40, 38, 84, 62, -12, 82, -34, -78, -64, -62, -20, -72, -70, -58, 70], [88, -20, -38, -64, -74, -84, 70, 68, -8, 50, 64, -60, 42, -34, -74, -98, 22, -38, -4, -72, 26, -84, 84, 48, -70, -96, 42, -96, 40, 12, 50, 96, 94, -82, 58, -64, 62, 12, 10, -86, 96], [96, -54, 80, -14, 78, -66, 28, 86, -16, -14, -26, 42, 72, 34, -26, 28, 56, 82, -90, -20, -26, -58, -14, 20, -24, -98, -18, -16, 36, 28, 80, 60, -58, 56, -18, -66, 56, -80, -74, 90, 64], [4, -60, -40, -16, -10, -32, -90, 2, -96, 70, -34, 12, -24, 20, 66, 92, 96, 70, 74, -6, 26, 66, 64, -82, -38, 68, -98, -86, -82, -12, 86, -90, 68, 46, -16, -22, -18, 2, -30, 94, -90], [22, -14, 94, -22, 58, -4, 12, 28, -80, -82, -84, 56, -38, -78, -30, 94, 68, 62, 2, -16, -6, 46, -96, 14, 58, 2, -66, -88, -2, -26, -66, -42, 4, 60, -96, 88, -14, 70, -64, -44, 58], [-52, 58, 38, -80, 4, -4, -74, 6, -68, -82, 40, 40, 68, -56, -20, -74, -98, 54, -32, 56, -38, -40, 98, -60, 24, -76, 52, -98, 12, -24, -46, -82, 0, -58, 64, 56, 22, -16, 84, 0, 26], [-26, 32, -64, -12, 18, 0, 22, -44, 68, -72, -58, -28, 38, -16, -94, 58, 22, -32, -80, -48, 70, -56, 48, 56, -46, 50, -36, 94, -44, -64, 32, -26, 78, -90, 98, -42, -30, 32, -32, -2, 46], [-2, -90, -74, -50, 66, -34, -48, -10, -10, -88, -6, -88, -26, 22, -18, -92, 66, 56, 82, -46, -88, 66, 86, -94, 30, 50, -40, -18, -26, -30, 38, 74, -54, 40, -64, 16, 34, 98, 60, -30, 74], [-58, 74, 74, -8, 54, -34, -6, -96, -80, -26, -84, 40, -84, 46, -44, -4, 22, 16, 50, -48, -44, 48, 92, -52, -26, 36, -42, 54, -18, -94, 44, -28, -24, 66, -4, 96, 52, 40, 0, 82, -84], [12, 66, 40, 10, -70, 52, 44, 76, -22, -64, -6, -28, 14, -8, 10, -54, 18, -98, 4, -42, 34, -88, 10, -8, 84, 0, 62, 98, -58, 88, 20, -78, -40, 40, 42, -52, -4, 18, -40, -98, 22], [-86, 96, 2, 70, 6, 4, 62, -22, -8, -50, -22, -16, 2, -18, 0, 94, -60, -60, 84, -96, 0, 68, -86, -16, -90, -64, -52, 88, -58, -14, 62, -94, -52, 58, -38, 38, 18, 94, -52, 6, -56], [-56, -28, 14, -4, -2, -20, 14, -94, -76, -12, 50, 46, -6, 54, -38, -94, -98, 92, -94, -84, -98, 58, 84, -86, -88, 52, 36, 42, 88, -94, -20, 2, -66, 24, -18, -90, 78, 6, -70, -88, -88], [96, -70, 14, -2, -48, -74, -62, 92, 90, -22, 4, -6, 40, 68, 34, -36, 24, -24, 88, 66, -62, -18, 48, 70, -92, 26, -30, 6, -34, 18, 42, 42, -32, 34, 92, 36, -24, 10, 90, -74, 90], [64, -98, 72, 76, 2, 40, 38, 94, -88, 30, 0, 80, 76, -38, -24, 0, -8, 36, 16, 32, -68, 38, 84, -88, 80, -92, -54, 92, -58, 20, 48, 76, -26, 6, 40, 8, -22, 90, -66, -54, 60], [-48, 44, 52, -30, 78, -68, 54, 20, -38, -82, -6, 48, -64, 64, -34, -74, -70, 54, 60, 62, 88, 44, -6, -82, 94, -76, -46, -46, -82, 18, -50, -12, 32, 34, 76, 66, -10, 84, 80, 52, 86], [40, -96, -34, 70, 38, 10, 28, 14, -32, 52, -94, 48, 92, 56, 26, -86, 42, -36, -70, -18, 86, -46, 16, 78, 76, -40, -8, 26, 88, 10, -26, -12, -64, 82, -90, -10, -92, 96, 40, -52, 82], [-76, 54, -8, 22, -84, 36, 76, 16, 14, -62, 30, 30, -92, -80, 88, 98, -64, -94, -26, 10, 46, 46, -94, 6, -18, 98, -52, 10, -14, -14, 76, 22, -90, 78, 26, -60, 86, -56, -34, -46, 50], [68, 68, -4, 22, 22, 66, 18, 86, 38, -56, -26, 44, 56, -70, 14, 94, 12, -40, -96, -22, 88, 54, 58, -94, -6, 64, 92, 80, 70, -82, 70, 58, -56, -68, -38, -88, -84, -78, -94, 60, -72], [-28, 64, -78, -54, 76, 66, 30, -74, 36, 6, -26, -84, 48, 22, 36, 96, -10, -16, 18, 58, -58, -58, 6, -44, 96, -34, 48, 26, 6, -76, -36, 30, -44, 48, -36, 66, -48, -10, -12, 74, -70], [32, 4, 22, -48, 8, 78, -70, -78, -78, 30, -70, 76, -36, 42, -12, 72, -36, 54, -50, 90, 82, 76, -34, 82, 28, -30, 10, 34, 52, 74, -90, -60, -46, 64, -68, -60, 88, 8, 50, 48, 56]],37,),
    ([[1, 1, 1, 1], [0, 0, 0, 1], [0, 0, 0, 0], [0, 1, 1, 1]],2,),
    ([[96, 94, 33, 75, 69, 69, 91, 26], [10, 49, 56, 26, 54, 98, 70, 59], [12, 39, 29, 62, 49, 76, 43, 55], [98, 30, 1, 23, 4, 81, 78, 3], [82, 14, 46, 85, 89, 5, 11, 64], [46, 39, 97, 97, 4, 83, 99, 8], [48, 50, 62, 64, 94, 79, 84, 12], [49, 69, 81, 46, 89, 69, 43, 5]],7,)
        ]
    n_success = 0
    for i, parameters_set in enumerate(param):
        if f_filled(*parameters_set) == f_gold(*parameters_set):
            n_success+=1
    print("#Results: %i, %i" % (n_success, len(param)))