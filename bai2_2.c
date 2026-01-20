/******************************************************************************
 * Họ và tên: [Nguyễn Võ Minh Đạt]
 * MSSV:      [PS49299]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
// 2.2 BẬC 2 
// Phương trình có dạng: ax2 + bx + c = 0 
// Input: Nhập vào từ bàn phím: a, b, c 
// Output: Nghiệm của phương trình 
// Biết rằng: 
// Nếu a == 0, phương trình thành bx + c = 0  
// Ngược lại nếu a != 0 
//  Tính delta 
//  Nếu delta < 0: Phương trình vô nghiệm 
//  Nếu delta == 0: Phương trình có nghiệm kép x = -b/(2*a) 
//  Nếu delta > 0: Phương trình có 2 nghiệm riêng biệt  
// o X1 = (-b + căn(delta))/(2*a) 
// o X2 = (-b – căn(delta))/(2*a)
#include <stdio.h>
#include <math.h>

int main(){
    
    float a,b,c;
    printf(" nhap vao gia tri a :");
    scanf("%f",&a);
      printf(" nhap vao gia tri b :");
    scanf("%f",&b);
      printf(" nhap vao gia tri c :");
    scanf("%f",&c);
    if(a==0){
     if(b==0){
            printf("phương trình có vô số nghiệm ");
        }
       else  if(b!=0){
            printf("phương trình vô nghiệm ");
         }
         else {
             printf("phường trình có dạng là bx+c --> x =-c/b= %.1f",-c/b);
         }
    }
    else {
        float delta=b*b-4*a*c;
        printf("vậy delta của phương trình là: delta=b^2-4ac=%.2f \n",delta);
        if(delta <0 ){
            printf("phương trình vô nghiệm");
            }
            //ta sử dụng else if khi để không bị trùng lệnh if khi chạy chương trình nếu đều xài 2 if nối tiếp thì sẽ in ra cả hai if nếu rơi vào trường hợp else
            else if(delta == 0){
            printf(" phương trình có nghiệm kép là -b/(2*a)=%.1f",-b/(2*a));
            }
            else  
            {
            printf("phương trình có 2 nghiệm riêng biệt x1 = (-b + căn(delta))/(2*a)= %.1f",(-b + sqrt(delta))/(2*a));
            printf("phương trình có 2 nghiệm riêng biệt X2 = (-b - căn(delta))/(2*a)= %.1f",(-b - sqrt(delta))/(2*a));
            }
        }
            return 0;
        
    }

    // Nhập dữ liệu


    // Xử lý, tính toán VÀ Hiển thị kết quả

