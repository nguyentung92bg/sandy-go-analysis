/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature.<RunGuide>d__33$$MoveNext
bool Dino_BusSand_App_Meta_BattleRoyaleFeature__RunGuide_d__33__MoveNext (Dino_BusSand_App_Meta_BattleRoyaleFeature__RunGuide_d__33_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature.<RunGuide>d__33$$MoveNext
   bool Dino_BusSand_App_Meta_BattleRoyaleFeature__RunGuide_d__33__MoveNext
   (Dino_BusSand_App_Meta_BattleRoyaleFeature__RunGuide_d__33_o* __this, const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_Meta_BattleRoyaleFeature__RunGuide_d__33__MoveNext_222703c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
                    /* try { // try from 0232704c to 0242704f has its CatchHandler @ 0232705c */
  if ((bRam0000000004f9bde8 & 1) == 0) {
                    /* catch() { ... } // from try @ 0232704c with catch @ 0232705c */
    FUN_02132f7c(PTR_DAT_04cabaf8);
                    /* try { // try from 02327060 to 02427067 has its CatchHandler @ 02327070 */
    bRam0000000004f9bde8 = 1;
  }
                    /* try { // try from 02327068 to 02427073 has its CatchHandler @ 02326c34 */
  uVar1 = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02327060 with catch @ 02327070
                        */
  if (*(int *)(param_1 + 0x10) == 1) {
    uVar3 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0);
    }
    uVar2 = Dino_BusSand_App_Meta_SystemOpen__Guided_2243224(4,0);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    Dino_BusSand_App_Meta_SystemOpen__MarkGuided_224333c(4,0);
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
    uVar3 = 1;
    uVar1 = Dino_BusSand_App_UI_BattleRoyaleUi__RunStart_219c554(1,0);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    thunk_FUN_02134474();
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  return uVar1;
}

