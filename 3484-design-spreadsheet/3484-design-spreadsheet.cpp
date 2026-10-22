class Spreadsheet {
private: 
    vector<int> sheet;
public:
    Spreadsheet(int rows) {
       sheet.resize(26 * rows, 0); 
    }

    int getIndex(string cell)
    {
        int col = cell[0] - 'A';
        int row = stoi(cell.substr(1));
        int index = (col) + (row - 1) * 26;
        return index;
    }
    
    void setCell(string cell, int value) {
        sheet[getIndex(cell)] = value;
    }
    
    void resetCell(string cell) {
        sheet[getIndex(cell)] = 0;
    }
    
    int getValue(string formula) {
        int plusPosition = formula.find('+'), first_value, second_value;
        string first = formula.substr(1, plusPosition - 1);
        string second = formula.substr(plusPosition + 1);
        if(first[0] >= 'A' && first[0] <= 'Z')
        {
            first_value = sheet[getIndex(first)];
        }
        else
        {
            first_value = stoi(first);
        }
        if (second[0] >= 'A' && second[0] <= 'Z')
        {
            second_value = sheet[getIndex(second)];
        }
        else
        {
            second_value = stoi(second);
        }


        return first_value + second_value;
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);


 A1 B1 C1 ... Z1 
 A2 B2 C2 ... Z2
 A3 B3 C3 ... Z3
 */