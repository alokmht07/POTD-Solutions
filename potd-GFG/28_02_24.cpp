class Solution{
    public:
    int DivisibleByEight(string s){

        int number = s.size();

        if(number<=3){

            int a = stoi(s);

            if(a%8==0)return 1;

            else return -1;
        }

        string lastThree = s.substr(number-3,3);
        int value = stoi(lastThree);
        if(value%8==0){
            return 1;
        }
        return -1;
    }
};