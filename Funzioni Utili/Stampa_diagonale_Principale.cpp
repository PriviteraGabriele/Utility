void Stampa_diagonale_Principale(int** M, int n){
    cout << "Diagonale principale: ";
    for(int i = 0; i < n; i++) {
        cout << M[i][i] << " ";
    }
    cout << endl << endl;
}