/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$FinishPendingReward
void Dino_BusSand_App_UI_MainHudPanel__FinishPendingReward (Dino_BusSand_App_UI_MainHudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$FinishPendingReward
   void Dino_BusSand_App_UI_MainHudPanel__FinishPendingReward (Dino_BusSand_App_UI_MainHudPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_MainHudPanel__FinishPendingReward_22fc9f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  if ((bRam0000000004f9c4aa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c4aa = 1;
  }
  puVar1 = PTR_DAT_04cabaf8;
  if (*(char *)(param_1 + 0x58) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = Dino_BusSand_App_Meta_Profile__get_Coins_2272a04(0);
  plVar6 = (long *)(param_1 + 0x60);
  if (*plVar6 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,*plVar6,0);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  thunk_FUN_02134474(plVar6,0);
  if ((*(long *)(param_1 + 0x50) != lVar5) &&
     (uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0), (uVar3 & 1) != 0)) {
    uVar4 = Dino_BusSand_App_UI_MainHudPanel__CountCoins_22fc910
                      (0x3f000000,param_1,*(undefined8 *)(param_1 + 0x50),lVar5);
    uVar4 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar4,0);
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)plVar6 >> 0xc & 0x3f),
                   ((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
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
  *(long *)(param_1 + 0x50) = lVar5;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    plVar6 = *(long **)(param_1 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_04cae520 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_UI_MainHudPanel__ChangeNumToKM_22fc804(lVar5);
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x023fbb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x518))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x520));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

