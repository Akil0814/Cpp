//STL sort
#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
#include<functional>
using  namespace std;

template<typename T>
bool compasc(const T& left,const T& right)//用于升序
{
    return left<right;//效果相同

    // if(left<right)
    //     return true;
    // return false;
}

template<typename T>
bool compdesc(const T& left,const T& right)//用于降序
{

    return left>right;

    // if(left>right)
    //     return true;
    // return false;
}

template<typename T>
struct _less//结构体模板
{
	bool operator()(const T& left, const T& right) { // 仿函数，用于升序。
		return left < right;
	}
};

template<typename T>
class _greater//类模板
{
public:
	bool operator()(const T& left, const T& right){ // 仿函数，用于降序。
		return left > right;
	}
};

template<typename T,typename compear>
void bsort(const T first,const T last,compear comp)
{
    while(true)
    {
        bool bswap=false;   //
        for(auto it=first;;)
        {
            auto left=it;//左边元素的位置
            it++;
            auto right=it;//右边元素位置
            if(right==last)
                break;

            //if(*left>*right)
            //如果comp返回true left排在前面，否则right排在前面
            if(comp(*left,*right)==true)
                continue;
                auto tmp=*right;
                *right=*left;
                *left=tmp;
                bswap=true;
        }

        if(bswap==false)//如果在for循环中不曾交换过元素，说明全部元素已经有序
            break;//退出循环
    }
}


int main()
{
    vector<int>num={3,5,7,9,6,4,2,1,8};
    //list<string>num={"02","03","01","06","09","05","08","07","04",};

    //bsort(num.begin(),num.end(),compasc<int>);
                              //定义排序方式

    //bsort(num.begin(),num.end(),_greater<int>());
                            //使用仿函数//()表示创建匿名对象

    bsort(num.begin(),num.end(),greater<int>());
                                //stl提供的仿函数



    for(auto val:num)
        cout<<val<<" ";
    cout<<endl;

    return 0;
}
