#include<iostream>
using namespace std;
string convert(string str)
{
  for (int i = 0; i < str.length(); i++)
  {
    
    if (i == 0 && str[i] != ' ' ||
        str[i] != ' ' && str[i - 1] == ' ')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
      {
        str[i] = (char)(str[i] - 'a' + 'A');
      }
    }
    else if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] = (char)(str[i] + 'a' - 'A');
  }
 
  return str;
}
 int main()
{
  string str = "I am a student of programming fundamentals!";
  cout << (convert(str));
  return 0;
}

