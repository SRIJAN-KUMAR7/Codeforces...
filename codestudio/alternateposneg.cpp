vector<int> alternateNumbers(vector<int>& a) {
    vector<int> pos, neg;
    int n = a.size();
    
    // Separate positive and negative numbers
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            pos.push_back(a[i]);
        } else {
            neg.push_back(a[i]);
        }
    }

    if (pos.size() > neg.size()) {
        for (int i = 0; i < neg.size(); i++) { // Use neg.size() to avoid out-of-bounds
            a[2 * i] = pos[i];
            a[2 * i + 1] = neg[i];
        }
        int index = neg.size() * 2;
        for (int i = neg.size(); i < pos.size(); i++) { // Start from neg.size()
            a[index] = pos[i];
            index++;
        }
    } else {
        for (int i = 0; i < pos.size(); i++) { // Use pos.size() to avoid out-of-bounds
            a[2 * i] = pos[i];
            a[2 * i + 1] = neg[i];
        }
        int index = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++) { // Start from pos.size()
            a[index] = neg[i];
            index++;
        }
    }
    return a;
}
