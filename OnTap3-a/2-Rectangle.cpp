struct Rectangle {
    int height, length;

    Rectangle() {
        height = 0;
        length = 0;
    }

    Rectangle(int h, int l) {
        height = h;
        length = l;
    }

    int getPerimeter() {
        return 2 * (height + length);
    }

    void print() {
        for (int i = 0; i < height; i++) {
            if (i == 0 || i == height - 1) {
                for (int j = 0; j < length; j++) {
                    cout << "*";
                }
            } else {
                for (int j = 0; j < length; j++) {
                    if (j == 0 || j == length - 1) {
                        cout << "*";
                    } else {
                        cout << " ";
                    }
                }
            }
        }
    }
};

int compare(Rectangle a, Rectangle b) {
    if (a.getPerimeter() == b.getPerimeter()) {
        return 0;
    } else if (a.getPerimeter() > b.getPerimeter()) {
        return 1;
    }
    return -1;
}
