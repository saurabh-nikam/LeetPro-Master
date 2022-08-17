class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        s = set()
        mos = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        
        for w in words:                    
            m = ''
            for l in w:                       
                m += mos[ord(l) - ord('a')] 
            s.add(m)                      
        
        return len(s)
        