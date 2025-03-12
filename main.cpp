#include <iostream>
#include <vector>

void InsertRSE(std::vector<std::vector<int> >& p_table, std::vector<std::vector<int> >& q_table, int element, int insertion_order) {
    int curr_el = element;
    int row_ind = 0;
    while(true) {
        if (row_ind >= p_table.size()) {
            p_table.push_back(std::vector<int>());
            q_table.push_back(std::vector<int>());
        }
        bool element_bumped = false;
        for (int col_ind = 0; col_ind < p_table[row_ind].size(); ++col_ind) {
            if (p_table[row_ind][col_ind] > curr_el) {
                int temp = p_table[row_ind][col_ind];
                p_table[row_ind][col_ind] = curr_el;
                curr_el = temp;
                element_bumped = true;
                break;
            }
        }
        if (!element_bumped) {
            p_table[row_ind].push_back(curr_el);
            q_table[row_ind].push_back(insertion_order);
            break;
        }
        ++row_ind;
    }
}


int main() {
    int n;
    std::cin >> n;
    std::vector<int> input(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> input[i];
    }
    std::vector<std::vector<int> > p_table;
    std::vector<std::vector<int> > q_table;
    for (size_t i = 0; i < input.size(); ++i) {
        InsertRSE(p_table, q_table, input[i], static_cast<int>(i + 1));
    }
    std::cout << "P-таблица:" << std::endl;
    for (const auto& row : p_table) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl << "Q-таблица:" << std::endl;
    for (const auto& row : q_table) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
