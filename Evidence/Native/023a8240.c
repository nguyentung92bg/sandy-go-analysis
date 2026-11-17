/* IL2CPP: Dino.BusSand.App.UI.CommerceCoinBar$$SetImmediate
void Dino_BusSand_App_UI_CommerceCoinBar__SetImmediate (Dino_BusSand_App_UI_CommerceCoinBar_o* __this, int64_t v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceCoinBar$$SetImmediate
   void Dino_BusSand_App_UI_CommerceCoinBar__SetImmediate (Dino_BusSand_App_UI_CommerceCoinBar_o*
   __this, int64_t v, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommerceCoinBar__SetImmediate_22a8240(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((bRam0000000004f9c293 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c293 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,lVar3,0);
    *(undefined8 *)(param_1 + 0x48) = 0;
    thunk_FUN_02134474((long *)(param_1 + 0x48),0);
  }
  lVar3 = *(long *)puVar1;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x40) = param_2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    plVar4 = *(long **)(param_1 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = Dino_BusSand_App_UI_CommerceUi__NumKM_22a8588(param_2);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x023a8324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x518))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x520));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

