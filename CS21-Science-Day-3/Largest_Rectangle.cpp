// Problem link : https://www.hackerrank.com/challenges/largest-rectangle/problem
long largestRectangle(vector<int> h)
{
    int max_area=0,area;
 int tp,i=0;
 int n;
 stack<int> s;
 n=h.size();
 while(i<n)
 {
     if(s.empty() || h[s.top()]<=h[i])
     {
         s.push(i++);
     }
    else
    {
        tp=s.top();
        s.pop();
        area=h[tp]*(s.empty()?i:i-s.top()-1);
        if(area>max_area)
        {
            max_area=area;
        }

    }
 }
