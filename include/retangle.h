#ifndef RETANGLE_H
#define RETANGLE_H


class retangle
{
     private:
        int _height;
        int _length;

    public:
        retangle();
        retangle(int height, int length);

        void set_height(int height);
        int get_height();

        void set_length(int length);
        int get_length();

        int get_perimeter();
        int get_area();

        void show_info();
};

#endif
