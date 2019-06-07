class Solution {
public:
	int uniqueMorseRepresentations(vector<string>& words) {
		vector<string> code_table = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
		vector<string> word_combine;
		for (int i = 0; i<words.size(); i++)
		{
			string s;
			cout << i << endl;
			//cout<<words.size();
			string word = words[i];
			for (int j=0; j<word.length(); j++)
			{
				//cout<<words[i].length()<<endl;
				//int ddd = int(word[j]) - 96;
				//string e = code_table[int(word[j]) - 97];
				//cout << code_table[int(word[j]) - 97] << " ";
				s += code_table[int(word[j]) - 97];
			}
			//cout << s << endl;
			int flag=0;
			for (int k = 0; k < word_combine.size(); k++)
			{
				if (s == word_combine[k])
				{
					flag = 1;
					break;
				}
			}
			if(flag==0)word_combine.push_back(s);
		}
		return word_combine.size();
	}
};
