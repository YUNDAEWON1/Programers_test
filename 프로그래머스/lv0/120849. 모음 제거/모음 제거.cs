using System;

public class Solution {
    public string solution(string my_string) {
      
        char[] vowels={'a','e','i','o','u'};
        
        foreach(char vowel in vowels)
        {
            my_string=my_string.Replace(vowel.ToString(),string.Empty);
        }
        return my_string;
    }
}