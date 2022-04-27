/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};


/*
	void sortDescending(int & first, int & second, int & third);
  	bool isPalindrome(string input);
  	int count_starting_repeats(string word);
*/


TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}



TEST(PracticeTest, zzz_repetition)
{
    Practice obj;
	ASSERT_EQ(obj.count_starting_repeats("zzz"), 2);
	//ASSERT_EQ(obj.count_starting_repeats("zzazzz"), 2);
}

TEST(PracticeTest, zzazzz_repetition)
{
    Practice obj;
	ASSERT_EQ(obj.count_starting_repeats("zzazzz"), 1);
}

TEST(PracticeTest, ZZzzazzz_repetition)
{
    Practice obj;
	ASSERT_EQ(obj.count_starting_repeats("ZZzzazzz"), 1);
}

TEST(PracticeTest, Zz_repetition)
{
    Practice obj;
	ASSERT_EQ(obj.count_starting_repeats("Zz"), 0);
}

TEST(PracticeTest, blank_repetition)
{
    Practice obj;
	ASSERT_EQ(obj.count_starting_repeats(""), 0);
}

TEST(PracticeTest, zzzzzzAzzzz_repetition)
{
    Practice obj;
	ASSERT_EQ(obj.count_starting_repeats("AzzzzzzAzzzz"), 0);
}

TEST(PracticeTest, azzz_repetition)
{
    Practice obj;
	ASSERT_EQ(obj.count_starting_repeats("azzz"), 0);
}

TEST(PracticeTest, hannah_palindrome)
{
	Practice obj;
	ASSERT_EQ(obj.isPalindrome("hannah"), true);
}

TEST(PracticeTest, abab_palindrome)
{
	Practice obj;
	ASSERT_EQ(obj.isPalindrome("abab"), false);
}


TEST(PracticeTest, AbBA_palindrome)
{
	Practice obj;
	ASSERT_EQ(obj.isPalindrome("abBA"), true);
}

TEST(PracticeTest, 123_sort)
{
	Practice obj;
	int a = 1;
	int b = 2;
	int c = 3;
	obj.sortDescending(a,b,c);
	ASSERT_EQ(a,3);
	ASSERT_EQ(b,2);
	ASSERT_EQ(c,1);

}

TEST(PracticeTest, 333_sort)
{
	Practice obj;
	int a = 3;
	int b = 3;
	int c = 3;
	obj.sortDescending(a,b,c);
	ASSERT_EQ(a,3);
	ASSERT_EQ(b,3);
	ASSERT_EQ(c,3);

}

TEST(PracticeTest, 321_sort)
{
	Practice obj;
	int a = 3;
	int b = 2;
	int c = 1;
	obj.sortDescending(a,b,c);
	ASSERT_EQ(a,3);
	ASSERT_EQ(b,2);
	ASSERT_EQ(c,1);

}

TEST(PracticeTest, 213_sort)
{
	Practice obj;
	int a = 2;
	int b = 1;
	int c = 3;
	obj.sortDescending(a,b,c);
	ASSERT_EQ(a,3);
	ASSERT_EQ(b,2);
	ASSERT_EQ(c,1);

}

/*
TEST(PracticeTest, 0_nighter)
{
	
	Practice obj;
	int nights [7] = {0,0,0,0,0,0,0}
	ASSERT_EQ(obj.allnighter(nights), )
	

}
*/
