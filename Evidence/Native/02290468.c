/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel$$OnMaskClick
void Dino_BusSand_App_UI_BattleRoyaleResultPanel__OnMaskClick (Dino_BusSand_App_UI_BattleRoyaleResultPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel$$OnMaskClick
   void Dino_BusSand_App_UI_BattleRoyaleResultPanel__OnMaskClick
   (Dino_BusSand_App_UI_BattleRoyaleResultPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleResultPanel__OnMaskClick_2190468(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((*(char *)(param_1 + 0x72) != '\0') && (*(char *)(param_1 + 0x73) == '\0')) {
                    /* catch() { ... } // from try @ 022903c4 with catch @ 02290488 */
                    /* catch() { ... } // from try @ 02290374 with catch @ 02290490 */
    if (*(int *)(param_1 + 0x74) == 2) {
      if (*(char *)(param_1 + 0x73) == '\0') {
        *(undefined1 *)(param_1 + 0x73) = 1;
        plVar2 = (long *)(param_1 + 0x38);
        lVar1 = *plVar2;
        *plVar2 = 0;
        thunk_FUN_02134474(plVar2,0);
        Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
        if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02290590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
          return;
        }
      }
      return;
    }
    if (*(int *)(param_1 + 0x74) == 0) {
      *(undefined4 *)(param_1 + 0x74) = 1;
                    /* catch() { ... } // from try @ 022903d8 with catch @ 022904a4 */
      lVar1 = Dino_BusSand_App_UI_BattleRoyaleResultPanel__GetReward_21904c8(param_1);
      uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (lVar1 == 0) {
        thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
        uVar4 = thunk_FUN_0216e89c();
        uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
        System_NullReferenceException___ctor_483267c(uVar4,uVar5,0);
      }
      else {
        uVar3 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
        if ((uVar3 & 1) != 0) {
          if ((bRam0000000004fa84ef & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7890);
            bRam0000000004fa84ef = 1;
          }
          if (param_1 != 0) {
            lVar6 = *(long *)(param_1 + 0x10);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
            }
            if (pcRam0000000004fa8560 == (code *)0x0) {
              pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
            }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8560)(lVar6,lVar1);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        thunk_FUN_021985a8(PTR_DAT_04caa3a8);
        uVar4 = thunk_FUN_0216e89c();
        uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
        System_ArgumentException___ctor_47b660c(uVar4,uVar5,0);
      }
      uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar4,uVar5);
    }
  }
                    /* catch() { ... } // from try @ 02290424 with catch @ 02290484 */
  return;
}

