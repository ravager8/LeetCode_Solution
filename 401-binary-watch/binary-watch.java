class Solution {
    public List<String> readBinaryWatch(int turnedOn) {

        List<String> result = new ArrayList<>();
        if(turnedOn>8) return result;

        for(int hour=0;hour<12;hour++){
            for(int minute=0;minute<60;minute++){
                int bitCount = Integer.bitCount(hour)+Integer.bitCount(minute);
                if(bitCount == turnedOn){
                    String time = hour + ":" + (minute < 10 ? "0" + minute : minute);
                    result.add(time);
                }
            }
        }

        return result;

    }
}