#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; ++i) materials[i] = NULL;
}

MateriaSource::~MateriaSource() {
}

void MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; ++i) {
		if (materials[i] == NULL) {
			materials[i] = m;
			return;
		}
	}
	std::cout << "Can't learn new materials!" << std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; ++i) {
		if (materials[i] != NULL && materials[i]->getType() == type)
			return materials[i]->clone();
	}
	return NULL;
}