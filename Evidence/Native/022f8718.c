/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$SetAutoSize
void Dino_BusSand_App_UI_YachtRacingUi__SetAutoSize (UnityEngine_Transform_o* node, float size, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$SetAutoSize
   void Dino_BusSand_App_UI_YachtRacingUi__SetAutoSize (UnityEngine_Transform_o* node, float size,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingUi__SetAutoSize_21f8718(undefined4 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc4f & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f86dc with catch @ 022f8748
                        */
    FUN_02132f7c(PTR_DAT_04cada48);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f86cc with catch @ 022f874c
                        */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc4f = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022f8774 to 023f8777 has its CatchHandler @ 022f8784 */
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
  if ((uVar3 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f8774 with catch @ 022f8784
                        */
                    /* catch() { ... } // from try @ 022f87c8 with catch @ 022f8788 */
    if ((param_2 == 0) ||
       (lVar4 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                          (param_2,1,*(undefined8 *)PTR_DAT_04cada48), lVar4 == 0)) {
LAB_022f8810:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
                    /* try { // try from 022f87c4 to 023f87c7 has its CatchHandler @ 022f87d8 */
        lVar5 = *(long *)(lVar4 + (long)(int)uVar6 * 8 + 0x20);
                    /* try { // try from 022f87c8 to 023f87eb has its CatchHandler @ 022f8788 */
        if (lVar5 == 0) goto LAB_022f8810;
        if (*(char *)(lVar5 + 0x260) == '\0') {
                    /* try { // try from 022f87ec to 023f8837 has its CatchHandler @ 022f87ec
                       catch(type#1 @ 00000000) { ... } // from try @ 022f87ec with catch @ 022f87ec
                       catch(type#1 @ 00000000) { ... } // from try @ 022f88e4 with catch @ 022f87ec
                        */
          TMPro_TMP_Text__set_fontSize_42cc224(param_1,lVar5,0);
        }
        else {
                    /* catch() { ... } // from try @ 022f87c4 with catch @ 022f87d8 */
          TMPro_TMP_Text__set_fontSizeMax_42cc4f0(param_1,lVar5,0);
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar1);
    }
  }
  return;
}

