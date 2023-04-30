void Stampa_diagonale_Secondaria(int** M, int n){
    cout << "Diagonale secondaria: ";
    for(int i = 0; i < n; i++) {
        cout << M[i][n - 1 - i] << " ";
    }
    cout << endl << endl;
}