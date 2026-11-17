/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$AnimateCoins
void Dino_BusSand_App_UI_MainHudPanel__AnimateCoins (Dino_BusSand_App_UI_MainHudPanel_o* __this, int64_t target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$AnimateCoins
   void Dino_BusSand_App_UI_MainHudPanel__AnimateCoins (Dino_BusSand_App_UI_MainHudPanel_o* __this,
   int64_t target, const MethodInfo* method); */

void Dino_BusSand_App_UI_MainHudPanel__AnimateCoins_22fc75c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_1 + 0x60);
  if (*plVar5 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,*plVar5,0);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  thunk_FUN_02134474(plVar5,0);
  if ((*(long *)(param_1 + 0x50) != param_2) &&
     (uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0), (uVar3 & 1) != 0)) {
    uVar4 = Dino_BusSand_App_UI_MainHudPanel__CountCoins_22fc910
                      (0x3f000000,param_1,*(undefined8 *)(param_1 + 0x50),param_2);
    uVar4 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar4,0);
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)plVar5 >> 0xc & 0x3f),
                   ((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c4a7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae520);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c4a7 = 1;
  }
  lVar2 = *(long *)puVar1;
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x50) = param_2;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    plVar5 = *(long **)(param_1 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_04cae520 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_UI_MainHudPanel__ChangeNumToKM_22fc804(param_2);
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x023fbb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x518))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x520));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

