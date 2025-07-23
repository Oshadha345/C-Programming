#ifndef ADD_H
#define ADD_H



int increment() {

    static int count = 0;
    count = count +1;
    return count;
}

#endif // ADD_H