// Problem Link : https://leetcode.com/problems/defanging-an-ip-address/
class Solution {
public:
    string defangIPaddr(string address) {
        string st = "";
        for(int i=0;i<address.length();++i){
            if(address[i] == '.')
                st += "[.]";
            else
                st += address[i];
        }
        return st;

    }
};
// Complexity : O(n)