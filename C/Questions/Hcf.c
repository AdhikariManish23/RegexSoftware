#include <stdio.h>
// Question : Find the HCF
int main()
{
    int n = 28;
    int m = 36;

    while (n != 0) // hum yaha loop chla he tb tk rhe hai jb tk divisor 0 naah hojaye toh jaise he n = 0 hoga loop break hojayega
    {
        int temp = n;
        n = m % n;
        m = temp;
    }
    printf("%d ", m);

    // agar yaha hum 'n' print krwate to vo remainder print krta jo ki 0 hai kyu ki reaminder baad he baad mai divisor banta hai
    // 'm' kya hai divisor jo ki dividend banta hai baad mai isliye hum ko dividend print krna hota hai
}