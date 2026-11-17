/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$SetMenLock
void Dino_BusSand_App_UI_BattleRoyaleScenePanel__SetMenLock (UnityEngine_Transform_o* gate, bool locked, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$SetMenLock
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel__SetMenLock (UnityEngine_Transform_o* gate, bool
   locked, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel__SetMenLock_2193b1c(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  if ((bRam0000000004f9b9b4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04cae1f0);
    FUN_02132f7c(PTR_DAT_04cae1f8);
    bRam0000000004f9b9b4 = 1;
  }
  puVar3 = PTR_DAT_04cae1f8;
  puVar2 = PTR_DAT_04cae1f0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar5 = UnityEngine_Component__GetComponent_object__26f97e8
                    (param_1,*(undefined8 *)PTR_DAT_04cada30);
  Dino_BusSand_App_UI_BattleRoyaleUi__Sample_219cf34(uVar5,*(undefined8 *)puVar2,param_2 & 1,0);
  lVar6 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)puVar3,0);
  puVar2 = PTR_DAT_04ca9ae8;
  uVar1 = (param_2 ^ 0xffffffff) & 1;
  if ((bRam0000000004f9b9fc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,uVar1,0);
    bRam0000000004f9b9fc = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if ((lVar6 != 0) && (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0), lVar8 != 0))
  {
    uVar4 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar8,0);
    if ((uVar4 & 1) == uVar1) {
      return;
    }
    lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
    if (lVar6 != 0) {
      if ((bRam0000000004fa8360 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5bd0,uVar1,0);
        bRam0000000004fa8360 = 1;
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *(long *)(lVar6 + 0x10);
      if (lVar8 != 0) {
        if (pcRam0000000004fa8430 == (code *)0x0) {
          pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
        }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8430)(lVar8,uVar1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

