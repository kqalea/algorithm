#include<cstdlib>
#include<vector>
#include<algorithm>
#include<ctime>
class QuickSoft{

	public:
		std::vector<int> array;
		QuickSoft(int size);
		~QuickSoft();
		void test();
	private:
		void genArray(int size);
		void softArray(int left, int right);
};

QuickSoft::QuickSoft(int size){
	if(size > 1){
		genArray(size);
	}else{
		return;
	}
}
QuickSoft::~QuickSoft(){
	this->array.clear();
}

void QuickSoft::genArray(int size){
	std::srand(std::time(0));
	for(int i=0; i < size; i++){
		int x = std::rand() % 100;
		this->array.push_back(x);
	}
}
void QuickSoft::softArray(int left, int right){
	int i = left, j = right;
	int mid = array[(left+right)/2];

	while(i <= j){
		while(array[i] < mid)
			i++;
		while(array[j] > mid)
			j--;
		if(i <= j){
			std::swap(array[i], array[j]);
			i++;
			j--;
		}
	}
	if(left < j)
		QuickSoft::softArray(left,j);
	if(i < right)
		QuickSoft::softArray(i,right);
}

void QuickSoft::test(){
	QuickSoft::softArray(0, this->array.size()-1);
}
