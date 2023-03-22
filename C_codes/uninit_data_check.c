// C program to check size of c file with uninitialize varibales  
// #include<stdio.h>

// int a; //Uninitialize Variable Data stored in BSS(Block Started By Symbol)
// int main(void)
// {
	// return 0;
// }

				// Output //

   // text    data     bss     dec     hex filename
  // 14344    1532     116   15992    3e78 uninit.exe
  
 //Two Uninitialize Varibale  
// #include<stdio.h>

// int a; //Uninitialize Variable Data stored in BSS(Block Started By Symbol)
// int main(void)
// {
	// static int c;//Uninitialize Variable Data stored in BSS(Block Started By Symbol)
	// return 0;
// }
				// Output //

	 // text    data     bss     dec     hex filename
	// 14344    1532     120   15996    3e7c uninit.exe