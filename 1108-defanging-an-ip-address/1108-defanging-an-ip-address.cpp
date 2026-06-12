class Solution {
public:
    string defangIPaddr(string address) {
       int n=address.size();
       for(int i=0;i<n-1;i++){
         if(address[i+1]=='.'){
         address.insert(i+1,"[");
         address.insert(i+3,"]");
         i++;
         n++;
         n++;
    }
       }
       return address;
    }
};