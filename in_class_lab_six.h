using namespace std;
#include <vector>
#ifndef IN_CLASS_LAB_SIX
#define IN_CLASS_LAB_SIX

struct int_vector {
    int id;
    int from;
    int to;
    int_vector(const int_vector & i_v) : id(i_v.id), from(i_v.from), to(i_v.to) {}; 
    int_vector() : id(-1), from(0), to(0) {};
};

vector <int_vector> read_file(string file1);

void output_vectors(vector <int_vector> vector_collection);

#endif