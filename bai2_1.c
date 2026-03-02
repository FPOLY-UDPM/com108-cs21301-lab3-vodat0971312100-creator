/******************************************************************************
 * Họ và tên: [Nguyễn Võ Minh Đạt]
 * MSSV:      [PS49299]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
//  2.1 BẬC 1 
//  Phương trình có dạng ax + b = 0 
//  Input: nhập vào từ bàn phím giá trị của a, b 
//  Output: Hiển thị nghiệm của phương trình 
//  Biết rằng: 
//  Nếu a == 0,  
//   b == 0: Phương trình có vô số nghiệm 
//   b != 0: Phương trình vô nghiệm 
//  Ngược lại: Phương trình có nghiệm x = -b/a 
 
#include <stdio.h>

int main(){
    float a,b;// Khai báo biến
    printf("nhap vao gia tri a :");
    scanf("%f",&a);
    printf("nhap vao gia tri b :");
    scanf("%f",&b);
    if( a==0 ){
        if(b==0){
            printf("phương trình có vô số nghiệm rồi ");
        }
         if(b!=0){
            printf("phương trình vô nghiệm ");
        }}
        else{("phương trình có nghiệm x=%.1f",-b/a);}
         return 0;



    // Xử lý, tính toán VÀ Hiển thị kết quả

}