void ChangeNumber(vector <int>& vector_first) {
    vector <int> ivec(vector_first.size());
    for (int i = 0; i < ivec.size(); i++) {
        ivec.at(i) = vector_first.at(ivec.size()-1-i);
    }
    vector_first = ivec;
}
