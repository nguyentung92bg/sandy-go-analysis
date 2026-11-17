/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$OnScrolled
void Dino_BusSand_App_UI_BattleRoyaleScenePanel__OnScrolled (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, UnityEngine_Vector2_o v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$OnScrolled
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel__OnScrolled
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, UnityEngine_Vector2_o v, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel__OnScrolled_2195460(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam0000000004f9b9c0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b9c0 = 1;
  }
  if (*(int *)(param_1 + 0x98) != -1) {
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0xb8);
      if (cRam0000000004f9b9de == '\0') {
        FUN_02132f7c(PTR_DAT_04caa200);
        cRam0000000004f9b9de = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar6 = (float)uVar4;
      fVar7 = (float)((ulong)uVar4 >> 0x20);
      if (1.0 <= SQRT(fVar6 * fVar6 + fVar7 * fVar7)) {
        if ((bRam0000000004f9b9c5 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          bRam0000000004f9b9c5 = 1;
        }
        puVar1 = PTR_DAT_04ca9ae8;
        if (*(char *)(param_1 + 0x9d) == '\0') {
          if (*(int *)(param_1 + 0x98) != -1) {
            uVar4 = *(undefined8 *)(param_1 + 0x60);
            *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
            if ((uVar3 & 1) != 0) {
              if ((*(long *)(param_1 + 0x60) == 0) ||
                 (lVar2 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x60),0)
                 , lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if ((bRam0000000004fa8360 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
                bRam0000000004fa8360 = 1;
              }
              if (lVar2 != 0) {
                lVar5 = *(long *)(lVar2 + 0x10);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar2,0);
                }
                if (pcRam0000000004fa8430 == (code *)0x0) {
                  pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
                }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000004fa8430)(lVar5,0);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x9d) = 0;
        }
        return;
      }
    }
  }
  return;
}

