/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$OnClose
void Dino_BusSand_App_UI_StorePanel__OnClose (Dino_BusSand_App_UI_StorePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StorePanel$$OnClose
   void Dino_BusSand_App_UI_StorePanel__OnClose (Dino_BusSand_App_UI_StorePanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_StorePanel__OnClose_22b7a00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_04cac498;
  if ((bRam0000000004f9c2ea & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb62f0);
    bRam0000000004f9c2ea = 1;
  }
  puVar4 = PTR_DAT_04cb62f0;
  puVar3 = PTR_DAT_04cad1f0;
  puVar2 = PTR_DAT_04cac7e0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04ca9ae8;
  Dino_BusSand_App_Meta_GameTracking__IapClose_221840c(param_1,0);
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Action_int____ctor_35ef18c(uVar6,param_1,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Iap__remove_Purchased_2179f44(uVar6,0);
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Action_int____ctor_35ef18c(uVar6,param_1,*(undefined8 *)puVar4,0);
  Dino_BusSand_App_Iap__remove_Restored_217a12c(uVar6,0);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((uVar7 & 1) == 0) {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x70);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9c43b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,1,0);
    bRam0000000004f9c43b = 1;
  }
  uVar6 = *(undefined8 *)(lVar8 + 0x68);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if ((*(long *)(lVar8 + 0x68) != 0) &&
     (lVar9 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar8 + 0x68),0), lVar9 != 0))
  {
    uVar5 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar9,0);
    if ((uVar5 & 1) == 1) {
      return;
    }
    if ((*(long *)(lVar8 + 0x68) != 0) &&
       (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar8 + 0x68),0), lVar8 != 0
       )) {
      if ((bRam0000000004fa8360 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5bd0,1,0);
        bRam0000000004fa8360 = 1;
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar9 = *(long *)(lVar8 + 0x10);
      if (lVar9 != 0) {
        if (pcRam0000000004fa8430 == (code *)0x0) {
          pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
        }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8430)(lVar9,1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar8,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

