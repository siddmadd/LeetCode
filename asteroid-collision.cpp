class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack <int> aster;
        aster.push(asteroids[0]);
        for (int i = 1; i < asteroids.size(); ++i) {
            bool stable = false;
            while (!stable) {
                if (aster.empty()) {
                    aster.push(asteroids[i]);
                    break;
                }

                if (aster.top() > 0 && asteroids[i] < 0) {
                    if (abs(aster.top()) == abs(asteroids[i])) {
                        aster.pop();
                        break;
                    } else if (abs(aster.top()) < abs(asteroids[i])) {
                        aster.pop();
                        continue;
                    }
                    break;
                }
                if (stable == false) {
                    aster.push(asteroids[i]);
                    stable = true;
                }

            }
        }
        vector <int> inside (aster.size());
        for (int i = aster.size() - 1; i >= 0; --i) {
            inside[i] = aster.top();
            aster.pop();
        }
        return inside;
    }
};