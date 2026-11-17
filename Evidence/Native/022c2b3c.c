/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$OnBack
bool Dino_BusSand_App_UI_StreakEventPanel__OnBack (Dino_BusSand_App_UI_StreakEventPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakEventPanel$$OnBack
   bool Dino_BusSand_App_UI_StreakEventPanel__OnBack (Dino_BusSand_App_UI_StreakEventPanel_o*
   __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_StreakEventPanel__OnBack_21c2b3c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9baeb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9baeb = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
LAB_022c2bdc:
    if (*(char *)(param_1 + 0xa0) == '\0') {
      Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    }
    return 1;
  }
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x68),0), lVar3 != 0
     )) {
    uVar2 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar3,0);
    if ((uVar2 & 1) == 0) goto LAB_022c2bdc;
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x68),0),
       lVar3 != 0)) {
      UnityEngine_GameObject__SetActive_43c1408(lVar3,0,0);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

