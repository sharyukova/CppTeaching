#include <gtest/gtest.h>
#include "cstack.hpp"
#include <stack>
#include <random>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
    // Expect two strings not to be equal.
    auto stack = CStack();
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(stack.empty(), true);
}

TEST(HelloTest, BasicAssertions1) {
    // Expect two strings not to be equal.
    using namespace std;
    stack<uint8_t> s;
    auto cs = CStack();

    cs.pop();
    for(size_t i = 0; i < 10000; i++){
        EXPECT_EQ(s.empty(), cs.empty());
        if (!s.empty())
            EXPECT_EQ(s.top(), cs.top());
        int r = rand() % 255;
        if(r % 2 == 0){
            s.push(r);
            cs.push(r);
        }        
        else {
            s.pop();
            cs.pop();
        }
    }
}


TEST(HelloTest, BasicAssertions2) {
    // Expect two strings not to be equal.
    using namespace std;
    stack<uint8_t> s;
    auto cs = CStack();

    cs.pop();

    for(size_t i = 0; i < 500; i++){
        EXPECT_EQ(s.empty(), cs.empty());
        if (!s.empty())
            EXPECT_EQ(s.top(), cs.top());
        int r = rand() % 255;

            s.push(r);
            cs.push(r);      
    }
    for(size_t i = 0; i < 5000; i++){
        EXPECT_EQ(s.empty(), cs.empty());
        EXPECT_EQ(s.top(), cs.top());
        int r = rand() % 255;
        if(r % 2 == 0){
            s.push(r);
            cs.push(r);
        }        
        else {
            s.pop();
            cs.pop();
        }
    }
}

TEST(HelloTest, BasicAssertions3) {
    // Expect two strings not to be equal.
    using namespace std;
    stack<uint8_t> s;
    auto cs = CStack();

    cs.pop();

    for(size_t i = 0; i < 500; i++){
        EXPECT_EQ(s.empty(), cs.empty());
        if (!s.empty())
            EXPECT_EQ(s.top(), cs.top());
        int r = rand() % 255;

            s.push(r);
            cs.push(r);      
    }
    for(size_t i = 0; i < 5000; i++){
        EXPECT_EQ(s.empty(), cs.empty());
        EXPECT_EQ(s.top(), cs.top());
        int r = rand() % 255;
        if (r == 120){
            s = stack<uint8_t>();
            cs = CStack();
        }
        if(r % 2 == 0){
            s.push(r);
            cs.push(r);
        }        
        else {
            s.pop();
            cs.pop();
        }
    }
}