/* IL2CPP: Dino.BusSand.App.UI.NoAdsGiftPackBuySucPanel$$Done
void Dino_BusSand_App_UI_NoAdsGiftPackBuySucPanel__Done (Dino_BusSand_App_UI_NoAdsGiftPackBuySucPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.NoAdsGiftPackBuySucPanel$$Done
   void Dino_BusSand_App_UI_NoAdsGiftPackBuySucPanel__Done
   (Dino_BusSand_App_UI_NoAdsGiftPackBuySucPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_NoAdsGiftPackBuySucPanel__Done_21ca608(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022ca5c0 with catch @ 022ca610
                        */
  if ((bRam0000000004f9bb11 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0088);
    bRam0000000004f9bb11 = 1;
  }
                    /* try { // try from 022ca648 to 023ca64b has its CatchHandler @ 022ca64c */
  if (*(char *)(param_1 + 0x38) == '\0') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022ca648 with catch @ 022ca64c
                        */
                    /* try { // try from 022ca650 to 023ca653 has its CatchHandler @ 022ca65c */
                    /* try { // try from 022ca654 to 023ca65f has its CatchHandler @ 022ca578 */
    *(undefined1 *)(param_1 + 0x38) = 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022ca650 with catch @ 022ca65c
                        */
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
                    /* try { // try from 022ca660 to 023ca6a7 has its CatchHandler @ 022ca660
                       catch(type#1 @ 00000000) { ... } // from try @ 022ca660 with catch @ 022ca660
                       catch(type#1 @ 00000000) { ... } // from try @ 022ca6b8 with catch @ 022ca660
                       catch(type#1 @ 00000000) { ... } // from try @ 022ca750 with catch @ 022ca660
                        */
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    puVar1 = PTR_DAT_04ca9ae8;
    lVar7 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022ca6a8 to 023ca6b7 has its CatchHandler @ 022ca704 */
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
    puVar2 = PTR_DAT_04cb0088;
                    /* try { // try from 022ca6b8 to 023ca743 has its CatchHandler @ 022ca660 */
    if ((uVar3 & 1) == 0) {
      if (lVar7 == 0) {
LAB_022ca754:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar4 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                        (lVar7,*(undefined8 *)PTR_DAT_04cb0088);
      do {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if (lVar4 == 0) goto LAB_022ca754;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022ca6a8 with catch @ 022ca704
                        */
        Dino_BusSand_App_UI_NoAdsGiftPackPanel__Finish_21ca758(lVar4);
        lVar5 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8(lVar7,*(undefined8 *)puVar2);
        lVar6 = *(long *)puVar1;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar6);
        }
        uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar5,lVar4,0);
        lVar4 = lVar5;
      } while ((uVar3 & 1) == 0);
    }
  }
                    /* try { // try from 022ca744 to 023ca747 has its CatchHandler @ 022ca748 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022ca744 with catch @ 022ca748
                        */
                    /* try { // try from 022ca74c to 023ca74f has its CatchHandler @ 022ca758 */
                    /* try { // try from 022ca750 to 023ca75b has its CatchHandler @ 022ca660 */
  return;
}

