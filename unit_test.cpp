#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include "in_class_lab_six.h"
#include "doctest.h"
using namespace std;

TEST_CASE("Testing vector functions") {
    SUBCASE("vectors_1.txt"){
        vector <int_vector> my_vector1 = read_file("vectors_1.txt");
        CHECK(my_vector1.size() == 6);

        //testing the output function

        int test_id[] = {0, 1, 2, 3, 4, 5};
        int test_from[] = {1, 1, 1, 2, -5, 9};
        int test_to[] = {2, 3, 4, 7, 2001, 11};

        for(int i = 0; i < my_vector1.size(); i++) {
            CHECK(my_vector1[i].id == test_id[i]);
            CHECK(my_vector1[i].from == test_from[i]);
            CHECK(my_vector1[i].to == test_to[i]);
        }
    }
    SUBCASE("empty & vector read in"){
        vector <int_vector> my_vector2 = read_file("vectors_2.txt");
        CHECK(my_vector2.size() == 0);
        vector <int_vector> my_vector3 = read_file("does_not_exist.txt");
        CHECK(my_vector2.empty() == 1);
    }

    SUBCASE("copy constructor"){
        vector <int_vector> my_vector2 = read_file("vectors_1.txt");
        vector <int_vector> my_vector1 = my_vector2;
        CHECK(my_vector1.size() == 6);

        //testing the output function

        int test_id[] = {0, 1, 2, 3, 4, 5};
        int test_from[] = {1, 1, 1, 2, -5, 9};
        int test_to[] = {2, 3, 4, 7, 2001, 11};

        for(int i = 0; i < my_vector1.size(); i++) {
            CHECK(my_vector1[i].id == test_id[i]);
            CHECK(my_vector1[i].from == test_from[i]);
            CHECK(my_vector1[i].to == test_to[i]);
        }
    }

}