/******************************************************************************
 * Họ và tên: [Nguyễn Võ Minh Đạt]
 * MSSV:      [PS49299]
 * Lớp:       [COM108
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>

int main(){
    printf("số tiền phải trả cho lượng điện tiêu thụ là 400 trên thang là bậc thứ mấy\n");
    printf("a.5\nb.2\nc.1\nd.6\n");
    printf("hãy chọn 1 trong 4 đáp án trên\n");
    char dapAn;
    scanf(" %s",&dapAn);
    switch (dapAn){
         case 'a': printf(" đáp án chính xắc!\n");
         break;
         case 'b': printf("sai rồi huhu!\n");
         break;
         case 'c':printf("sai rồi huhu!\n");
         break;
         case 'd':printf("sai rồi hihi!\n");
    }
    printf("5x2 – 7x = 0 phương trình bậc 2 này sẽ có những nghiệm nà0:\n");
    printf("a.x=0,x=7/5\nb.x=2,x=6/7\nc.x=1,x=7/8\nd.x=6,x=0\n");
    printf("hãy chọn 1 trong 4 đáp án trên\n");
    char Dapan;
    scanf(" %s",&Dapan);
    switch (Dapan){
         case 'a': printf(" đáp án chính xắc!\n");
         break;
         case 'b': printf("sai rồi sủa lại đe\n");
         break;
         case 'c':printf("sai rồi huhu!\n");
         break;
         case 'd':printf("sai rồi hihi!\n");
    }
     printf("7x-35 = 0 phương trình bậc 1 này sẽ có những nghiệm nà0:\n");
    printf("a.x=5,\nb.x=2\nc.phương ttrình vô nghiệm\nd.phương trình vô số nghiệm\n");
    printf("hãy chọn 1 trong 4 đáp án trên\n");
    char dApan;
    scanf(" %s",&dApan);
    switch (dApan){
         case 'a': printf(" đáp án chính xắc!\n");
         break;
         case 'b': printf("sai rồi huhu!\n");
         break;
         case 'c':printf("sai rồi huhu!\n");
         break;
         case 'd':printf("sai rồi hihi!\n");
    }
    return 0;
    


    // Nhập dữ liệu


    // Xử lý, tính toán VÀ Hiển thị kết quả

}