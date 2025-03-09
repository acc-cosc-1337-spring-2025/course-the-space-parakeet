#include "func.h"
#include <utility>

double get_gc_content(const string& dna) {
    int dna_len = dna.length();
    int gc_count = 0;
    for (int i = 0; i < dna_len; i++)
        if (dna[i] == 'G' || dna[i] == 'C') 
            gc_count++;
    return static_cast<double>(gc_count) / dna_len;
}

string get_reverse_string(string dna) {
    int i = 0;
    int j = dna.length() - 1;
    while (i < j) {
        std::swap(dna[i], dna[j]);
        i++;
        j--;
    }
    return dna;
}

string get_dna_complement(string dna) {
    int dna_len = dna.length();
    dna = get_reverse_string(dna);
    for (int i = 0; i < dna_len; i++) {
        switch (dna[i]) {
            case 'A': dna[i] = 'T'; break;
            case 'T': dna[i] = 'A'; break;
            case 'G': dna[i] = 'C'; break;
            case 'C': dna[i] = 'G'; break;
        }
    }
    return dna;
}