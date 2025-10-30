string merge (string s1, string s2){
    int i =0,j=0;
    string res;
    
    while(i<s1.length() && j<s2.length()){
        res+=s1[i];
        res+= s2[j];
        i++;
        j++;
    }
    while(i<s1.length()){
        res += s1[i];
        i++;
    }
    while(j<s2.length()){
        res += s2[j];
        j++;
    }
    return res;
}

