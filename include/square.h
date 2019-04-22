#ifndef SQUARE_H
#define SQUARE_H


class square
{
    private:
        int _side;

    public:
        square();
        square(int side);

        void set_side(int side);
        int get_side();

        int get_perimeter();
        float get_area();

        void show_info();
};

#endif // SQUARE_H
