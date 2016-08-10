int main(void)
{
    int x = 0;
    int* y = &x;
    int error = 5 / (*y);
    return  error;
}
