#include<iostream>
using namespace std;

class karyawan{
	private:
	int jumlah;
	string nama[99];
	int id[99];
	string jabatan[99];
	long long int telp[99];
	public:
	
	void inputKaryawan(){
		cout << "Masukkan Jumlah Karyawan: ";
		cin >>jumlah;
		for(int i = 0; i < jumlah ;i++){
			cout << "Masukkan data ke - " << i + 1 << endl;
			cout << "Masukkan ID: ";
			cin >> id[i];
			cin.ignore();
			cout << "Masukkan Nama Karyawan : ";
			getline(cin,nama[i]);
			cout << "Masukkan Jabatan : ";
			getline(cin,jabatan[i]);
			cout << "Masukkan No. Telp: ";
			cin >> telp[i];
			
			
		}
	}
	void tampilkanKaryawan(){
		cout << "+=================================+" << endl;
		cout << "|          DATA KARYAWAN          |" << endl;
		cout << "+=================================+" << endl;
		for(int i = 0; i < jumlah ;i++){
		cout << "| ID       : " << id[i] << endl;
		cout << "| Nama     : " << nama[i] << endl;
		cout << "| Jabatan  : " << jabatan[i] << endl;
		cout << "| No. Telp : " << telp[i] << endl;
		}
		cout << endl;
	}
	void urutAscending(){
		cout << "Mengurutkan karyawan secara Ascending: "<< endl;
		for(int i = 0 ; i< jumlah-1;i++){
			for(int j = i + 1;j < jumlah;j++){
				if(id[i] > id[j]){
					int temp = id[i];
					id[i] = id[j];
					id[j] = temp;
					string temp2 = nama[i];
					nama[i] = nama[j];
					nama[j] = temp2;
					string temp3 = jabatan[i];
					jabatan[i] = jabatan[j];
					jabatan[j] = temp3;
					long long int temp4 = telp[i];
					telp[i] = telp[i+1];
					telp[j] = temp4;
				}
			}
		}
	
	cout << "Data berhasil diurutkan." << endl;
	for(int i = 0 ; i< jumlah ; i ++){
		cout << "+=================================+" << endl;
		cout << "|          DATA KARYAWAN          |" << endl;
		cout << "+=================================+" << endl;
		cout << "| ID       : " << id[i] << endl;
		cout << "| Nama     : " << nama[i] << endl;
		cout << "| Jabatan  : " << jabatan[i] << endl;
		cout << "| No. Telp : " << telp[i] << endl;
		
	}
		cout << endl;
}

	void urutDescending(){
		cout << "Mengurutkan karyawan secara Descending: "<< endl;
		for(int i = 0 ; i< jumlah-1;i++){
			for(int j = i + 1;j < jumlah;j++){
				if(id[i] < id[j]){
					int temp = id[i];
					id[i] = id[j];
					id[j] = temp;
					string temp2 = nama[i];
					nama[i] = nama[j];
					nama[j] = temp2;
					string temp3 = jabatan[i];
					jabatan[i] = jabatan[j];
					jabatan[j] = temp3;
					long long int temp4 = telp[i];
					telp[i] = telp[i+1];
					telp[j] = temp4;
				}
			}
		}
	
	cout << "Data berhasil diurutkan." << endl;
	for(int i = 0 ; i< jumlah ; i ++){
		cout << "+=================================+" << endl;
		cout << "|          DATA KARYAWAN          |" << endl;
		cout << "+=================================+" << endl;
		cout << "| ID       : " << id[i] << endl;
		cout << "| Nama     : " << nama[i] << endl;
		cout << "| Jabatan  : " << jabatan[i] << endl;
		cout << "| No. Telp : " << telp[i] << endl;
		
	}
		cout << endl;
	}
	void cariId(){
		int cari;
		bool kondisi = false;
		cout << "Masukkan ID yang dicari: ";
		cin >> cari;
		for(int i = 0;i < jumlah; i++){
			if(id[i] == cari){
		cout << "+=================================+" << endl;
		cout << "|          DATA KARYAWAN          |" << endl;
		cout << "+=================================+" << endl;
		cout << "| ID       : " << id[i] << endl;
		cout << "| Nama     : " << nama[i] << endl;
		cout << "| Jabatan  : " << jabatan[i] << endl;
		cout << "| No. Telp : " << telp[i] << endl;
		kondisi = true;
		}
}
if(!kondisi){
	cout << "Tidak Ditemukan" << endl;
}
}
};

int main(){
	karyawan kar;
	int pilihan;
	do{
		cout << "+=================================+" << endl;
		cout << "|          DATA KARYAWAN          |" << endl;
		cout << "+=================================+" << endl;
		cout << "|1. Input Data                    |" << endl;
		cout << "|2. Tampilkan data                |" << endl;
		cout << "|3. Sorting Secara Ascending      |" << endl;
		cout << "|4. Sorting Secara Descending     |" << endl;
		cout << "|5. Cari Data Berdasarkan ID      |" << endl;
		cout << "|6. Keluar                        |" << endl;
		cout << "+=================================+" << endl;
		cout << "Pilih menu: ";
		cin >> pilihan;
		
		switch(pilihan){
			case 1:
				kar.inputKaryawan();
				break;
			case 2:
				kar.tampilkanKaryawan();
				break;
			case 3:
				kar.urutAscending();
				break;
			case 4:
				kar.urutDescending();
				break;
			case 5:
				kar.cariId();
			break;
			case 6:
			cout << "Terimakasih" << endl;					
		}
	} while(pilihan != 6);
	
	return 0;
}
