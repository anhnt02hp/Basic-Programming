Con trỏ thực ra chỉ là 1 biến 

khi khai báo là int a thì a sẽ luôn có địa chỉ nào đó (vì từng ô nhớ trên ram có địa chỉ riêng)

khi khai báo int a, thì a sẽ chiếm 4byte = 32bits lien tiếp trong RAM, địa chỉ của biến a sẽ là địa chỉ của ô nhớ đầu tiên

con trỏ thay vì lưu dữ liệu của 1 biến nào đó thì nó sẽ lưu đia chỉ của biến đó.
Ta gọi là con trỏ đang quản lý biến đó

Con trỏ = biến lưu địa chỉ của biến khác (và cũng có địa chỉ của riêng nó)
"GIA TRI CUA CONTRO = DIA CHI CUA BIEN A"

Con trỏ null(nullptr) khác với ký tự null

Dấu & là toán tử địa chỉ

Khi khai báo con trỏ *ptr mà muốn dùng để quản lý biến a => chỉ cần gán giá trị của a cho con trỏ *ptr là được:
VD: ptr = &a 

Thông qua con trỏ prt, ta có thẻ thay đổi "giía trị" của biến a theo ý muốn

Sau khi int *ptr; và ptr = &a, sau 2 dòng lệnh này thì a cũng chính là *ptr

Hoàn toàn có thể nhiều con trỏ cùng trỏ vào 1 biến => 1 thằng thay đổi thì tất cả các thằng khác cũng thay đổi theo

Mảng của chúng ta: 
int a[100];
a chính là hằng con trỏ



