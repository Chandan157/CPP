

void printPermutations(string& str,int i){
    if(i>=str.length()){
        cout<<str<<" ";
        return;
    }

    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);
        printPermutations(str,i+1);
        swap(str[i],str[j]);
    }
}