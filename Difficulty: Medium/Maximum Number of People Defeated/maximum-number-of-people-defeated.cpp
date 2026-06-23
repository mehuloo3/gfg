class Solution {
  public:
    int maxPeopleDefeated(int p) {
        // Code Here
    int x=p/2;
    int i=1;
    long long sum=0;
    int c=0;
    while(i<=x)
    {
        sum+=(long long)i*i;
        if(sum<=p)
        {
            c++;
        }else{break;}
        i++;
    }
    return c;
    }
};
