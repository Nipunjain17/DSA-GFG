
string to_upper(string str) {
    for(int i=0; i<str.size(); i++){
        str[i] = str[i] - 'a' + 'A';
    }
    return str;
}