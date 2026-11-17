/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_EffectiveConfigId
int32_t Dino_BusSand_App_Meta_PassportFeature__get_EffectiveConfigId (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_EffectiveConfigId
   int32_t Dino_BusSand_App_Meta_PassportFeature__get_EffectiveConfigId
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_PassportFeature__get_EffectiveConfigId_2244894(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = PTR_DAT_04cb01b0;
  if ((bRam0000000004f9bf38 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf38 = 1;
  }
  lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar2)
  ;
  puVar1 = PTR_DAT_04caef48;
  if (lVar3 != 0) {
                    /* try { // try from 023448e4 to 024448e7 has its CatchHandler @ 02344948 */
    if (*(int *)(lVar3 + 0x18) < 1) {
                    /* try { // try from 0234490c to 0244490f has its CatchHandler @ 02344924 */
                    /* catch() { ... } // from try @ 023446f0 with catch @ 02344910
                       try { // try from 02344910 to 0244496f has its CatchHandler @ 0234430c */
      lVar3 = *(long *)PTR_DAT_04caef48;
                    /* catch() { ... } // from try @ 023446d8 with catch @ 02344914 */
                    /* catch() { ... } // from try @ 02344540 with catch @ 02344918 */
      if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02344538 with catch @ 0234491c */
        thunk_FUN_0218fdac();
                    /* catch() { ... } // from try @ 02344610 with catch @ 02344920 */
        lVar3 = *(long *)puVar1;
      }
                    /* catch() { ... } // from try @ 0234490c with catch @ 02344924 */
      puVar4 = *(undefined4 **)(lVar3 + 0xb8);
    }
    else {
                    /* try { // try from 023448f8 to 024448fb has its CatchHandler @ 02344938 */
      lVar3 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)puVar2);
      if (lVar3 == 0) goto LAB_02344938;
      puVar4 = (undefined4 *)(lVar3 + 0x18);
    }
                    /* catch() { ... } // from try @ 023444c8 with catch @ 02344928 */
                    /* catch() { ... } // from try @ 023445c4 with catch @ 0234492c */
                    /* catch() { ... } // from try @ 02344468 with catch @ 02344930 */
                    /* catch() { ... } // from try @ 0234451c with catch @ 02344934
                       catch() { ... } // from try @ 02344574 with catch @ 02344934 */
    return *puVar4;
  }
LAB_02344938:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02344798 with catch @ 02344938
                       catch() { ... } // from try @ 023448f8 with catch @ 02344938 */
  FUN_02133224();
}

