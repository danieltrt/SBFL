bool isPermutedMatrix(int mat[][], int n) {
  string str_cat = "";
  for (int i = 0; i < n; i++) {
    str_cat = str_cat + "-" + to_string(mat[0][i]);
  }
  str_cat = str_cat + str_cat;
  for (int i = 1; i < n; i++) {
    string curr_str = "";
    for (int j = 0; j < n; j++) {
      curr_str = curr_str + "-" + to_string(mat[i][j]);
    }
    if (str_cat.compare(curr_str) == 0) {
      return false;
    }
  }
  return true;
}