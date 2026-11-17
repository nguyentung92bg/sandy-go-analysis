/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$PlayRewardAnim
void Dino_BusSand_App_UI_YachtRacingRewardPanel__PlayRewardAnim (Dino_BusSand_App_UI_YachtRacingRewardPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardPanel$$PlayRewardAnim
   void Dino_BusSand_App_UI_YachtRacingRewardPanel__PlayRewardAnim
   (Dino_BusSand_App_UI_YachtRacingRewardPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingRewardPanel__PlayRewardAnim_21eff48(long param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  
  if ((bRam0000000004f9bc16 & 1) == 0) {
                    /* try { // try from 022eff74 to 023eff7b has its CatchHandler @ 022effdc */
    FUN_02132f7c(PTR_DAT_04cad508);
                    /* try { // try from 022eff7c to 023f0007 has its CatchHandler @ 022efec4 */
    FUN_02132f7c(PTR_DAT_04cb1380);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc16 = 1;
  }
  puVar3 = PTR_DAT_04cb1380;
  puVar2 = PTR_DAT_04ca9ae8;
  fVar1 = _UNK_00e20754;
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 != 0) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar8) {
        *(undefined1 *)(param_1 + 0x68) = 1;
                    /* try { // try from 022f00b8 to 023f00bf has its CatchHandler @ 022f0120 */
                    /* try { // try from 022f00c0 to 023f014b has its CatchHandler @ 022f0008 */
        return;
      }
      lVar4 = System_Collections_Generic_List_object___get_Item_3a81924
                        (lVar4,iVar8,*(undefined8 *)puVar3);
      lVar7 = *(long *)puVar2;
                    /* catch() { ... } // from try @ 022eff74 with catch @ 022effdc */
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar7);
      }
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
      if ((uVar5 & 1) == 0) {
                    /* try { // try from 022f0008 to 023f00b7 has its CatchHandler @ 022f0008
                       catch() { ... } // from try @ 022f0008 with catch @ 022f0008
                       catch() { ... } // from try @ 022f00c0 with catch @ 022f0008 */
        if ((lVar4 == 0) ||
           (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0), lVar7 == 0)) break;
        UnityEngine_GameObject__SetActive_43c1408(lVar7,1,0);
        if (*(long *)(param_1 + 0x58) == 0) break;
        uVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                          (*(long *)(param_1 + 0x58),iVar8,*(undefined8 *)puVar3);
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar7);
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(long *)(param_1 + 0x58) == 0) break;
          uVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                            (*(long *)(param_1 + 0x58),iVar8,*(undefined8 *)puVar3);
          uVar6 = Dino_BusSand_App_UI_YachtRacingRewardPanel__MoveItem_21f00c8
                            ((float)iVar8 * fVar1,uVar6,lVar4,uVar6);
          Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar6,0);
        }
      }
      lVar4 = *(long *)(param_1 + 0x50);
      iVar8 = iVar8 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

