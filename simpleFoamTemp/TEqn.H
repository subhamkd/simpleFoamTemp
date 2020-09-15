    // Momentum predictor
fvScalarMatrix TEqn
(
fvm::div(phi,T)
- fvm::laplacian(DT,T)
    );
TEqn.relax();
TEqn.solve();