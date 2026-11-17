/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$SetTime
void Dino_BusSand_App_UI_BattleRoyalePanel__SetTime (Dino_BusSand_App_UI_BattleRoyalePanel_o* __this, int64_t end, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel$$SetTime
   void Dino_BusSand_App_UI_BattleRoyalePanel__SetTime (Dino_BusSand_App_UI_BattleRoyalePanel_o*
   __this, int64_t end, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyalePanel__SetTime_218d890(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  
  puVar2 = PTR_DAT_04cade40;
                    /* catch() { ... } // from try @ 0228d798 with catch @ 0228d8a4 */
                    /* catch() { ... } // from try @ 0228d704 with catch @ 0228d8a8 */
  if ((bRam0000000004f9b98d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cade40);
    bRam0000000004f9b98d = 1;
  }
  lVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar2,0);
                    /* try { // try from 0228d8e0 to 0238d973 has its CatchHandler @ 0228d8e0
                       catch() { ... } // from try @ 0228d8e0 with catch @ 0228d8e0
                       catch() { ... } // from try @ 0228da30 with catch @ 0228d8e0 */
  lVar4 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
  uVar5 = Dino_BusSand_App_Meta_LiveClock__FormatRemain_2240758((param_2 - lVar4) / 1000,0);
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b9f8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48,uVar5,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b9f8 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
  if ((uVar6 & 1) == 0) {
    if ((lVar3 == 0) ||
       (lVar3 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                          (lVar3,1,*(undefined8 *)PTR_DAT_04cada48), lVar3 == 0)) {
LAB_0229a1f0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      lVar4 = 0;
      do {
        if (uVar1 <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar7 = *(long **)(lVar3 + 0x20 + lVar4 * 8);
        if (plVar7 == (long *)0x0) goto LAB_0229a1f0;
        (**(code **)(*plVar7 + 0x518))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x520));
        uVar1 = *(uint *)(lVar3 + 0x18);
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < (int)uVar1);
    }
  }
  return;
}

