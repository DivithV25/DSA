class Spreadsheet {
    public:
        unordered_map<string, int> grid;
        Spreadsheet(int rows) {}
    
        void setCell(string cell, int value) { grid[cell] = value; }
    
        void resetCell(string cell) { grid[cell] = 0; }
    
        int getValue(string formula) {
            int index = formula.find('+');
            if (index == string::npos)
                return 0;
    
            string left = formula.substr(1, index - 1);
            string right = formula.substr(index + 1);
    
            int x = isalpha(left[0]) ? grid[left] : stoi(left);
            int y = isalpha(right[0]) ? grid[right] : stoi(right);
    
            return x + y;
        }
    };
    
    /**
     * Your Spreadsheet object will be instantiated and called as such:
     * Spreadsheet* obj = new Spreadsheet(rows);
     * obj->setCell(cell,value);
     * obj->resetCell(cell);
     * int param_3 = obj->getValue(formula);
     */