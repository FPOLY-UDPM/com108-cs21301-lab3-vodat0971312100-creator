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
        if(kWh >= 401){
            printf("giá kí điện bậc 6 là 3.460 đồng/kWh =%.3f",(kWh-400)*3.460+100*3.350+100*2.998+100*2.380+50*2.050+50*1.984);
        }
        else if(kWh>=301 && kWh<=400){
           printf("giá kí điện bậc 5 là 3.350 đồng/kWh =%.3f",kWh-300*3.350+100*2.998+100*2.380+50*2.050+50*1.984);
        }
        else if(kWh>= 201 && kWh<=300 ){
            printf("giá  kí điện bậc 4 là 2.998 đồng/kWh =%.3f",kWh-200*2.998+100*2.380+50*2.050+50*1.984 );
        }
        else if (kWh >= 101 && kWh <=200){
            printf("giá  kí điện bậc 3 là 2.380 đồng/kWh =%.3f",kWh-100*2.380+50*2.050+50*1.984);
        }
        else if (kWh>=51 && kWh<=100){
            printf("giá  kí điện bậc 2 là 2.050 đồng/kWh =%.3f",kWh-50*2.050+50*1.984);
        }
        else{
            printf("giá  kí điện bậc 1 là 1.984 đồng/kWh =%.3f",kWh*1.984);
        }
    }
    else{
        printf("số kí điện không hợp lệ! \nvui lòng nhập lạihihi  ");
    }
    return 0;
    


    // Nhập dữ liệu


    // Xử lý, tính toán VÀ Hiển thị kết quả

}