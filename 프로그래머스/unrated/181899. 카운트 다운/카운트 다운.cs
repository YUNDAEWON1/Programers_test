using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int start, int end_num) {
        List<int> answer= new List<int>();
        
        for(int i=start;i>=end_num;i--)
        {
          answer.Add(i);
        }
        return answer.ToArray();
    }
}