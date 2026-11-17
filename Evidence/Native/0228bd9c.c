/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$SetStatus
void Dino_BusSand_App_UI_BattleRoyaleHallButton__SetStatus (Dino_BusSand_App_UI_BattleRoyaleHallButton_o* __this, bool isStart, System_String_o* text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton$$SetStatus
   void Dino_BusSand_App_UI_BattleRoyaleHallButton__SetStatus
   (Dino_BusSand_App_UI_BattleRoyaleHallButton_o* __this, bool isStart, System_String_o* text, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleHallButton__SetStatus_218bd9c
               (long param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam0000000004f9b980 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 0228bdd0 to 0238be33 has its CatchHandler @ 0228bab4 */
    FUN_02132f7c(PTR_DAT_04cadcf0);
    bRam0000000004f9b980 = 1;
  }
  Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8
            (*(undefined8 *)(param_1 + 0x40),param_2 & 1,0);
                    /* catch() { ... } // from try @ 0228bc04 with catch @ 0228be00 */
  Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8
            (*(undefined8 *)(param_1 + 0x38),(param_2 ^ 0xffffffff) & 1,0);
                    /* catch() { ... } // from try @ 0228bc0c with catch @ 0228be08 */
  if ((param_3 == 0) || ((param_2 & 1) != 0)) {
    return;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0228be34 to 0238becf has its CatchHandler @ 0228be34
                       catch() { ... } // from try @ 0228be34 with catch @ 0228be34
                       catch() { ... } // from try @ 0228bfb0 with catch @ 0228be34 */
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  lVar4 = 0;
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = UnityEngine_Transform__Find_43d4bec
                      (*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cadcf0,0);
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b9f8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48,param_3,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b9f8 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
  if ((uVar3 & 1) == 0) {
    if ((lVar4 == 0) ||
       (lVar4 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                          (lVar4,1,*(undefined8 *)PTR_DAT_04cada48), lVar4 == 0)) {
LAB_0229a1f0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      lVar7 = 0;
      do {
        if (uVar1 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar5 = *(long **)(lVar4 + 0x20 + lVar7 * 8);
        if (plVar5 == (long *)0x0) goto LAB_0229a1f0;
        (**(code **)(*plVar5 + 0x518))(plVar5,param_3,*(undefined8 *)(*plVar5 + 0x520));
        uVar1 = *(uint *)(lVar4 + 0x18);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar1);
    }
  }
  return;
}

