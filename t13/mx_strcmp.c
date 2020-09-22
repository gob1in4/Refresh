
int mx_strcmp(const char *s1, const char *s2) {
  	while (*s1 == *s2) {
		if (*s1 == '\0' && *s2 == '\0')
			return 0;
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

// int main() {
//     char s1[] = "aaaA";
//     char s2[] = "amm";
//     printf("%d\n", mx_strcmp(s1, s2));
  
// }
