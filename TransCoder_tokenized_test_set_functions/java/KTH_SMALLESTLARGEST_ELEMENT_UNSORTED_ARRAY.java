public static int kthSmallest ( Integer [ ] arr, int k ) {
  Arrays . sort ( arr );
  return arr [ k - 1 ];
}