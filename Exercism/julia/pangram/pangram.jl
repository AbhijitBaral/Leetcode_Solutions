"""   
    ispangram(input)

Return `true` if `input` contains every alphabetic character (case insensitive).

"""
function ispangram(input)

  alphabet_count = Dict(p => false for p in 'a':'z');

  for car in lowercase(input)
    if haskey(alphabet_count, car)
      alphabet_count[car] = true;
    end
  end

  return(all(values(alphabet_count)));
end

