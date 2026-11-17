/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$ParseFloat
float Dino_BusSand_App_Meta_RacingRobotParser__ParseFloat (System_String_o* s, float fallback, System_Random_o* rng, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotParser$$ParseFloat
   float Dino_BusSand_App_Meta_RacingRobotParser__ParseFloat (System_String_o* s, float fallback,
   System_Random_o* rng, const MethodInfo* method); */

float Dino_BusSand_App_Meta_RacingRobotParser__ParseFloat_225e0dc
                (float param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  double dStack_40;
  float fStack_34;
  
  puVar1 = PTR_DAT_04caa370;
  if ((bRam0000000004f9c02d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa370);
    bRam0000000004f9c02d = 1;
  }
  fStack_34 = 0.0;
  dStack_40 = 0.0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
                    /* try { // try from 0235e158 to 0245e167 has its CatchHandler @ 0235e168 */
  uVar3 = System_Single__TryParse_4842d84(param_2,0xa7,uVar2,&fStack_34,0);
                    /* catch() { ... } // from try @ 0235e158 with catch @ 0235e168 */
                    /* catch() { ... } // from try @ 0235e0a0 with catch @ 0235e16c */
                    /* try { // try from 0235e170 to 0245e173 has its CatchHandler @ 0235e17c */
                    /* try { // try from 0235e174 to 0245e17f has its CatchHandler @ 0235ddbc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0235e170 with catch @ 0235e17c
                        */
  if (((uVar3 & 1) == 0) &&
     (uVar3 = Dino_BusSand_App_Meta_YachtRacingExpr__TryEvaluate_2259218
                        (param_2,0,param_3,&dStack_40,0), fStack_34 = param_1, (uVar3 & 1) != 0)) {
    fStack_34 = (float)dStack_40;
  }
  return fStack_34;
}

