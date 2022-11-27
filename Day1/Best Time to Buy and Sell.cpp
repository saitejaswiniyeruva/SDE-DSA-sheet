//Question: https://takeuforward.org/data-structure/stock-buy-and-sell/



//mycode
int maxProfit(vector<int>& prices) {
        int n=prices.size(),t=n-1;
        if(n==1) return 0;
        else {
            int max=0,s=t-1,sub;
            while(t>=0) {
                if(s>=0)
                    sub=prices[t]-prices[s];
                if(sub>max) max=sub;
                s--;
                if(s<0) {
                    t--;
                    s=t-1;
                }
            }
            return max;
        }
    }

//striver code
int maxProfit(vector<int>& prices) {
        int maxPro = 0;
    int n = prices.size();
    int minPrice = INT_MAX;

    for (int i = 0; i < prices.size(); i++) {
        minPrice = min(minPrice, prices[i]);
        maxPro = max(maxPro, prices[i] - minPrice);
    }
    
    return maxPro;
}
