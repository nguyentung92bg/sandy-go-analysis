/* IL2CPP: Dino.BusSand.App.UI.CommerceCoinBar$$AnimateTo
void Dino_BusSand_App_UI_CommerceCoinBar__AnimateTo (Dino_BusSand_App_UI_CommerceCoinBar_o* __this, int64_t target, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceCoinBar$$AnimateTo
   void Dino_BusSand_App_UI_CommerceCoinBar__AnimateTo (Dino_BusSand_App_UI_CommerceCoinBar_o*
   __this, int64_t target, float duration, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommerceCoinBar__AnimateTo_22a8474
               (undefined4 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c294 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c294 = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if (((uVar2 & 1) != 0) || (*(long *)(param_2 + 0x40) == param_3)) {
    return;
  }
  uVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_2,0);
  if ((uVar2 & 1) != 0) {
    plVar5 = (long *)(param_2 + 0x48);
    if (*plVar5 != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_2,*plVar5,0);
    }
    uVar4 = Dino_BusSand_App_UI_CommerceCoinBar__Count_22a86fc
                      (param_1,param_2,*(undefined8 *)(param_2 + 0x40),param_3);
    uVar4 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_2,uVar4,0);
    *(undefined8 *)(param_2 + 0x48) = uVar4;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)plVar5 >> 0xc & 0x3f),
                   ((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  if ((bRam0000000004f9c293 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c293 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)(param_2 + 0x48);
  if (lVar3 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_2,lVar3,0);
    *(undefined8 *)(param_2 + 0x48) = 0;
    thunk_FUN_02134474((long *)(param_2 + 0x48),0);
  }
  lVar3 = *(long *)puVar1;
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(long *)(param_2 + 0x40) = param_3;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    plVar5 = *(long **)(param_2 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_UI_CommerceUi__NumKM_22a8588(param_3);
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x023a8324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x518))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x520));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

