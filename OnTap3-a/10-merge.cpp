int *merge(int *firstArr, int lenArr1, int *secondArr, int lenArr2) {
    int *resultArr = new int [lenArr1 + lenArr2];
    int i = 0, j = 0, k = 0;
    if (firstArr[i] <= firstArr[lenArr1 - 1]) {
        while (i < lenArr1 && j < lenArr2) {
            if (firstArr[i] <= secondArr[j]) {
                resultArr[k] = firstArr[i];
                i++;
            } else {
                resultArr[k] = secondArr[j];
                j++;
            }
            k++;
        }
    } else {
        while (i < lenArr1 && j < lenArr2) {
            if (firstArr[i] >= secondArr[j]) {
                resultArr[k] = firstArr[i];
                i++;
            } else {
                resultArr[k] = secondArr[j];
                j++;
            }
            k++;
        }
    }
    while (i < lenArr1) {
        resultArr[k] = firstArr[i];
        k++;
        i++;
    }

    while (j < lenArr2) {
        resultArr[k] = secondArr[j];
        k++;
        j++;
    }
    return resultArr;
}
