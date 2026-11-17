/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$InitPlayerPositions
void Dino_BusSand_App_UI_BattleRoyaleScenePanel__InitPlayerPositions (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$InitPlayerPositions
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel__InitPlayerPositions
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel__InitPlayerPositions_2194698(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b9b9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad708);
                    /* try { // try from 022946d4 to 023948bf has its CatchHandler @ 022946d4
                       catch() { ... } // from try @ 022946d4 with catch @ 022946d4
                       catch() { ... } // from try @ 022949e8 with catch @ 022946d4 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae120);
    FUN_02132f7c(PTR_DAT_04cae130);
    FUN_02132f7c(PTR_DAT_04cae148);
    bRam0000000004f9b9b9 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    iVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150
                      (*(long *)(param_1 + 0x40),0);
    lVar4 = Dino_BusSand_App_UI_UIPanel__Get_object__29460d0
                      (param_1,*(undefined8 *)PTR_DAT_04cae148,*(undefined8 *)PTR_DAT_04cae120);
    lVar5 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cae130,0);
    if (0 < iVar2) {
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_022948a4;
      if (iVar2 <= *(int *)(*(long *)(param_1 + 0x70) + 0x18)) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
        if ((uVar3 & 1) != 0) {
          UnityEngine_Canvas__ForceUpdateCanvases_4681650(0);
          if (lVar4 != 0) {
            lVar5 = *(long *)(param_1 + 0x58);
            lVar4 = UnityEngine_Component__get_transform_43bcd18(lVar4,0);
            if ((lVar4 != 0) && (UnityEngine_Transform__get_position_43d0e48(lVar4,0), lVar5 != 0))
            {
              UnityEngine_Transform__set_position_43d0f1c(lVar5,0);
              if (*(long *)(param_1 + 0x58) != 0) {
                UnityEngine_Transform__get_localPosition_43cfce8(*(long *)(param_1 + 0x58),0);
                lVar4 = *(long *)(param_1 + 0x58);
                if (lVar4 != 0) {
                  if ((bRam0000000004fa8b33 & 1) == 0) {
                    FUN_02132f7c(PTR_DAT_04cf7a00,0);
                    bRam0000000004fa8b33 = 1;
                  }
                  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  lVar4 = *(long *)(lVar4 + 0x10);
                  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
                  }
                  if (pcRam0000000004fa8b98 == (code *)0x0) {
                    pcRam0000000004fa8b98 = (code *)FUN_02132f40(&UNK_00e52061);
                  }
                  (*pcRam0000000004fa8b98)(lVar4,&stack0xffffffffffffffd4);
                  return;
                }
              }
            }
          }
          goto LAB_022948a4;
        }
      }
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (lVar5 != 0) {
      lVar4 = *(long *)(param_1 + 0x58);
      UnityEngine_Transform__get_position_43d0e48(lVar5,0);
      if (lVar4 != 0) {
        if ((bRam0000000004fa8b31 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7a00,0);
          bRam0000000004fa8b31 = 1;
        }
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
        }
        if (pcRam0000000004fa8b88 == (code *)0x0) {
          pcRam0000000004fa8b88 = (code *)FUN_02132f40(&UNK_00e68510);
        }
        (*pcRam0000000004fa8b88)(lVar4,&stack0xffffffffffffffd4);
        return;
      }
    }
  }
LAB_022948a4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

