/* IL2CPP: Dino.BusSand.App.MiniJson$$Float
float Dino_BusSand_App_MiniJson__Float (Il2CppObject* o, float fallback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.MiniJson$$Float
   float Dino_BusSand_App_MiniJson__Float (Il2CppObject* o, float fallback, const MethodInfo*
   method); */

float Dino_BusSand_App_MiniJson__Float_21563fc(float param_1,long *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  double *pdVar3;
  float fVar4;
  float fStack_24;
  
                    /* try { // try from 02256404 to 02356407 has its CatchHandler @ 02256548 */
                    /* try { // try from 02256408 to 023564ab has its CatchHandler @ 022563e4 */
  if ((bRam0000000004f9b7e1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa370);
    bRam0000000004f9b7e1 = 1;
  }
  fStack_24 = 0.0;
  fVar4 = param_1;
  if (param_2 != (long *)0x0) {
    if (*param_2 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
                    /* try { // try from 022564ac to 023564c3 has its CatchHandler @ 02256548 */
      pdVar3 = (double *)thunk_FUN_0216e9e4(param_2);
      fVar4 = (float)*pdVar3;
    }
    else if (*param_2 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) {
      if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar1 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
      uVar2 = System_Single__TryParse_4842d84(param_2,0xa7,uVar1,&fStack_24,0);
      fVar4 = fStack_24;
      if ((uVar2 & 1) == 0) {
        fVar4 = param_1;
      }
    }
  }
                    /* try { // try from 022564c4 to 0235655b has its CatchHandler @ 022563e4 */
  return fVar4;
}

