// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// filter_base
void filter_base(const NumericMatrix& data, unsigned int stepno, int mode_);
RcppExport SEXP _netboost_filter_base(SEXP dataSEXP, SEXP stepnoSEXP, SEXP mode_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type stepno(stepnoSEXP);
    Rcpp::traits::input_parameter< int >::type mode_(mode_SEXP);
    filter_base(data, stepno, mode_);
    return R_NilValue;
END_RCPP
}
// filter_end
void filter_end();
RcppExport SEXP _netboost_filter_end() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    filter_end();
    return R_NilValue;
END_RCPP
}
// rcpp_filter_step
IntegerVector rcpp_filter_step(size_t col_y);
RcppExport SEXP _netboost_rcpp_filter_step(SEXP col_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< size_t >::type col_y(col_ySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_filter_step(col_y));
    return rcpp_result_gen;
END_RCPP
}
// dist_tom
NumericVector dist_tom(const IntegerMatrix& filter, const NumericVector& adjacency);
RcppExport SEXP _netboost_dist_tom(SEXP filterSEXP, SEXP adjacencySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type adjacency(adjacencySEXP);
    rcpp_result_gen = Rcpp::wrap(dist_tom(filter, adjacency));
    return rcpp_result_gen;
END_RCPP
}
// tree_search
Rcpp::List tree_search(const IntegerMatrix& netboost_forest);
RcppExport SEXP _netboost_tree_search(SEXP netboost_forestSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type netboost_forest(netboost_forestSEXP);
    rcpp_result_gen = Rcpp::wrap(tree_search(netboost_forest));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_netboost_filter_base", (DL_FUNC) &_netboost_filter_base, 3},
    {"_netboost_filter_end", (DL_FUNC) &_netboost_filter_end, 0},
    {"_netboost_rcpp_filter_step", (DL_FUNC) &_netboost_rcpp_filter_step, 1},
    {"_netboost_dist_tom", (DL_FUNC) &_netboost_dist_tom, 2},
    {"_netboost_tree_search", (DL_FUNC) &_netboost_tree_search, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_netboost(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
