Jia Garcia  
Cindy Tong  
Anne Sebastian  
9/18/25  
CMSI 2210  
Homework 3 

1. BD  
2. 48,385  
3. \-17,151  
4. 1F40  
5. 0x1540  
6. FFF5  
7. 8033  
8. 1111 1010 1100 0011  
9. 64,195  
10. \-1341  
11. 0000 0000 0110 0100  
12. 100  
13. 100  
14. 1000 0000 0000 0000  
15. 32,768  
16. \-32,768  
17. \-524,288  
18. 524,288  
19. 850D  
20. 850D  
21. N  
22. N  
23. 585B  
24. FFFF  
25. Y  
26. Y  
27. AEFA  
28. FFFF  
29. Y  
30. Y  
31. 0x4FF1  
32. 0xDDCE  
33. 0x8000  
34. 0x000CD646  
35. 240  
36.  \-7.96875

37\. 96.03125 as a 32-bit float, in hex is: 0x42C02000  
Helping Website: [https://www.youtube.com/watch?v=d-dS9UmJM9I](https://www.youtube.com/watch?v=d-dS9UmJM9I)   
Sign: 0

96: 110 0000  
*Work:*  
96/2 \= 48 r 0  
48/2 \= 24 r 0  
24/2 \= 12 r 0  
12/2 \= 6 r 0  
6/2 \= 3 r 0  
3/2 \= 1 r 1

0.03125: 0.00001  
*Work:*  
0.03125 \*2 \= 0.625 0  
0.625 \*2 \= 0.125  0  
0.125 \*2 \= 0.25  0  
0.25 \*2 \= 0.5  0  
0.5 \*2 \= 1

Exponent: 6 \-\> 127+6 \= 133

133: 10000101  
*Work:*  
133/2 \= 66 r 1  
66/2 \= 33 r 0  
33/2 \= 16 r 1  
16/2 \= 8 r 0  
8/2 \= 4 r 0  
4/2 \= 2 r 0  
2/2 \= 1 r 0

Mantissa (23-bit): 1.100000000001  \-\> 1000 0000 0001 0000 0000 000  
32-bit float: 0   10000101    1000 0000 0001 0000 0000 000

*Work:*  
1000 \= 4  
0000 \= 2  
0001 \= C  
0000 \= 0  
0000 \= 0   
0000 \= 0  
Hex: 0x42C02000


38\. \-16777216 as a 32-bit float, in hex is: 0xCB800000  
	Helping Website: [https://www.youtube.com/watch?v=d-dS9UmJM9I](https://www.youtube.com/watch?v=d-dS9UmJM9I)   
	Sign: 1  
	16777216: 1 0000 0000 0000 0000 0000 0000  
	  
*Work:*   
16777216/2 \= 8388608 r 0  
8388608/2 \= 4194304 r 0  
4194304/2 \= 2097152 r 0  
2097152/2 \= 1048576 r 0  
1048576/2 \= 524288 r 0  
524288/2 \= 262144 r 0  
262144/ 2 \= 131072 r 0  
131072/2 \= 65536 r 0  
65536/2 \= 32768 r 0  
32768/2 \= 16384 r 0  
16384/2 \= 8192 r 0  
8192/2 \= 4096 r 0  
4096/2 \= 2048 r 0  
2048/2 \= 1024 r 0  
1024/2 \= 512 r 0  
512/2 \= 256 r 0  
256/2 \= 128 r 0  
128/2 \= 64 r 0  
64/2 \= 32 r 0  
32/2 \= 16 r 0  
16/2 \= 8 r 0  
8/2 \= 4 r 0  
4/2 \= 2 r 0  
2/2 \=1 r 0   
	Exponent: 24 \-\> 127+24 \= 151  
	151: 1001 0111

*Work:*  
151/2 \= 75 r 1  
75/2 \= 37 r 1  
37/2 \= 18 r 1  
18/2 \= 9 r 0  
9/2 \= 4 r 1  
4/2 \= 2 r 0  
2/2 \= 1 r 0

	Mantissa (23-bit): 000 0000 0000 0000 0000 0000  
	32-bit float: 1100 1011 1000 0000 0000 0000 0000 0000  
	  
Work:  
1100 \= C  
1011= B  
1000 \= 8  
0000 \= 0  
0000 \= 0  
0000 \= 0  
0000 \= 0  
Hex: 0xCB800000

39\. The largest finite IEEE-754 single precision float, in hex is: 0x7F7FFFFF  
	Helping Website Chart: [https://www.cis.rit.edu/class/simg726/notes/ieee754/ieee754.html](https://www.cis.rit.edu/class/simg726/notes/ieee754/ieee754.html) 

40\. The smallest finite IEEE-754 single precision float, in hex is: 0x00000001  
	Helping Website Chart: [https://www.cis.rit.edu/class/simg726/notes/ieee754/ieee754.html](https://www.cis.rit.edu/class/simg726/notes/ieee754/ieee754.html) 

41\. The largest nonzero negative IEEE-754 single precision float, in hex is: 0xFF7FFFFF  
	Helping Website Chart: [https://www.cis.rit.edu/class/simg726/notes/ieee754/ieee754.html](https://www.cis.rit.edu/class/simg726/notes/ieee754/ieee754.html)   
	Reasoning: same as \#39 except 7 becomes F because F is a negative binary of 1111

42\. The smallest nonzero positive IEEE-754 single precision float, in hex is: 0x00000001  
Helping Website Chart: [https://www.cis.rit.edu/class/simg726/notes/ieee754/ieee754.html](https://www.cis.rit.edu/class/simg726/notes/ieee754/ieee754.html) 

43\. \-5.125 X 2^90 as a 32-bit float, in hex is: 0xEDA40000  
	\-5.125 \* 2^90 \= \-1.28125 \* 2^92   
Sign: 1  
0.28125 \= 0.01001

*Work:*  
0.28125\*2 \= 0.5625 0  
0.5625 \* 2 \= 1.125 1  
0.125 \* 2 \= 0.25 r 0  
0.25 \* 2 \= 0.5 0  
0.5 \*2 \= 1

	Exponent: 92+127 \= 219  
	  
219: 1101 1011  
	  
	*Work:*  
	219/2 \= 109 r 1  
	109/2 \= 54 r 1  
	54/2 \= 27 r 0  
	27/2 \= 13 r 1  
	13/2 \= 6 r 1  
	6/2 \= 3 r 0  
	3/2 \= 1 r 1  
	  
	  
	Mantissa (23-bits): 0100 1000 0000 0000 0000 000  
	32-bits: 1110 1101 1010 0100 0000 0000 0000 0000

	1110 \= E  
	1101 \= D  
	1010 \= A  
	0100 \= 4   
	0000 \= 0  
	0000 \= 0  
	0000 \= 0  
	0000 \= 0  
	  
	Hex: 0xEDA40000


44\. 2^-138 as a 32-bit float, in hex is:  0x00000800  
	2^-138 \= 2^-126 \* 2^-12  
	Sign: 1  
Mantissa (23-bits): 2^(23-12) \= 2^11  
	Exponent: 11 \= 2048 \= 1000 \= 0x800  
	Helping Website: [https://www.mimosa.org/ieee-floating-point-format/\#:\~:text=In%20the%2032%20bit%20IEEE,parts%20of%20the%20normalized%20number.\&text=A%20sign%20bit%20of%200,2%2D126%20to%202127](https://www.mimosa.org/ieee-floating-point-format/#:~:text=In%20the%2032%20bit%20IEEE,parts%20of%20the%20normalized%20number.&text=A%20sign%20bit%20of%200,2%2D126%20to%202127). 

45. 0x0000060

46. -100