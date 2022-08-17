void print_rect ( int32_t X [ ] , int32_t Y [ ] , int n ) {
  int32_t Xmax = std :: max ( std :: min ( X [ 0 ] , X [ n - 1 ] ) , X [ n - 1 ] ) ;
  int32_t Xmin = std :: min ( std :: min ( X [ 0 ] , X [ n - 1 ] ) , X [ n - 1 ] ) ;
  int32_t Ymax = std :: max ( std :: min ( Y [ 0 ] , Y [ n - 1 ] ) , Y [ n - 1 ] ) ;
  int32_t Ymin = std :: min ( std :: min ( Y [ 0 ] , Y [ n - 1 ] ) , Y [ n - 1 ] ) ;
  printf ( "{%d, %d}" , Xmin , Ymin ) ;
  printf ( "{%d, %d}" , Xmin , Ymax ) ;
  printf ( "{%d, %d}" , Xmax , Ymax ) ;
  printf ( "{%d, %d}" , Xmax , Ymin ) ;
}
