#include "machine.h"

int Machine::AddCode(int code_idx){
  long long op_bits = GetBits(code_idx);
  int op_nrbits = GetNrBits(code_idx);

  if(nr_current_bits_ + op_nrbits > max_bits_){
    return 0;
  }

  code_bits_ = (code_bits_ & ((1ULL << nr_current_bits_) - 1)) | (op_bits << nr_current_bits_);

  nr_current_bits_ += op_nrbits;

  return op_nrbits;
}

void Machine::DelCode(int nr_bits){
  nr_current_bits_ -= nr_bits;
}

