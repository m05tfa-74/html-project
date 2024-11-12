#include <iostream>

double calculateLs(double lambda, double mu) {
    return lambda / (mu - lambda);
}

double calculateLq(double lambda, double mu) {
    return (lambda * lambda) / (mu * (mu - lambda));
}

double calculateWs(double lambda, double mu) {
    return 1 / (mu - lambda);
}

double calculateWq(double lambda, double mu) {
    return lambda / (mu * (mu - lambda));
}

int main() {
    double lambda, mu;
    
    std::cout << "Enter arrival rate (lambda): ";
    std::cin >> lambda;
    
    std::cout << "Enter service rate (mu): ";
    std::cin >> mu;
    
    double Ls = calculateLs(lambda, mu);
    double Lq = calculateLq(lambda, mu);
    double Ws = calculateWs(lambda, mu);
    double Wq = calculateWq(lambda, mu);
    
    std::cout << "Ls: " << Ls << std::endl;
    std::cout << "Lq: " << Lq << std::endl;
    std::cout << "Ws: " << Ws << std::endl;
    std::cout << "Wq: " << Wq << std::endl;

    return 0;
}
