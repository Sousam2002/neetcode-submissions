class DynamicArray {
   private:
    vector<int> v;
    int cap;

   public:
    DynamicArray(int capacity) {
        cap = capacity;
        v.reserve(capacity);
    }

    int get(int i) { return v[i]; }

    void set(int i, int n) {
        v[i] = n;
        return;
    }

    void pushback(int n) {
        if (v.size() == cap) {
            resize();
        }
        v.push_back(n);
        return;
    }

    int popback() {
        int i = v[v.size() - 1];
        v.pop_back();
        return i;
    }

    void resize() {
        cap *= 2;
        v.reserve(cap);
        return;
    }

    int getSize() { return v.size(); }

    int getCapacity() { return cap; }
};
