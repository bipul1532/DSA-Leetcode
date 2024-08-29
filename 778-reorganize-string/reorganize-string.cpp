class Solution {
public:
    string reorganizeString(string s) {
        //store value to count freq
        int hash[26]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
        }

        //find most occurence chracter
        char most_occ_char;
        int maxfreq=INT_MIN;
        for(int i=0;i<26;i++){
            if(hash[i]>maxfreq){
                maxfreq=hash[i];
                most_occ_char=i+'a';
            }
        }
        //firstly placing maxfrequency character
        int index=0;
        while(maxfreq>0 && index<s.size()){
            s[index]=most_occ_char;
            maxfreq--;
            index += 2;
        }
        if(maxfreq!=0){
            return"";
        }
        hash[most_occ_char-'a']=0;
        //if maximum occ char placed in one go then
        for(int i=0;i<26;i++){
            while(hash[i]>0){
                //this is short way to write if else
                // index = index>=s.size() ? 1 : index;
                if (index >= s.size()) {
                    index = 1;
                }
                s[index]=i+'a';
                hash[i]--;
                index += 2;
            }
        }
        return s;
    }
};