#include <stdio.h>
#include <stdint.h>

// dùng enum quản lý trạng thái nút

enum Myenum
{
	SUCCESS = 0,
	ERROR	//2 số sau bằng số trước +1
};
// thường không khai báo enum kiểu này mà dùng typedef

typedef enum {
	SUCCESS = 0,
	NOT_FOUND,
	ERROR
}RETURN_STATUS;

// 0: success
// 1: error

//1: success
//0: error nếu viết như này thì không clean, nhiều người tham gia sẽ không ổn lắm
RETURN_STATUS checkIC() {
	RETURN_STATUS check = SUCCESS;
	if (check == 0) {

	}
	else if (check == 2) {
		check = NOT_FOUND;
	}
	else{
		check = ERROR;
	}
	return check; //check nguon check ic
}

int main() {

}