class Solution {
public:
    bool lemonadeChange(std::vector<int>& bills) {
        int five = 0, ten = 0;
        
        for(int bill : bills) {
            if(bill == 5) {
                five++; // Collect a $5 bill
            } else if(bill == 10) {
                if(five > 0) {
                    five--; // Use one $5 bill as change
                    ten++; // Collect a $10 bill
                } else {
                    return false; // No $5 bill to give as change
                }
            } else {
                if(ten > 0 && five > 0) {
                    ten--; // Use one $10 bill as part of the change
                    five--; // Use one $5 bill as part of the change
                } else if(five >= 3) {
                    five -= 3; // Use three $5 bills as change
                } else {
                    return false; // Not enough bills to give as change
                }
            }
        }
        
        return true;
    }
};