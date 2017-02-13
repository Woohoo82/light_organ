void printInputData(){
    for (int i = 0 ; i < FFT_N*2 ; i += 2) {
      Serial.write(fft_input[i]); // send out the data
      //Serial.write(" ");
    }
    Serial.write("\n");
}

void printOutputData(){
    for (int i = 0 ; i < FFT_N/2 ; i++) {
      Serial.write(fft_log_out[i]); // send out the data
      //Serial.write(" ");
    }
    Serial.write("\n");
}

