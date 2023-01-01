all:
	g++ ./cpp/main.cpp ./cpp/consulta.cpp ./cpp/consultorio.cpp ./cpp/data.cpp ./cpp/listaconsulta.cpp ./cpp/listamedico.cpp ./cpp/listapaciente.cpp ./cpp/medico.cpp ./cpp/paciente.cpp ./cpp/Pessoa.cpp ./hpp/consulta.hpp ./hpp/consultorio.hpp ./hpp/data.hpp ./hpp/listaconsulta.hpp ./hpp/listamedico.hpp ./hpp/listapaciente.hpp ./hpp/medico.hpp ./hpp/paciente.hpp ./hpp/Pessoa.hpp -o executavel

clean:
	rm -rf executavel

run:
	./executavel