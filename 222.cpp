#include <stdio.h>
#include <math.h>
#include <string.h>

main()
{
  char tensp[50]; int soluong; float dongia, tongtien, thue;
  printf("Nhap vao ten san pham: ");
  scanf("%c", &tensp);
  printf("Nhap vao so luong can mua: ");
  scanf("%d", &soluong);
  printf("Nhap vao don gia cua sp: ");
  scanf("%f", &dongia);
  if(soluong >= 0 && dongia >= 0)
  {
	  tongtien = soluong*dongia;
	  thue = (tongtien*10)/100;
	  printf("San pham: "); puts(tensp);
	  printf("Tong tien la: %0.2f VND\n", tongtien);
	  printf("Thue Gia tri gia tang la: %0.2f VND\n", thue);
  }
  else printf("Nhap lai");
}
