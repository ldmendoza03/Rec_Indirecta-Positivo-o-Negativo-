#ifndef OPERACIONES_H
#define OPERACIONES_H

template<typename T>
bool is_positive(T n) {
    if (n > 0) return true;
    return false;
}

template<typename T>
bool is_negative(T n) {
    if (n < 0) return true;
    return false;
}

#endif // OPERACIONES_H
