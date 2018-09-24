# Competitive Programming
## Recordatorio de cosas que siempre olvido...
* Como sumar o restar N desde un índice en un arreglo sin salir de memoria
```cpp
for(int i=0;i<n;i++)
  if(i==posQueQuiero)
    i=(i+array.size()+-N)%array.size();
```
* Obtener la posición del min/max_element() en un arreglo o vector
```cpp
int v[n]={...}
int pos_max=max_element(v,v+n)-v;
//si es un vector
int pos_max=max_element(v.begin(),v.end())-v.begin();
```
* No agregar elementos repetidos en un set o algo
```cpp
set<int> st;
cin>>a;
if(!st.count(a))
  st.insert(a);
```
* Obtener dígitos de un número
```cpp
while(num){
  int dig=num%10;
  num=num/10;
}
```
