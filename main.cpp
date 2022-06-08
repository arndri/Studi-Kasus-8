#include <iostream>
using namespace std;

class dimensi{
  private:
  string buku[3][12];
  int kode[12];
  int jumlah_data,temp;
  string temp1,temp2,temp3;
  public:
  void input();
  void proses();
  void output();
  void bubblesort();
};

void dimensi::input(){
  cout<<"Masukkan Jumlah Data : ";
  cin>>jumlah_data;
  for(int i=0;i<jumlah_data;i++){
    for(int j=0;j<3;j++){
      if(j==0){
        cout<<"Masukkan Jenis Buku : ";
        cin>>buku[i][j];
      }
      else if(j==1){
        cout<<"Masukkan Kode Buku : ";
        cin>>buku[i][j];
        cin>>kode[i];
      }
      else if(j==2){
        cout<<"Masukkan Judul Buku : ";
        cin.ignore();
        getline(cin,buku[i][j]);
      }
    }
  }
  for(int i=0;i<jumlah_data;i++){
    for(int j=0;j<3;j++){
      cout<<buku[i][j]<<" ";
      }
    cout<<endl;
    }
}

void dimensi::bubblesort(){
  for(int i=0; i<jumlah_data; i++){
    for(int j=0; j<jumlah_data-i-1; j++){
      if(kode[j]>kode[j+1]){
        //kode
        temp = kode[j];
        kode[j]=kode[j+1];
        kode[j+1]=temp;

        temp1=buku[j][0];
        buku[j][0]=buku[j+1][0];
        buku[j+1][0]=temp1;

        temp2=buku[j][1];
        buku[j][1]=buku[j+1][1];
        buku[j+1][1]=temp2;

        temp3=buku[j][2];
        buku[j][2]=buku[j+1][2];
        buku[j+1][2]=temp3;
        
      }
    }
  }
  
  
}

void dimensi::proses(){
  bubblesort();
}

void dimensi::output(){
  for(int i=0;i<jumlah_data;i++){
    cout<<kode[i]<<" ";
  }
  cout<<"-------------------------------------------------"<<endl;
  cout<<"Jenis Buku\t|"<<"Kode Buku\t|"<<"Judul Buku\t|"<<endl;
  cout<<"-------------------------------------------------"<<endl;
  for(int i=0;i<jumlah_data;i++){
    for(int j=0;j<3;j++){
      cout<<buku[i][j]<<"\t\t |";
      }
    cout<<endl;
    }
}


int main() {
  dimensi a;
  a.input();
  a.proses();
  a.output();
}