
struct Time {
    int h, m, s;

    Time() {
        h = 0;
        m = 0;
        s = 0;
    }

    Time(int hour, int minute, int second) {
        h = hour;
        m = minute;
        s = second;
    }

    int second() {
        return 3600 * h + 60 * m + s;
    }

    void print() {
        if (h < 10) {
            cout << "0" << h;
        } else {
            cout << h;
        }
        cout << ":";
        if (m < 10) {
            cout << "0" << m;
        } else {
            cout << m;
        }
        cout << ":";
        if (s < 10) {
            cout << "0" << s;
        } else {
            cout << s;
        }
        cout << endl;
    }
};

Time normalize(int h, int m, int s) {
    if (s >= 60) {
        m = m + s / 60;
        s = s % 60;
    }
    if (m >= 60) {
        h = h + m / 60;
        m = m % 60;
    }
    return Time(h, m, s);
}
