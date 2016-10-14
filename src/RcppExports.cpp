// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// anat_summary
List anat_summary(CharacterVector filenames, IntegerVector atlas, std::string method);
RcppExport SEXP RMINC_anat_summary(SEXP filenamesSEXP, SEXP atlasSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type filenames(filenamesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type atlas(atlasSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(anat_summary(filenames, atlas, method));
    return rcpp_result_gen;
END_RCPP
}
// count_labels
NumericMatrix count_labels(CharacterVector filenames);
RcppExport SEXP RMINC_count_labels(SEXP filenamesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type filenames(filenamesSEXP);
    rcpp_result_gen = Rcpp::wrap(count_labels(filenames));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_minc_apply
List rcpp_minc_apply(CharacterVector filenames, bool use_mask, CharacterVector mask, double mask_lower_val, double mask_upper_val, RObject value_for_mask, bool filter_masked, NumericVector slab_sizes, Function fun, List args);
RcppExport SEXP RMINC_rcpp_minc_apply(SEXP filenamesSEXP, SEXP use_maskSEXP, SEXP maskSEXP, SEXP mask_lower_valSEXP, SEXP mask_upper_valSEXP, SEXP value_for_maskSEXP, SEXP filter_maskedSEXP, SEXP slab_sizesSEXP, SEXP funSEXP, SEXP argsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type filenames(filenamesSEXP);
    Rcpp::traits::input_parameter< bool >::type use_mask(use_maskSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type mask(maskSEXP);
    Rcpp::traits::input_parameter< double >::type mask_lower_val(mask_lower_valSEXP);
    Rcpp::traits::input_parameter< double >::type mask_upper_val(mask_upper_valSEXP);
    Rcpp::traits::input_parameter< RObject >::type value_for_mask(value_for_maskSEXP);
    Rcpp::traits::input_parameter< bool >::type filter_masked(filter_maskedSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type slab_sizes(slab_sizesSEXP);
    Rcpp::traits::input_parameter< Function >::type fun(funSEXP);
    Rcpp::traits::input_parameter< List >::type args(argsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_minc_apply(filenames, use_mask, mask, mask_lower_val, mask_upper_val, value_for_mask, filter_masked, slab_sizes, fun, args));
    return rcpp_result_gen;
END_RCPP
}
