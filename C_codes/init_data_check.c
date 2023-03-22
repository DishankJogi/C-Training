// C program to finding the details of the code  
//******Before the Initialization******//
// #include<stdio.h>

// int main()
// {
	// int i;	// Initialized integer Varibale Stored in Initialized Data Segment.
	// return 0;
// }
   // //Output//
  // // text    data     bss     dec     hex filename
 // // 14344    1532     112   15988    3e74 init.exe
 
 
//******After the Initialization******//

// #include<stdio.h>

// int main()
// {
	// static int i=10; // Initialized static integer Varibale Stored in Initialized Data Segment.
	// return 0;
// }
				// // Output //
	
   // // text    data     bss     dec     hex filename
  // // 14344    1536     112   15992    3e78 init.exe
  
  
//******Two Varibale Initialization******//
// #include<stdio.h>
// float j;
// int d = 215;
// int main()
// {
	// static int i=10; // Initialized static integer Varibale Stored in Initialized Data Segment.
	// return 0;
// }
	// //Output
   // // text    data     bss     dec     hex filename
  // // 14344    1540     112   15996    3e7c init.exe
  
//******Three Varibale Initialization******//
// #include<stdio.h>
// int d = 215;
// int main()
// {
	// static int i=10;// Initialized static integer Varibale Stored in Initialized Data Segment.
	// float c = 124.43; // Initialized static float Varibale Stored in Initialized Data Segment.
	// return 0;
// }
	  // // Output
	 // // text    data     bss     dec     hex filename
	// // 14348    1540     112   16000    3e80 init.exe