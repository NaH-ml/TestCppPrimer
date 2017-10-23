
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std ;
class M_Vector{
private:
    // Ԫ����
    
    //��̬���� vector
    vector<int> V ;

public:

    M_Vector(int* A)
    {
        //ѭ������
        for (int i = 0; i < 10; i++) {
            //push_back β��
            V.push_back(A[i]);
        }
    }

public:
    void Test1();
    // 4������Ԫ�أ�  V.insert(V.begin()+i,a); //�ڵ�i+1��Ԫ��ǰ�����a
    void inset(int i ,int a );
    // 5��ɾ��Ԫ�أ�vec.erase(vec.begin()+i); //ɾ����i+1��Ԫ��
    void erase(int i );
    // 6, ��vector�ĳ��ȣ�V.size();
    int size();
    // 7,���� algorithm��
    void vecsort();

    void Test2();
    void Test3();
};


int main() {
	//int A[10] = {9,5,8,6,4,2,3,7,2,1};
    // M_Vector *m_vector = new M_Vector(A);
	
    // m_vector->vecsort();
    //m_vector->Test1();

    //m_vector->Test2();
    m_vector->Test3();
    return 0;
}

void M_Vector::Test1()
{
    // ����������
    for (vector<int>::iterator iter = V.begin(); iter != V.end() ; iter ++ )
    {
        //  *p ָ�������ֵ
        cout<<  *iter <<endl;
    }
}

void M_Vector::inset(int i, int a) {
    V.insert(V.begin()+i,a);
}

void M_Vector::erase(int i) {
    V.erase(V.begin()+i);
}

int M_Vector::size() {
    return V.size();
}

void M_Vector::vecsort() {
    sort(V.begin(),V.end());
}


void M_Vector::Test2() {

    vector<int> a ;                                //����һ��int������a
    vector<int> b(10) ;                            //����һ����ʼ��СΪ10������
    vector<int> c(10, 1) ;                         //����һ����ʼ��СΪ10�ҳ�ʼֵ��Ϊ1������
    vector<int> d(a) ;                             //������������a��ʼ������d
    vector<int> e(a.begin(), a.begin()+3) ;        //��a�����дӵ�0������2��(��3��)��Ϊ����b�ĳ�ʼֵ

    // ����֮��, ������ֱ��ʹ����������ʼ������:

    int n[] = {1, 2, 3, 4, 5} ;
    vector<int> f(n, n+5) ;              //������n��ǰ5��Ԫ����Ϊ����a�ĳ�ֵ
    vector<int> g(&n[1], &n[4]) ;        //��n[1] - n[4]��Χ�ڵ�Ԫ����Ϊ����a�ĳ�ֵ

    // ����
    // �����õ�������������������ͨ�ķ�ʽ
    for(int i=0; i<a.size(); i++)
         cout<<n[i]<<" " ;

       a.size();    //��ȡ�����е�Ԫ�ظ���
       a.empty();   //�ж������Ƿ�Ϊ��
       a.clear();  //��������е�Ԫ��

    /*
     *   4> ����
     */
        a = b ;            //��b�������Ƶ�a������

    /*   5> �Ƚ�
     *   ���� ==��!=��>��>=��<��<= �Ĺ��к��� ;
     *   ��: a == b ;    //a������b�����Ƚ�, ����򷵻�1
     */


     /*
     * 6>. ���� - insert
     *      �١� a.insert(a.begin(), 1000);            //��1000���뵽����a����ʼλ��ǰ
     *
     *      �ڡ� a.insert(a.begin(), 3, 1000) ;        //��1000�ֱ���뵽����Ԫ��λ�õ�0-2��(��3��Ԫ��)
     *
     *      �ۡ� vector<int> a(5, 1) ;
     *      vector<int> b(10) ;
     *      b.insert(b.begin(), a.begin(), a.end()) ;        //��a.begin(), a.end()֮���ȫ��Ԫ�ز��뵽b.begin()ǰ
     *
     *  7>. ɾ�� - erase
     *  �١� b.erase(b.begin()) ;                     //����ʼλ�õ�Ԫ��ɾ��
     *  �ڡ� b.erase(b.begin(), b.begin()+3) ;        //��(b.begin(), b.begin()+3)֮���Ԫ��ɾ��
     *
     *  8>. ���� - swap
     *  b.swap(a) ;            //a������b�������н���
    */

}


void M_Vector::Test3() {
    vector< vector<int> > b(10, vector<int>(5));        //����һ��10*5��int�Ͷ�ά����

    /*
     * ��ҵ : д�� ������ά����ķ���
     * */
    //����������
    for (vector<int>::iterator iter = b.begin(); iter != b.end() ; iter ++ )
    {
        cout<<  *iter <<endl;
		for (vector<int>::iterator iter_2 = (*iter).begin; iter_2 != (*iter).end(); iter_2++)
		{
			cout << *iter_2 << endl;
		}*/ 
    }

	//����ѭ��������
	int row = b.size();
	int collor = b[0].size();
	cout << row << endl << collor << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < collor; j++)
		{
			cout << b[i][j];
		}
		cout << endl;
	}

}
