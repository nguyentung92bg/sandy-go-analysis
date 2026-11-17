/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel$$SetGate
void Dino_BusSand_App_UI_BattleRoyaleStartPanel__SetGate (Dino_BusSand_App_UI_BattleRoyaleStartPanel_o* __this, bool locked, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel$$SetGate
   void Dino_BusSand_App_UI_BattleRoyaleStartPanel__SetGate
   (Dino_BusSand_App_UI_BattleRoyaleStartPanel_o* __this, bool locked, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleStartPanel__SetGate_219a3f8(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_04cae458;
  puVar2 = PTR_DAT_04ca9ae8;
                    /* catch() { ... } // from try @ 0229a3d8 with catch @ 0229a404 */
  if ((bRam0000000004f9b9e3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae460);
    FUN_02132f7c(PTR_DAT_04cae468);
    FUN_02132f7c(PTR_DAT_04cae458);
    bRam0000000004f9b9e3 = 1;
  }
  lVar5 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar7 = UnityEngine_Transform__Find_43d4bec(lVar5,*(undefined8 *)PTR_DAT_04cae460,0);
                    /* catch() { ... } // from try @ 0229a510 with catch @ 0229a4c8 */
  Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(uVar7,param_2 & 1);
  lVar5 = UnityEngine_Transform__Find_43d4bec(lVar5,*(undefined8 *)PTR_DAT_04cae468,0);
  puVar2 = PTR_DAT_04ca9ae8;
  uVar1 = (param_2 ^ 0xffffffff) & 1;
  if ((bRam0000000004f9b9fc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b9fc = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if ((lVar5 != 0) && (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0), lVar8 != 0))
  {
    uVar4 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar8,0);
    if ((uVar4 & 1) == uVar1) {
      return;
    }
    lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0);
    if (lVar5 != 0) {
      if ((bRam0000000004fa8360 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5bd0,uVar1,0);
        bRam0000000004fa8360 = 1;
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *(long *)(lVar5 + 0x10);
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
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar5,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

