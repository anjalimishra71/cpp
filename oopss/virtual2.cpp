#include <iostream>
#include <cstring>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
    }
};
class CWHvideo : public CWH
{
    float videoLength;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "title=" << title << endl;
        cout << "ratings=" << rating << endl;
        cout << "length of video" << videoLength << endl;
    }
};
class CWHText : public CWH
{
    float words;

public:
    CWHText(string s, float r, float vl) : CWH(s, r)
    {
        words = vl;
    }
    void display()
    {
        cout << "title=" << title << endl;
        cout << "ratings=" << rating << endl;
        cout << "words=" << words << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;
    title = "django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHvideo djvideo(title, rating, vlen);
    // djvideo.display();
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);
    djText.display();

    CWH *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}