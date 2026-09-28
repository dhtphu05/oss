/**
 * @file greeting.c
 * @brief Module cung cấp tính năng gửi lời chào thành viên mới trong dự án OSS.
 */

#include <stdio.h>

/**
 * In thông điệp chào mừng thành viên đóng góp
 * @param user_name Tên định danh của thành viên
 */
void print_welcome(const char *user_name) {
    if (user_name != NULL) {
        printf("Xin chao, %s! Chuc mung ban da tham gia dong gop cho du an OSS.\n", user_name);
    }
}
