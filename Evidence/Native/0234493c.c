/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_Cfg
System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_Meta_PassportFeature__get_Cfg (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_Cfg
   System_Collections_Generic_Dictionary_string__object__o*
   Dino_BusSand_App_Meta_PassportFeature__get_Cfg (Dino_BusSand_App_Meta_PassportFeature_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__get_Cfg_224493c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uStack_24;
  
                    /* catch() { ... } // from try @ 0234476c with catch @ 0234493c */
  puVar1 = PTR_DAT_04cac018;
                    /* catch() { ... } // from try @ 02344454 with catch @ 02344940 */
                    /* catch() { ... } // from try @ 02344428 with catch @ 02344944 */
                    /* catch() { ... } // from try @ 023448e4 with catch @ 02344948 */
                    /* catch() { ... } // from try @ 02344408 with catch @ 0234494c */
                    /* catch() { ... } // from try @ 02344644 with catch @ 02344950
                       catch() { ... } // from try @ 02344714 with catch @ 02344950 */
                    /* catch() { ... } // from try @ 02344784 with catch @ 02344954 */
                    /* catch() { ... } // from try @ 02344440 with catch @ 02344958 */
  if ((bRam0000000004f9bf39 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac018);
                    /* try { // try from 02344970 to 02444987 has its CatchHandler @ 02344a04 */
    FUN_02132f7c(PTR_DAT_04cb3978);
    bRam0000000004f9bf39 = 1;
  }
  puVar2 = PTR_DAT_04cb3978;
                    /* try { // try from 02344988 to 024449f3 has its CatchHandler @ 0234430c */
  uStack_24 = Dino_BusSand_App_Meta_PassportFeature__get_EffectiveConfigId_2244894(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  puVar1 = PTR_DAT_04cac018;
  uVar4 = *(undefined8 *)puVar2;
  if ((bRam0000000004f9b811 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac018,uStack_24,0);
    bRam0000000004f9b811 = 1;
  }
  uVar3 = System_Int32__ToString_482d750(&uStack_24,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  Dino_BusSand_App_Tables__Row_215ee18(uVar4,uVar3);
  return;
}

