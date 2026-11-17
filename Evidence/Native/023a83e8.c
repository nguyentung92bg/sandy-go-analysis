/* IL2CPP: Dino.BusSand.App.UI.CommerceCoinBar$$OnItem
void Dino_BusSand_App_UI_CommerceCoinBar__OnItem (Dino_BusSand_App_UI_CommerceCoinBar_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceCoinBar$$OnItem
   void Dino_BusSand_App_UI_CommerceCoinBar__OnItem (Dino_BusSand_App_UI_CommerceCoinBar_o* __this,
   int32_t id, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommerceCoinBar__OnItem_22a83e8(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((bRam0000000004f9c292 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c292 = 1;
  }
  if ((*(int *)(param_1 + 0x20) != param_2) || (*(char *)(param_1 + 0x24) != '\0')) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar2 = Dino_BusSand_App_Meta_Profile__Count_225b150(param_2,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c294 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c294 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if (((uVar3 & 1) == 0) && (*(long *)(param_1 + 0x40) != lVar2)) {
    uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0);
    if ((uVar3 & 1) != 0) {
      plVar6 = (long *)(param_1 + 0x48);
      if (*plVar6 != 0) {
        UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,*plVar6,0);
      }
      uVar5 = Dino_BusSand_App_UI_CommerceCoinBar__Count_22a86fc
                        (0x3f000000,param_1,*(undefined8 *)(param_1 + 0x40),lVar2);
      uVar5 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar5,0);
      *(undefined8 *)(param_1 + 0x48) = uVar5;
      if (iRam00000000051c1b10 != 0) {
        FUN_02220bf0(1L << ((ulong)plVar6 >> 0xc & 0x3f),
                     ((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
      }
      return;
    }
    if ((bRam0000000004f9c293 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cac7b8);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      bRam0000000004f9c293 = 1;
    }
    puVar1 = PTR_DAT_04ca9ae8;
    lVar4 = *(long *)(param_1 + 0x48);
    if (lVar4 != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,lVar4,0);
      *(undefined8 *)(param_1 + 0x48) = 0;
      thunk_FUN_02134474((long *)(param_1 + 0x48),0);
    }
    lVar4 = *(long *)puVar1;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x40) = lVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      plVar6 = *(long **)(param_1 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_UI_CommerceUi__NumKM_22a8588(lVar2);
      if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x023a8324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x518))(plVar6,uVar5,*(undefined8 *)(*plVar6 + 0x520));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    return;
  }
  return;
}

