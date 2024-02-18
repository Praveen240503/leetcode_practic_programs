class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
        int time=1;
        while (memory1 - time >= 0 || memory2 - time >= 0){
            if(memory1 >= memory2 ) {
                memory1 -= time;
            }
            else { 
                memory2 -= time;
            }
            time++;
        }
        return {time, memory1, memory2};
    }
};