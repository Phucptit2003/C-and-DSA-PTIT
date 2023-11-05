// Thuat toan sap xep vun dong
// H�m vun d?ng cho m?t d?nh
void heapify(int arr[], int n, int i){  // m?ng arr, n - s? ph?n t?, i - d?nh c?n vun d?ng
    int max =i;    // Luu v? tr� d?nh max ban d?u
    int l = i*2 +1;   // V? tr� con tr�i
    int r = l+1;    // V? tr� con ph?i
    if(l<n && arr[l] > arr[max]){   // N?u t?n t?i con tr�i l?n hon cha, g�n max = L
        max = l;
    }
    
    if(r<n && arr[r] > arr[max]){   // N?u t?n t?i con ph?i l?n hon arr[max], g�n max = r
        max = r;
    }
    if(max != i){      // N?u max != i, t?c l� cha kh�ng ph?i l?n nh?t
        swap(arr[i], arr[max]);   // �?i ch? cho ph?n t? l?n nh?t l�m cha
        heapify(arr ,n , max);    // �? quy vun c�c node ph�a du?i
    }
    
}
