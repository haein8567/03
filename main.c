int main(void)
{
    char c;
    int i;

    printf("문자를 입력하세요: ");
    scanf("%c", &c);

    i= c - '0';
    printf("The input number is %i\n", i);
    return 0;
}
