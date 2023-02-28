#include <iostream>
#include <fstream>
#include <vector>
#include "in_class_lab_six.h"
using namespace std;

vector <int_vector> read_file(string file1) {
    vector <int_vector> vector_collection;
    ifstream input_file(file1);
    if (input_file.is_open()) {
        int id_temp = 0;
        int from_temp;
        int to_temp;
        while(input_file >> from_temp >> to_temp) {
            int_vector temp_vector;
            temp_vector.id = id_temp;
            temp_vector.from = from_temp;
            temp_vector.to = to_temp;
            vector_collection.push_back(temp_vector);
            id_temp++;
        }
    }
    return vector_collection;
}

void output_vectors(vector <int_vector> vector_collection) {
    for(int i = vector_collection.size()-1; i >= 0; i--) {
        cout << vector_collection[i].id << ": " << vector_collection[i].from << " " << vector_collection[i].to <<endl;
    }
}