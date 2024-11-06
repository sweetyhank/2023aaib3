//week09-4
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int b5=0, b10=0,b20=0;
        for(int b: bills){
            if(b==5) b5++;
            else if(b==10){ //客人拿10元鈔
                if(b5==0) return false; //沒錢找就失敗
                b5--;//少了一張5元鈔
                b10++;//多了一張10元鈔
            } else {
                if(b10>0 && b5>0){
                    b20++;
                    b10--;
                    b5--;
                }else if(b5>=3){
                    b20++;
                    b5-=3;
                }else return false;
            }
        }
        return true;
    }
};