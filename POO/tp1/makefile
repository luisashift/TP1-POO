CXX      = g++
CXXFLAGS = -Wall -Wextra -std=c++17
OBJ      = main.o unidade.o infantaria.o veiculo.o aeronave.o \
           exercito.o batalha.o campanha.o date.o

programa: $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o programa

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) programa