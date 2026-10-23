class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        sort(sides.begin(), sides.end());
        const double pi = acos(-1.0);
        vector<double> angles;
        int a = sides[0], b = sides[1], c = sides[2];
        if (!(a + b > c)) return angles;
        double A = acos((double)(b*b + c*c - a*a) / (double)(2 * b * c)) * (180.0 / pi);
        double B = acos((double)(a*a + c*c - b*b) / (double)(2 * a * c)) * (180.0 / pi);
        double C = acos((double)(b*b + a*a - c*c) / (double)(2 * b * a)) * (180.0 / pi);
        angles.push_back(A);
        angles.push_back(B);
        angles.push_back(C);
        return angles;
    }
};