string censor(string text, string word) {
  string word_list[text.length()];
  string result = "";
  string stars = "";
  for (int i = 0; i < word.length(); i++) stars += '*';
  int index = 0;
  for (string i : word_list) {
    if (i.compare(word) == 0) word_list[index] = stars;
    index++;
  }
  for (string i : word_list) result += i + ' ';
  return result;
}