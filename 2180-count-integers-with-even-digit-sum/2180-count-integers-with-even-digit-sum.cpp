class Solution {
public:
int sum(int n){
    int no=0;
    while(n!=0){
        no=no+(n%10);
        n=n/10;
    }
    return no;
}
    int countEven(int num) {
        int count=0;
        for(int i=2;i<=num;i++){
            if(sum(i)%2==0)
                count++;
        }
        return count;
    }
};