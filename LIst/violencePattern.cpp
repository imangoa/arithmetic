int Index(SString S,SString T){
    int k=1;
    int i=k;
    int j=1;
    while(i<=S.length&&j<=T.length){
        if(S.ch[i]==T.ch[j]){
            ++i;
            ++j;
        }else{
            k++;
            i=k;
            j=1;
        }
    }
    if(j>T.length)
        return k;
    else
        return 0;
}


int Index_KMP(SString S,SString T,int next[]){
    int i=1;
    int j=1;
    while(i<=S.length&&j<=T.length){
        //继续比较后续的字符
        if(j==0||S.ch[i]==T.ch[i]){
            i++;
            j++;
        }else
        //只回溯模式串，不回溯主串，以降低时间开销
            j=next[j];
    }
    if(j>T.length)
        //匹配成功
        return i-T.length;
    else
        return 0;
}


