"""
    count_nucleotides(strand)

The count of each nucleotide within `strand` as a dictionary.

Invalid strands raise a `DomainError`.

"""
function count_nucleotides(strand)
  protein_count = Dict('A'=> 0, 'C'=>0 , 'G'=>0, 'T'=>0);

  for i in 1:1:sizeof(strand)
    if(strand[i] == 'A')
      protein_count['A']+=1;
    
    elseif(strand[i] == 'C')
      protein_count['C']+=1;

    elseif(strand[i] == 'G')
      protein_count['G']+=1;

    elseif(strand[i] == 'T')
      protein_count['T']+=1;

    else
     throw(DomainError("Invalid nucleotide in strand"));
    end
  end
  return protein_count
end
