/******************************************************************************
 * Họ và tên: [Nguyễn võ minh đạt ]
 * MSSV:      [PS49299]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main(){
    
    float kWh;
    printf("số điện tiêu thụ 1 tháng là :");
    scanf("%f",&kWh);
    if(kWh<=600 && kWh>0){
        if(kWh > 401){
            printf("giá cho một kí điện bậc 6 là 3.460 đồng/kWh =%.3f",kWh*3.460);
        }
        else if(kWh>=301){
           printf("giá cho một kí điện bậc 5 là 3.350 đồng/kWh =%.3f",kWh*3.350);
        }
        else if(kWh>= 201 ){
            printf("giá cho một kí điện bậc 4 là 2.998 đồng/kWh =%.3f",kWh*2.998);
        }
        else if (kWh >= 101){
            printf("giá cho một kí điện bậc 3 là 2.380 đồng/kWh =%.3f",kWh*2.380);
        }
        else if (kWh>=51){
            printf("giá cho một kí điện bậc 2 là 2.050 đồng/kWh =%.3f",kWh*2.050);
        }
        else{
            printf("giá cho một kí điện bậc 1 là 1.984 đồng/kWh =%.3f",kWh*1.984);
        }
    }
    else{
        printf("số kí điện không hợp lệ! \nvui lòng nhập lại ");
    }
    return 0;
    


    // Nhập dữ liệu


    // Xử lý, tính toán VÀ Hiển thị kết quả

}