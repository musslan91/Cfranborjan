/*Definition av testerna ifall de har uppfyllts. i convert_to_binary, convert_to_base, octal_tests
och Hexadecimal_tests definitionerna som pekar inne i main C-filen att de �r uppfylda*/
#define CHECK_DEC_TO_BASE(VAR, CVAR, EXPECT, BASE) \
   if(0 == strcmp(CVAR, EXPECT)) \
      printf("SUCCESS %d(10) = " EXPECT "(" BASE ") = %s(" BASE ")\n", VAR, CVAR); \
   else \
      printf("FAILURE %d(10) = " EXPECT "(" BASE ") =/= %s(" BASE ")\n", VAR, CVAR);

      /*Funktioner som pekar p� char definitionerna i C-filen d�r de dem
      testar ifall villkoren st�mmer att de �r en succes eller en failure.*/

void binary_tests(void) {
   char *binstr;
   binstr = convert_to_binary(826);
   CHECK_DEC_TO_BASE(826, binstr, "1100111010", "2");
   binstr = convert_to_binary(128);
   CHECK_DEC_TO_BASE(128, binstr, "10000000", "2");
   binstr = convert_to_binary(255);
   CHECK_DEC_TO_BASE(255, binstr, "11111111", "2");
   binstr = convert_to_binary(0);
   CHECK_DEC_TO_BASE(0, binstr, "0", "2");
}

void octal_tests(void) {
   char *octstr;
   octstr = convert_to_base(826, 8);
   CHECK_DEC_TO_BASE(826, octstr, "1472", "8");
   octstr = convert_to_base(365, 8);
   CHECK_DEC_TO_BASE(365, octstr, "555", "8");
   octstr = convert_to_base(128, 8);
   CHECK_DEC_TO_BASE(128, octstr, "200", "8");
   octstr = convert_to_base(0, 8);
   CHECK_DEC_TO_BASE(0, octstr, "0", "8");
}

void hexadecimal_tests(void) {
   char *hexstr;
   hexstr = convert_to_base(826, 16);
   CHECK_DEC_TO_BASE(826, hexstr, "33A", "16");
   hexstr = convert_to_base(365, 16);
   CHECK_DEC_TO_BASE(365, hexstr, "16D", "16");
   hexstr = convert_to_base(128, 16);
   CHECK_DEC_TO_BASE(128, hexstr, "80", "16");
   hexstr = convert_to_base(0, 16);
   CHECK_DEC_TO_BASE(0, hexstr, "0", "16");
}

#define CHECK_DECFRAC_TO_BASE(VAR, CVAR, EXPECT, BASE) \
   if(0 == strcmp(CVAR, EXPECT)) \
      printf("SUCCESS %g(10) = " EXPECT "(" BASE ") = %s(" BASE ")\n", VAR, CVAR); \
   else \
      printf("FAILURE %g(10) = " EXPECT "(" BASE ") =/= %s(" BASE ")\n", VAR, CVAR);

      /*Funktioner som pekar p� char definitionerna i C-filen d�r de dem
      testar ifall villkoren st�mmer att de �r en succes eller en failure.
      binary_fraction_tests, och hexadecimal_fraction_tests som b�da pekar p�
      och tittar ifall convert_to_base_frac funktion/definition st�mmer.*/

void binary_fraction_tests(void) {
   char *binstr;
   binstr = convert_to_base_frac(.375, 10, 2);
   CHECK_DECFRAC_TO_BASE(.375, binstr, ".011", "2");
   binstr = convert_to_base_frac(.1, 10, 2);
   CHECK_DECFRAC_TO_BASE(.1, binstr, ".0001100110", "2");
   binstr = convert_to_base_frac(.1416, 15, 2);
   CHECK_DECFRAC_TO_BASE(.1416, binstr, ".001001000011111", "2");
   binstr = convert_to_base_frac(.0, 12, 2);
   CHECK_DECFRAC_TO_BASE(.0, binstr, ".0", "2");
}

void hexadecimal_fraction_tests(void) {
   char *hexstr;
   hexstr = convert_to_base_frac(.375, 10, 16);
   CHECK_DECFRAC_TO_BASE(.375, hexstr, ".6", "16");
   hexstr = convert_to_base_frac(.1, 10, 16);
   CHECK_DECFRAC_TO_BASE(.1, hexstr, ".199999A", "16");
   hexstr = convert_to_base_frac(.1416, 10, 16);
   CHECK_DECFRAC_TO_BASE(.1416, hexstr, ".243FE5C", "16");
   hexstr = convert_to_base_frac(.0, 12, 16);
   CHECK_DECFRAC_TO_BASE(.0, hexstr, ".0", "16");
}
