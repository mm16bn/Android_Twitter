/* Melissa Ma
 * COP3330-0003
 * HW #1
 * Summary: DECLARES the functions for a Diamond class,
 * that will set and create a diamond whose sides are integers
 * in the range of 1-39. */


class Diamond

{
public:
    Diamond();

    explicit Diamond(int size, char border = '#', char fill = '*');

    // standard input/output functions
    void Draw();
    void Summary();

    // accessors
    int GetSize();
    int Perimeter();
    double Area();

    // mutators
    int Grow();
    int Shrink();

    bool SetBorder(char);
    bool SetFill(char);

private:
    int size;
    char border;
    char fill;

};