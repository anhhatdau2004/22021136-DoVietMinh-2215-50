#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ones[] = {
    "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve",
    "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
};
string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
string thousands[] = {"", "thousand", "million"};

string readHundred(int num) {
    string result;
    if (num >= 100) {
        result += ones[num / 100] + " hundred";
        num %= 100;
        if (num > 0) result += " ";
    }
    if (num >= 20) {
        result += tens[num / 10];
        num %= 10;
        if (num > 0) result += "-";
    }
    if (num > 0) {
        result += ones[num];
    }
    return result;
}

string numberToWords(int num) {
    if (num == 0) {
        return "zero";
    }

    string result;
    if (num < 0) {
        result += "negative ";
        num = -num;
    }

    int thousandIndex = 0;
    vector<string> parts;

    while (num > 0) {
        int c = num % 1000;
        if (c > 0) {
            string cStr = readHundred(c);
            if (!thousands[thousandIndex].empty()) {
                cStr += " " + thousands[thousandIndex];
            }
            parts.insert(parts.begin(), cStr);
        }
        num /= 1000;
        thousandIndex++;
    }

    for (int i = 0; i < (int) parts.size(); i++) {
        result += parts[i];
        if (i != (int) parts.size() - 1) {
            result += " ";
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    cout << numberToWords(n) << endl;
    return 0;
}
