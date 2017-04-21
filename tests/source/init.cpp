#include <Work-5.hpp>
#include <catch.hpp>

SCENARIO("Add") {
    BinarySearchTree<unsigned int> r;
    BinarySearchTree<unsigned int>* root;
    int rv = r.Add(10, root);    
    REQUIRE( rv == 10);
}
SCENARIO("print") {
    BinarySearchTree<unsigned int> r;
    BinarySearchTree<unsigned int>* root;
    int rv = r.print(11, root);   
    REQUIRE( rv == 11);
}
SCENARIO("Search") {
    BinarySearchTree<unsigned int> r;
    BinarySearchTree<unsigned int>* root;
    int rv = r.Search(12, root);
    REQUIRE( rv == 12);
}
SCENARIO("Deletionh") {
    BinarySearchTree<unsigned int> r;
    BinarySearchTree<unsigned int>* root;
    int rv = r.Search(13, root);    
    REQUIRE( rv == 13);
}
SCENARIO("FreeTree") {
    BinarySearchTree<unsigned int> r;
    BinarySearchTree<unsigned int>* root;
    int rv = r.Search(14, root);
    REQUIRE( rv == 14);
}
