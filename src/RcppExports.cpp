// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// set_seed
void set_seed(double seed);
RcppExport SEXP _BEKKs_set_seed(SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type seed(seedSEXP);
    set_seed(seed);
    return R_NilValue;
END_RCPP
}
// elimination_mat
arma::mat elimination_mat(const int& n);
RcppExport SEXP _BEKKs_elimination_mat(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(elimination_mat(n));
    return rcpp_result_gen;
END_RCPP
}
// commutation_mat
arma::mat commutation_mat(const int& n);
RcppExport SEXP _BEKKs_commutation_mat(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(commutation_mat(n));
    return rcpp_result_gen;
END_RCPP
}
// duplication_mat
arma::mat duplication_mat(const int& n);
RcppExport SEXP _BEKKs_duplication_mat(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(duplication_mat(n));
    return rcpp_result_gen;
END_RCPP
}
// inv_gen
arma::mat inv_gen(const arma::mat& m);
RcppExport SEXP _BEKKs_inv_gen(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(inv_gen(m));
    return rcpp_result_gen;
END_RCPP
}
// valid_bekk
bool valid_bekk(arma::mat& C, arma::mat& A, arma::mat& G);
RcppExport SEXP _BEKKs_valid_bekk(SEXP CSEXP, SEXP ASEXP, SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(valid_bekk(C, A, G));
    return rcpp_result_gen;
END_RCPP
}
// valid_asymm_bekk
bool valid_asymm_bekk(arma::mat& C, arma::mat& A, arma::mat& B, arma::mat& G, arma::mat r, arma::mat signs);
RcppExport SEXP _BEKKs_valid_asymm_bekk(SEXP CSEXP, SEXP ASEXP, SEXP BSEXP, SEXP GSEXP, SEXP rSEXP, SEXP signsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type r(rSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type signs(signsSEXP);
    rcpp_result_gen = Rcpp::wrap(valid_asymm_bekk(C, A, B, G, r, signs));
    return rcpp_result_gen;
END_RCPP
}
// loglike_bekk
double loglike_bekk(const arma::vec& theta, const arma::mat& r);
RcppExport SEXP _BEKKs_loglike_bekk(SEXP thetaSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(loglike_bekk(theta, r));
    return rcpp_result_gen;
END_RCPP
}
// loglike_asymm_bekk
double loglike_asymm_bekk(const arma::vec& theta, const arma::mat& r, arma::mat& signs);
RcppExport SEXP _BEKKs_loglike_asymm_bekk(SEXP thetaSEXP, SEXP rSEXP, SEXP signsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type r(rSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type signs(signsSEXP);
    rcpp_result_gen = Rcpp::wrap(loglike_asymm_bekk(theta, r, signs));
    return rcpp_result_gen;
END_RCPP
}
// score_bekk
arma::mat score_bekk(const arma::mat& theta, arma::mat& r);
RcppExport SEXP _BEKKs_score_bekk(SEXP thetaSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(score_bekk(theta, r));
    return rcpp_result_gen;
END_RCPP
}
// score_asymm_bekk
arma::mat score_asymm_bekk(const arma::mat& theta, arma::mat& r, arma::mat& signs);
RcppExport SEXP _BEKKs_score_asymm_bekk(SEXP thetaSEXP, SEXP rSEXP, SEXP signsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type r(rSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type signs(signsSEXP);
    rcpp_result_gen = Rcpp::wrap(score_asymm_bekk(theta, r, signs));
    return rcpp_result_gen;
END_RCPP
}
// bhh_bekk
Rcpp::List bhh_bekk(arma::mat& r, const arma::mat& theta, int& max_iter, double& crit);
RcppExport SEXP _BEKKs_bhh_bekk(SEXP rSEXP, SEXP thetaSEXP, SEXP max_iterSEXP, SEXP critSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int& >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double& >::type crit(critSEXP);
    rcpp_result_gen = Rcpp::wrap(bhh_bekk(r, theta, max_iter, crit));
    return rcpp_result_gen;
END_RCPP
}
// bhh_asymm_bekk
Rcpp::List bhh_asymm_bekk(arma::mat& r, const arma::mat& theta, int& max_iter, double& crit, arma::mat& signs);
RcppExport SEXP _BEKKs_bhh_asymm_bekk(SEXP rSEXP, SEXP thetaSEXP, SEXP max_iterSEXP, SEXP critSEXP, SEXP signsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int& >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double& >::type crit(critSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type signs(signsSEXP);
    rcpp_result_gen = Rcpp::wrap(bhh_asymm_bekk(r, theta, max_iter, crit, signs));
    return rcpp_result_gen;
END_RCPP
}
// random_grid_search_BEKK
Rcpp::List random_grid_search_BEKK(arma::mat r);
RcppExport SEXP _BEKKs_random_grid_search_BEKK(SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(random_grid_search_BEKK(r));
    return rcpp_result_gen;
END_RCPP
}
// random_grid_search_asymmetric_BEKK
Rcpp::List random_grid_search_asymmetric_BEKK(arma::mat r, int seed, int nc, arma::mat signs);
RcppExport SEXP _BEKKs_random_grid_search_asymmetric_BEKK(SEXP rSEXP, SEXP seedSEXP, SEXP ncSEXP, SEXP signsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type nc(ncSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type signs(signsSEXP);
    rcpp_result_gen = Rcpp::wrap(random_grid_search_asymmetric_BEKK(r, seed, nc, signs));
    return rcpp_result_gen;
END_RCPP
}
// sigma_bekk
Rcpp::List sigma_bekk(arma::mat& r, arma::mat& C, arma::mat& A, arma::mat& G);
RcppExport SEXP _BEKKs_sigma_bekk(SEXP rSEXP, SEXP CSEXP, SEXP ASEXP, SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type r(rSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(sigma_bekk(r, C, A, G));
    return rcpp_result_gen;
END_RCPP
}
// sigma_bekk_asymm
Rcpp::List sigma_bekk_asymm(arma::mat& r, arma::mat& C, arma::mat& A, arma::mat& B, arma::mat& G, arma::mat signs);
RcppExport SEXP _BEKKs_sigma_bekk_asymm(SEXP rSEXP, SEXP CSEXP, SEXP ASEXP, SEXP BSEXP, SEXP GSEXP, SEXP signsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type r(rSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type signs(signsSEXP);
    rcpp_result_gen = Rcpp::wrap(sigma_bekk_asymm(r, C, A, B, G, signs));
    return rcpp_result_gen;
END_RCPP
}
// hesse_bekk
arma::mat hesse_bekk(arma::mat theta, arma::mat r);
RcppExport SEXP _BEKKs_hesse_bekk(SEXP thetaSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(hesse_bekk(theta, r));
    return rcpp_result_gen;
END_RCPP
}
// hesse_asymm_bekk
arma::mat hesse_asymm_bekk(arma::mat theta, arma::mat r, arma::mat& signs);
RcppExport SEXP _BEKKs_hesse_asymm_bekk(SEXP thetaSEXP, SEXP rSEXP, SEXP signsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type r(rSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type signs(signsSEXP);
    rcpp_result_gen = Rcpp::wrap(hesse_asymm_bekk(theta, r, signs));
    return rcpp_result_gen;
END_RCPP
}
// eigen_value_decomposition
arma::mat eigen_value_decomposition(arma::mat& A);
RcppExport SEXP _BEKKs_eigen_value_decomposition(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(eigen_value_decomposition(A));
    return rcpp_result_gen;
END_RCPP
}
// simulate_bekk_c
arma::mat simulate_bekk_c(arma::vec theta, const int NoObs, const int n);
RcppExport SEXP _BEKKs_simulate_bekk_c(SEXP thetaSEXP, SEXP NoObsSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const int >::type NoObs(NoObsSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(simulate_bekk_c(theta, NoObs, n));
    return rcpp_result_gen;
END_RCPP
}
// simulate_bekka_c
arma::mat simulate_bekka_c(arma::vec theta, const int NoObs, const int n, arma::vec signs);
RcppExport SEXP _BEKKs_simulate_bekka_c(SEXP thetaSEXP, SEXP NoObsSEXP, SEXP nSEXP, SEXP signsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const int >::type NoObs(NoObsSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type signs(signsSEXP);
    rcpp_result_gen = Rcpp::wrap(simulate_bekka_c(theta, NoObs, n, signs));
    return rcpp_result_gen;
END_RCPP
}
// SigmaLagCr
arma::mat SigmaLagCr(arma::mat y, int Tob, int q, int p, double ucvar);
RcppExport SEXP _BEKKs_SigmaLagCr(SEXP ySEXP, SEXP TobSEXP, SEXP qSEXP, SEXP pSEXP, SEXP ucvarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type Tob(TobSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type ucvar(ucvarSEXP);
    rcpp_result_gen = Rcpp::wrap(SigmaLagCr(y, Tob, q, p, ucvar));
    return rcpp_result_gen;
END_RCPP
}
// GarchVariance
arma::mat GarchVariance(int Tob, int q, int p, double ucvar, arma::mat theta, arma::mat Z);
RcppExport SEXP _BEKKs_GarchVariance(SEXP TobSEXP, SEXP qSEXP, SEXP pSEXP, SEXP ucvarSEXP, SEXP thetaSEXP, SEXP ZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type Tob(TobSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type ucvar(ucvarSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    rcpp_result_gen = Rcpp::wrap(GarchVariance(Tob, q, p, ucvar, theta, Z));
    return rcpp_result_gen;
END_RCPP
}
// ScoreGarch
arma::mat ScoreGarch(arma::mat epsilon2, arma::mat Z, int Tob, int q, int p, arma::mat theta, double ucvar);
RcppExport SEXP _BEKKs_ScoreGarch(SEXP epsilon2SEXP, SEXP ZSEXP, SEXP TobSEXP, SEXP qSEXP, SEXP pSEXP, SEXP thetaSEXP, SEXP ucvarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type epsilon2(epsilon2SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< int >::type Tob(TobSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type ucvar(ucvarSEXP);
    rcpp_result_gen = Rcpp::wrap(ScoreGarch(epsilon2, Z, Tob, q, p, theta, ucvar));
    return rcpp_result_gen;
END_RCPP
}
// LikelihoodGarch
double LikelihoodGarch(arma::mat Z, int Tob, int q, int p, arma::mat theta, arma::mat epsilon2, double ucvar);
RcppExport SEXP _BEKKs_LikelihoodGarch(SEXP ZSEXP, SEXP TobSEXP, SEXP qSEXP, SEXP pSEXP, SEXP thetaSEXP, SEXP epsilon2SEXP, SEXP ucvarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< int >::type Tob(TobSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type epsilon2(epsilon2SEXP);
    Rcpp::traits::input_parameter< double >::type ucvar(ucvarSEXP);
    rcpp_result_gen = Rcpp::wrap(LikelihoodGarch(Z, Tob, q, p, theta, epsilon2, ucvar));
    return rcpp_result_gen;
END_RCPP
}
// BhhhGarch
arma::vec BhhhGarch(arma::mat r2, int q, int p, arma::mat theta, arma::mat epsilon2, arma::mat Z, int Tob, int max_iter, double crit, double ucvar);
RcppExport SEXP _BEKKs_BhhhGarch(SEXP r2SEXP, SEXP qSEXP, SEXP pSEXP, SEXP thetaSEXP, SEXP epsilon2SEXP, SEXP ZSEXP, SEXP TobSEXP, SEXP max_iterSEXP, SEXP critSEXP, SEXP ucvarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type r2(r2SEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type epsilon2(epsilon2SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< int >::type Tob(TobSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type crit(critSEXP);
    Rcpp::traits::input_parameter< double >::type ucvar(ucvarSEXP);
    rcpp_result_gen = Rcpp::wrap(BhhhGarch(r2, q, p, theta, epsilon2, Z, Tob, max_iter, crit, ucvar));
    return rcpp_result_gen;
END_RCPP
}
// indicatorFunction
inline int indicatorFunction(arma::mat r, arma::mat signs);
RcppExport SEXP _BEKKs_indicatorFunction(SEXP rSEXP, SEXP signsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type r(rSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type signs(signsSEXP);
    rcpp_result_gen = Rcpp::wrap(indicatorFunction(r, signs));
    return rcpp_result_gen;
END_RCPP
}
// valid_scalar_bekk
bool valid_scalar_bekk(double a, double b);
RcppExport SEXP _BEKKs_valid_scalar_bekk(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(valid_scalar_bekk(a, b));
    return rcpp_result_gen;
END_RCPP
}
// loglike_scalar_bekk
double loglike_scalar_bekk(const arma::vec& theta, const arma::mat& r);
RcppExport SEXP _BEKKs_loglike_scalar_bekk(SEXP thetaSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(loglike_scalar_bekk(theta, r));
    return rcpp_result_gen;
END_RCPP
}
// score_scalar_bekk
arma::mat score_scalar_bekk(const arma::mat& theta, arma::mat& r);
RcppExport SEXP _BEKKs_score_scalar_bekk(SEXP thetaSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(score_scalar_bekk(theta, r));
    return rcpp_result_gen;
END_RCPP
}
// bhh_scalar_bekk
Rcpp::List bhh_scalar_bekk(arma::mat& r, const arma::mat& theta, int& max_iter, double& crit);
RcppExport SEXP _BEKKs_bhh_scalar_bekk(SEXP rSEXP, SEXP thetaSEXP, SEXP max_iterSEXP, SEXP critSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int& >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double& >::type crit(critSEXP);
    rcpp_result_gen = Rcpp::wrap(bhh_scalar_bekk(r, theta, max_iter, crit));
    return rcpp_result_gen;
END_RCPP
}
// hesse_scalar_bekk
arma::mat hesse_scalar_bekk(arma::mat theta, arma::mat r);
RcppExport SEXP _BEKKs_hesse_scalar_bekk(SEXP thetaSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(hesse_scalar_bekk(theta, r));
    return rcpp_result_gen;
END_RCPP
}
// YLagCr
arma::mat YLagCr(arma::mat y, int p);
RcppExport SEXP _BEKKs_YLagCr(SEXP ySEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(YLagCr(y, p));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BEKKs_set_seed", (DL_FUNC) &_BEKKs_set_seed, 1},
    {"_BEKKs_elimination_mat", (DL_FUNC) &_BEKKs_elimination_mat, 1},
    {"_BEKKs_commutation_mat", (DL_FUNC) &_BEKKs_commutation_mat, 1},
    {"_BEKKs_duplication_mat", (DL_FUNC) &_BEKKs_duplication_mat, 1},
    {"_BEKKs_inv_gen", (DL_FUNC) &_BEKKs_inv_gen, 1},
    {"_BEKKs_valid_bekk", (DL_FUNC) &_BEKKs_valid_bekk, 3},
    {"_BEKKs_valid_asymm_bekk", (DL_FUNC) &_BEKKs_valid_asymm_bekk, 6},
    {"_BEKKs_loglike_bekk", (DL_FUNC) &_BEKKs_loglike_bekk, 2},
    {"_BEKKs_loglike_asymm_bekk", (DL_FUNC) &_BEKKs_loglike_asymm_bekk, 3},
    {"_BEKKs_score_bekk", (DL_FUNC) &_BEKKs_score_bekk, 2},
    {"_BEKKs_score_asymm_bekk", (DL_FUNC) &_BEKKs_score_asymm_bekk, 3},
    {"_BEKKs_bhh_bekk", (DL_FUNC) &_BEKKs_bhh_bekk, 4},
    {"_BEKKs_bhh_asymm_bekk", (DL_FUNC) &_BEKKs_bhh_asymm_bekk, 5},
    {"_BEKKs_random_grid_search_BEKK", (DL_FUNC) &_BEKKs_random_grid_search_BEKK, 1},
    {"_BEKKs_random_grid_search_asymmetric_BEKK", (DL_FUNC) &_BEKKs_random_grid_search_asymmetric_BEKK, 4},
    {"_BEKKs_sigma_bekk", (DL_FUNC) &_BEKKs_sigma_bekk, 4},
    {"_BEKKs_sigma_bekk_asymm", (DL_FUNC) &_BEKKs_sigma_bekk_asymm, 6},
    {"_BEKKs_hesse_bekk", (DL_FUNC) &_BEKKs_hesse_bekk, 2},
    {"_BEKKs_hesse_asymm_bekk", (DL_FUNC) &_BEKKs_hesse_asymm_bekk, 3},
    {"_BEKKs_eigen_value_decomposition", (DL_FUNC) &_BEKKs_eigen_value_decomposition, 1},
    {"_BEKKs_simulate_bekk_c", (DL_FUNC) &_BEKKs_simulate_bekk_c, 3},
    {"_BEKKs_simulate_bekka_c", (DL_FUNC) &_BEKKs_simulate_bekka_c, 4},
    {"_BEKKs_SigmaLagCr", (DL_FUNC) &_BEKKs_SigmaLagCr, 5},
    {"_BEKKs_GarchVariance", (DL_FUNC) &_BEKKs_GarchVariance, 6},
    {"_BEKKs_ScoreGarch", (DL_FUNC) &_BEKKs_ScoreGarch, 7},
    {"_BEKKs_LikelihoodGarch", (DL_FUNC) &_BEKKs_LikelihoodGarch, 7},
    {"_BEKKs_BhhhGarch", (DL_FUNC) &_BEKKs_BhhhGarch, 10},
    {"_BEKKs_indicatorFunction", (DL_FUNC) &_BEKKs_indicatorFunction, 2},
    {"_BEKKs_valid_scalar_bekk", (DL_FUNC) &_BEKKs_valid_scalar_bekk, 2},
    {"_BEKKs_loglike_scalar_bekk", (DL_FUNC) &_BEKKs_loglike_scalar_bekk, 2},
    {"_BEKKs_score_scalar_bekk", (DL_FUNC) &_BEKKs_score_scalar_bekk, 2},
    {"_BEKKs_bhh_scalar_bekk", (DL_FUNC) &_BEKKs_bhh_scalar_bekk, 4},
    {"_BEKKs_hesse_scalar_bekk", (DL_FUNC) &_BEKKs_hesse_scalar_bekk, 2},
    {"_BEKKs_YLagCr", (DL_FUNC) &_BEKKs_YLagCr, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_BEKKs(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
