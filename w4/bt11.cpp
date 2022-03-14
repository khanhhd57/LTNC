string pigLatin(string word){
	if ( word[0] == 'u' || word[0] == 'e' || word[0] == 'o' || word[0] == 'a' || word[0] == 'i'){
		word += "way";
		return word;
	}
	else {
		word += word[0];
		word += "ay";
		word.erase(0,1);
		return word;
	}
}
