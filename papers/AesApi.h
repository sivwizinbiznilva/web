/* rijndael-alg-ref.h   v2.0   August '99 
 * Reference ANSI C code 
 * authors: Paulo Barreto 
 *          Vincent Rijmen, K.U.Leuven 
 */ 
#ifndef __RIJNDAEL_ALG_H 
#define __RIJNDAEL_ALG_H 
 
#define MAXBC				(256/32) 
#define MAXKC				(256/32) 
#define MAXROUNDS			14 
 
typedef unsigned char		word8;	 
typedef unsigned short		word16;	 
typedef unsigned long		word32; 
 
typedef char		S8;	 
typedef short		S16; 
typedef long		S32; 
typedef unsigned char		U8;	 
typedef unsigned short		U16;	 
typedef unsigned long		U32; 
 
void AESEncrypt(U8 *plain, U8 *Key, U16 KeyLen, U8 mode, U8 *iv, U8 *cipher); 
void AESDecrypt(U8 *cipher, U8 *Key, U16 KeyLen, U8 mode, U8 *iv, U8 *plain); 
 
#endif /* __RIJNDAEL_ALG_H */ 
