class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int x = 0, y = 0;
        for (string command : commands) {
            if (command == "UP") {
                x = (x - 1 + n) % n;
            } else if (command == "RIGHT") {
                y = (y + 1) % n;
            } else if (command == "DOWN") {
                x = (x + 1) % n;
            } else if (command == "LEFT") {
                y = (y - 1 + n) % n;
            }
        }
        return x * n + y;
    }
};