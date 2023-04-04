ostream& operator<<(ostream& stream, const map<string, int>& map)
 {stream << '{';
  char comma[3] = {'\0',' ', '\0'};
  for (const auto& pair : map)
  {stream << comma << '{' << pair.first << "," << pair.second<<'}';
   comma[0] = ',';
  }
  stream << '}';
  return stream;
}
