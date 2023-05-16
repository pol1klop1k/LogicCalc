#pragma once
#include <math.h>
using namespace std;
using namespace System;

class Logic {
private:
    int priority(wchar_t op) {
        if (op == 172) return 2;
        if (op == 8226) return 1;
        if (op == '+') return 0;
        if (op == '(') return -1;
    }

public:
	String^ reversed_notation(String^ s) {
        String^ op = "";
        String^ nums = "";

        for (int i = 0; i < s->Length; i++) {
            if (s[i] == 172 || s[i] == 8226 || s[i] == '+') { //172 - код в ascii символа "не", 8226 - точка
                while (op->Length > 0 && (priority(s[i]) < priority(op[op->Length - 1]))) {
                    nums += op[op->Length - 1];
                    op = op->Substring(0, op->Length - 1);
                }
                op += s[i];
            }
            else if (s[i] == '(') {
                op += s[i];
            }
            else if (s[i] == ')') {
                int k = op->Length - 1;
                while (op[k] != '(') {
                    nums += op[k];
                    op = op->Substring(0, k);
                    k -= 1;
                }
                op = op->Substring(0, k);
            }
            else {
                nums += s[i];
            }
        }
        for (int i = op->Length - 1; i >= 0; i--) {
            nums += op[i];
        }
        return nums;
	}

    char** all_combs(int x) {
        int l = pow(2, x);
        char** all = new char*[l];
        int k = l / 2;
        char flag;

        for (int i = 0; i < l; i++) {
            char* comb = new char[x];
            all[i] = comb;
        }

        int iter = 0;
        while (k != 0) {
            flag = '0';
            for (int i = 0; i < l; i++) {
                all[i][iter] = flag;
                if ((i + 1) % k == 0) {
                    flag = flag == '0' ? '1' : '0';
                }
            }
            k /= 2;
            iter++;
        }
        return all;
    }

    String^ solve(String^ s) {
        int k = 0;
        String^ buffer;
        bool flag;
        String^ sym;
        while (k < s->Length) {
            buffer = "";
            flag = true;
            if (s[k] == 8226) {
                sym = s[k - 1] == '1' && s[k - 2] == '1' ? "1" : "0";
                for (int i = 0; i < s->Length; i++) {
                    if (!(i >= k - 2 && i <= k)) {
                        buffer += s[i];
                    }
                    else {
                        if (flag) {
                            buffer += sym;
                            flag = false;
                        }
                    }
                }
                k--;
                s = buffer;
            }
            else if (s[k] == '+') {
                sym = s[k - 1] == '0' && s[k - 2] == '0' ? "0" : "1";
                for (int i = 0; i < s->Length; i++) {
                    if (!(i >= k - 2 && i <= k)) {
                        buffer += s[i];
                    }
                    else {
                        if (flag) {
                            buffer += sym;
                            flag = false;
                        }
                    }
                }
                k--;
                s = buffer;
            }
            else if (s[k] == 172) {
                sym = (s[k - 1]) == '1' ? "0" : "1";
                for (int i = 0; i < s->Length; i++) {
                    if (!(i >= k - 1 && i <= k)) {
                        buffer += s[i];
                    }
                    else {
                        if (flag) {
                            buffer += sym;
                            flag = false;
                        }
                    }
                }
                s = buffer;
            }
            else k++;
        }
        return s;
    }
};