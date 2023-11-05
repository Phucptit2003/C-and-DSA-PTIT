#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct SinhVien {
    char maSV[10];
    char hoTen[30];
    int ngaySinh;
    int thangSinh;
    int namSinh;
    struct SinhVien* next;
} SinhVien;


SinhVien* head = NULL;


void themSinhVien() {
    int n;
    printf("Nhap so sinh vien muon them: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        SinhVien* newSV = (SinhVien*)malloc(sizeof(SinhVien));

        printf("Nhap ma sinh vien: ");
        scanf("%s", &newSV->maSV);
		
		getchar();
        printf("Nhap ho ten: ");
        fgets(newSV->hoTen,sizeof(newSV->hoTen),stdin);


        printf("Nhap ngay sinh, thang sinh, nam sinh: ");
        scanf("%d %d %d", &newSV->ngaySinh, &newSV->thangSinh, &newSV->namSinh);

        newSV->next = head;
        head = newSV;
    }

    printf("Da them %d sinh vien moi vao danh sach.\n", n);
}


void suaThongTinSinhVien() {
    char hoTen[30];
    printf("Nhap ho ten sinh vien can sua: ");
    scanf("%s", hoTen);

    SinhVien* current = head;
    while (current != NULL) {
        if (strcmp(current->hoTen, hoTen) == 0) {
            printf("Nhap ngay sinh, thang sinh, nam sinh (cach nhau boi dau cach): ");
            scanf("%d %d %d", &current->ngaySinh, &current->thangSinh, &current->namSinh);

            printf("Da sua thong tin cua sinh vien %s.\n", hoTen);
            return;
        }
        current = current->next;
    }

    printf("Khong tim thay sinh vien co ho ten la %s.\n", hoTen);
}


void hienThiDanhSachSinhVien() {
    
    for (SinhVien* i = head; i != NULL; i = i->next) {
        for (SinhVien* j = i->next; j != NULL; j = j->next) {
            if (i->namSinh > j->namSinh ||
                (i->namSinh    && i->thangSinh > j->thangSinh)
                || (i->namSinh == j->namSinh
                    && i->thangSinh == j->thangSinh
                    && i->ngaySinh > j->ngaySinh)) {
                // Swap 2 nút trong danh sách
                SinhVien temp;
                memcpy(&temp, i, sizeof(SinhVien));
                memcpy(i, j, sizeof(SinhVien));
                memcpy(j, &temp, sizeof(SinhVien));
            }
        }
    }


    for (SinhVien* current = head; current != NULL; current = current->next) {
        printf("%s %s%02d/%02d/%04d\n", current->maSV, current->hoTen, current->ngaySinh, current->thangSinh, current->namSinh);
    }
}

// Hàm main
int main() {
    int choice;
    do {
        printf("Menu:\n");
        printf("1. Them sinh vien moi.\n");
        printf("2. Sua thong tin sinh vien.\n");
        printf("3. Hien thi danh sach sinh vien theo ngay sinh tang dan.\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            themSinhVien();
            break;
        case 2:
            suaThongTinSinhVien();
            break;
        case 3:
            hienThiDanhSachSinhVien();
            printf("Chuong trinh ket thuc.\n");
            break;
        }
    } while (choice != 0);

    return 0;
}

