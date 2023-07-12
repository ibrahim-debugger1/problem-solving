vector<int> constructRectangle(int area) {
    vector<int> ve;
    for (int i = 2; i < area; i++) {
        if (area % i == 0)
            ve.push_back(i);
    }
    for (int i = 0; i < ve.size(); i++)
        cout << ve[i] << " ";
    if (ve.size() == 0)
        return {area, 1};
    if (ve.size() == 1)
        return {ve[0], ve[0]};
    int l = 0, r = ve.size() - 1;
    int n1 = 0, n2 = 0;
    while (l <= r) {
        int temp = ve[l] * ve[r];
        if (temp == area) {
            n1 = ve[l];
            n2 = ve[r];
            l++; r--;
        } else if (temp > area)
            r--;
        else
            l++;
    }
    return {n2, n1};
}