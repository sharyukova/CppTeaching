#include <gtest/gtest.h>
#include "stl.hpp"
#include <string>

using namespace std;

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions)
{
    EXPECT_STRNE("hello", "world");
}
class CinCoutCapture{
        std::istringstream sin;
        std::ostringstream sout;
        decltype(std::cin.rdbuf(sin.rdbuf())) cin_rdbuf;
        decltype(std::cout.rdbuf(sout.rdbuf())) cout_rdbuf; 
public:
    CinCoutCapture(std::string _ssin):sin{_ssin.c_str()}{
        cin_rdbuf = std::cin.rdbuf(sin.rdbuf());
        cout_rdbuf = std::cout.rdbuf(sout.rdbuf());
    };
    const string get() const{
        return sout.str();
    }; 
    ~CinCoutCapture(){
        std::cin.rdbuf(cin_rdbuf);
        std::cout.rdbuf(cout_rdbuf);
    };

};

TEST(HelloTest, race1)
{
    CinCoutCapture s("5 4 1 3 5 7 9 6 4 2 8");
    taskRace();
    std::string ansv("3 2 1 4"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}

TEST(HelloTest, race2)
{
    CinCoutCapture s(
"5 5 "
"1 2 1 2 5 "
"3 1 4 1 5");
    taskRace();
    std::string ansv("4 2 4 2 5"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}

TEST(HelloTest, race3)
{
    CinCoutCapture s(
"1 1 "
"-1 "
"-2");
    taskRace();
    std::string ansv("0"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}
/*
dsbfnsdbfnsdbfms


bf*/
TEST(HelloTest, race4)
{
    CinCoutCapture s(
"1 1 "
"-80890826 "
"686519510");
    taskRace();
    std::string ansv("1"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}

TEST(HelloTest, race5)
{
    CinCoutCapture s(
"11 11 "
"237468511 -779187544 -174606592 193890085 404563196 -71722998 -617934776 170102710 -442808289 109833389 953091341 "
"994454001 322957429 216874735 -606986750 -455806318 -663190696 3793295 41395397 -929612742 -787653860 -684738874");
    taskRace();
    std::string ansv("11 9 8 2 2 1 5 5 0 0 1"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}


TEST(HelloTest, race6)
{
    CinCoutCapture s(
"20 22 "
"858276994 -568758442 -918490847 -983345984 -172435358 389604931 200224783 486556113 413281867 -258259500 -627945379 -584563643 444685477 -602481243 -370745158 965672503 630955806 -626138773 -997221880 633102929 "
"-61330638 -977252080 -212144219 385501731 669589742 954357160 563935906 584468977 -895883477 405774444 853372186 186056475 -964575261 -952431965 632332084 -388829939 -23011650 310957048 -770695392 977376693 321435214 199223897"
);
    taskRace();
    std::string ansv("11 2 10 12 18 19 16 16 3 13 18 11 2 2 17 8 11 12 3 20 12 11 "); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}

TEST(HelloTest, race7)
{
    CinCoutCapture s("1 1 -11111 -5938");
    taskRace();
    std::string ansv("1"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}


TEST(HelloTest, race8)
{
    CinCoutCapture s("1 1 1 400000009");
    taskRace();
    std::string ansv("1"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}

TEST(HelloTest, race9)
{
    CinCoutCapture s("1 1 1 300000009");
    taskRace();
    std::string ansv("1"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}

TEST(HelloTest, race10)
{
    CinCoutCapture s("1 1 1 200000009");
    taskRace();
    std::string ansv("1"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}

TEST(HelloTest, race11)
{
    CinCoutCapture s("1 1 1 200000003");
    taskRace();
    std::string ansv("1"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}


TEST(HelloTest, registratura1)
{
    CinCoutCapture s("4 abacaba acaba abacaba acab");
    taskRace();
    std::string ansv("OK OK abacaba1 OK"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}

TEST(HelloTest, registratura2)
{
    CinCoutCapture s("6 first first second second third third");
    taskRace();
    std::string ansv("OK first1 OK second1 OK third1"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}

TEST(HelloTest, registratura3)
{
    CinCoutCapture s("1 n");
    taskRace();
    std::string ansv("OK"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}

TEST(HelloTest, registratura4)
{
    CinCoutCapture s("2 u u");
    taskRace();
    std::string ansv("OK u1"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}

TEST(HelloTest, registratura5)
{
    CinCoutCapture s("3 b b b");
    taskRace();
    std::string ansv("OK b1 b2"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}

TEST(HelloTest, registratura6)
{
    CinCoutCapture s("2 c cn");
    taskRace();
    std::string ansv("OK OK"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}

TEST(HelloTest, registratura7)
{
    CinCoutCapture s("3 vhn vhn h");
    taskRace();
    std::string ansv("OK vhn1 OK"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}

TEST(HelloTest, registratura8)
{
    CinCoutCapture s("4 d hd d h");
    taskRace();
    std::string ansv("OK OK d1 OK"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}

TEST(HelloTest, registratura9)
{
    CinCoutCapture s("10 bhnqaptmp bhnqaptmp bhnqaptmp bhnqaptmp bhnqaptmp bhnqaptmp bhnqaptmp bhnqaptmp bhnqaptmp bhnqaptmp");
    taskRace();
    std::string ansv("OK bhnqaptmp1 bhnqaptmp2 bhnqaptmp3 bhnqaptmp4 bhnqaptmp5 bhnqaptmp6 bhnqaptmp7 bhnqaptmp8 bhnqaptmp9"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}

TEST(HelloTest, registratura10)
{
    CinCoutCapture s("10 fpqhfouqdldravpjttarh fpqhfouqdldravpjttarh fpqhfouqdldravpjttarh fpqhfouqdldravpjttarh fpqhfouqdldravpjttarh fpqhfouqdldravpjttarh jmvlplnrmba fpqhfouqdldravpjttarh jmvlplnrmba fpqhfouqdldravpjttarh");
    taskRace();
    std::string ansv("OK fpqhfouqdldravpjttarh1 fpqhfouqdldravpjttarh2 fpqhfouqdldravpjttarh3 fpqhfouqdldravpjttarh4 fpqhfouqdldravpjttarh5 OK fpqhfouqdldravpjttarh6 jmvlplnrmba1 fpqhfouqdldravpjttarh7"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}

TEST(HelloTest, registratura11)
{
    CinCoutCapture s(
        "10 "
"iwexcrupuubwzbooj "
"iwexcrupuubwzbooj "
"jzsyjnxttliyfpunxyhsouhunenzxedi "
"jzsyjnxttliyfpunxyhsouhunenzxedi "
"jzsyjnxttliyfpunxyhsouhunenzxedi "
"jzsyjnxttliyfpunxyhsouhunenzxedi "
"jzsyjnxttliyfpunxyhsouhunenzxedi "
"iwexcrupuubwzbooj "
"iwexcrupuubwzbooj "
"iwexcrupuubwzbooj");
    taskRace();
    std::string ansv(
        "OK "
"iwexcrupuubwzbooj1 "
"OK "
"jzsyjnxttliyfpunxyhsouhunenzxedi1 "
"jzsyjnxttliyfpunxyhsouhunenzxedi2 "
"jzsyjnxttliyfpunxyhsouhunenzxedi3 "
"jzsyjnxttliyfpunxyhsouhunenzxedi4 "
"iwexcrupuubwzbooj2 "
"iwexcrupuubwzbooj3 "
"iwexcrupuubwzbooj4"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}



TEST(HelloTest, registratura12)
{
    CinCoutCapture s(
        "10 "
"zzzzzzzzzzzzzzzzzzzzzzzzzzz "
"zzzzzzzzzzzzzzzzzzzzzzzzzzz "
"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz "
"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz "
"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz "
"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz "
"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz "
"zzzzzzzzzzzzzzzzzzzzzzzzzzz "
"zzzzzzzzzzzzzzzzzzzzzzzzzzz "
"zzzzzzzzzzzzzzzzzzzzzzzzzzz");
    taskRace();
    std::string ansv(
        "OK "
"zzzzzzzzzzzzzzzzzzzzzzzzzzz1 "
"OK "
"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz1 "
"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz2 "
"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz3 "
"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz4 "
"zzzzzzzzzzzzzzzzzzzzzzzzzzz2 "
"zzzzzzzzzzzzzzzzzzzzzzzzzzz3 "
"zzzzzzzzzzzzzzzzzzzzzzzzzzz4"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}

TEST(HelloTest, registratura13)
{
    CinCoutCapture s(
        "20 "
"zzzzzzzzz "
"zzzzzzzzzzzzz "
"z "
"zzzzzzzzzzzzz "
"zzzzzzzzz "
"zzzzzzzzz "
"zzzzzzzzzzzzz "
"zzzzzzzzzzzzz "
"zzzzzzzzzzzzzzzzzzzzzzzz "
"zzzzzzzzzzzzz "
"zzzzzzzzzzzzz "
"zzzzzzzzzzzzzzzzzzzzzzzz "
"zzzzzzzzzzzzzzzzzzzzzzzz "
"zzzzzzzzzzzzz "
"zzzzzzzzzzzzz "
"z "
"zzzzzzzzz "
"zzzzzzzzz "
"zzzzzzzzzzzzz "
"zzzzzzzzzzzzzzzzzzzzzzzz");
    taskRace();
    std::string ansv(
        "OK "
"OK "
"OK "
"zzzzzzzzzzzzz1 "
"zzzzzzzzz1 "
"zzzzzzzzz2 "
"zzzzzzzzzzzzz2 "
"zzzzzzzzzzzzz3 "
"OK "
"zzzzzzzzzzzzz4 "
"zzzzzzzzzzzzz5 "
"zzzzzzzzzzzzzzzzzzzzzzzz1 "
"zzzzzzzzzzzzzzzzzzzzzzzz2 "
"zzzzzzzzzzzzz6 "
"zzzzzzzzzzzzz7 "
"z1 "
"zzzzzzzzz3 "
"zzzzzzzzz4 "
"zzzzzzzzzzzzz8 "
"zzzzzzzzzzzzzzzzzzzzzzzz3"); 
    EXPECT_TRUE(s.get() == ansv || ansv == ansv.append(" "));
}
