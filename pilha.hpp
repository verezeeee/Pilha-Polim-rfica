#include <iostream>
using namespace std;

template<class T>
class Pilha{
    private:
        T* _arr;
        int _topo;
        int _max_tam;
    public:
        Pilha(int tam){
            _arr = new T[tam];
            _max_tam = tam;
            _topo = -1;
        }
        ~Pilha(){
            delete[] _arr;
        }
        bool push(T val){
            if(_topo < _max_tam - 1){
                _arr[++_topo] = val;
                return true;
            }
            return false;
        }
        bool pop(T& val){
            if(_topo >= 0){
                val = _arr[_topo--];
                return true;
            }
            return false;
        }
        bool get_maior(T& val){
            if(_topo >= 0){
                val = _arr[0];
                for(int i = 1; i <= _topo; i++){
                    if(_arr[i] > val){
                        val = _arr[i];
                    }
                }
                return true;
            }
            return false;
        }

        bool vazia(){
            return _topo == -1;
        }
        void print(){
            for(int i = 0; i <= _topo; i++){
                cout << _arr[i] << endl;
            }
        }
};