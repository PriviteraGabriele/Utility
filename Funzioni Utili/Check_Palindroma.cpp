bool Check_Palindroma(string s){
    string p = "";
    for(int i = 0; i < s.length(); i++){
        p = s[i] + p;
    }
    return p == s;
}