void mx_printchar(char c);

void mx_print_alphabet(void) {
    for (int i = 65; i <= 90; i++) {
        if(i % 2)
            mx_printchar(i);
        else 
            mx_printchar(i+32);
    }
     mx_printchar('\n');
}
